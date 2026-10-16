/* helper FUN_001fc1c0 @ 001fc1c0, called (depth 1) from osage_dsp */

undefined8 FUN_001fc1c0(long param_1)

{
  i960_regs *piVar1;
  uint auStack_44 [12];
  uint uStack_14;
  uint uStack_10;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadB(&bStack_1,piVar1->g[7] + 0x1b1);
  auStack_44[0] = (uint)bStack_1;
  if (bStack_1 < 4) {
    if (bStack_1 == 3) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 1;
    }
  }
  else {
    uStack_10 = 4;
  }
  if (((uStack_10 & 5) != 0) || (sysMemReadW(&uStack_14,piVar1->g[0xd]), (uStack_14 & 0x200) == 0))
  {
    sysMemReadW(auStack_44,piVar1->g[0xd] + 0xf8);
    if ((int)auStack_44[0] < 1) {
      if (auStack_44[0] == 0) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 1) != 0) {
      sysMemReadW(&uStack_14,piVar1->g[0xd]);
      uStack_14 = uStack_14 | 2;
      sysMemWriteW(piVar1->g[0xd],&uStack_14);
      goto LAB_001fc2cc;
    }
  }
  sysMemReadW(&uStack_14,piVar1->g[0xd]);
  uStack_14 = uStack_14 & 0xfffffffd;
  sysMemWriteW(piVar1->g[0xd],&uStack_14);
LAB_001fc2cc:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

