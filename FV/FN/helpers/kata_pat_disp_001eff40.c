/* helper kata_pat_disp @ 001eff40, called (depth 1) from rob_disp */

/* WARNING: Removing unreachable block (ram,0x001f10f4) */
/* WARNING: Removing unreachable block (ram,0x001f0728) */
/* WARNING: Removing unreachable block (ram,0x001effe0) */
/* WARNING: Removing unreachable block (ram,0x001f0d00) */

undefined8 kata_pat_disp(int param_1)

{
  i960_regs *piVar1;
  float fVar2;
  uint uVar3;
  float fStack_84;
  float fStack_80;
  undefined *puStack_7c;
  float fStack_78;
  uint uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  undefined *puStack_54;
  uint uStack_50;
  ushort uStack_4a;
  ushort uStack_48;
  ushort uStack_46;
  ushort uStack_44;
  ushort uStack_42;
  short sStack_40;
  short sStack_3e;
  short sStack_3c;
  ushort uStack_3a;
  short sStack_38;
  short sStack_36;
  short sStack_34;
  short sStack_32;
  short sStack_30;
  ushort uStack_2e;
  short sStack_2c;
  ushort uStack_2a;
  ushort uStack_28;
  ushort uStack_26;
  ushort uStack_24;
  ushort uStack_22;
  short sStack_20;
  short sStack_1e;
  short sStack_1c;
  ushort uStack_1a;
  short sStack_18;
  short sStack_16;
  short sStack_14;
  short sStack_12;
  short sStack_10;
  ushort uStack_e;
  short sStack_c;
  byte bStack_9;
  byte bStack_8;
  byte bStack_7;
  byte bStack_6;
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  puStack_54 = &DAT_21804343;
  FUN_0018df40();
  puStack_54 = (undefined *)0x3;
  FUN_0018df40();
  piVar1->g[6] = uRam016b7614;
  sysMemReadB(&bStack_1,piVar1->g[7] + 4);
  fStack_58 = (float)(uint)bStack_1;
  if (bStack_1 == 0) {
    uStack_50 = 2;
  }
  else {
    uStack_50 = 4;
  }
  if ((uStack_50 & 2) == 0) {
    fStack_64 = 1.34525e-43;
    piVar1->g[6] = piVar1->g[6] + 0x60;
  }
  puStack_54 = (undefined *)0x9801313;
  FUN_0018df40();
  FUN_0018df40(puStack_54);
  FUN_0018df40(puStack_54);
  puStack_54 = (undefined *)FUN_0018e100();
  sysMemReadT(&fStack_80,piVar1->g[7] + 0x20c);
  sysMemReadT(&fStack_70,piVar1->g[7] + 500);
  puStack_54 = (undefined *)0x13802727;
  fStack_84 = (float)puStack_7c - fStack_6c;
  fStack_64 = fStack_78 - fStack_68;
  fStack_60 = fStack_80 - fStack_70;
  FUN_0018df40();
  FUN_0018df40(fStack_64);
  FUN_0018df40(fStack_60);
  uStack_5c = FUN_0018e100();
  sysMemWriteS(piVar1->g[6] + 0xaca,&uStack_5c);
  puStack_54 = (undefined *)0x12002424;
  FUN_0018df40();
  FUN_0018df40(uStack_5c);
  FUN_0018df40(fStack_60);
  fStack_58 = (float)FUN_0018e100();
  puStack_54 = (undefined *)0x12802525;
  FUN_0018df40();
  FUN_0018df40(uStack_5c);
  FUN_0018df40(fStack_64);
  fVar2 = (float)FUN_0018e100();
  fStack_58 = fStack_58 + fVar2;
  puStack_54 = (undefined *)0x13802727;
  FUN_0018df40();
  FUN_0018df40(fStack_58);
  FUN_0018df40(fStack_84);
  fStack_84 = (float)FUN_0018e100();
  sysMemWriteS(piVar1->g[6] + 0xac8,&fStack_84);
  sysMemReadB(&bStack_2,piVar1->g[7] + 0x1b0);
  fStack_60 = (float)(uint)bStack_2;
  sysMemReadW(&fStack_60,(int)fStack_60 * 4 + 0x642147c);
  sysMemReadW(piVar1->g + 3,(uint)fStack_60);
  sysMemReadS(&sStack_c,piVar1->g[3]);
  fStack_80 = -NAN;
  fStack_84 = (float)(int)sStack_c;
  if ((int)fStack_84 < 0) {
    if (fStack_84 == -NAN) {
      uStack_50 = 2;
    }
    else {
      uStack_50 = 1;
    }
  }
  else {
    uStack_50 = 4;
  }
  if ((uStack_50 & 2) == 0) {
    sysMemReadS(&uStack_e,piVar1->g[7] + 0x1f48);
    fStack_84 = (float)(uint)uStack_e;
    if ((uStack_e & 0x40) != 0) goto LAB_001f0754;
    puStack_54 = (undefined *)0x800101;
    FUN_0018df40();
    puStack_54 = (undefined *)0x1800303;
    FUN_0018df40();
    puStack_54 = (undefined *)0x34806969;
    FUN_0018df40();
    sysMemReadB(&bStack_3,piVar1->g[7] + 4);
    if ((bStack_3 & 1) == 0) {
      puStack_54 = (undefined *)0x3a48;
    }
    else {
      puStack_54 = (undefined *)0x3b48;
    }
    FUN_0018df40(puStack_54);
    sysMemReadS(&sStack_10,piVar1->g[7] + 0x26);
    puStack_54 = (undefined *)(int)sStack_10;
    FUN_0018df40();
    puStack_54 = (undefined *)0x3000606;
    FUN_0018df40();
    sysMemReadT(&fStack_60,piVar1->g[7] + 0xd4);
    FUN_0018de40(&fStack_60);
    puStack_54 = (undefined *)0x7800f0f;
    FUN_0018df40();
    FUN_0018e080(&fStack_60);
    sysMemWriteT(piVar1->g[6] + 0xa9c,&fStack_60);
    puStack_54 = (undefined *)0x1000202;
    FUN_0018df40();
    sysMemReadS(&sStack_12,piVar1->g[6] + 0xac8);
    fStack_70 = (float)(int)sStack_12;
    sysMemReadS(&sStack_14,piVar1->g[6] + 0xaca);
    fStack_6c = (float)(int)sStack_14;
    sysMemReadT(&fStack_80,piVar1->g[6] + 0xa9c);
    puStack_54 = (undefined *)0x12002424;
    FUN_0018df40();
    FUN_0018df40(fStack_70);
    FUN_0018df40(puStack_7c);
    fStack_68 = (float)FUN_0018e100();
    puStack_54 = (undefined *)0x12002424;
    FUN_0018df40();
    FUN_0018df40(fStack_6c);
    FUN_0018df40(fStack_80);
    fStack_64 = (float)FUN_0018e100();
    puStack_54 = (undefined *)0x12802525;
    FUN_0018df40();
    FUN_0018df40(fStack_6c);
    FUN_0018df40(fStack_78);
    fStack_60 = (float)FUN_0018e100();
    puStack_54 = (undefined *)0x12802525;
    fStack_64 = fStack_64 + fStack_60;
    FUN_0018df40();
    FUN_0018df40(fStack_70);
    FUN_0018df40(fStack_64);
    fStack_64 = (float)FUN_0018e100();
    sysMemWriteW(piVar1->g[6] + 0xadc,&fStack_68);
    sysMemWriteW(piVar1->g[6] + 0xad8,&fStack_64);
    fStack_60 = fStack_68 + fStack_64;
    sysMemWriteW(piVar1->g[6] + 0xae0,&fStack_60);
    sysMemReadW(&fStack_84,piVar1->g[7] + 0xd4);
    sysMemReadW(&fStack_80,piVar1->g[6] + 0xae0);
    puStack_7c = (undefined *)0x0;
    if (((uint)fStack_80 & 0x80000000) == 0) {
      puStack_54 = (undefined *)0xd001a1a;
      fStack_78 = fStack_80 * fStack_80;
      fStack_84 = fStack_84 * fStack_84 - fStack_80 * fStack_80;
      FUN_0018df40();
      FUN_0018df40(fStack_84);
      fStack_84 = (float)FUN_0018e100();
      puStack_54 = (undefined *)0x13802727;
      FUN_0018df40();
      FUN_0018df40(fStack_84);
      FUN_0018df40(fStack_80);
      puStack_7c = (undefined *)FUN_0018e100();
      sysMemReadS(&sStack_16,piVar1->g[3] + 2);
      puStack_54 = (undefined *)(int)sStack_16;
      if ((ulong)(long)sStack_16 < (ulong)(long)(int)puStack_7c) {
        uStack_50 = 4;
      }
      else if ((long)sStack_16 == (long)(int)puStack_7c) {
        uStack_50 = 2;
      }
      else {
        uStack_50 = 1;
      }
      if ((uStack_50 & 1) == 0) {
        puStack_7c = puStack_54;
      }
    }
    sysMemReadS(&sStack_18,piVar1->g[6] + 0xaba);
    fStack_84 = (float)(int)sStack_18;
    puStack_7c = puStack_7c + (int)fStack_84;
    sysMemWriteS(piVar1->g[6] + 0xac0,&puStack_7c);
    sysMemReadS(&uStack_1a,piVar1->g[3]);
    puStack_54 = (undefined *)0x800101;
    uStack_74 = (uint)uStack_1a;
    FUN_0018df40();
    puStack_54 = (undefined *)0x9801313;
    FUN_0018df40();
    FUN_0018df40(puStack_54);
    FUN_0018df40(puStack_54);
    FUN_0018e100();
    puStack_54 = (undefined *)0x1800303;
    FUN_0018df40();
    puStack_54 = (undefined *)0x3000606;
    FUN_0018df40();
    sysMemReadT(&fStack_60,piVar1->g[6] + 0xa90);
    FUN_0018de40(&fStack_60);
    puStack_54 = (undefined *)0x5000a0a;
    FUN_0018df40();
    sysMemReadS(&sStack_1c,piVar1->g[6] + 0xabe);
    puStack_54 = (undefined *)(int)sStack_1c;
    FUN_0018df40();
    puStack_54 = (undefined *)0x4800909;
    FUN_0018df40();
    sysMemReadS(&sStack_1e,piVar1->g[6] + 0xabc);
    puStack_54 = (undefined *)-(int)sStack_1e;
    FUN_0018df40(puStack_54);
    puStack_54 = (undefined *)0x4000808;
    FUN_0018df40();
    sysMemReadS(&sStack_20,piVar1->g[6] + 0xac0);
    puStack_54 = (undefined *)(int)sStack_20;
    FUN_0018df40();
    puStack_54 = (undefined *)0x2800505;
    FUN_0018df40();
    puStack_54 = (undefined *)(piVar1->g[7] + 0x1ac0);
    FUN_0018e080(&fStack_60);
    sysMemWriteT((uint)puStack_54,&fStack_60);
    FUN_0018e080(&fStack_60);
    sysMemWriteT((uint)(puStack_54 + 0xc),&fStack_60);
    FUN_0018e080(&fStack_60);
    sysMemWriteT((uint)(puStack_54 + 0x18),&fStack_60);
    FUN_0018e080(&fStack_60);
    sysMemWriteT((uint)(puStack_54 + 0x24),&fStack_60);
    puStack_54 = (undefined *)0x23004646;
    FUN_0018df40();
    puStack_54 = (undefined *)0x3;
    FUN_0018df40();
    sysMemReadB(&bStack_4,piVar1->g[7] + 4);
    piVar1->g[1] = (uint)bStack_4;
    piVar1->g[0] = uStack_74;
    sysMemReadW(&puStack_54,piVar1->g[7] + 0x1a4);
    if (((uint)puStack_54 & 0x4000000) == 0) {
LAB_001f06cc:
      sysMemReadW(&puStack_54,piVar1->g[7] + 0x720);
      if (((uint)puStack_54 & 4) == 0) {
LAB_001f06ec:
        set_obj(0);
      }
      else {
        sysMemReadS(&uStack_24,piVar1->g[7] + 0x1aa);
        puStack_54 = (undefined *)(uint)uStack_24;
        if (uStack_24 < 5) {
          if (uStack_24 == 4) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = 1;
          }
        }
        else {
          uStack_50 = 4;
        }
        if (((uStack_50 & 4) != 0) || ((uStack_24 & 1) == 0)) goto LAB_001f06ec;
        piVar1->g[2] = 0x802000;
        set_obj_thd(0);
      }
      uVar3 = piVar1->g[3];
    }
    else {
      sysMemReadS(&uStack_22,piVar1->g[7] + 0x1aa);
      puStack_54 = (undefined *)(uint)uStack_22;
      if (uStack_22 < 5) {
        if (uStack_22 == 4) {
          uStack_50 = 2;
        }
        else {
          uStack_50 = 1;
        }
      }
      else {
        uStack_50 = 4;
      }
      if ((uStack_50 & 4) != 0) goto LAB_001f06cc;
      piVar1->g[2] = 0x800000;
      set_obj_thd(0);
      uVar3 = piVar1->g[3];
    }
    sysMemReadS(&uStack_26,uVar3 + 0x16);
    uStack_74 = (uint)uStack_26;
    if (uStack_26 == 0) {
      uStack_50 = 2;
    }
    else {
      uStack_50 = 4;
    }
    if ((uStack_50 & 2) == 0) {
      puStack_54 = (undefined *)0x3000606;
      FUN_0018df40();
      sysMemReadT(&fStack_60,piVar1->g[3] + 0x18);
      FUN_0018de40(&fStack_60);
      sysMemWriteS(piVar1->g[7] + 0x1b28,&uStack_74);
      sysMemReadB(&bStack_5,piVar1->g[7] + 4);
      piVar1->g[1] = (uint)bStack_5;
      piVar1->g[0] = uStack_74;
      sysMemReadW(&puStack_54,piVar1->g[7] + 0x1a4);
      if (((uint)puStack_54 & 0x4000000) != 0) {
        sysMemReadS(&uStack_28,piVar1->g[7] + 0x1aa);
        puStack_54 = (undefined *)(uint)uStack_28;
        if (uStack_28 < 5) {
          if (uStack_28 == 4) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = 1;
          }
        }
        else {
          uStack_50 = 4;
        }
        if ((uStack_50 & 4) == 0) {
          piVar1->g[2] = 0x800000;
          set_obj_thd(0);
          goto LAB_001f0740;
        }
      }
      sysMemReadW(&puStack_54,piVar1->g[7] + 0x720);
      if (((uint)puStack_54 & 4) != 0) {
        sysMemReadS(&uStack_2a,piVar1->g[7] + 0x1aa);
        puStack_54 = (undefined *)(uint)uStack_2a;
        if (uStack_2a < 5) {
          if (uStack_2a == 4) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = 1;
          }
        }
        else {
          uStack_50 = 4;
        }
        if (((uStack_50 & 4) == 0) && ((uStack_2a & 1) != 0)) {
          piVar1->g[2] = 0x802000;
          set_obj_thd(0);
          goto LAB_001f0740;
        }
      }
      set_obj(0);
    }
LAB_001f0740:
    puStack_54 = (undefined *)0x1000202;
    FUN_0018df40();
    uVar3 = piVar1->g[7];
  }
  else {
LAB_001f0754:
    puStack_54 = (undefined *)0x0;
    sysMemWriteS(piVar1->g[7] + 0x1b28,&puStack_54);
    uVar3 = piVar1->g[7];
  }
  sysMemReadB(&bStack_6,uVar3 + 0x1b0);
  fStack_60 = (float)(uint)bStack_6;
  sysMemReadW(&fStack_60,(int)fStack_60 * 4 + 0x642147c);
  sysMemReadW(piVar1->g + 3,(int)fStack_60 + 4);
  sysMemReadS(&sStack_2c,piVar1->g[3]);
  fStack_80 = -NAN;
  fStack_84 = (float)(int)sStack_2c;
  if (sStack_2c == -1) {
    uStack_50 = 2;
  }
  else {
    uStack_50 = 1;
  }
  if ((uStack_50 & 2) == 0) {
    sysMemReadS(&uStack_2e,piVar1->g[7] + 0x1f48);
    fStack_84 = (float)(uint)uStack_2e;
    if ((uStack_2e & 8) == 0) {
      puStack_54 = (undefined *)0x800101;
      FUN_0018df40();
      puStack_54 = (undefined *)0x1800303;
      FUN_0018df40();
      puStack_54 = (undefined *)0x34806969;
      FUN_0018df40();
      sysMemReadB(&bStack_7,piVar1->g[7] + 4);
      if ((bStack_7 & 1) == 0) {
        puStack_54 = (undefined *)0x3a24;
      }
      else {
        puStack_54 = (undefined *)0x3b24;
      }
      FUN_0018df40(puStack_54);
      sysMemReadS(&sStack_30,piVar1->g[7] + 0x26);
      puStack_54 = (undefined *)(int)sStack_30;
      FUN_0018df40();
      puStack_54 = (undefined *)0x3000606;
      FUN_0018df40();
      sysMemReadT(&fStack_60,piVar1->g[7] + 0xb0);
      FUN_0018de40(&fStack_60);
      puStack_54 = (undefined *)0x7800f0f;
      FUN_0018df40();
      FUN_0018e080(&fStack_60);
      sysMemWriteT(piVar1->g[6] + 0xaa8,&fStack_60);
      puStack_54 = (undefined *)0x1000202;
      FUN_0018df40();
      sysMemReadS(&sStack_32,piVar1->g[6] + 0xac8);
      fStack_70 = (float)(int)sStack_32;
      sysMemReadS(&sStack_34,piVar1->g[6] + 0xaca);
      fStack_6c = (float)(int)sStack_34;
      sysMemReadT(&fStack_80,piVar1->g[6] + 0xaa8);
      puStack_54 = (undefined *)0x12002424;
      FUN_0018df40();
      FUN_0018df40(fStack_70);
      FUN_0018df40(puStack_7c);
      fStack_68 = (float)FUN_0018e100();
      puStack_54 = (undefined *)0x12002424;
      FUN_0018df40();
      FUN_0018df40(fStack_6c);
      FUN_0018df40(fStack_80);
      fStack_64 = (float)FUN_0018e100();
      puStack_54 = (undefined *)0x12802525;
      FUN_0018df40();
      FUN_0018df40(fStack_6c);
      FUN_0018df40(fStack_78);
      fStack_60 = (float)FUN_0018e100();
      puStack_54 = (undefined *)0x12802525;
      fStack_64 = fStack_64 + fStack_60;
      FUN_0018df40();
      FUN_0018df40(fStack_70);
      FUN_0018df40(fStack_64);
      fStack_64 = (float)FUN_0018e100();
      sysMemWriteW(piVar1->g[6] + 0xad0,&fStack_68);
      sysMemWriteW(piVar1->g[6] + 0xacc,&fStack_64);
      fStack_60 = fStack_68 + fStack_64;
      sysMemWriteW(piVar1->g[6] + 0xad4,&fStack_60);
      sysMemReadW(&fStack_84,piVar1->g[7] + 0xb0);
      sysMemReadW(&fStack_80,piVar1->g[6] + 0xad4);
      puStack_7c = (undefined *)0x0;
      if (((uint)fStack_80 & 0x80000000) == 0) {
        puStack_54 = (undefined *)0xd001a1a;
        fStack_78 = fStack_80 * fStack_80;
        fStack_84 = fStack_84 * fStack_84 - fStack_80 * fStack_80;
        FUN_0018df40();
        FUN_0018df40(fStack_84);
        fStack_84 = (float)FUN_0018e100();
        puStack_54 = (undefined *)0x13802727;
        FUN_0018df40();
        FUN_0018df40(fStack_84);
        FUN_0018df40(fStack_80);
        puStack_7c = (undefined *)FUN_0018e100();
        sysMemReadS(&sStack_36,piVar1->g[3] + 2);
        puStack_54 = (undefined *)(int)sStack_36;
        if ((ulong)(long)sStack_36 < (ulong)(long)(int)puStack_7c) {
          uStack_50 = 4;
        }
        else if ((long)sStack_36 == (long)(int)puStack_7c) {
          uStack_50 = 2;
        }
        else {
          uStack_50 = 1;
        }
        if ((uStack_50 & 1) == 0) {
          puStack_7c = puStack_54;
        }
      }
      sysMemReadS(&sStack_38,piVar1->g[6] + 0xab4);
      fStack_84 = (float)(int)sStack_38;
      puStack_7c = (undefined *)((int)fStack_84 - (int)puStack_7c);
      sysMemWriteS(piVar1->g[6] + 0xac0,&puStack_7c);
      sysMemReadS(&uStack_3a,piVar1->g[3]);
      puStack_54 = (undefined *)0x800101;
      uStack_74 = (uint)uStack_3a;
      FUN_0018df40();
      puStack_54 = (undefined *)0x9801313;
      FUN_0018df40();
      FUN_0018df40(puStack_54);
      FUN_0018df40(puStack_54);
      FUN_0018e100();
      puStack_54 = (undefined *)0x1800303;
      FUN_0018df40();
      puStack_54 = (undefined *)0x3000606;
      FUN_0018df40();
      sysMemReadT(&fStack_60,piVar1->g[6] + 0xa84);
      FUN_0018de40(&fStack_60);
      puStack_54 = (undefined *)0x5000a0a;
      FUN_0018df40();
      sysMemReadS(&sStack_3c,piVar1->g[6] + 0xab8);
      puStack_54 = (undefined *)(int)sStack_3c;
      FUN_0018df40();
      puStack_54 = (undefined *)0x4800909;
      FUN_0018df40();
      sysMemReadS(&sStack_3e,piVar1->g[6] + 0xab6);
      puStack_54 = (undefined *)(int)sStack_3e;
      FUN_0018df40();
      puStack_54 = (undefined *)0x4000808;
      FUN_0018df40();
      sysMemReadS(&sStack_40,piVar1->g[6] + 0xac0);
      puStack_54 = (undefined *)(int)sStack_40;
      FUN_0018df40();
      puStack_54 = (undefined *)0x2800505;
      FUN_0018df40();
      puStack_54 = (undefined *)(piVar1->g[7] + 0x1af0);
      FUN_0018e080(&fStack_60);
      sysMemWriteT((uint)puStack_54,&fStack_60);
      FUN_0018e080(&fStack_60);
      sysMemWriteT((uint)(puStack_54 + 0xc),&fStack_60);
      FUN_0018e080(&fStack_60);
      sysMemWriteT((uint)(puStack_54 + 0x18),&fStack_60);
      FUN_0018e080(&fStack_60);
      sysMemWriteT((uint)(puStack_54 + 0x24),&fStack_60);
      puStack_54 = (undefined *)0x23004646;
      FUN_0018df40();
      puStack_54 = (undefined *)0x3;
      FUN_0018df40();
      sysMemReadB(&bStack_8,piVar1->g[7] + 4);
      piVar1->g[1] = (uint)bStack_8;
      piVar1->g[0] = uStack_74;
      sysMemReadW(&puStack_54,piVar1->g[7] + 0x1a4);
      if (((uint)puStack_54 & 0x4000000) == 0) {
LAB_001f0ca8:
        sysMemReadW(&puStack_54,piVar1->g[7] + 0x720);
        if (((uint)puStack_54 & 4) == 0) {
LAB_001f0cc8:
          set_obj(0);
        }
        else {
          sysMemReadS(&uStack_44,piVar1->g[7] + 0x1aa);
          puStack_54 = (undefined *)(uint)uStack_44;
          if (uStack_44 < 5) {
            if (uStack_44 == 4) {
              uStack_50 = 2;
            }
            else {
              uStack_50 = 1;
            }
          }
          else {
            uStack_50 = 4;
          }
          if (((uStack_50 & 4) != 0) || ((uStack_44 & 1) == 0)) goto LAB_001f0cc8;
          piVar1->g[2] = 0x802000;
          set_obj_thd(0);
        }
        uVar3 = piVar1->g[3];
      }
      else {
        sysMemReadS(&uStack_42,piVar1->g[7] + 0x1aa);
        puStack_54 = (undefined *)(uint)uStack_42;
        if (uStack_42 < 5) {
          if (uStack_42 == 4) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = 1;
          }
        }
        else {
          uStack_50 = 4;
        }
        if ((uStack_50 & 4) != 0) goto LAB_001f0ca8;
        piVar1->g[2] = 0x800000;
        set_obj_thd(0);
        uVar3 = piVar1->g[3];
      }
      sysMemReadS(&uStack_46,uVar3 + 0x16);
      uStack_74 = (uint)uStack_46;
      if (uStack_46 == 0) {
        uStack_50 = 2;
      }
      else {
        uStack_50 = 4;
      }
      if ((uStack_50 & 2) == 0) {
        puStack_54 = (undefined *)0x3000606;
        FUN_0018df40();
        sysMemReadT(&fStack_60,piVar1->g[3] + 0x18);
        FUN_0018de40(&fStack_60);
        sysMemWriteS(piVar1->g[7] + 0x1b2a,&uStack_74);
        sysMemReadB(&bStack_9,piVar1->g[7] + 4);
        piVar1->g[1] = (uint)bStack_9;
        piVar1->g[0] = uStack_74;
        sysMemReadW(&puStack_54,piVar1->g[7] + 0x1a4);
        if (((uint)puStack_54 & 0x4000000) != 0) {
          sysMemReadS(&uStack_48,piVar1->g[7] + 0x1aa);
          puStack_54 = (undefined *)(uint)uStack_48;
          if (uStack_48 < 5) {
            if (uStack_48 == 4) {
              uStack_50 = 2;
            }
            else {
              uStack_50 = 1;
            }
          }
          else {
            uStack_50 = 4;
          }
          if ((uStack_50 & 4) == 0) {
            piVar1->g[2] = 0x800000;
            set_obj_thd(0);
            goto LAB_001f0d1c;
          }
        }
        sysMemReadW(&puStack_54,piVar1->g[7] + 0x720);
        if (((uint)puStack_54 & 4) != 0) {
          sysMemReadS(&uStack_4a,piVar1->g[7] + 0x1aa);
          puStack_54 = (undefined *)(uint)uStack_4a;
          if (uStack_4a < 5) {
            if (uStack_4a == 4) {
              uStack_50 = 2;
            }
            else {
              uStack_50 = 1;
            }
          }
          else {
            uStack_50 = 4;
          }
          if (((uStack_50 & 4) == 0) && ((uStack_4a & 1) != 0)) {
            piVar1->g[2] = 0x802000;
            set_obj_thd(0);
            goto LAB_001f0d1c;
          }
        }
        set_obj(0);
      }
LAB_001f0d1c:
      puStack_54 = (undefined *)0x1000202;
      FUN_0018df40();
      goto LAB_001f0d48;
    }
  }
  puStack_54 = (undefined *)0x0;
  sysMemWriteS(piVar1->g[7] + 0x1b2a,&puStack_54);
LAB_001f0d48:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

