/* helper FUN_001d2480 @ 001d2480, called (depth 1) from rob_disp */

undefined8 FUN_001d2480(long param_1)

{
  uint uVar1;
  i960_regs *piVar2;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  undefined4 uStack_14;
  uint uStack_10;
  short sStack_6;
  short sStack_4;
  char cStack_1;
  
  piVar2 = i960GetRegs();
  sysMemReadW(&iStack_40,piVar2->g[7] + 0x5f0);
  uVar1 = piVar2->g[0];
  if ((int)uVar1 < 0x10) {
    if (uVar1 == 0xf) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 1;
    }
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 2) == 0) {
    uVar1 = piVar2->g[0];
    if ((int)uVar1 < 0xd) {
      if (uVar1 == 0xc) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 5) != 0) goto LAB_001d2710;
    iStack_38 = iStack_40;
    sysMemReadS(&sStack_4,piVar2->g[7] + 0x17c);
    uStack_3c = (uint)sStack_4;
    sysMemReadW(&iStack_44,piVar2->g[7] + 0x288);
  }
  else {
    iStack_38 = iStack_40 + 0x80;
    sysMemReadS(&sStack_6,piVar2->g[7] + 0x18a);
    uStack_3c = (uint)sStack_6;
    sysMemReadW(&iStack_44,piVar2->g[7] + 0x2ac);
    sysMemReadB(&cStack_1,piVar2->g[7] + 4);
    iStack_40 = (int)cStack_1;
    if (iStack_40 < 1) {
      if (iStack_40 == 0) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 5) == 0) {
      uStack_14 = 0xa801515;
      FUN_0018df40();
      FUN_0018df40(iStack_44);
      uStack_14 = 0x42c80000;
      FUN_0018df40();
      iStack_40 = FUN_0018e100();
    }
  }
  uStack_14 = 0xa001414;
  FUN_0018df40();
  FUN_0018df40(iStack_44);
  uStack_14 = 0x3dcccccd;
  FUN_0018df40();
  iStack_44 = FUN_0018e100();
  iStack_40 = 0xffff;
  uStack_14 = 0x12002424;
  uStack_3c = 0xffff - uStack_3c & 0xffff;
  FUN_0018df40();
  FUN_0018df40(uStack_3c);
  uStack_14 = 0x3eb33333;
  FUN_0018df40();
  uStack_3c = FUN_0018e100();
  uStack_14 = 0xa001414;
  FUN_0018df40();
  FUN_0018df40(uStack_3c);
  FUN_0018df40(iStack_44);
  iStack_44 = FUN_0018e100();
  uStack_14 = 0xa801515;
  FUN_0018df40();
  FUN_0018df40(iStack_44);
  uStack_14 = 0x42c80000;
  FUN_0018df40();
  iStack_44 = FUN_0018e100();
  uStack_14 = 0xc001818;
  FUN_0018df40();
  FUN_0018df40(iStack_44);
  iStack_44 = FUN_0018e100();
  if (iStack_44 < 0x20) {
    if (iStack_44 == 0x1f) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 1;
    }
  }
  else {
    uStack_10 = 0;
  }
  if (uStack_10 == 0) {
    iStack_44 = 0x1f;
  }
  if (iStack_44 < 1) {
    if (iStack_44 == 0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 1;
    }
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 6) == 0) {
    iStack_44 = 0;
  }
  sysMemReadW(piVar2->g + 1,iStack_38 + iStack_44 * 4);
LAB_001d2710:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

