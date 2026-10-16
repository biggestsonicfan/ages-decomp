# Virtua Fighter 2 (SLPM-62547): native C translations of i960 functions

| EXT | native | name | i960 sites | arcade name | lines | file |
|---|---|---|---|---|---:|---|
| 4b | 00197180 | sysCopPatchSetOsageAfter | 06539c |  | 93 | ext4b_sysCopPatchSetOsageAfter_00197180.c |
| 4c | 00197800 | sysCopPatchSetObj | 0190f0 01918c 0193c8 ... (140) |  | 58 | ext4c_sysCopPatchSetObj_00197800.c |
| 4d | 00196fc0 | sysCopSetColiBallData | (no site) |  | 43 | ext4d_sysCopSetColiBallData_00196fc0.c |
| 4e | 00196ac0 | sysCopPatchColiContFast | 023524 |  | 145 | ext4e_sysCopPatchColiContFast_00196ac0.c |
| 4f | 00192780 | sysCopPatchCalcUnitMat | 016504 |  | 910 | ext4f_sysCopPatchCalcUnitMat_00192780.c |
| 50 | 00190bc0 | sysCopPatchGetFrameDat | 028184 |  | 640 | ext50_sysCopPatchGetFrameDat_00190bc0.c |
| 51 | 0018c040 | sysCopPatchSmoothInt | 027130 |  | 714 | ext51_sysCopPatchSmoothInt_0018c040.c |
| 52 | 0018bf40 | sysCopPatchOsageDsp | 0644ec |  | 25 | ext52_sysCopPatchOsageDsp_0018bf40.c |
| 53 | 001866c0 | sysCopPatchHappaDisp | 02f134 |  | 131 | ext53_sysCopPatchHappaDisp_001866c0.c |
| 54 | 00186480 | sysCopPatchRecogSample | 052398 |  | 63 | ext54_sysCopPatchRecogSample_00186480.c |
| 58 | 00197c00 | sysCopSetObjCommon | 007d68 007da8 |  | 32 | ext58_sysCopSetObjCommon_00197c00.c |
| 59 | 00197a80 | sysCopSetObjSame | 007dbc |  | 36 | ext59_sysCopSetObjSame_00197a80.c |

## Helpers (`helpers/`)

Functions the above call, followed up to three calls deep. Runtime calls
(`i960*`, `sysMem*`, libc, CRI and Sony libraries) are left out.

| native | name | bytes | first caller | depth |
|---|---|---:|---|---:|
| 00184e80 | sysGetWorkRamAddr | 12 | sysCopPatchSetOsageAfter | 1 |
| 00197500 | sysCopPatchSetObjFifo | 720 | sysCopPatchSetOsageAfter | 1 |
| 001c8300 | sysVf2GetObjAddr | 300 | sysCopPatchSetOsageAfter | 2 |
| 0019a2c0 | copExec | 156 | sysCopPatchSetObj | 1 |
| 00194f00 | areaColi | 2572 | sysCopPatchColiContFast | 1 |
| 00195940 | coliFlagConv | 396 | sysCopPatchColiContFast | 1 |
| 00195b00 | calcAttackFlag | 400 | sysCopPatchColiContFast | 1 |
| 00195cc0 | coliRecalcPos | 1748 | sysCopPatchColiContFast | 1 |
| 001963c0 | decideDir | 456 | sysCopPatchColiContFast | 1 |
| 001965c0 | decideColiKind | 992 | sysCopPatchColiContFast | 1 |
| 001969c0 | dckSpecialCheck | 220 | sysCopPatchColiContFast | 2 |
| 00184d40 | sysWriteWorkRam1 | 16 | sysCopPatchCalcUnitMat | 1 |
| 00184d80 | sysReadWorkRam4 | 72 | sysCopPatchCalcUnitMat | 1 |
| 00198f40 | sysCopWriteFifo | 116 | sysCopPatchCalcUnitMat | 1 |
| 00198fc0 | sysCopReadFifo | 288 | sysCopPatchCalcUnitMat | 1 |
| 0018e640 | getFcurveValueF | 2396 | sysCopPatchGetFrameDat | 1 |
| 0018f300 | getStartValue | 768 | sysCopPatchGetFrameDat | 1 |
| 0018f640 | rearSmoothInt | 5448 | sysCopPatchGetFrameDat | 1 |
| 0018de80 | setMirror | 1956 | sysCopPatchGetFrameDat | 2 |
| 0018efc0 | getEndValue | 784 | sysCopPatchGetFrameDat | 2 |
| 00184c80 | sysWriteWorkRam4 | 72 | sysCopPatchSmoothInt | 1 |
