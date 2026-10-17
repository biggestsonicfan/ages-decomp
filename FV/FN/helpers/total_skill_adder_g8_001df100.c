/* helper total_skill_adder_g8 @ 001df100, called (depth 2) from coli_cont_cop */

/* WARNING: Removing unreachable block (ram,0x001df1a4) */

undefined8 total_skill_adder_g8(long param_1)

{
  i960_regs *piVar1;
  uint uStack_28;
  char cStack_1;
  
  piVar1 = i960GetRegs();
  if (((uRam016b6e58 & 1) != 0) && ((uRam016b6e58 & 0x80) == 0)) {
    uStack_28 = uRam016b7018;
    sysMemReadB(&cStack_1,piVar1->g[8] + 4);
    if (cStack_1 != '\0') {
      uStack_28 = uRam016b701c;
    }
    if ((uStack_28 & 4) != 0) {
      iRam016b71ec = piVar1->g[9] + iRam016b71ec;
    }
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

