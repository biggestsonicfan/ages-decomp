/* helper tpd_clip_stage @ 001edd40, called (depth 1) from tex_move_poly */

undefined8 tpd_clip_stage(long param_1)

{
  bool bVar1;
  i960_regs *piVar2;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  
  piVar2 = i960GetRegs();
  iStack_14 = 0x800101;
  FUN_0018df40();
  sysMemReadT(&uStack_20,piVar2->g[6] + 8);
  iStack_14 = 0x4800909;
  FUN_0018df40();
  iStack_14 = -(int)sRam016c0df2;
  FUN_0018df40(iStack_14);
  iStack_14 = 0x14802929;
  FUN_0018df40();
  FUN_0018df40(uStack_20);
  FUN_0018df40(piVar2->g[9]);
  FUN_0018df40(uStack_18);
  fStack_40 = (float)FUN_0018e100();
  fStack_3c = (float)FUN_0018e100();
  fStack_38 = (float)FUN_0018e100();
  iStack_14 = 0x1000202;
  FUN_0018df40();
  if (((uint)fStack_38 & 0x80000000) == 0) {
    fStack_1c = fRam016b7e54;
    fStack_40 = (fStack_40 * fRam016b7e54) / fStack_38;
    sysMemReadW(&fStack_44,piVar2->g[6] + 0x14);
    uStack_28 = 0;
    fStack_1c = fRam016b7e54;
    uStack_30 = 0x43780000;
    uStack_2c = 0xc3780000;
    fStack_44 = (fStack_44 * fRam016b7e54) / fStack_38;
    fStack_3c = fStack_44 + fStack_40;
    fStack_38 = fStack_40 - fStack_44;
    if (248.0 <= fStack_40) {
      if (fStack_40 == 248.0) {
        bVar1 = false;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (-248.0 <= fStack_40) {
        if (fStack_40 == -248.0) {
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
        uStack_28 = 1;
      }
    }
    else {
      uStack_28 = 1;
    }
    if (248.0 <= fStack_3c) {
      if (fStack_3c == 248.0) {
        bVar1 = false;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (-248.0 <= fStack_3c) {
        if (fStack_3c == -248.0) {
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
        uStack_28 = uStack_28 + 1;
      }
    }
    else {
      uStack_28 = uStack_28 + 1;
    }
    if (248.0 <= fStack_38) {
      if (fStack_38 == 248.0) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 4) == 0) {
LAB_001ee054:
      uStack_28 = uStack_28 + 1;
    }
    else {
      if (-248.0 <= fStack_38) {
        if (fStack_38 == -248.0) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
      }
      else {
        uStack_10 = 4;
      }
      if ((uStack_10 & 1) == 0) goto LAB_001ee054;
    }
    iStack_14 = 0xb801717;
    FUN_0018df40();
    FUN_0018df40(uStack_28);
    fStack_44 = (float)FUN_0018e100();
    if (uStack_28 < 4) {
      if (uStack_28 == 3) {
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
      uStack_30 = (uint)fStack_38 ^ (uint)fStack_3c;
      uStack_2c = (uint)fStack_38 ^ (uint)fStack_40;
      uStack_34 = (uint)fStack_3c ^ (uint)fStack_40 | uStack_30 | uStack_2c;
      if ((uStack_34 & 0x80000000) == 0) goto LAB_001ede3c;
    }
    piVar2->g[0] = piVar2->g[0] | 1;
    if (param_1 != 0) {
      i960ReturnProc();
    }
  }
  else {
LAB_001ede3c:
    if (param_1 != 0) {
      i960ReturnProc();
    }
  }
  return 0;
}

