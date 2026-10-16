/* EXT 6e: clip_point_check @ 001f7200; patched over i960 023784 (arcade clip_point_check) */

undefined8 clip_point_check(int param_1)

{
  bool bVar1;
  i960_regs *piVar2;
  uint uStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  uint uStack_28;
  undefined4 uStack_14;
  uint uStack_10;
  
  piVar2 = i960GetRegs();
  sysMemReadL(&fStack_30,0x501084);
  uStack_44 = 0x3f2aacda;
  uStack_28 = 0x50e000;
  fStack_2c = fStack_2c * 0.6667;
  sysMemReadW(piVar2->g + 5,piVar2->g[1]);
  piVar2->g[1] = piVar2->g[1] + 4;
  uStack_38 = 0;
  do {
    sysMemReadT(&fStack_40,piVar2->g[1]);
    piVar2->g[1] = piVar2->g[1] + 0xc;
    uStack_14 = 0x14802929;
    FUN_0018df40();
    FUN_0018df40(fStack_40);
    FUN_0018df40(fStack_3c);
    FUN_0018df40(uStack_38);
    fStack_40 = (float)FUN_0018e100();
    fStack_3c = (float)FUN_0018e100();
    fStack_34 = (float)FUN_0018e100();
    uStack_14 = 0x3dcccccd;
    fStack_40 = (fStack_40 * fStack_30) / fStack_34;
    fStack_3c = (fStack_3c * fStack_2c) / fStack_34;
    if (0.1 <= fStack_34) {
      if (fStack_34 == 0.1) {
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
      uStack_44 = 0x1f;
    }
    else {
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
      uStack_44 = (uint)!bVar1;
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
      if (!bVar1) {
        uStack_44 = uStack_44 | 2;
      }
      if (-192.0 <= fStack_3c) {
        if (fStack_3c == -192.0) {
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
        uStack_44 = uStack_44 | 4;
      }
      uStack_14 = 0x43400000;
      if (192.0 <= fStack_3c) {
        if (fStack_3c == 192.0) {
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
        uStack_44 = uStack_44 | 8;
      }
    }
    sysMemWriteB(uStack_28,&uStack_44);
    uStack_28 = uStack_28 + 1;
    if (piVar2->g[5] < 2) {
      if (piVar2->g[5] == 1) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    piVar2->g[5] = piVar2->g[5] - 1;
  } while ((uStack_10 & 4) != 0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

