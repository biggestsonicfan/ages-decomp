/* helper parts_kage_set_flag @ 001f5080, called (depth 1) from rob_kage_disp_inside */

/* WARNING: Removing unreachable block (ram,0x001f5188) */
/* WARNING: Removing unreachable block (ram,0x001f5290) */

undefined8 parts_kage_set_flag(int param_1)

{
  bool bVar1;
  float fVar2;
  i960_regs *piVar3;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  float fStack_18;
  uint uStack_14;
  uint uStack_10;
  short sStack_4;
  byte bStack_1;
  
  piVar3 = i960GetRegs();
  piVar3->g[5] = uRam016b8760;
  piVar3->g[6] = uRam016b8764;
  fVar2 = fRam016c0ddc;
  piVar3->g[3] = (uint)(fRam016c0ddc - 0.5);
  fStack_40 = 0.4;
  piVar3->g[4] = (uint)(fVar2 + 0.4);
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  piVar3->g[1] = uRam016b7614;
  piVar3->g[1] = piVar3->g[1] + 0x88;
  do {
    sysMemReadS(&sStack_4,piVar3->g[1] + 0x22);
    if (sStack_4 == 0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 2) == 0) {
      sysMemReadT(&fStack_40,piVar3->g[1]);
      uStack_14 = (uint)bRam016b6e34;
      fStack_40 = fStack_40 + fStack_3c * (float)piVar3->g[5];
      fStack_38 = fStack_38 + fStack_3c * (float)piVar3->g[6];
      sysMemReadB(&bStack_1,uStack_14 + 0x60b98);
      uStack_14 = (uint)bStack_1;
      if (bStack_1 == 0) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 4;
      }
      if ((uStack_10 & 2) == 0) {
        uStack_14 = 0x16802d2d;
        FUN_0018df40();
        FUN_0018df40(fStack_40);
        FUN_0018df40(fStack_38);
        fStack_40 = (float)FUN_0018e100();
        fStack_18 = 2.0;
        uStack_14 = 0xd001a1a;
        FUN_0018df40();
        FUN_0018df40(fStack_18);
        fStack_18 = (float)FUN_0018e100();
        fStack_40 = fStack_40 / fStack_18;
      }
      else {
        fStack_40 = (float)((ulong)((long)(int)fStack_40 << 0x21) >> 0x21);
        fStack_38 = (float)((ulong)((long)(int)fStack_38 << 0x21) >> 0x21);
        if ((uint)fStack_38 < (uint)fStack_40) {
          bVar1 = true;
        }
        else if (fStack_38 == fStack_40) {
          bVar1 = false;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          fStack_40 = fStack_38;
        }
      }
      if ((int)fStack_3c < 1) {
        if (fStack_3c == 0.0) {
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
        if ((int)fStack_40 < (int)piVar3->g[3]) {
          uStack_10 = 4;
        }
        else if (fStack_40 == (float)piVar3->g[3]) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
        if ((uStack_10 & 1) == 0) {
          sysMemReadW(&fStack_18,piVar3->g[1] + 0x24);
          uStack_14 = (uint)fStack_18 | 0x100;
          sysMemWriteW(piVar3->g[1] + 0x24,&uStack_14);
        }
      }
      if ((int)fStack_40 < (int)piVar3->g[4]) {
        uStack_10 = 4;
      }
      else if (fStack_40 == (float)piVar3->g[4]) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
      if ((uStack_10 & 4) == 0) {
        sysMemReadW(&fStack_18,piVar3->g[1] + 0x24);
        uStack_14 = (uint)fStack_18 & 0xfffffeff;
        sysMemWriteW(piVar3->g[1] + 0x24,&uStack_14);
      }
    }
    piVar3->g[1] = piVar3->g[1] + 0x48;
    if (uStack_20 < 8) {
      if (uStack_20 == 7) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    uStack_20 = uStack_20 + 1;
  } while ((uStack_10 & 5) != 0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

