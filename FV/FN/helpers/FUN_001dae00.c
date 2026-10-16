/* helper FUN_001dae00 @ 001dae00, called (depth 1) from play_motion */

undefined8 FUN_001dae00(long param_1)

{
  i960_regs *piVar1;
  uint auStack_2c [5];
  uint uStack_18;
  uint auStack_14 [4];
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadW(auStack_2c,piVar1->g[7]);
  if ((auStack_2c[0] & 4) == 0) {
    sysMemReadW(auStack_14,piVar1->g[7] + 0x1f8);
    sysMemWriteW(piVar1->g[7] + 0x1c,auStack_14);
    sysMemReadB(&bStack_1,piVar1->g[7] + 0x83f);
    uStack_18 = (uint)bStack_1;
    if ((bStack_1 & 1) == 0) {
      sysMemReadW(auStack_14,piVar1->g[7] + 500);
      sysMemWriteW(piVar1->g[7] + 0x18,auStack_14);
      sysMemReadW(auStack_14,piVar1->g[7] + 0x1fc);
      sysMemWriteW(piVar1->g[7] + 0x20,auStack_14);
    }
    auStack_2c[0] = auStack_2c[0] | 4;
  }
  auStack_14[0] = auStack_2c[0] | 0xc;
  sysMemWriteW(piVar1->g[7],auStack_14);
  sysMemReadW(auStack_14,piVar1->g[7] + 0x1a4);
  auStack_14[0] = auStack_14[0] | 0x10;
  sysMemWriteW(piVar1->g[7] + 0x1a4,auStack_14);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

