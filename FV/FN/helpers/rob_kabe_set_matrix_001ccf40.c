/* helper rob_kabe_set_matrix @ 001ccf40, called (depth 1) from rob_kabe_kage_disp */

/* WARNING: Removing unreachable block (ram,0x001cd3bc) */
/* WARNING: Removing unreachable block (ram,0x001cd580) */

undefined8 rob_kabe_set_matrix(int param_1)

{
  i960_regs *piVar1;
  float fVar2;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  float afStack_30 [2];
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  float fStack_1c;
  float fStack_18;
  undefined *puStack_14;
  uint uStack_10;
  short sStack_2;
  
  piVar1 = i960GetRegs();
  puStack_14 = (undefined *)0x0;
  uRam016c11c8 = 0;
  sysMemReadT(&fStack_40,piVar1->g[7] + 500);
  fStack_40 = (float)((ulong)((long)(int)fStack_40 << 0x21) >> 0x21);
  fStack_38 = (float)((ulong)((long)(int)fStack_38 << 0x21) >> 0x21);
  fStack_28 = fRam016c11d0;
  if (fRam016c11d0 <= fStack_40) {
    if (fStack_40 == fRam016c11d0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 1;
    }
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 4) != 0) {
    if (fRam016c11d0 <= fStack_38) {
      if (fStack_38 == fRam016c11d0) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 4) != 0) {
      iStack_34 = iRam016b75e4;
      sysMemReadS(&sStack_2,iRam016b75e4 + 0x26);
      if ((piVar1->g[1] & 0x10) != 0) {
        sStack_2 = sRam016c11cc;
      }
      fStack_24 = (float)(int)sStack_2;
      fStack_1c = -0.0;
      uStack_20 = (((int)fStack_24 << 1 ^ (uint)fStack_24) & 0x8000) << 0x10;
      fRam016c11b4 = (float)((uint)((ulong)((long)(int)fRam016c11d0 << 0x21) >> 0x21) | uStack_20);
      fStack_40 = fRam016c11b4;
      sysMemReadW(&fStack_1c,iStack_34 + 0x20);
      if (((uint)fStack_40 & 0x80000000) == 0) {
        if (fStack_40 <= fStack_1c) {
          if (fStack_1c == fStack_40) {
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
          uRam016c11c8 = uRam016c11c8 | 8;
          puStack_14 = (undefined *)uRam016c11c8;
        }
      }
      else {
        if (fStack_40 <= fStack_1c) {
          if (fStack_1c == fStack_40) {
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
          uRam016c11c8 = uRam016c11c8 | 8;
          puStack_14 = (undefined *)uRam016c11c8;
        }
      }
      fStack_1c = -0.0;
      uStack_20 = (~(uint)fStack_24 & 0x8000) << 0x10;
      fRam016c11b0 = (float)((uint)ABS(fRam016c11d0) | uStack_20);
      fStack_3c = fRam016c11b0;
      if ((~(uint)fStack_24 & 0x8000) == 0) {
        if (fRam016c11b0 <= -0.0) {
          if (fRam016c11b0 == -0.0) {
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
          uRam016c11c8 = uRam016c11c8 | 4;
          puStack_14 = (undefined *)uRam016c11c8;
        }
      }
      else {
        sysMemReadW(&fStack_1c,iStack_34 + 0x18);
        if (fStack_3c <= fStack_1c) {
          if (fStack_1c == fStack_3c) {
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
          uRam016c11c8 = uRam016c11c8 | 4;
          puStack_14 = (undefined *)uRam016c11c8;
        }
      }
      sysMemReadT(afStack_30,piVar1->g[7] + 500);
      fStack_18 = fRam016c11d0;
      fStack_1c = fStack_28;
      if (((uint)fStack_40 & 0x80000000) != 0) {
        fStack_1c = -fStack_28;
      }
      fStack_24 = fRam016c11d0 - fStack_1c;
      fStack_38 = (float)(int)sRam016c11cc;
      puStack_14 = (undefined *)0x11802323;
      FUN_0018df40();
      FUN_0018df40(fStack_38);
      fStack_1c = (float)FUN_0018e100();
      fStack_1c = -fStack_1c;
      fStack_24 = fStack_24 * fStack_1c;
      fStack_40 = fRam016c11b4;
      if (((uint)fRam016c11b4 & 0x80000000) != 0) {
        fStack_24 = -fStack_24;
      }
      puStack_14 = (undefined *)0x11002222;
      fRam016c11bc = fStack_24 + afStack_30[0];
      fStack_24 = fRam016c11bc;
      FUN_0018df40();
      FUN_0018df40(fStack_38);
      fStack_38 = (float)FUN_0018e100();
      fStack_18 = 1.0;
      if (ABS(fStack_38) == 0.0) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 4;
      }
      if ((uStack_10 & 2) == 0) {
        puStack_14 = (undefined *)0x40400000;
        fStack_38 = 1.0 / fStack_38;
        if (fStack_38 <= 3.0) {
          if (fStack_38 == 3.0) {
            uStack_10 = 2;
          }
          else {
            uStack_10 = 1;
          }
        }
        else {
          uStack_10 = 4;
        }
        if ((uStack_10 & 3) == 0) {
          fStack_38 = 3.0;
        }
        fRam016c11b8 = fStack_38;
      }
      else {
        uRam016c11c8 = uRam016c11c8 | 2;
        puStack_14 = (undefined *)uRam016c11c8;
      }
      sysMemReadT(afStack_30,piVar1->g[7] + 500);
      fStack_18 = fRam016c11d0;
      fStack_1c = afStack_30[0];
      if (((uint)fStack_3c & 0x80000000) != 0) {
        fStack_1c = -afStack_30[0];
      }
      fStack_24 = fRam016c11d0 - fStack_1c;
      fStack_38 = (float)(int)sRam016c11cc;
      puStack_14 = (undefined *)0x11802323;
      FUN_0018df40();
      FUN_0018df40(fStack_38);
      fVar2 = (float)FUN_0018e100();
      fStack_24 = fStack_24 * (-1.0 / fVar2);
      if (((uint)fStack_3c & 0x80000000) != 0) {
        fStack_24 = -fStack_24;
      }
      fStack_1c = 4.59177e-41;
      puStack_14 = (undefined *)0x10802121;
      fRam016c11c4 = fStack_24 + fStack_28;
      fStack_38 = (float)((int)fStack_38 + 0x8000);
      fStack_24 = fRam016c11c4;
      FUN_0018df40();
      FUN_0018df40(fStack_38);
      fStack_38 = (float)FUN_0018e100();
      fStack_18 = 1.0;
      if (ABS(fStack_38) == 0.0) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 4;
      }
      if ((uStack_10 & 2) == 0) {
        fStack_38 = 1.0 / fStack_38;
        if (fStack_38 <= 3.0) {
          if (fStack_38 == 3.0) {
            uStack_10 = 2;
          }
          else {
            uStack_10 = 1;
          }
        }
        else {
          uStack_10 = 4;
        }
        if ((uStack_10 & 3) == 0) {
          fStack_38 = 3.0;
        }
        fRam016c11c0 = fStack_38;
      }
      else {
        uRam016c11c8 = uRam016c11c8 | 1;
      }
      if ((uRam016c11c8 & 2) == 0) {
        puStack_14 = (undefined *)0x9801313;
        FUN_0018df40();
        FUN_0018df40(puStack_14);
        FUN_0018df40(puStack_14);
        FUN_0018e100();
        puStack_14 = (undefined *)0x800101;
        FUN_0018df40();
        puStack_14 = (undefined *)0x1800303;
        FUN_0018df40();
        puStack_14 = (undefined *)0x3000606;
        FUN_0018df40();
        puStack_14 = (undefined *)fRam016c11bc;
        FUN_0018df40();
        puStack_14 = (undefined *)0xbda3d70a;
        FUN_0018df40();
        puStack_14 = (undefined *)fRam016c11b4;
        FUN_0018df40();
        fStack_1c = fRam016c11a0;
        fStack_18 = fRam016c11b8;
        puStack_14 = (undefined *)0x3800707;
        fStack_40 = fRam016c11a0 * fRam016c11b8;
        FUN_0018df40();
        FUN_0018df40(fStack_40);
        puStack_14 = (undefined *)uRam016c11a4;
        FUN_0018df40();
        puStack_14 = (undefined *)0x0;
        FUN_0018df40(0);
        puStack_14 = &DAT_21804343;
        FUN_0018df40();
        puStack_14 = (undefined *)0x7;
        FUN_0018df40();
        puStack_14 = (undefined *)0x1000202;
        FUN_0018df40();
        puStack_14 = (undefined *)0x9801313;
        FUN_0018df40();
        FUN_0018df40(puStack_14);
        FUN_0018df40(puStack_14);
        FUN_0018e100();
        puStack_14 = (undefined *)0x800101;
        FUN_0018df40();
        puStack_14 = (undefined *)0x1800303;
        FUN_0018df40();
        fStack_40 = (float)-(int)sRam016c11cc;
        sysMemReadW(afStack_30,piVar1->g[7] + 500);
        puStack_14 = (undefined *)0x12802525;
        FUN_0018df40();
        FUN_0018df40(fStack_40);
        FUN_0018df40(afStack_30[0]);
        fStack_28 = (float)FUN_0018e100();
        uStack_20 = 0;
        puStack_14 = (undefined *)0x3000606;
        FUN_0018df40();
        puStack_14 = (undefined *)((uint)fStack_28 ^ 0x80000000);
        FUN_0018df40();
        puStack_14 = (undefined *)(uStack_20 ^ 0x80000000);
        FUN_0018df40();
        puStack_14 = (undefined *)(uStack_20 ^ 0x80000000);
        FUN_0018df40();
        sysMemReadW(afStack_30,piVar1->g[7] + 0x1fc);
        puStack_14 = (undefined *)0x12002424;
        FUN_0018df40();
        FUN_0018df40(fStack_40);
        FUN_0018df40(afStack_30[0]);
        fStack_28 = (float)FUN_0018e100();
        uStack_20 = 0;
        puStack_14 = (undefined *)0x3000606;
        FUN_0018df40();
        FUN_0018df40(fStack_28);
        FUN_0018df40(uStack_20);
        FUN_0018df40(uStack_20);
        puStack_14 = (undefined *)0x4800909;
        FUN_0018df40();
        FUN_0018df40(fStack_40);
        puStack_14 = &DAT_21804343;
        FUN_0018df40();
        puStack_14 = (undefined *)0x6;
        FUN_0018df40();
        puStack_14 = (undefined *)0x1000202;
        FUN_0018df40();
      }
      if ((uRam016c11c8 & 1) == 0) {
        puStack_14 = (undefined *)0x9801313;
        FUN_0018df40();
        FUN_0018df40(puStack_14);
        FUN_0018df40(puStack_14);
        FUN_0018e100();
        puStack_14 = (undefined *)0x800101;
        FUN_0018df40();
        puStack_14 = (undefined *)0x1800303;
        FUN_0018df40();
        puStack_14 = (undefined *)0x3000606;
        FUN_0018df40();
        puStack_14 = (undefined *)fRam016c11b0;
        FUN_0018df40();
        puStack_14 = (undefined *)0xbda3d70a;
        FUN_0018df40();
        puStack_14 = (undefined *)fRam016c11c4;
        FUN_0018df40();
        fStack_1c = fRam016c11a8;
        fStack_18 = fRam016c11c0;
        puStack_14 = (undefined *)0x3800707;
        fStack_40 = fRam016c11a8 * fRam016c11c0;
        FUN_0018df40();
        puStack_14 = (undefined *)0x0;
        FUN_0018df40(0);
        puStack_14 = (undefined *)uRam016c11a4;
        FUN_0018df40();
        FUN_0018df40(fStack_40);
        puStack_14 = &DAT_21804343;
        FUN_0018df40();
        puStack_14 = (undefined *)0x5;
        FUN_0018df40();
        puStack_14 = (undefined *)0x1000202;
        FUN_0018df40();
        puStack_14 = (undefined *)0x9801313;
        FUN_0018df40();
        FUN_0018df40(puStack_14);
        FUN_0018df40(puStack_14);
        FUN_0018e100();
        puStack_14 = (undefined *)0x800101;
        FUN_0018df40();
        puStack_14 = (undefined *)0x1800303;
        FUN_0018df40();
        fStack_18 = 6.88766e-41;
        fStack_40 = (float)(0xc000 - (int)sRam016c11cc);
        sysMemReadW(afStack_30,piVar1->g[7] + 500);
        puStack_14 = (undefined *)0x12002424;
        FUN_0018df40();
        FUN_0018df40(fStack_40);
        FUN_0018df40(afStack_30[0]);
        fStack_28 = (float)FUN_0018e100();
        uStack_20 = 0;
        puStack_14 = (undefined *)0x3000606;
        FUN_0018df40();
        puStack_14 = (undefined *)(uStack_20 ^ 0x80000000);
        FUN_0018df40();
        puStack_14 = (undefined *)(uStack_20 ^ 0x80000000);
        FUN_0018df40();
        puStack_14 = (undefined *)((uint)fStack_28 ^ 0x80000000);
        FUN_0018df40();
        sysMemReadW(afStack_30,piVar1->g[7] + 0x1fc);
        puStack_14 = (undefined *)0x12802525;
        FUN_0018df40();
        FUN_0018df40(fStack_40);
        FUN_0018df40(afStack_30[0]);
        fStack_28 = (float)FUN_0018e100();
        uStack_20 = 0;
        puStack_14 = (undefined *)0x3000606;
        FUN_0018df40();
        puStack_14 = (undefined *)(uStack_20 ^ 0x80000000);
        FUN_0018df40();
        puStack_14 = (undefined *)(uStack_20 ^ 0x80000000);
        FUN_0018df40();
        puStack_14 = (undefined *)-fStack_28;
        FUN_0018df40();
        puStack_14 = (undefined *)0x4800909;
        FUN_0018df40();
        FUN_0018df40(fStack_40);
        puStack_14 = &DAT_21804343;
        FUN_0018df40();
        puStack_14 = (undefined *)0x4;
        FUN_0018df40();
        puStack_14 = (undefined *)0x1000202;
        FUN_0018df40();
      }
      puStack_14 = (undefined *)0x800101;
      FUN_0018df40();
      puStack_14 = &DAT_21804343;
      FUN_0018df40();
      puStack_14 = (undefined *)0x3;
      FUN_0018df40();
      puStack_14 = (undefined *)0x1000202;
      FUN_0018df40();
      goto LAB_001cd06c;
    }
  }
  uRam016c11c8 = uRam016c11c8 | 3;
  puStack_14 = (undefined *)uRam016c11c8;
LAB_001cd06c:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

