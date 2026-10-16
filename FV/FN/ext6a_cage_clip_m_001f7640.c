/* EXT 6a: cage_clip_m @ 001f7640; patched over i960 022398 (arcade cage_clip_m) */

/* WARNING: Removing unreachable block (ram,0x001f7b48) */

undefined8 cage_clip_m(int param_1)

{
  bool bVar1;
  i960_regs *piVar2;
  float fStack_44;
  uint uStack_40;
  float fStack_3c;
  uint uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  float fStack_20;
  undefined4 uStack_14;
  uint uStack_10;
  ushort uStack_4;
  ushort uStack_2;
  
  piVar2 = i960GetRegs();
  uStack_14 = 0x800101;
  FUN_0018df40();
  sysMemReadL(&uStack_40,piVar2->g[4] * 8 + 0x6ce2048);
  uStack_14 = 0x3000606;
  uStack_28 = 0;
  FUN_0018df40();
  FUN_0018df40(uStack_28);
  FUN_0018df40(uStack_28);
  FUN_0018df40(uStack_40);
  uStack_24 = (uint)bRam016b6e34;
  uStack_40 = uStack_24 * 0x100;
  piVar2->g[2] = uStack_40 + 0x6ce10cc;
  sysMemReadW(&fStack_44,uStack_40 + 0x6ce1048);
  sysMemReadS(&uStack_2,uStack_40 + 0x6ce1068);
  uStack_38 = (uint)uStack_2;
  fStack_34 = (float)((int)fStack_3c * 0x10);
  piVar2->g[2] = piVar2->g[2] + (int)fStack_34;
  if (uStack_24 < 8) {
    if (uStack_24 == 7) {
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
    boss_cage(0);
  }
  if (((uint)fStack_44 & 0x100000) != 0) {
    uStack_14 = 0x3000606;
    FUN_0018df40();
    uStack_14 = 0;
    FUN_0018df40(0);
    uStack_14 = 0;
    FUN_0018df40(0);
    uStack_14 = 0x40c00000;
    FUN_0018df40();
    piVar2->g[1] = 0;
    piVar2->g[0] = uStack_38;
    set_obj(0);
    uStack_14 = 0x3000606;
    FUN_0018df40();
    uStack_14 = 0x80000000;
    FUN_0018df40();
    uStack_14 = 0x80000000;
    FUN_0018df40();
    uStack_14 = 0xc0c00000;
    FUN_0018df40();
  }
  sysMemReadL(&fStack_30,0x501084);
  uStack_28 = 0;
  uStack_38 = 0x40c00000;
  piVar2->g[3] = 0x22958;
  uStack_24 = 8;
  if (((uint)fStack_44 & 0x80000) != 0) {
    piVar2->g[3] = 0x2297c;
    uStack_24 = 4;
  }
  if (((uint)fStack_44 & 0x200000) != 0) {
    piVar2->g[3] = 0x22990;
    uStack_24 = 2;
  }
  if (((uint)fStack_44 & 0x400000) != 0) {
    piVar2->g[3] = 0x2299c;
    uStack_24 = 1;
  }
  sysMemReadW(&fStack_3c,piVar2->g[3]);
  piVar2->g[3] = piVar2->g[3] + 4;
  uStack_14 = 0x14802929;
  FUN_0018df40();
  FUN_0018df40(fStack_3c);
  FUN_0018df40(uStack_28);
  FUN_0018df40(uStack_38);
  fStack_3c = (float)FUN_0018e100();
  fStack_34 = (float)FUN_0018e100();
  fStack_20 = (float)FUN_0018e100();
  uStack_14 = 0x40000000;
  fStack_3c = (fStack_3c * fStack_30) / fStack_20;
  fStack_34 = (fStack_34 * fStack_2c) / fStack_20;
  if (2.0 <= fStack_20) {
    if (fStack_20 == 2.0) {
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
    fStack_44 = 4.34403e-44;
  }
  else {
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
    fStack_44 = (float)(uint)!bVar1;
    uStack_14 = 0x43780000;
    if (248.0 <= fStack_3c) {
      if (fStack_3c == 248.0) {
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
      fStack_44 = (float)((uint)fStack_44 | 2);
    }
  }
  do {
    sysMemReadW(&fStack_3c,piVar2->g[3]);
    piVar2->g[3] = piVar2->g[3] + 4;
    uStack_14 = 0x14802929;
    FUN_0018df40();
    FUN_0018df40(fStack_3c);
    FUN_0018df40(uStack_28);
    FUN_0018df40(uStack_38);
    fStack_3c = (float)FUN_0018e100();
    fStack_34 = (float)FUN_0018e100();
    fStack_20 = (float)FUN_0018e100();
    uStack_14 = 0x40000000;
    fStack_3c = (fStack_3c * fStack_30) / fStack_20;
    if (2.0 <= fStack_20) {
      if (fStack_20 == 2.0) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
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
      fStack_34 = (float)(uint)!bVar1;
      uStack_14 = 0x43780000;
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
      if (!bVar1) {
        fStack_34 = (float)((uint)fStack_34 | 2);
      }
    }
    else {
      fStack_34 = 4.34403e-44;
    }
    uStack_40 = (uint)fStack_44 & (uint)fStack_34;
    if (uStack_40 == 0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 5) == 0) {
      sysMemReadS(&uStack_4,piVar2->g[2]);
      uStack_14 = 0x3000606;
      uStack_40 = (uint)uStack_4;
      FUN_0018df40();
      uStack_14 = 0;
      FUN_0018df40(0);
      uStack_14 = 0;
      FUN_0018df40(0);
      uStack_14 = 0x40c00000;
      FUN_0018df40();
      piVar2->g[1] = 0;
      piVar2->g[0] = uStack_40;
      set_obj(0);
      uStack_14 = 0x3000606;
      FUN_0018df40();
      uStack_14 = 0;
      FUN_0018df40(0);
      uStack_14 = 0;
      FUN_0018df40(0);
      uStack_14 = 0xc0c00000;
      FUN_0018df40();
    }
    fStack_44 = fStack_34;
    piVar2->g[2] = piVar2->g[2] + 2;
    if (uStack_24 < 2) {
      if (uStack_24 == 1) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    uStack_24 = uStack_24 - 1;
  } while ((uStack_10 & 4) != 0);
  uStack_14 = 0x1000202;
  FUN_0018df40();
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

