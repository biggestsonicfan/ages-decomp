/* helper FUN_001f4880 @ 001f4880, called (depth 1) from rob_kage_disp_inside */

undefined8 FUN_001f4880(int param_1)

{
  bool bVar1;
  i960_regs *piVar2;
  float fVar3;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  float fStack_24;
  uint uStack_20;
  undefined4 uStack_14;
  uint uStack_10;
  
  piVar2 = i960GetRegs();
  uStack_20 = 0;
  fStack_24 = 10000.0;
  uStack_34 = 0;
  do {
    sysMemReadL(&fStack_40,uStack_20 * 8 + 0x60620);
    fStack_40 = fStack_40 * fRam016c0ddc;
    uStack_38 = uRam016b704c;
    fStack_3c = fStack_3c * fRam016c0ddc;
    sysMemReadT(auStack_30,piVar2->g[7] + 500);
    uStack_14 = 0x15802b2b;
    FUN_0018df40();
    FUN_0018df40(fStack_40);
    FUN_0018df40(auStack_30[0]);
    FUN_0018df40(fStack_3c);
    FUN_0018df40(uStack_28);
    fVar3 = (float)FUN_0018e100();
    if (fStack_24 <= fVar3) {
      if (fVar3 == fStack_24) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      uStack_34 = uStack_20;
      fStack_24 = fVar3;
    }
    uStack_20 = uStack_20 + 1;
    if (uStack_20 < 5) {
      if (uStack_20 == 4) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
  } while ((uStack_10 & 5) != 0);
  piVar2->g[0] = uStack_34;
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

