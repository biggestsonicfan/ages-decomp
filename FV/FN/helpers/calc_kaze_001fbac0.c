/* helper calc_kaze @ 001fbac0, called (depth 1) from osage_dsp */

/* WARNING: Removing unreachable block (ram,0x001fbbf0) */

undefined8 calc_kaze(long param_1)

{
  i960_regs *piVar1;
  float fVar2;
  uint addr;
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  float fStack_2c;
  int aiStack_28 [4];
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  ushort uStack_6;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadW(&uStack_14,piVar1->g[0xd]);
  if (((uStack_14 & 0x10) != 0) || (sysMemReadW(&uStack_14,piVar1->g[0xd]), (uStack_14 & 0x40) != 0)
     ) goto LAB_001fc114;
  uStack_14 = 0xf000;
  sysMemWriteW(piVar1->g[0xd] + 0x134,&uStack_14);
  sysMemReadW(&uStack_14,piVar1->g[0xd]);
  uStack_14 = uStack_14 | 0x400;
  sysMemWriteW(piVar1->g[0xd],&uStack_14);
  uStack_18 = 8;
  if (bRam016b6e34 < 9) {
    if (bRam016b6e34 == 8) {
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
    uStack_18 = 0;
    if (bRam016b6e34 == 0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 2) != 0) {
LAB_001fc048:
      uStack_14 = 0xf000;
      sysMemWriteW(piVar1->g[0xd] + 0x134,&uStack_14);
      sysMemReadW(&uStack_14,piVar1->g[0xd]);
      uStack_14 = uStack_14 | 0x400;
      sysMemWriteW(piVar1->g[0xd],&uStack_14);
      goto LAB_001fbd84;
    }
    uStack_18 = 4;
    if (bRam016b6e34 < 5) {
      if (bRam016b6e34 == 4) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 2) != 0) goto LAB_001fc048;
    uStack_18 = 5;
    if (bRam016b6e34 < 6) {
      if (bRam016b6e34 == 5) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 2) != 0) {
      uStack_14 = 0xc000;
      sysMemWriteW(piVar1->g[0xd] + 0x134,&uStack_14);
      sysMemReadW(&uStack_14,piVar1->g[0xd]);
      uStack_14 = uStack_14 & 0xfffffbff;
      sysMemWriteW(piVar1->g[0xd],&uStack_14);
      goto LAB_001fbd84;
    }
    uStack_18 = 1;
    if (bRam016b6e34 < 2) {
      if (bRam016b6e34 == 1) {
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
      uStack_14 = (uint)bRam016b6e01;
      uStack_18 = 0x30000;
      if ((1 << (uStack_14 & 0x1f) & 0x30000U) != 0) {
        uStack_14 = (uint)bRam016b6e35;
        sysMemReadB(&bStack_1,piVar1->g[7] + 4);
        uStack_18 = (uint)bStack_1;
        if (uStack_14 < uStack_18) {
          uStack_10 = 4;
        }
        else if (uStack_14 == uStack_18) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
        if ((uStack_10 & 5) == 0) {
          sysMemReadB(&bStack_2,piVar1->g[7] + 0x1b1);
          uStack_18 = (uint)bStack_2;
          if (bStack_2 < 2) {
            if (bStack_2 == 1) {
              uStack_10 = 2;
            }
            else {
              uStack_10 = 1;
            }
          }
          else {
            uStack_10 = 4;
          }
          if ((uStack_10 & 2) == 0) goto LAB_001fbd84;
        }
      }
LAB_001fc114:
      sysMemReadW(&uStack_14,piVar1->g[0xd]);
      uStack_14 = uStack_14 & 0xfffffdff;
      sysMemWriteW(piVar1->g[0xd],&uStack_14);
      uStack_14 = 0;
      sysMemWriteW(piVar1->g[0xd] + 0x130,&uStack_14);
      fStack_3c = 0.0;
      uStack_40 = 0;
      uStack_38 = 0;
      sysMemWriteT(piVar1->g[0xd] + 0x138,&uStack_40);
      goto LAB_001fbf78;
    }
    uStack_14 = 0x8000;
    sysMemWriteW(piVar1->g[0xd] + 0x134,&uStack_14);
    sysMemReadW(&uStack_14,piVar1->g[0xd]);
    uStack_14 = uStack_14 & 0xfffffbff;
    sysMemWriteW(piVar1->g[0xd],&uStack_14);
    addr = piVar1->g[0xd];
  }
  else {
    uStack_14 = 0x7000;
    sysMemWriteW(piVar1->g[0xd] + 0x134,&uStack_14);
    sysMemReadW(&uStack_14,piVar1->g[0xd]);
    uStack_14 = uStack_14 | 0x400;
    sysMemWriteW(piVar1->g[0xd],&uStack_14);
LAB_001fbd84:
    addr = piVar1->g[0xd];
  }
  sysMemReadW(&uStack_14,addr);
  uStack_14 = uStack_14 | 0x200;
  sysMemWriteW(piVar1->g[0xd],&uStack_14);
  sysMemReadB(&bStack_3,piVar1->g[7] + 0x1b0);
  fStack_44 = (float)(uint)bStack_3;
  sysMemReadW(&fStack_44,(int)fStack_44 * 4 + 0x63a58);
  sysMemReadW(&uStack_14,piVar1->g[0xd]);
  if ((uStack_14 & 0x400) == 0) {
    fStack_44 = (float)((int)fStack_44 + 8);
  }
  sysMemReadS(&uStack_6,(uint)fStack_44);
  piVar1->g[0] = (uint)uStack_6;
  sysMemReadW(piVar1->g + 2,(int)fStack_44 + 4);
  sysMemReadW(aiStack_28,piVar1->g[0xd] + 0x130);
  aiStack_28[0] = aiStack_28[0] + piVar1->g[0];
  sysMemWriteW(piVar1->g[0xd] + 0x130,aiStack_28);
  uStack_14 = 0x10802121;
  FUN_0018df40();
  FUN_0018df40(aiStack_28[0]);
  fVar2 = (float)FUN_0018e100();
  uStack_40 = 0x40000000;
  fStack_44 = fRam016c0dd0;
  fStack_2c = (float)piVar1->g[2] * (fVar2 + 2.0) * fRam016c0dd0;
  sysMemReadW(&fStack_44,piVar1->g[0xd] + 0x134);
  uStack_14 = 0x12802525;
  FUN_0018df40();
  FUN_0018df40(fStack_44);
  FUN_0018df40(fStack_2c);
  uStack_40 = FUN_0018e100();
  uStack_14 = 0x12002424;
  FUN_0018df40();
  FUN_0018df40(fStack_44);
  FUN_0018df40(fStack_2c);
  uStack_38 = FUN_0018e100();
  fStack_3c = fRam016c0dd0;
  if (fRam016c0dd0 <= fStack_2c) {
    if (fStack_2c == fRam016c0dd0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 1;
    }
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 1) == 0) {
    fStack_3c = fStack_2c;
  }
  sysMemWriteT(piVar1->g[0xd] + 0x138,&uStack_40);
LAB_001fbf78:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

