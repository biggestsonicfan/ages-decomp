/* helper kosi_mino_disp @ 001ee200, called (depth 1) from rob_disp */

/* WARNING: Removing unreachable block (ram,0x001ee328) */

undefined8 kosi_mino_disp(int param_1)

{
  bool bVar1;
  short sVar2;
  i960_regs *piVar3;
  uint uVar4;
  float fVar5;
  ulong uVar6;
  int iVar7;
  int iStack_74;
  int iStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  int iStack_60;
  float fStack_58;
  float fStack_54;
  uint auStack_50 [2];
  int iStack_48;
  undefined *puStack_44;
  uint uStack_40;
  ushort uStack_36;
  ushort uStack_34;
  ushort uStack_32;
  ushort uStack_30;
  ushort uStack_2e;
  ushort uStack_2c;
  ushort uStack_2a;
  ushort uStack_28;
  ushort uStack_26;
  short sStack_24;
  short sStack_22;
  ushort uStack_20;
  ushort uStack_1e;
  ushort uStack_1c;
  short sStack_1a;
  short sStack_18;
  short sStack_16;
  short sStack_14;
  short sStack_12;
  short sStack_10;
  short sStack_e;
  short sStack_c;
  ushort uStack_a;
  byte bStack_7;
  byte bStack_6;
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar3 = i960GetRegs();
  puStack_44 = &DAT_21804343;
  FUN_0018df40();
  puStack_44 = (undefined *)0x3;
  FUN_0018df40();
  sysMemReadB(&bStack_1,piVar3->g[7] + 0x1b0);
  uVar4 = (uint)bStack_1;
  piVar3->g[9] = uVar4 * 0x10 + 0x6421de0;
  if (uVar4 < 2) {
    if (uVar4 == 1) {
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
    if (uVar4 < 0xf) {
      if (uVar4 == 0xe) {
        uStack_40 = 2;
      }
      else {
        uStack_40 = 1;
      }
    }
    else {
      uStack_40 = 4;
    }
    if ((uStack_40 & 2) != 0) goto LAB_001ee37c;
    if (uVar4 == 0) {
      uStack_40 = 2;
    }
    else {
      uStack_40 = 4;
    }
    if ((uStack_40 & 2) != 0) goto LAB_001ee37c;
    if (uVar4 < 0xe) {
      if (uVar4 == 0xd) {
        uStack_40 = 2;
      }
      else {
        uStack_40 = 1;
      }
    }
    else {
      uStack_40 = 4;
    }
    if ((uStack_40 & 5) == 0) goto LAB_001ee37c;
  }
  else {
LAB_001ee37c:
    sysMemReadS(&uStack_a,piVar3->g[7] + 0x1f48);
    if ((uStack_a & 0x200) == 0) {
      puStack_44 = (undefined *)0x800101;
      sRam016c1150 = 0;
      sRam016c1152 = sRam016c1150;
      sRam016c1156 = sRam016c1150;
      sRam016c1158 = sRam016c1150;
      FUN_0018df40();
      puStack_44 = (undefined *)0x1800303;
      FUN_0018df40();
      puStack_44 = (undefined *)0x34806969;
      FUN_0018df40();
      sysMemReadB(&bStack_2,piVar3->g[7] + 4);
      if ((bStack_2 & 1) == 0) {
        puStack_44 = (undefined *)0x3a9c;
      }
      else {
        puStack_44 = (undefined *)0x3b9c;
      }
      FUN_0018df40(puStack_44);
      puStack_44 = (undefined *)(int)sRam016c1168;
      FUN_0018df40(puStack_44);
      puStack_44 = (undefined *)0x3000606;
      FUN_0018df40();
      sysMemReadT(auStack_50,piVar3->g[7] + 0x128);
      FUN_0018de40(auStack_50);
      puStack_44 = (undefined *)0x7800f0f;
      FUN_0018df40();
      FUN_0018e080(auStack_50);
      sysMemWriteT(0x50a38c,auStack_50);
      puStack_44 = (undefined *)0x1000202;
      FUN_0018df40();
      sysMemReadT(&iStack_70,0x50a38c);
      sysMemReadS(&sStack_c,piVar3->g[7] + 0xad4);
      puStack_44 = (undefined *)0x12002424;
      iStack_60 = (int)sStack_c;
      FUN_0018df40();
      FUN_0018df40(iStack_60);
      FUN_0018df40(fStack_68);
      fStack_58 = (float)FUN_0018e100();
      puStack_44 = (undefined *)0x12802525;
      FUN_0018df40();
      FUN_0018df40(iStack_60);
      FUN_0018df40(fStack_6c);
      fStack_54 = (float)FUN_0018e100();
      puStack_44 = (undefined *)0x13802727;
      fRam016c1170 = fStack_58 + fStack_54;
      fStack_58 = fRam016c1170;
      FUN_0018df40();
      FUN_0018df40(fStack_58);
      FUN_0018df40(iStack_70);
      fStack_54 = (float)FUN_0018e100();
      sysMemWriteS(piVar3->g[7] + 0xad8,&fStack_54);
      puStack_44 = (undefined *)0x800101;
      FUN_0018df40();
      puStack_44 = (undefined *)0x1800303;
      FUN_0018df40();
      puStack_44 = (undefined *)0x34806969;
      FUN_0018df40();
      sysMemReadB(&bStack_3,piVar3->g[7] + 4);
      if ((bStack_3 & 1) == 0) {
        puStack_44 = (undefined *)0x3a78;
      }
      else {
        puStack_44 = (undefined *)0x3b78;
      }
      FUN_0018df40(puStack_44);
      puStack_44 = (undefined *)(int)sRam016c1168;
      FUN_0018df40(puStack_44);
      puStack_44 = (undefined *)0x3000606;
      FUN_0018df40();
      sysMemReadT(auStack_50,piVar3->g[7] + 0x104);
      FUN_0018de40(auStack_50);
      puStack_44 = (undefined *)0x7800f0f;
      FUN_0018df40();
      FUN_0018e080(auStack_50);
      sysMemWriteT(0x50a3a4,auStack_50);
      puStack_44 = (undefined *)0x1000202;
      FUN_0018df40();
      sysMemReadT(&iStack_70,0x50a3a4);
      sysMemReadS(&sStack_e,piVar3->g[7] + 0xad4);
      puStack_44 = (undefined *)0x12002424;
      iStack_60 = (int)sStack_e;
      FUN_0018df40();
      FUN_0018df40(iStack_60);
      FUN_0018df40(fStack_68);
      fStack_58 = (float)FUN_0018e100();
      puStack_44 = (undefined *)0x12802525;
      FUN_0018df40();
      FUN_0018df40(iStack_60);
      FUN_0018df40(fStack_6c);
      fStack_54 = (float)FUN_0018e100();
      puStack_44 = (undefined *)0x13802727;
      fRam016c1184 = fStack_58 + fStack_54;
      fStack_58 = fRam016c1184;
      FUN_0018df40();
      FUN_0018df40(fStack_58);
      FUN_0018df40(iStack_70);
      fStack_54 = (float)FUN_0018e100();
      sysMemWriteS(piVar3->g[7] + 0xade,&fStack_54);
      sysMemReadS(&sStack_10,piVar3->g[7] + 0xad4);
      sysMemReadS(&sStack_12,piVar3->g[7] + 0xada);
      iStack_48 = 0x8000;
      iStack_70 = -(int)sStack_12;
      uVar4 = 0x8000 - (iStack_70 - sStack_10);
      sRam016c114c = (short)uVar4;
      sVar2 = sRam016c114c;
      if ((uVar4 & 0x8000) != 0) {
        sVar2 = sRam016c1150;
        sRam016c1152 = sRam016c114c;
      }
      sRam016c1150 = sVar2;
      sysMemReadS(&sStack_14,piVar3->g[7] + 0xad4);
      sysMemReadS(&sStack_16,piVar3->g[7] + 0xae0);
      iStack_48 = 0x8000;
      iStack_70 = -(int)sStack_16;
      uVar4 = 0x8000 - (iStack_70 - sStack_14);
      sRam016c114e = (short)uVar4;
      sVar2 = sRam016c114e;
      if ((uVar4 & 0x8000) != 0) {
        sVar2 = sRam016c1156;
        sRam016c1158 = sRam016c114e;
      }
      sRam016c1156 = sVar2;
      puStack_44 = (undefined *)0x800101;
      FUN_0018df40();
      puStack_44 = (undefined *)0x9801313;
      FUN_0018df40();
      FUN_0018df40(puStack_44);
      FUN_0018df40(puStack_44);
      FUN_0018e100();
      puStack_44 = (undefined *)0x1800303;
      FUN_0018df40();
      puStack_44 = (undefined *)0x3000606;
      FUN_0018df40();
      sysMemReadT(auStack_50,0x50a324);
      FUN_0018de40(auStack_50);
      puStack_44 = (undefined *)0x5000a0a;
      FUN_0018df40();
      puStack_44 = (undefined *)(int)sRam016c1128;
      FUN_0018df40(puStack_44);
      puStack_44 = (undefined *)0x4800909;
      FUN_0018df40();
      puStack_44 = (undefined *)(int)sRam016c1126;
      FUN_0018df40(puStack_44);
      sVar2 = sRam016c1150;
      fStack_6c = (float)(int)sRam016c1156;
      sysMemReadS(&sStack_18,piVar3->g[7] + 0xad8);
      iStack_48 = 0x8000;
      puStack_44 = (undefined *)0x11002222;
      fStack_58 = (float)(sStack_18 + 0x8000);
      FUN_0018df40();
      FUN_0018df40(fStack_58);
      uVar6 = FUN_0018e100();
      fStack_68 = (float)uVar6;
      if ((uVar6 & 0xffffffff80000000) == 0) {
        puStack_44 = (undefined *)0xb801717;
        FUN_0018df40();
        FUN_0018df40(sVar2);
        fVar5 = (float)FUN_0018e100();
        puStack_44 = (undefined *)0xc001818;
        fVar5 = fVar5 * fStack_68;
        FUN_0018df40();
        FUN_0018df40(fVar5);
        iStack_74 = FUN_0018e100();
      }
      else {
        iStack_74 = 0;
      }
      puStack_44 = (undefined *)0x10802121;
      fStack_64 = (float)(int)sRam016c1150;
      FUN_0018df40();
      FUN_0018df40(fStack_58);
      uVar6 = FUN_0018e100();
      fStack_68 = (float)uVar6;
      if ((uVar6 & 0xffffffff80000000) == 0) {
        puStack_44 = (undefined *)0xb801717;
        FUN_0018df40();
        FUN_0018df40(fStack_64);
        fStack_64 = (float)FUN_0018e100();
        puStack_44 = (undefined *)0xc001818;
        fStack_64 = fStack_64 * fStack_68;
        FUN_0018df40();
        FUN_0018df40(fStack_64);
        fStack_64 = (float)FUN_0018e100();
      }
      else {
        fStack_64 = 0.0;
      }
      sRam016c1188 = SUB42(fStack_64,0);
      sysMemReadS(&sStack_1a,piVar3->g[7] + 0xade);
      iStack_48 = 0x8000;
      puStack_44 = (undefined *)0x11002222;
      fStack_58 = (float)(sStack_1a + 0x8000);
      FUN_0018df40();
      FUN_0018df40(fStack_58);
      uVar6 = FUN_0018e100();
      fStack_68 = (float)uVar6;
      if ((uVar6 & 0xffffffff80000000) == 0) {
        puStack_44 = (undefined *)0xb801717;
        FUN_0018df40();
        FUN_0018df40(fStack_6c);
        fStack_6c = (float)FUN_0018e100();
        puStack_44 = (undefined *)0xc001818;
        fStack_6c = fStack_6c * fStack_68;
        FUN_0018df40();
        FUN_0018df40(fStack_6c);
        fStack_6c = (float)FUN_0018e100();
      }
      else {
        fStack_6c = 0.0;
      }
      puStack_44 = (undefined *)0x10802121;
      fStack_64 = (float)(int)sRam016c1156;
      FUN_0018df40();
      FUN_0018df40(fStack_58);
      uVar6 = FUN_0018e100();
      fStack_68 = (float)(uVar6 ^ 0xffffffff80000000);
      if (((uVar6 ^ 0xffffffff80000000) & 0xffffffff80000000) == 0) {
        puStack_44 = (undefined *)0xb801717;
        FUN_0018df40();
        FUN_0018df40(fStack_64);
        fStack_64 = (float)FUN_0018e100();
        puStack_44 = (undefined *)0xc001818;
        fStack_64 = fStack_64 * fStack_68;
        FUN_0018df40();
        FUN_0018df40(fStack_64);
        fStack_64 = (float)FUN_0018e100();
      }
      else {
        fStack_64 = 0.0;
      }
      auStack_50[0] = (uint)sRam016c113c;
      sRam016c118c = SUB42(fStack_64,0);
      iStack_70 = (int)sRam016c1124;
      if (iStack_74 < (int)fStack_6c) {
        bVar1 = false;
      }
      else if ((float)iStack_74 == fStack_6c) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        iStack_74 = (int)fStack_6c;
      }
      iStack_74 = iStack_74 - auStack_50[0];
      if (iStack_74 < 1) {
        if (iStack_74 == 0) {
          uStack_40 = 2;
        }
        else {
          uStack_40 = 1;
        }
      }
      else {
        uStack_40 = 4;
      }
      if ((uStack_40 & 4) == 0) {
        iStack_74 = 0;
      }
      puStack_44 = (undefined *)0x4000808;
      iStack_74 = iStack_74 + iStack_70;
      uRam016c113e = (undefined2)iStack_74;
      FUN_0018df40();
      FUN_0018df40(iStack_74);
      puStack_44 = (undefined *)0x2800505;
      FUN_0018df40();
      puStack_44 = (undefined *)(piVar3->g[7] + 0x1a00);
      FUN_0018e080(auStack_50);
      sysMemWriteT((uint)puStack_44,auStack_50);
      FUN_0018e080(auStack_50);
      sysMemWriteT((uint)(puStack_44 + 0xc),auStack_50);
      FUN_0018e080(auStack_50);
      sysMemWriteT((uint)(puStack_44 + 0x18),auStack_50);
      FUN_0018e080(auStack_50);
      sysMemWriteT((uint)(puStack_44 + 0x24),auStack_50);
      puStack_44 = (undefined *)0x23004646;
      FUN_0018df40();
      puStack_44 = (undefined *)0x3;
      FUN_0018df40();
      sysMemReadS(&uStack_1c,piVar3->g[9] + 4);
      fStack_64 = (float)(uint)uStack_1c;
      sysMemWriteS(piVar3->g[7] + 0x1b20,&fStack_64);
      sysMemReadB(&bStack_4,piVar3->g[7] + 4);
      piVar3->g[1] = (uint)bStack_4;
      piVar3->g[0] = (uint)fStack_64;
      sysMemReadW(&puStack_44,piVar3->g[7] + 0x1a4);
      if (((uint)puStack_44 & 0x4000000) == 0) {
LAB_001eec88:
        sysMemReadW(&puStack_44,piVar3->g[7] + 0x720);
        if (((uint)puStack_44 & 4) != 0) {
          sysMemReadS(&uStack_20,piVar3->g[7] + 0x1aa);
          puStack_44 = (undefined *)(uint)uStack_20;
          if (uStack_20 < 5) {
            if (uStack_20 == 4) {
              uStack_40 = 2;
            }
            else {
              uStack_40 = 1;
            }
          }
          else {
            uStack_40 = 4;
          }
          if (((uStack_40 & 4) == 0) && ((uStack_20 & 1) != 0)) {
            piVar3->g[2] = 0x802000;
            set_obj_thd(0);
            goto LAB_001eecb4;
          }
        }
        set_obj(0);
      }
      else {
        sysMemReadS(&uStack_1e,piVar3->g[7] + 0x1aa);
        puStack_44 = (undefined *)(uint)uStack_1e;
        if (uStack_1e < 5) {
          if (uStack_1e == 4) {
            uStack_40 = 2;
          }
          else {
            uStack_40 = 1;
          }
        }
        else {
          uStack_40 = 4;
        }
        if ((uStack_40 & 4) != 0) goto LAB_001eec88;
        piVar3->g[2] = 0x800000;
        set_obj_thd(0);
      }
LAB_001eecb4:
      puStack_44 = (undefined *)0x1000202;
      FUN_0018df40();
      puStack_44 = (undefined *)0x800101;
      FUN_0018df40();
      puStack_44 = (undefined *)0x9801313;
      FUN_0018df40();
      FUN_0018df40(puStack_44);
      FUN_0018df40(puStack_44);
      FUN_0018e100();
      puStack_44 = (undefined *)0x1800303;
      FUN_0018df40();
      puStack_44 = (undefined *)0x3000606;
      FUN_0018df40();
      sysMemReadT(auStack_50,0x50a330);
      FUN_0018de40(auStack_50);
      puStack_44 = (undefined *)0x5000a0a;
      FUN_0018df40();
      puStack_44 = (undefined *)(int)sRam016c112e;
      FUN_0018df40(puStack_44);
      puStack_44 = (undefined *)0x4800909;
      FUN_0018df40();
      puStack_44 = (undefined *)(int)sRam016c112c;
      FUN_0018df40(puStack_44);
      iVar7 = (int)sRam016c1152;
      fStack_6c = (float)-(int)sRam016c1158;
      sysMemReadS(&sStack_22,piVar3->g[7] + 0xad8);
      puStack_44 = (undefined *)0x11002222;
      fStack_58 = (float)(int)sStack_22;
      FUN_0018df40();
      FUN_0018df40(fStack_58);
      uVar6 = FUN_0018e100();
      fStack_68 = (float)uVar6;
      if ((uVar6 & 0xffffffff80000000) == 0) {
        puStack_44 = (undefined *)0xb801717;
        FUN_0018df40();
        FUN_0018df40(-iVar7);
        fVar5 = (float)FUN_0018e100();
        puStack_44 = (undefined *)0xc001818;
        fVar5 = fVar5 * fStack_68;
        FUN_0018df40();
        FUN_0018df40(fVar5);
        iStack_74 = FUN_0018e100();
      }
      else {
        iStack_74 = 0;
      }
      puStack_44 = (undefined *)0x10802121;
      fStack_64 = (float)-(int)sRam016c1152;
      iStack_48 = (int)fStack_58 + 0x8000;
      FUN_0018df40();
      FUN_0018df40(iStack_48);
      uVar6 = FUN_0018e100();
      fStack_68 = (float)uVar6;
      if ((uVar6 & 0xffffffff80000000) == 0) {
        puStack_44 = (undefined *)0xb801717;
        FUN_0018df40();
        FUN_0018df40(fStack_64);
        fStack_64 = (float)FUN_0018e100();
        puStack_44 = (undefined *)0xc001818;
        fStack_64 = fStack_64 * fStack_68;
        FUN_0018df40();
        FUN_0018df40(fStack_64);
        fStack_64 = (float)FUN_0018e100();
      }
      else {
        fStack_64 = 0.0;
      }
      sRam016c118a = SUB42(fStack_64,0);
      sysMemReadS(&sStack_24,piVar3->g[7] + 0xade);
      puStack_44 = (undefined *)0x11002222;
      fStack_58 = (float)(int)sStack_24;
      FUN_0018df40();
      FUN_0018df40(fStack_58);
      uVar6 = FUN_0018e100();
      fStack_68 = (float)uVar6;
      if ((uVar6 & 0xffffffff80000000) == 0) {
        puStack_44 = (undefined *)0xb801717;
        FUN_0018df40();
        FUN_0018df40(fStack_6c);
        fStack_6c = (float)FUN_0018e100();
        puStack_44 = (undefined *)0xc001818;
        fStack_6c = fStack_6c * fStack_68;
        FUN_0018df40();
        FUN_0018df40(fStack_6c);
        fStack_6c = (float)FUN_0018e100();
      }
      else {
        fStack_6c = 0.0;
      }
      puStack_44 = (undefined *)0x10802121;
      fStack_64 = (float)-(int)sRam016c1158;
      FUN_0018df40();
      FUN_0018df40(iStack_48);
      uVar6 = FUN_0018e100();
      fStack_68 = (float)uVar6;
      if ((uVar6 & 0xffffffff80000000) == 0) {
        puStack_44 = (undefined *)0xb801717;
        FUN_0018df40();
        FUN_0018df40(fStack_64);
        fStack_64 = (float)FUN_0018e100();
        puStack_44 = (undefined *)0xc001818;
        fStack_64 = fStack_64 * fStack_68;
        FUN_0018df40();
        FUN_0018df40(fStack_64);
        fStack_64 = (float)FUN_0018e100();
      }
      else {
        fStack_64 = 0.0;
      }
      auStack_50[0] = (uint)sRam016c1140;
      sRam016c118e = SUB42(fStack_64,0);
      iStack_70 = (int)sRam016c112a;
      if (iStack_74 < (int)fStack_6c) {
        bVar1 = false;
      }
      else if ((float)iStack_74 == fStack_6c) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        iStack_74 = (int)fStack_6c;
      }
      iStack_74 = iStack_74 - auStack_50[0];
      if (iStack_74 < 1) {
        if (iStack_74 == 0) {
          uStack_40 = 2;
        }
        else {
          uStack_40 = 1;
        }
      }
      else {
        uStack_40 = 4;
      }
      if ((uStack_40 & 4) == 0) {
        iStack_74 = 0;
      }
      puStack_44 = (undefined *)0x4000808;
      iStack_74 = iStack_70 - iStack_74;
      uRam016c1142 = (undefined2)iStack_74;
      FUN_0018df40();
      FUN_0018df40(iStack_74);
      puStack_44 = (undefined *)0x2800505;
      FUN_0018df40();
      puStack_44 = (undefined *)(piVar3->g[7] + 0x1a30);
      FUN_0018e080(auStack_50);
      sysMemWriteT((uint)puStack_44,auStack_50);
      FUN_0018e080(auStack_50);
      sysMemWriteT((uint)(puStack_44 + 0xc),auStack_50);
      FUN_0018e080(auStack_50);
      sysMemWriteT((uint)(puStack_44 + 0x18),auStack_50);
      FUN_0018e080(auStack_50);
      sysMemWriteT((uint)(puStack_44 + 0x24),auStack_50);
      puStack_44 = (undefined *)0x23004646;
      FUN_0018df40();
      puStack_44 = (undefined *)0x3;
      FUN_0018df40();
      sysMemReadS(&uStack_26,piVar3->g[9] + 6);
      fStack_64 = (float)(uint)uStack_26;
      sysMemWriteS(piVar3->g[7] + 0x1b22,&fStack_64);
      sysMemReadB(&bStack_5,piVar3->g[7] + 4);
      piVar3->g[1] = (uint)bStack_5;
      piVar3->g[0] = (uint)fStack_64;
      sysMemReadW(&puStack_44,piVar3->g[7] + 0x1a4);
      if (((uint)puStack_44 & 0x4000000) == 0) {
LAB_001ef0c8:
        sysMemReadW(&puStack_44,piVar3->g[7] + 0x720);
        if (((uint)puStack_44 & 4) != 0) {
          sysMemReadS(&uStack_2a,piVar3->g[7] + 0x1aa);
          puStack_44 = (undefined *)(uint)uStack_2a;
          if (uStack_2a < 5) {
            if (uStack_2a == 4) {
              uStack_40 = 2;
            }
            else {
              uStack_40 = 1;
            }
          }
          else {
            uStack_40 = 4;
          }
          if (((uStack_40 & 4) == 0) && ((uStack_2a & 1) != 0)) {
            piVar3->g[2] = 0x802000;
            set_obj_thd(0);
            goto LAB_001ef0f4;
          }
        }
        set_obj(0);
      }
      else {
        sysMemReadS(&uStack_28,piVar3->g[7] + 0x1aa);
        puStack_44 = (undefined *)(uint)uStack_28;
        if (uStack_28 < 5) {
          if (uStack_28 == 4) {
            uStack_40 = 2;
          }
          else {
            uStack_40 = 1;
          }
        }
        else {
          uStack_40 = 4;
        }
        if ((uStack_40 & 4) != 0) goto LAB_001ef0c8;
        piVar3->g[2] = 0x800000;
        set_obj_thd(0);
      }
LAB_001ef0f4:
      puStack_44 = (undefined *)0x1000202;
      FUN_0018df40();
      puStack_44 = (undefined *)0x800101;
      FUN_0018df40();
      puStack_44 = (undefined *)0x1800303;
      FUN_0018df40();
      puStack_44 = (undefined *)0x3000606;
      FUN_0018df40();
      sysMemReadT(auStack_50,0x50a33c);
      FUN_0018de40(auStack_50);
      sysMemReadW(auStack_50,piVar3->g[9] + 8);
      fStack_54 = 0.0;
      puStack_44 = (undefined *)0x3000606;
      FUN_0018df40();
      FUN_0018df40(fStack_54);
      FUN_0018df40(fStack_54);
      FUN_0018df40(auStack_50[0]);
      puStack_44 = (undefined *)0x5000a0a;
      FUN_0018df40();
      puStack_44 = (undefined *)(int)sRam016c1134;
      FUN_0018df40(puStack_44);
      iStack_70 = (int)sRam016c1188;
      fStack_6c = (float)(int)sRam016c118a;
      if (sRam016c1188 < sRam016c118a) {
        bVar1 = true;
      }
      else if (sRam016c1188 == sRam016c118a) {
        bVar1 = false;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        fStack_6c = (float)iStack_70;
      }
      auStack_50[0] = (uint)sRam016c1144;
      fStack_6c = (float)((int)fStack_6c - auStack_50[0]);
      if ((int)fStack_6c < 1) {
        if (fStack_6c == 0.0) {
          uStack_40 = 2;
        }
        else {
          uStack_40 = 1;
        }
      }
      else {
        uStack_40 = 4;
      }
      if ((uStack_40 & 4) == 0) {
        fStack_6c = 0.0;
      }
      puStack_44 = (undefined *)0x4800909;
      fStack_58 = (float)((int)sRam016c1132 + (int)fStack_6c);
      FUN_0018df40();
      FUN_0018df40(fStack_58);
      puStack_44 = (undefined *)0x4000808;
      uRam016c1146 = SUB42(fStack_58,0);
      FUN_0018df40();
      puStack_44 = (undefined *)(int)sRam016c1130;
      FUN_0018df40(puStack_44);
      puStack_44 = (undefined *)0x2800505;
      FUN_0018df40();
      puStack_44 = (undefined *)(piVar3->g[7] + 0x1a60);
      FUN_0018e080(auStack_50);
      sysMemWriteT((uint)puStack_44,auStack_50);
      FUN_0018e080(auStack_50);
      sysMemWriteT((uint)(puStack_44 + 0xc),auStack_50);
      FUN_0018e080(auStack_50);
      sysMemWriteT((uint)(puStack_44 + 0x18),auStack_50);
      FUN_0018e080(auStack_50);
      sysMemWriteT((uint)(puStack_44 + 0x24),auStack_50);
      puStack_44 = (undefined *)0x23004646;
      FUN_0018df40();
      puStack_44 = (undefined *)0x3;
      FUN_0018df40();
      sysMemReadS(&uStack_2c,piVar3->g[9] + 2);
      fStack_64 = (float)(uint)uStack_2c;
      sysMemWriteS(piVar3->g[7] + 0x1b24,&fStack_64);
      sysMemReadB(&bStack_6,piVar3->g[7] + 4);
      piVar3->g[1] = (uint)bStack_6;
      piVar3->g[0] = (uint)fStack_64;
      sysMemReadW(&puStack_44,piVar3->g[7] + 0x1a4);
      if (((uint)puStack_44 & 0x4000000) == 0) {
LAB_001ef398:
        sysMemReadW(&puStack_44,piVar3->g[7] + 0x720);
        if (((uint)puStack_44 & 4) != 0) {
          sysMemReadS(&uStack_30,piVar3->g[7] + 0x1aa);
          puStack_44 = (undefined *)(uint)uStack_30;
          if (uStack_30 < 5) {
            if (uStack_30 == 4) {
              uStack_40 = 2;
            }
            else {
              uStack_40 = 1;
            }
          }
          else {
            uStack_40 = 4;
          }
          if (((uStack_40 & 4) == 0) && ((uStack_30 & 1) != 0)) {
            piVar3->g[2] = 0x802000;
            set_obj_thd(0);
            goto LAB_001ef3c4;
          }
        }
        set_obj(0);
      }
      else {
        sysMemReadS(&uStack_2e,piVar3->g[7] + 0x1aa);
        puStack_44 = (undefined *)(uint)uStack_2e;
        if (uStack_2e < 5) {
          if (uStack_2e == 4) {
            uStack_40 = 2;
          }
          else {
            uStack_40 = 1;
          }
        }
        else {
          uStack_40 = 4;
        }
        if ((uStack_40 & 4) != 0) goto LAB_001ef398;
        piVar3->g[2] = 0x800000;
        set_obj_thd(0);
      }
LAB_001ef3c4:
      puStack_44 = (undefined *)0x1000202;
      FUN_0018df40();
      puStack_44 = (undefined *)0x800101;
      FUN_0018df40();
      puStack_44 = (undefined *)0x9801313;
      FUN_0018df40();
      FUN_0018df40(puStack_44);
      FUN_0018df40(puStack_44);
      FUN_0018e100();
      puStack_44 = (undefined *)0x1800303;
      FUN_0018df40();
      puStack_44 = (undefined *)0x3000606;
      FUN_0018df40();
      sysMemReadT(auStack_50,0x50a348);
      FUN_0018de40(auStack_50);
      sysMemReadW(auStack_50,piVar3->g[9] + 8);
      fStack_54 = 0.0;
      puStack_44 = (undefined *)0x3000606;
      auStack_50[0] = auStack_50[0] ^ 0x80000000;
      FUN_0018df40();
      FUN_0018df40(fStack_54);
      FUN_0018df40(fStack_54);
      FUN_0018df40(auStack_50[0]);
      puStack_44 = (undefined *)0x5000a0a;
      FUN_0018df40();
      puStack_44 = (undefined *)(int)sRam016c113a;
      FUN_0018df40(puStack_44);
      iStack_70 = (int)sRam016c118c;
      fStack_6c = (float)(int)sRam016c118e;
      if (sRam016c118c < sRam016c118e) {
        bVar1 = true;
      }
      else if (sRam016c118c == sRam016c118e) {
        bVar1 = false;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        fStack_6c = (float)iStack_70;
      }
      auStack_50[0] = (uint)sRam016c1148;
      fStack_6c = (float)((int)fStack_6c - auStack_50[0]);
      if ((int)fStack_6c < 1) {
        if (fStack_6c == 0.0) {
          uStack_40 = 2;
        }
        else {
          uStack_40 = 1;
        }
      }
      else {
        uStack_40 = 4;
      }
      if ((uStack_40 & 4) == 0) {
        fStack_6c = 0.0;
      }
      puStack_44 = (undefined *)0x4800909;
      fStack_58 = (float)((int)sRam016c1138 - (int)fStack_6c);
      FUN_0018df40();
      FUN_0018df40(fStack_58);
      puStack_44 = (undefined *)0x4000808;
      uRam016c114a = SUB42(fStack_58,0);
      FUN_0018df40();
      puStack_44 = (undefined *)(int)sRam016c1136;
      FUN_0018df40(puStack_44);
      puStack_44 = (undefined *)0x2800505;
      FUN_0018df40();
      puStack_44 = (undefined *)(piVar3->g[7] + 0x1a90);
      FUN_0018e080(auStack_50);
      sysMemWriteT((uint)puStack_44,auStack_50);
      FUN_0018e080(auStack_50);
      sysMemWriteT((uint)(puStack_44 + 0xc),auStack_50);
      FUN_0018e080(auStack_50);
      sysMemWriteT((uint)(puStack_44 + 0x18),auStack_50);
      FUN_0018e080(auStack_50);
      sysMemWriteT((uint)(puStack_44 + 0x24),auStack_50);
      puStack_44 = (undefined *)0x23004646;
      FUN_0018df40();
      puStack_44 = (undefined *)0x3;
      FUN_0018df40();
      sysMemReadS(&uStack_32,piVar3->g[9]);
      fStack_64 = (float)(uint)uStack_32;
      sysMemWriteS(piVar3->g[7] + 0x1b26,&fStack_64);
      sysMemReadB(&bStack_7,piVar3->g[7] + 4);
      piVar3->g[1] = (uint)bStack_7;
      piVar3->g[0] = (uint)fStack_64;
      sysMemReadW(&puStack_44,piVar3->g[7] + 0x1a4);
      if (((uint)puStack_44 & 0x4000000) == 0) {
LAB_001ef69c:
        sysMemReadW(&puStack_44,piVar3->g[7] + 0x720);
        if (((uint)puStack_44 & 4) != 0) {
          sysMemReadS(&uStack_36,piVar3->g[7] + 0x1aa);
          puStack_44 = (undefined *)(uint)uStack_36;
          if (uStack_36 < 5) {
            if (uStack_36 == 4) {
              uStack_40 = 2;
            }
            else {
              uStack_40 = 1;
            }
          }
          else {
            uStack_40 = 4;
          }
          if (((uStack_40 & 4) == 0) && ((uStack_36 & 1) != 0)) {
            piVar3->g[2] = 0x802000;
            set_obj_thd(0);
            goto LAB_001ef6c8;
          }
        }
        set_obj(0);
      }
      else {
        sysMemReadS(&uStack_34,piVar3->g[7] + 0x1aa);
        puStack_44 = (undefined *)(uint)uStack_34;
        if (uStack_34 < 5) {
          if (uStack_34 == 4) {
            uStack_40 = 2;
          }
          else {
            uStack_40 = 1;
          }
        }
        else {
          uStack_40 = 4;
        }
        if ((uStack_40 & 4) != 0) goto LAB_001ef69c;
        piVar3->g[2] = 0x800000;
        set_obj_thd(0);
      }
LAB_001ef6c8:
      puStack_44 = (undefined *)0x1000202;
      FUN_0018df40();
      goto LAB_001ef730;
    }
  }
  puStack_44 = (undefined *)0x0;
  sysMemWriteS(piVar3->g[7] + 0x1b20,&puStack_44);
  puStack_44 = (undefined *)0x0;
  sysMemWriteS(piVar3->g[7] + 0x1b22,&puStack_44);
  puStack_44 = (undefined *)0x0;
  sysMemWriteS(piVar3->g[7] + 0x1b24,&puStack_44);
  puStack_44 = (undefined *)0x0;
  sysMemWriteS(piVar3->g[7] + 0x1b26,&puStack_44);
LAB_001ef730:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

