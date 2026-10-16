/* EXT 7a: cage_break_calc @ 001f9940; patched over i960 07b27c (arcade cage_break_calc) */

undefined8 cage_break_calc(int param_1)

{
  bool bVar1;
  i960_regs *piVar2;
  float fVar3;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint uStack_14;
  uint uStack_10;
  
  piVar2 = i960GetRegs();
  sysMemReadT(&fStack_40,piVar2->g[4] + 0x60);
  sysMemReadT(&fStack_30,piVar2->g[4] + 0x6c);
  fStack_40 = fStack_40 + fStack_30;
  fStack_24 = fRam016c0dd0;
  fStack_2c = fStack_2c - fRam016c0dd0;
  sysMemWriteW(piVar2->g[4] + 0x70,&fStack_2c);
  fStack_3c = fStack_3c + fStack_2c;
  fStack_38 = fStack_38 + fStack_28;
  sysMemWriteT(piVar2->g[4] + 0x60,&fStack_40);
  uStack_14 = 0x9801313;
  FUN_0018df40();
  FUN_0018df40(uStack_14);
  FUN_0018df40(uStack_14);
  FUN_0018e100();
  uStack_14 = 0x800101;
  FUN_0018df40();
  uStack_14 = 0x3e007c7c;
  FUN_0018df40();
  uStack_14 = piVar2->g[5] * 9;
  FUN_0018df40();
  uStack_14 = 1;
  FUN_0018df40();
  uStack_14 = 0x3f007e7e;
  FUN_0018df40();
  uStack_14 = piVar2->g[5] * 9;
  FUN_0018df40();
  uStack_14 = 0;
  FUN_0018df40(0);
  uStack_14 = 0x3e807d7d;
  FUN_0018df40();
  uStack_14 = piVar2->g[5] * 9;
  FUN_0018df40();
  uStack_14 = 1;
  FUN_0018df40();
  fStack_24 = 0.0;
  fStack_34 = 8.01291e-39;
  uStack_14 = 0x9801313;
  fStack_44 = fRam0172ae80;
  FUN_0018df40();
  FUN_0018df40(uStack_14);
  FUN_0018df40(uStack_14);
  FUN_0018e100();
  uStack_14 = 0x3e007c7c;
  FUN_0018df40();
  uStack_14 = piVar2->g[5] * 9;
  FUN_0018df40();
  uStack_14 = 1;
  FUN_0018df40();
  uStack_14 = 0x6800d0d;
  FUN_0018df40();
  while( true ) {
    if ((int)fStack_44 < 1) {
      if (fStack_44 == 0.0) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 2) != 0) break;
    fStack_44 = (float)((int)fStack_44 - 1);
    sysMemReadT(&fStack_30,(uint)fStack_34);
    uStack_14 = 0x14802929;
    FUN_0018df40();
    FUN_0018df40(fStack_30);
    FUN_0018df40(fStack_2c);
    FUN_0018df40(fStack_28);
    fStack_30 = (float)FUN_0018e100();
    fStack_2c = (float)FUN_0018e100();
    fStack_28 = (float)FUN_0018e100();
    fStack_40 = fStack_3c + fStack_2c;
    fStack_34 = (float)((int)fStack_34 + 0xc);
    if (((uint)fStack_40 & 0x80000000) != 0) {
      if (fStack_24 <= fStack_40) {
        if (fStack_40 == fStack_24) {
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
        fRam0172ae88 = fStack_44;
        fStack_38 = fStack_2c;
        fStack_24 = fStack_40;
      }
    }
  }
  if (((uint)fStack_24 & 0x80000000) != 0) {
    uStack_14 = uRam0172add4;
    if ((uRam0172add4 & 0x2000000) == 0) {
      piVar2->g[0] = 0xbd23d70a;
      sysMemReadW(&fStack_44,piVar2->g[4] + 0x70);
      if (fStack_44 <= (float)piVar2->g[0]) {
        if ((float)piVar2->g[0] == fStack_44) {
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
        fStack_44 = (float)(uint)bRam016b6e34;
        sysMemReadW(piVar2->g,(int)fStack_44 * 4 + 0x7b250);
        sound_request_u(0);
        uRam0172add4 = uRam0172add4 | 0x2000000;
        uStack_14 = uRam0172add4;
      }
    }
    fStack_3c = fStack_3c - fStack_24;
    sysMemWriteW(piVar2->g[4] + 100,&fStack_3c);
    fStack_40 = (float)((int)fRam0172ae88 * 0xc);
    fRam0172ae88 = (float)((int)fStack_40 + 0x5740bc);
    fStack_38 = (float)((ulong)((long)(int)fStack_38 << 0x21) >> 0x21);
    fStack_44 = fRam0172ae88;
    sysMemReadT(&fStack_30,(uint)fRam0172ae88);
    fStack_3c = 0.06;
    fRam0172ae84 = fStack_38 * 0.06;
    fStack_38 = fRam0172ae84;
    sysMemReadT(&fStack_40,piVar2->g[4] + 0x78);
    uStack_14 = 0x9801313;
    fStack_20 = fStack_2c * fStack_38;
    fStack_2c = fStack_2c * fStack_40;
    fStack_1c = fStack_28 * fStack_40;
    fStack_28 = fStack_28 * fStack_3c;
    fStack_18 = fStack_30 * fStack_3c;
    fStack_30 = fStack_30 * fStack_38;
    fStack_40 = fStack_20 - fStack_28;
    fStack_3c = fStack_1c - fStack_30;
    fStack_38 = fStack_18 - fStack_2c;
    FUN_0018df40();
    FUN_0018df40(uStack_14);
    FUN_0018df40(uStack_14);
    FUN_0018e100();
    uStack_14 = 0x14802929;
    FUN_0018df40();
    FUN_0018df40(fStack_40);
    FUN_0018df40(fStack_3c);
    FUN_0018df40(fStack_38);
    fStack_40 = (float)FUN_0018e100();
    fStack_3c = (float)FUN_0018e100();
    fStack_38 = (float)FUN_0018e100();
    sysMemReadT(&fStack_30,piVar2->g[4] + 0x6c);
    fStack_34 = 0.2;
    fStack_40 = -(fStack_40 + fStack_30) * 0.2;
    fStack_3c = -(fStack_3c + fStack_2c) * 0.2;
    fStack_38 = -(fStack_38 + fStack_28) * 0.2;
    sysMemWriteT(piVar2->g[4] + 0x6c,&fStack_40);
    uStack_14 = 0x9801313;
    fStack_34 = fRam0172ae84;
    fStack_3c = fStack_3c + fRam0172ae84;
    FUN_0018df40();
    FUN_0018df40(uStack_14);
    FUN_0018df40(uStack_14);
    FUN_0018e100();
    uStack_14 = 0x6000c0c;
    FUN_0018df40();
    uStack_14 = 0x9801313;
    FUN_0018df40();
    FUN_0018df40(uStack_14);
    FUN_0018df40(uStack_14);
    FUN_0018e100();
    uStack_14 = 0x14802929;
    FUN_0018df40();
    FUN_0018df40(fStack_40);
    FUN_0018df40(fStack_3c);
    FUN_0018df40(fStack_38);
    fStack_40 = (float)FUN_0018e100();
    fStack_3c = (float)FUN_0018e100();
    fStack_38 = (float)FUN_0018e100();
    fStack_44 = fRam0172ae88;
    sysMemReadT(&fStack_30,(uint)fRam0172ae88);
    uStack_14 = 0x17002e2e;
    FUN_0018df40();
    FUN_0018df40(fStack_40);
    FUN_0018df40(fStack_3c);
    FUN_0018df40(fStack_38);
    fStack_44 = (float)FUN_0018e100();
    uStack_14 = 0x17002e2e;
    FUN_0018df40();
    FUN_0018df40(fStack_30);
    FUN_0018df40(fStack_2c);
    FUN_0018df40(fStack_28);
    fStack_34 = (float)FUN_0018e100();
    fVar3 = (float)((ulong)((long)(int)fStack_30 << 0x21) >> 0x21);
    if (fVar3 <= 0.01) {
      if (fVar3 == 0.01) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 0;
      }
    }
    else {
      uStack_10 = 4;
    }
    if (uStack_10 == 0) {
      fStack_30 = 1e+08;
    }
    fVar3 = (float)((ulong)((long)(int)fStack_2c << 0x21) >> 0x21);
    if (fVar3 <= 0.01) {
      if (fVar3 == 0.01) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 0;
      }
    }
    else {
      uStack_10 = 4;
    }
    if (uStack_10 == 0) {
      fStack_2c = 1e+08;
    }
    fStack_24 = (float)((ulong)((long)(int)fStack_28 << 0x21) >> 0x21);
    if (fStack_24 <= 0.01) {
      if (fStack_24 == 0.01) {
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
      fStack_28 = 1e+08;
    }
    fStack_20 = fStack_3c / fStack_28;
    fVar3 = fStack_38 / fStack_2c;
    fStack_18 = fStack_40 / fStack_2c;
    fStack_28 = fStack_40 / fStack_28;
    fStack_1c = fStack_38 / fStack_30;
    fStack_30 = fStack_3c / fStack_30;
    fStack_40 = fStack_20 - fVar3;
    fStack_3c = fStack_1c - fStack_28;
    fStack_38 = fStack_18 - fStack_30;
    fStack_2c = fVar3;
    sysMemWriteT(piVar2->g[4] + 0x78,&fStack_40);
    fStack_24 = 3.1415927;
    uStack_14 = 0x18003030;
    fVar3 = fStack_34 * 3.1415927;
    fStack_34 = 32768.0;
    fStack_44 = (float)(int)((fStack_44 / fVar3) * 32768.0);
    FUN_0018df40();
    FUN_0018df40(fStack_40);
    FUN_0018df40(fStack_3c);
    FUN_0018df40(fStack_38);
    fStack_40 = (float)FUN_0018e100();
    fStack_3c = (float)FUN_0018e100();
    fStack_38 = (float)FUN_0018e100();
    uStack_14 = 0x3c807979;
    FUN_0018df40();
    uStack_14 = piVar2->g[5] * 9;
    FUN_0018df40();
    FUN_0018df40(fStack_44);
    FUN_0018df40(fStack_40);
    FUN_0018df40(fStack_3c);
    FUN_0018df40(fStack_38);
  }
  uStack_14 = 0x1000202;
  FUN_0018df40();
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

