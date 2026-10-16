/* helper FUN_001fcb80 @ 001fcb80, called (depth 1) from osage_dsp */

undefined8 FUN_001fcb80(long param_1)

{
  i960_regs *piVar1;
  undefined4 auStack_44 [12];
  uint auStack_14 [5];
  
  piVar1 = i960GetRegs();
  sysMemReadW(auStack_14,piVar1->g[9]);
  sysMemWriteW(piVar1->g[8],auStack_14);
  sysMemReadW(auStack_44,piVar1->g[9] + 4);
  sysMemReadW(auStack_14,piVar1->g[0xd]);
  if ((auStack_14[0] & 0x40) != 0) {
    auStack_44[0] = 0x3f4ccccd;
  }
  sysMemWriteW(piVar1->g[8] + 4,auStack_44);
  sysMemReadW(auStack_14,piVar1->g[0xd]);
  if ((auStack_14[0] & 0x10) != 0) {
    auStack_14[0] = 1;
    sysMemWriteW(piVar1->g[8],auStack_14);
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

