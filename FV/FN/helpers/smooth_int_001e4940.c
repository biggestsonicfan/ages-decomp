/* helper smooth_int @ 001e4940, called (depth 1) from play_motion */

/* WARNING: Removing unreachable block (ram,0x001e52f0) */
/* WARNING: Removing unreachable block (ram,0x001e4f94) */
/* WARNING: Removing unreachable block (ram,0x001e4dfc) */
/* WARNING: Removing unreachable block (ram,0x001e49c0) */
/* WARNING: Removing unreachable block (ram,0x001e4d8c) */
/* WARNING: Removing unreachable block (ram,0x001e4f4c) */
/* WARNING: Removing unreachable block (ram,0x001e4c4c) */
/* WARNING: Removing unreachable block (ram,0x001e534c) */

undefined8 smooth_int(int param_1)

{
  bool bVar1;
  short sVar2;
  i960_regs *piVar3;
  uint uVar4;
  uint *puVar5;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  short sStack_28;
  short sStack_26;
  short sStack_24;
  short sStack_22;
  short sStack_20;
  short sStack_1e;
  short sStack_1c;
  short sStack_1a;
  short sStack_18;
  short sStack_16;
  short sStack_14;
  short sStack_12;
  short sStack_10;
  short sStack_e;
  short sStack_c;
  ushort uStack_a;
  ushort uStack_8;
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar3 = i960GetRegs();
  uStack_74 = 0;
  puVar5 = piVar3->g;
  sysMemWriteS(piVar3->g[7] + 0xbe2,&uStack_74);
  uStack_44 = (uint)bRam016bedd8;
  if (bRam016bedd8 == 0) {
    uStack_40 = 2;
  }
  else {
    uStack_40 = 4;
  }
  if (((((uStack_40 & 5) != 0) ||
       (sysMemReadW(&uStack_44,piVar3->g[7]), (uStack_44 & 0x4000000) == 0)) ||
      (sysMemReadW(&uStack_44,piVar3->g[7] + 0x720), (uStack_44 & 2) != 0)) ||
     (sysMemReadW(&uStack_44,piVar3->g[7] + 0x860), (uStack_44 & 4) != 0)) goto LAB_001e4fec;
  sysMemReadB(&bStack_1,piVar3->g[7] + 0xbe4);
  uStack_6c = (uint)bStack_1;
  if (bStack_1 < 2) {
    if (bStack_1 == 1) {
      uStack_40 = 2;
    }
    else {
      uStack_40 = 1;
    }
  }
  else {
    uStack_40 = 4;
  }
  if ((uStack_40 & 2) != 0) goto LAB_001e4fec;
  sysMemReadS(&uStack_8,piVar3->g[7] + 0x800);
  uStack_68 = (uint)uStack_8;
  sysMemReadW(&uStack_6c,piVar3->g[7] + 0x1a4);
  if ((uStack_6c & 0x20000) == 0) {
    sysMemReadW(&uStack_44,piVar3->g[7] + 0x804);
    uStack_48 = 0x40000;
    uStack_44 = uStack_44 & 0x40000;
    if (uStack_44 == 0) {
      uStack_40 = 2;
    }
    else {
      uStack_40 = 4;
    }
    if ((uStack_40 & 5) != 0) goto LAB_001e4da8;
    sysMemReadW(&uStack_44,piVar3->g[7] + 0x804);
    uStack_48 = 0x80000;
    uStack_44 = uStack_44 & 0x80000;
    if (uStack_44 == 0) {
      uStack_40 = 2;
    }
    else {
      uStack_40 = 4;
    }
    if ((uStack_40 & 5) != 0) goto LAB_001e4e18;
    sysMemReadW(&uStack_4c,piVar3->g[7] + 0xc30);
    uStack_50 = 0x8040;
    uStack_4c = uStack_4c & 0x8040;
    if (uStack_4c < 0x8041) {
      if (uStack_4c == 0x8040) {
        uStack_40 = 2;
      }
      else {
        uStack_40 = 1;
      }
    }
    else {
      uStack_40 = 4;
    }
    if ((uStack_40 & 2) != 0) goto LAB_001e4fec;
    sysMemReadB(&bStack_2,piVar3->g[7] + 0x814);
    uStack_70 = (uint)bStack_2;
    uStack_48 = 4;
    if (uStack_70 < 5) {
      if (uStack_70 == 4) {
        uStack_40 = 2;
      }
      else {
        uStack_40 = 1;
      }
    }
    else {
      uStack_40 = 4;
    }
    if ((uStack_40 & 2) != 0) goto LAB_001e4fec;
    uStack_50 = 0x7f;
    if (uStack_70 < 0x80) {
      if (uStack_70 == 0x7f) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
LAB_001e4e18:
      uStack_74 = 1;
    }
    else {
      uStack_44 = 0x4000000;
      uStack_48 = uStack_6c & 0x4000000;
      if (uStack_48 == 0) {
        uStack_44 = 0x6600;
        uStack_48 = uStack_6c & 0x6600;
        if (uStack_48 != 0) goto LAB_001e4e18;
      }
LAB_001e4da8:
      uStack_74 = 3;
    }
  }
  else {
    uStack_74 = 2;
  }
  uStack_64 = uStack_68;
  if (uStack_68 < 3) {
    if (uStack_68 == 2) {
      uStack_40 = 2;
    }
    else {
      uStack_40 = 1;
    }
  }
  else {
    uStack_40 = 4;
  }
  if ((uStack_40 & 3) != 0) goto LAB_001e4fec;
  if (uStack_68 < 5) {
    if (uStack_68 == 4) {
      uStack_40 = 2;
    }
    else {
      uStack_40 = 1;
    }
  }
  else {
    uStack_40 = 4;
  }
  if ((uStack_40 & 3) == 0) {
    if (uStack_68 < 9) {
      if (uStack_68 == 8) {
        uStack_40 = 2;
      }
      else {
        uStack_40 = 1;
      }
    }
    else {
      uStack_40 = 4;
    }
    if ((uStack_40 & 3) != 0) goto LAB_001e4be8;
    if (uStack_68 < 0x11) {
      if (uStack_68 == 0x10) {
        uStack_40 = 2;
      }
      else {
        uStack_40 = 1;
      }
    }
    else {
      uStack_40 = 4;
    }
    if ((uStack_40 & 3) != 0) goto LAB_001e4be8;
    fStack_60 = 1.12104e-44;
  }
  else {
LAB_001e4be8:
    fStack_60 = 5.60519e-45;
  }
  uStack_64 = uStack_68 - (int)fStack_60;
  sVar2 = FUN_0018ac80(piVar3->g[7] + 0x1a8);
  if (sVar2 == 0x38f) {
    uStack_64 = uStack_64 + (int)fStack_60;
  }
  sysMemReadB(&bStack_3,piVar3->g[7] + 0xa00);
  uStack_44 = (uint)bStack_3;
  if (bStack_3 == 0) {
    uStack_40 = 2;
  }
  else {
    uStack_40 = 4;
  }
  if ((uStack_40 & 2) == 0) {
    sysMemReadS(&uStack_a,piVar3->g[7] + 0x808);
    uStack_4c = (uint)uStack_a;
    if (uStack_64 < uStack_4c) {
      uStack_40 = 4;
    }
    else if (uStack_64 == uStack_4c) {
      uStack_40 = 2;
    }
    else {
      uStack_40 = 1;
    }
    if ((uStack_40 & 3) == 0) {
      uStack_74 = uStack_74 & 0xfffffffd;
    }
  }
  sysMemReadB(&bStack_4,piVar3->g[7] + 0xbe5);
  uStack_48 = (uint)bStack_4;
  if ((bStack_4 & 2) != 0) {
    sysMemReadB(&bStack_5,piVar3->g[7] + 0xbdd);
    uStack_4c = (uint)bStack_5;
    if ((bStack_5 & 2) != 0) {
      uStack_74 = uStack_74 & 0xfffffffe;
    }
  }
  uStack_44 = 0;
  sysMemWriteB(piVar3->g[7] + 0xbdd,&uStack_74);
  sysMemWriteS(piVar3->g[7] + 0xbde,&fStack_60);
  sysMemWriteS(piVar3->g[7] + 0xbe0,&uStack_64);
  sysMemWriteB(piVar3->g[7] + 0xbe5,&uStack_44);
  if (uStack_74 < 3) {
    if (uStack_74 == 2) {
      uStack_40 = 2;
    }
    else {
      uStack_40 = 1;
    }
  }
  else {
    uStack_40 = 4;
  }
  if ((uStack_40 & 2) != 0) goto LAB_001e4d14;
  sysMemReadW(&uStack_68,piVar3->g[7] + 0xbd8);
  piVar3->g[5] = 0x50e000;
  FUN_001e8980(0);
  fStack_58 = 7.427532e-39;
  uStack_44 = 0x14;
  uStack_54 = uStack_68 + 0x690;
  do {
    sysMemReadT(&uStack_50,uStack_54);
    sysMemWriteT((uint)fStack_58,&uStack_50);
    uStack_54 = uStack_54 + 0xc;
    fStack_58 = (float)((int)fStack_58 + 0xc);
    if (uStack_44 < 2) {
      if (uStack_44 == 1) {
        uStack_40 = 2;
      }
      else {
        uStack_40 = 1;
      }
    }
    else {
      uStack_40 = 4;
    }
    uStack_44 = uStack_44 - 1;
  } while ((uStack_40 & 4) != 0);
  uStack_54 = 0x50e000;
  uStack_44 = 0x14;
  fStack_58 = (float)(uStack_68 + 0x690);
  do {
    sysMemReadT(&uStack_50,uStack_54);
    sysMemWriteT((uint)fStack_58,&uStack_50);
    uStack_54 = uStack_54 + 0xc;
    fStack_58 = (float)((int)fStack_58 + 0xc);
    if (uStack_44 < 2) {
      if (uStack_44 == 1) {
        uStack_40 = 2;
      }
      else {
        uStack_40 = 1;
      }
    }
    else {
      uStack_40 = 4;
    }
    uStack_44 = uStack_44 - 1;
  } while ((uStack_40 & 4) != 0);
  fStack_58 = 1.12104e-44;
  uStack_4c = uRam016c4e68;
  uStack_48 = uRam016c4e60;
  uStack_44 = uRam016c4e60 | uRam016c4e68;
  if (uStack_44 == 0) {
    uStack_40 = 2;
  }
  else {
    uStack_40 = 4;
  }
  if ((uStack_40 & 2) == 0) {
    uStack_50 = 0x50e090;
    do {
      sysMemReadW(&uStack_54,uStack_50);
      uStack_44 = 0xa001414;
      FUN_0018df40();
      FUN_0018df40(uStack_54);
      FUN_0018df40(uStack_48);
      uStack_54 = FUN_0018e100();
      sysMemWriteW(uStack_50,&uStack_54);
      sysMemReadW(&uStack_54,uStack_50 + 8);
      uStack_44 = 0xa001414;
      FUN_0018df40();
      FUN_0018df40(uStack_54);
      FUN_0018df40(uStack_4c);
      uStack_54 = FUN_0018e100();
      sysMemWriteW(uStack_50 + 8,&uStack_54);
      uStack_50 = uStack_50 + 0xc;
      if ((uint)fStack_58 < 2) {
        if (fStack_58 == 1.4013e-45) {
          uStack_40 = 2;
        }
        else {
          uStack_40 = 1;
        }
      }
      else {
        uStack_40 = 4;
      }
      fStack_58 = (float)((int)fStack_58 - 1);
    } while ((uStack_40 & 4) != 0);
  }
  fStack_58 = 1.12104e-44;
  uStack_4c = uRam016c4f58;
  uStack_48 = uRam016c4f50;
  uStack_44 = uRam016c4f50 | uRam016c4f58;
  if (uStack_44 == 0) {
    uStack_40 = 2;
  }
  else {
    uStack_40 = 4;
  }
  if ((uStack_40 & 2) == 0) {
    uStack_50 = 0x50e180;
    do {
      sysMemReadW(&uStack_54,uStack_50);
      uStack_44 = 0xa001414;
      FUN_0018df40();
      FUN_0018df40(uStack_54);
      FUN_0018df40(uStack_48);
      uStack_54 = FUN_0018e100();
      sysMemWriteW(uStack_50,&uStack_54);
      sysMemReadW(&uStack_54,uStack_50 + 8);
      uStack_44 = 0xa001414;
      FUN_0018df40();
      FUN_0018df40(uStack_54);
      FUN_0018df40(uStack_4c);
      uStack_54 = FUN_0018e100();
      sysMemWriteW(uStack_50 + 8,&uStack_54);
      uStack_50 = uStack_50 + 0xc;
      if ((uint)fStack_58 < 2) {
        if (fStack_58 == 1.4013e-45) {
          uStack_40 = 2;
        }
        else {
          uStack_40 = 1;
        }
      }
      else {
        uStack_40 = 4;
      }
      fStack_58 = (float)((int)fStack_58 + -1);
    } while ((uStack_40 & 4) != 0);
    uVar4 = piVar3->g[7];
  }
  else {
    uVar4 = piVar3->g[7];
  }
  sysMemReadW(&uStack_44,uVar4 + 0xc30);
  if (((uStack_6c & 0x100000) != 0) || ((uStack_44 & 0x40) != 0)) {
    uStack_44 = 0x800101;
    FUN_0018df40();
    uStack_44 = 0x1800303;
    FUN_0018df40();
    uStack_44 = 0x1f803f3f;
    FUN_0018df40();
    uStack_50 = (uint)sRam016c4e08;
    uStack_4c = (uint)sRam016c4e04;
    uStack_48 = (uint)sRam016c4e00;
    FUN_0018de40(&uStack_50);
    FUN_0018e100();
    uStack_44 = 0x5000a0a;
    FUN_0018df40();
    sysMemReadS(&sStack_c,piVar3->g[7] + 0xc04);
    uStack_44 = -(int)sStack_c;
    FUN_0018df40(uStack_44);
    uStack_44 = 0x4000808;
    FUN_0018df40();
    sysMemReadS(&sStack_e,piVar3->g[7] + 0xc00);
    uStack_44 = -(int)sStack_e;
    FUN_0018df40(uStack_44);
    uStack_44 = 0x4800909;
    FUN_0018df40();
    sysMemReadS(&sStack_10,piVar3->g[7] + 0xc02);
    uStack_44 = -(int)sStack_10;
    FUN_0018df40(uStack_44);
    uStack_44 = 0x4000808;
    FUN_0018df40();
    sysMemReadS(&sStack_12,piVar3->g[7] + 0x140);
    uStack_44 = -(int)sStack_12;
    FUN_0018df40(uStack_44);
    uStack_44 = 0x4800909;
    FUN_0018df40();
    sysMemReadS(&sStack_14,piVar3->g[7] + 0x142);
    uStack_44 = -(int)sStack_14;
    FUN_0018df40(uStack_44);
    uStack_44 = 0x5000a0a;
    FUN_0018df40();
    sysMemReadS(&sStack_16,piVar3->g[7] + 0x144);
    uStack_44 = -(int)sStack_16;
    FUN_0018df40(uStack_44);
    piVar3->g[0] = 8;
    fStack_58 = 7.427734e-39;
    do {
      sysMemReadW(&uStack_4c,(uint)fStack_58);
      uStack_50 = 0;
      sysMemReadW(&uStack_54,(int)fStack_58 + 8);
      uStack_44 = 0x14802929;
      FUN_0018df40();
      FUN_0018df40(uStack_4c);
      FUN_0018df40(uStack_50);
      FUN_0018df40(uStack_54);
      uStack_4c = FUN_0018e100();
      uStack_50 = FUN_0018e100();
      uStack_54 = FUN_0018e100();
      sysMemWriteW((uint)fStack_58,&uStack_4c);
      sysMemWriteW((int)fStack_58 + 8,&uStack_54);
      fStack_58 = (float)((int)fStack_58 + 0xc);
      if (piVar3->g[0] < 2) {
        if (piVar3->g[0] == 1) {
          uStack_40 = 2;
        }
        else {
          uStack_40 = 1;
        }
      }
      else {
        uStack_40 = 4;
      }
      piVar3->g[0] = piVar3->g[0] - 1;
    } while ((uStack_40 & 4) != 0);
    uStack_44 = 0x1000202;
    FUN_0018df40();
  }
  sysMemReadW(&uStack_44,piVar3->g[7] + 0xc30);
  if ((uStack_44 & 0x400) != 0) {
    if ((uStack_6c & 0x400) != 0) {
LAB_001e4fec:
      sysMemWriteB(piVar3->g[7] + 0xbe5,&uStack_74);
      uStack_74 = 0;
      sysMemWriteB(piVar3->g[7] + 0xbdd,&uStack_74);
      sysMemWriteB(piVar3->g[7] + 0xbe4,&uStack_74);
      if (param_1 != 0) {
        i960ReturnProc();
      }
      return 0;
    }
    if ((uStack_6c & 0x200) == 0) goto LAB_001e5848;
    sysMemReadW(&uStack_48,piVar3->g[7]);
    if ((uStack_48 & 0x40) == 0) {
      if ((uStack_44 & 0x800) != 0) goto LAB_001e5748;
LAB_001e5714:
      uRam016c4f9c = 0x3e0f5c29;
      uStack_48 = uRam016c4fa0;
      uStack_4c = uRam016c4eb0;
    }
    else {
      if ((uStack_44 & 0x800) != 0) goto LAB_001e5714;
LAB_001e5748:
      uStack_4c = uRam016c4ebc;
      uStack_48 = uRam016c4fac;
    }
    uStack_44 = 0xa001414;
    FUN_0018df40();
    FUN_0018df40(uStack_48);
    FUN_0018df40(uStack_4c);
    uStack_54 = FUN_0018e100();
    fStack_58 = 1.12104e-44;
    uStack_50 = 0x50e098;
    do {
      sysMemReadW(&uStack_48,uStack_50);
      uStack_44 = 0x9801313;
      FUN_0018df40();
      FUN_0018df40(uStack_48);
      FUN_0018df40(uStack_54);
      uStack_48 = FUN_0018e100();
      sysMemWriteW(uStack_50,&uStack_48);
      uStack_50 = uStack_50 + 0xc;
      if ((uint)fStack_58 < 2) {
        if (fStack_58 == 1.4013e-45) {
          uStack_40 = 2;
        }
        else {
          uStack_40 = 1;
        }
      }
      else {
        uStack_40 = 4;
      }
      fStack_58 = (float)((int)fStack_58 + -1);
    } while ((uStack_40 & 4) != 0);
  }
LAB_001e5848:
  if ((uint)fStack_60 < 9) {
    if (fStack_60 == 1.12104e-44) {
      uStack_40 = 2;
    }
    else {
      uStack_40 = 1;
    }
  }
  else {
    uStack_40 = 4;
  }
  if ((uStack_40 & 2) == 0) {
    if ((uint)fStack_60 < 5) {
      if (fStack_60 == 5.60519e-45) {
        uStack_40 = 2;
      }
      else {
        uStack_40 = 1;
      }
    }
    else {
      uStack_40 = 4;
    }
    if ((uStack_40 & 2) == 0) {
      fStack_60 = 1.4013e-45;
    }
    else {
      fStack_60 = 2.8026e-45;
    }
  }
  else {
    fStack_60 = 4.2039e-45;
  }
  uStack_44 = 0x800101;
  FUN_0018df40();
  uStack_70 = 0x50e000;
  uStack_4c = 0x50e0f0;
  uStack_6c = piVar3->g[7] + 0xbe8;
  uStack_50 = uStack_68;
  uStack_54 = 0xc;
  sysMemReadW(piVar3->g + 4,piVar3->g[7]);
  sysMemReadW(&fStack_58,piVar3->g[7] + 0x1a4);
  sysMemReadW(&fStack_5c,piVar3->g[7] + 0xc30);
  piVar3->g[3] = 0;
  do {
    if ((((uint)fStack_58 & 0x100000) == 0) && (((uint)fStack_5c & 0x40) == 0)) {
LAB_001e59f0:
      uStack_44 = 0x2a005454;
      FUN_0018df40();
      sysMemReadS(&sStack_18,uStack_70);
      piVar3->g[0] = (int)sStack_18;
      piVar3->g[0] = -piVar3->g[0];
      sysMemReadS(&sStack_1a,uStack_70 + 4);
      piVar3->g[1] = (int)sStack_1a;
      piVar3->g[1] = -piVar3->g[1];
      sysMemReadS(&sStack_1c,uStack_70 + 8);
      piVar3->g[2] = (int)sStack_1c;
      piVar3->g[2] = -piVar3->g[2];
      FUN_0018de40(piVar3->g);
      sysMemReadS(&sStack_1e,uStack_4c + 8);
      piVar3->g[0] = (int)sStack_1e;
      sysMemReadS(&sStack_20,uStack_4c + 4);
      piVar3->g[1] = (int)sStack_20;
      sysMemReadS(&sStack_22,uStack_4c);
      piVar3->g[2] = (int)sStack_22;
      FUN_0018de40(piVar3->g);
      sysMemReadS(&sStack_24,uStack_6c + 2);
      piVar3->g[0] = (int)sStack_24;
      sysMemReadS(&sStack_26,uStack_6c);
      piVar3->g[1] = (int)sStack_26;
      sysMemReadS(&sStack_28,uStack_6c + 4);
      piVar3->g[2] = (int)sStack_28;
      FUN_0018de40(piVar3->g);
      uStack_2c = FUN_0018e100();
      *puVar5 = (int)(short)uStack_2c;
      uStack_30 = FUN_0018e100();
      piVar3->g[1] = (int)(short)uStack_30;
      uStack_34 = FUN_0018e100();
      piVar3->g[2] = (int)(short)uStack_34;
      if (uStack_54 < 9) {
        if (uStack_54 == 8) {
          uStack_40 = 2;
        }
        else {
          uStack_40 = 1;
        }
      }
      else {
        uStack_40 = 4;
      }
      if ((uStack_40 & 5) == 0) {
        if ((int)*puVar5 < 1) {
          if (*puVar5 == 0) {
            uStack_40 = 2;
          }
          else {
            uStack_40 = 1;
          }
        }
        else {
          uStack_40 = 4;
        }
        if ((uStack_40 & 3) != 0) goto LAB_001e6110;
        piVar3->g[0] = piVar3->g[0] >> ((uint)fStack_60 & 0x1f);
        sysMemWriteS(uStack_50 + 4,piVar3->g);
      }
      else {
LAB_001e6110:
        *puVar5 = -*puVar5;
        piVar3->g[0] = piVar3->g[0] >> ((uint)fStack_60 & 0x1f);
        sysMemWriteS(uStack_50 + 4,piVar3->g);
      }
      piVar3->g[1] = piVar3->g[1] >> ((uint)fStack_60 & 0x1f);
      sysMemWriteS(uStack_50,piVar3->g + 1);
      piVar3->g[2] = -piVar3->g[2];
      piVar3->g[2] = piVar3->g[2] >> ((uint)fStack_60 & 0x1f);
      sysMemWriteS(uStack_50 + 8,piVar3->g + 2);
      *puVar5 = -*puVar5;
      piVar3->g[0] = piVar3->g[0] >> ((uint)fStack_60 & 0x1f);
      sysMemWriteS(uStack_50 + 4,piVar3->g);
      piVar3->g[1] = piVar3->g[1] >> ((uint)fStack_60 & 0x1f);
      sysMemWriteS(uStack_50,piVar3->g + 1);
      piVar3->g[2] = -piVar3->g[2];
      piVar3->g[2] = piVar3->g[2] >> ((uint)fStack_60 & 0x1f);
      sysMemWriteS(uStack_50 + 8,piVar3->g + 2);
    }
    else {
      if (uStack_54 < 9) {
        if (uStack_54 == 8) {
          uStack_40 = 2;
        }
        else {
          uStack_40 = 1;
        }
      }
      else {
        uStack_40 = 4;
      }
      if ((uStack_40 & 1) != 0) goto LAB_001e59f0;
      sysMemWriteS(uStack_50,piVar3->g + 3);
      sysMemWriteS(uStack_50 + 4,piVar3->g + 3);
      sysMemWriteS(uStack_50 + 8,piVar3->g + 3);
    }
    uStack_70 = uStack_70 + 0xc;
    uStack_50 = uStack_50 + 0xc;
    uStack_6c = uStack_6c + 6;
    uStack_4c = uStack_4c + 0xc;
    if (uStack_54 < 2) {
      if (uStack_54 == 1) {
        uStack_40 = 2;
      }
      else {
        uStack_40 = 1;
      }
    }
    else {
      uStack_40 = 4;
    }
    uStack_54 = uStack_54 - 1;
  } while ((uStack_40 & 4) != 0);
  uStack_44 = 0xb801717;
  fStack_60 = (float)(1 << ((uint)fStack_60 & 0x1f));
  FUN_0018df40();
  FUN_0018df40(fStack_60);
  fStack_60 = (float)FUN_0018e100();
  uStack_48 = 0x3f800000;
  fStack_60 = 1.0 / fStack_60;
  uStack_54 = 0x18;
  do {
    sysMemReadW(&fStack_58,uStack_70);
    sysMemReadW(&fStack_5c,uStack_4c);
    fStack_58 = (fStack_5c - fStack_58) * fStack_60;
    sysMemWriteW(uStack_50,&fStack_58);
    uStack_4c = uStack_4c + 4;
    uStack_50 = uStack_50 + 4;
    uStack_70 = uStack_70 + 4;
    if (uStack_54 < 2) {
      if (uStack_54 == 1) {
        uStack_40 = 2;
      }
      else {
        uStack_40 = 1;
      }
    }
    else {
      uStack_40 = 4;
    }
    uStack_54 = uStack_54 - 1;
  } while ((uStack_40 & 4) != 0);
  uStack_44 = 0x1000202;
  FUN_0018df40();
LAB_001e4d14:
  if (param_1 == 0) {
    return 0;
  }
  i960ReturnProc();
  return 0;
}

