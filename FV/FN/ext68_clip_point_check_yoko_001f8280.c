/* EXT 68: clip_point_check_yoko @ 001f8280; patched over i960 0236bc (arcade clip_point_check_yoko) */

undefined8 clip_point_check_yoko(int param_1)

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
  fStack_30 = fStack_30 * 0.6667;
  fStack_2c = fStack_2c * 0.6667;
  sysMemReadW(piVar2->g + 5,piVar2->g[1]);
  piVar2->g[1] = piVar2->g[1] + 4;
  uStack_38 = 0;
  do {
    sysMemReadL(&fStack_40,piVar2->g[1]);
    piVar2->g[1] = piVar2->g[1] + 8;
    uStack_14 = 0x14802929;
    FUN_0018df40();
    FUN_0018df40(fStack_40);
    FUN_0018df40(uStack_38);
    FUN_0018df40(fStack_3c);
    fStack_40 = (float)FUN_0018e100();
    fStack_3c = (float)FUN_0018e100();
    fStack_34 = (float)FUN_0018e100();
    uStack_14 = 0x3f800000;
    uStack_44 = 0;
    fStack_40 = (fStack_40 * fStack_30) / fStack_34;
    fStack_3c = (fStack_3c * fStack_2c) / fStack_34;
    if (1.0 <= fStack_34) {
      if (fStack_34 == 1.0) {
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
      uStack_44 = 0x90;
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
      if (!bVar1) {
        uStack_44 = 0x81;
      }
      uStack_14 = 0x43780000;
      if (248.0 <= fStack_40) {
        if (fStack_40 == 248.0) {
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
        uStack_44 = uStack_44 | 0x82;
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

