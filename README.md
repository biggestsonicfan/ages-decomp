# ages-decomp

Decompiled C from two PlayStation 2 games in the **Sega Ages 2500** series:

- **Vol. 16: Virtua Fighter 2** (SLPM-62547, `SLPM_625.47`), the Model 2A arcade game;
- **Vol. 19: Fighting Vipers** (SLPM-62606, `SLPM_626.06`), the Model 2B arcade game.

It covers the code that runs the arcade games on the console. Like Sonic Gems Collection's Sonic the Fighters ([gems-decomp](https://github.com/biggestsonicfan/gems-decomp)), neither game is a port. Each runs the arcade's Intel i960 program, unmodified, in an interpreter, and replaces two parts with native C (MIPS R5900):

- **`FN/`**: the game's heaviest i960 functions (body animation, collision, the sway chains, shadows, `set_obj`), translated to C. The interpreter jumps to them through words patched into the i960 program.
- **`COP/`**: the Model 2 geometry coprocessor, rewritten as one handler per command under the firmware's own `Fn_*` names. VF2's handlers run the maths on the PS2's VU0 in macro mode, with the current matrix kept in `VF24`-`VF27`.

Every file is Ghidra's decompiler output for one function, with a header comment. Nothing is hand-cleaned and nothing builds. It's a reference for reading what each function does, next to the arcade original. The conversion work is in [ages-c](https://github.com/biggestsonicfan/ages-c).

Virtua Fighter 2's executable keeps its symbol table (6,965 symbols, CodeWarrior), so its functions carry Sega's own names (`sysCopPatchCalcUnitMat`, `cprMtxInitialize`...). Fighting Vipers' executable is stripped. Its names come from matching its code against VF2's, and from the arcade function each translation replaces.

## Layout

| path | what |
|---|---|
| `<game>/FN/ext<NN>_<name>_<address>.c` | one translated i960 function. `NN` is its case in the interpreter's extension switch |
| `<game>/FN/INDEX.md` | each function's extension number, native address, the i960 addresses patched to reach it and the arcade name |
| `<game>/FN/helpers/<name>_<address>.c` | the game functions those call, followed three calls deep |
| `<game>/COP/<opcode>_<firmware name>.c` | one coprocessor command handler |
| `<game>/COP/INDEX.md` | each command's handler, argument count and reply size |
| `<game>/COP/helpers/` | the functions the handlers call |
| `<game>/*/helpers.tsv` | each helper's address, name, size, first caller and depth |
| `<game>/patches.tsv` | the whole i960 patch table: i960 address, the two words written, kind (`ext NN` or `b`), and what that extension case calls |
| `<game>/ext.tsv` | every extension case: its address and the functions it calls |
| `FV/names_from_vf2.tsv` | FV functions named by matching them against VF2 (FV address, name, VF2 address, sizes, method) |
| `FV/names_from_arcade.tsv` | FV functions named after the arcade i960 function they translate |
| `AUDIT.md` | the lizard complexity report |

| | VF2 | FV |
|---|---:|---:|
| i960 patch records | 295 | 183 |
| extension cases | 106 | 143 |
| `FN` functions / helpers | 12 / 21 | 46 / 112 |
| `COP` commands / helpers | 112 / 25 | 127 / 20 |

FV has 15 more COP commands than VF2. These are the Model 2B firmware's (`Fn_area_coli`, `Fn_kage_poly`, `Fn_mul_matrix_inner3`...).

### Reading `FN/`

The translated functions work on the emulated i960's state, not on C variables:

- `i960GetRegs()` returns the register file, `struct i960_regs`: `r[16]`, `g[16]`, then the special registers. `i960SetReg(n, value)` writes one register (0-15 `r`, 16-31 `g`).
- `sysMemRead{B,S,W,L,T,Q}(dst, addr)` and `sysMemWrite{B,S,W,L,T,Q}(addr, src)` are i960 bus loads and stores of 1 to 16 bytes, through the interpreter's memory map.
- A function entered from the patch is called with 1 and ends with `i960ReturnProc()`, which pops the i960 call frame. A call from one native function to another passes 0. This is the same convention as Gems.
- VF2's `sysCopPatch*` / `sysCopSet*` names are Sega's. The arcade function each one replaces has the same name in snake case (`sysCopPatchCalcUnitMat` is `calc_unit_mat`).

### Reading `COP/`

The handlers take their arguments from the COP input FIFO and push their replies to the output FIFO (`sysCopReadFifo` / `sysCopWriteFifo` on the i960 side). The command table gives each command's argument count in words and its reply size in bytes. FV's handlers that didn't match one of VF2's are named after their firmware command.

## How the functions were found and extracted

Both executables were loaded into Ghidra 12.1.4 with [ghidra-emotionengine-reloaded](https://github.com/chaoticgd/ghidra-emotionengine-reloaded) (v2.1.38) and analysed headless. The scripts and the Python tools are in ages-c's `tools/`.

1. **The disc.** Each game's `BIN.CVM` is a CRI CVM archive: an ISO 9660 image starting at offset `0x1800`. The i960 programs in it are packed with CRI's `CRICMP 2.10` LZ scheme. Unpacked, each matches the arcade ROMs byte for byte: VF2's `IC12_15.CMP` is MAME's `vf2` (Revision 2.1, `epr-18385`-`18388`), and FV's `ROM_CODE1.CMP` is `fvipers` (Revision D). So every patched i960 address is an address in the arcade program.
2. **The interpreter.** The code ROM is decoded in advance at 8 bytes per i960 word. The opcode is a byte offset into a handler table (`g_functbl` in VF2). At start-up `sysPatch` writes every record of the patch table (`g_patchTbl`: i960 address, two words; it ends at -1) over the decoded program. Opcode 0 is the extension call: `i960ExecEXT` → `i960Extend` → `sysExtend(n)`, a `switch` over `n`. Opcode `0x200` is a plain branch.
3. **The translated functions.** The extension cases that call a game function are the `FN/` roots: in VF2, the `sysCopPatch*` / `sysCopSet*` cases; in FV, every case whose only call goes into the game code (`0x1c8000`-`0x200000`). The other cases are glue: sound, menus, textures, LOD and register shuffles.
4. **The coprocessor.** `copExec` dispatches through `g_JumpTbl`, 16 bytes a command: handler, argument words, reply bytes and a pointer to the firmware name string.
5. **FV's names.**
   - Every function was hashed with its jump targets and 16-bit immediates masked. Hashes unique in both programs matched first (1,081). Equal hash groups then paired in address order (405), then call lists propagated matches (333), then runs between matches of the same length and size were filled (288), then call lists were aligned (5). That's 2,112 of 3,163 functions (`names_from_vf2.tsv`, with the method for each).
   - The 46 `FN` roots are named after the arcade function at their patch site, from a labelled IDA database of `fvipers`. Each root's calls were then lined up against its arcade original's calls. Only game-code calls count; VU0 matrix calls stand in for COP commands. Where the two lists agree on the calls on either side of a gap, and the gaps are the same length, the gap's calls pair up. A pair is dropped if either side would get two names. The arcade's calls were found by following its code from each function's start, through jump tables, not from IDA's function ends.
   - 37 helpers were named by hand, from reading both sides (ages-c's `tools/fv_by_hand.tsv` gives the evidence for each), and went in before the alignment so it could carry on from them. The alignment then named 35 more. `names_from_arcade.tsv` gives the method for each (`root`, `by hand`, `equal`, `aligned`). The names include `rear_smooth_int`, `get_end_value`, `set_mirror` and `calc_unit_1`, the same set VF2's symbols show its `sysCopPatch*` functions using.
   - VF2's roots keep their PS2 names (Sega's own) and carry the arcade name at their patch site, `(arcade X)` in each file's first line, from the 301 symbols of the arcade program that [vf2-decomp](https://github.com/celsowm/vf2-decomp) recovered (`decomp/i960/original_symbols.csv`; ages-c's `i960names.py --keep`). SetObj's 140 sites are each `call set_obj`. Two differ from the PS2 name: ColiContFast is `coli_cont_cop`, and SetOsageAfter is patched into `osage_copro`.
6. **Decompiling.** The runtime calls (`i960GetRegs`, `sysMem*`, `i960SetReg`...) got prototypes first, so the decompiler shows each call's address and value. Then every root, and every game function it calls up to three levels down, was decompiled to its own file.

## Audit

All 475 files went through [lizard](https://github.com/terryyin/lizard); the report is [`AUDIT.md`](AUDIT.md). FV's `play_motion` (CCN 201, 1,394 lines) and `rob_disp` (157) are the largest functions. The COP handlers are mostly a few lines each.

Known rough edges:

- 62 files carry Ghidra warnings, mostly `Removing unreachable block`.
- 36 of FV's 112 `FN` helpers and 13 of its COP helpers keep Ghidra's `FUN_<address>` names.
- VF2's i960 program has no labels yet, so VF2's `INDEX.md` gives only the patch addresses.
- Types are Ghidra's (`undefined4`, `param_1`...), apart from the i960 register file.

## What isn't here

No game data, executables or ROMs: you need your own copies of the discs to check any of this. Virtua Fighter 2, Fighting Vipers and Sega Ages 2500 are © SEGA. This repository is for study and preservation and isn't affiliated with or endorsed by SEGA.
