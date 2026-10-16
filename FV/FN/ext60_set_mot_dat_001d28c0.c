/* EXT 60: set_mot_dat @ 001d28c0; patched over i960 01b880 (arcade set_mot_dat) */

/* WARNING: Removing unreachable block (ram,0x001d2a48) */
/* WARNING: Removing unreachable block (ram,0x001d3c50) */

undefined8 set_mot_dat(int param_1)

{
  bool bVar1;
  i960_regs *piVar2;
  float fVar3;
  uint uVar4;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  uint uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_a0;
  short sStack_98;
  ushort uStack_96;
  ushort uStack_94;
  ushort uStack_92;
  char cStack_8f;
  char cStack_8e;
  char cStack_8d;
  byte bStack_8c;
  byte bStack_8b;
  byte bStack_8a;
  byte bStack_89;
  char cStack_88;
  byte bStack_87;
  byte bStack_86;
  byte bStack_85;
  char cStack_84;
  char cStack_83;
  char cStack_82;
  char cStack_81;
  char cStack_80;
  char cStack_7f;
  char cStack_7e;
  char cStack_7d;
  char cStack_7c;
  char cStack_7b;
  char cStack_7a;
  char cStack_79;
  char cStack_78;
  char cStack_77;
  byte bStack_76;
  byte bStack_75;
  char cStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  byte bStack_70;
  char cStack_6f;
  byte bStack_6e;
  byte bStack_6d;
  byte bStack_6c;
  byte bStack_6b;
  char cStack_6a;
  byte bStack_69;
  byte bStack_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  char cStack_61;
  char cStack_60;
  char cStack_5f;
  char cStack_5e;
  char cStack_5d;
  char cStack_5c;
  char cStack_5b;
  byte bStack_5a;
  byte bStack_59;
  byte bStack_58;
  byte bStack_57;
  byte bStack_56;
  byte bStack_55;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  char cStack_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  char cStack_38;
  byte bStack_37;
  byte bStack_36;
  char cStack_35;
  char cStack_34;
  char cStack_33;
  char cStack_32;
  char cStack_31;
  char cStack_30;
  char cStack_2f;
  char cStack_2e;
  char cStack_2d;
  char cStack_2c;
  char cStack_2b;
  char cStack_2a;
  char cStack_29;
  char cStack_28;
  char cStack_27;
  char cStack_26;
  char cStack_25;
  char cStack_24;
  char cStack_23;
  char cStack_22;
  char cStack_21;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  char cStack_1c;
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  char cStack_18;
  char cStack_17;
  char cStack_16;
  char cStack_15;
  char cStack_14;
  char cStack_13;
  char cStack_12;
  char cStack_11;
  char cStack_10;
  char cStack_f;
  char cStack_e;
  byte bStack_d;
  char cStack_c;
  char cStack_b;
  char cStack_a;
  char cStack_9;
  char cStack_8;
  char cStack_7;
  char cStack_6;
  char cStack_5;
  char cStack_4;
  char cStack_3;
  char cStack_2;
  char cStack_1;
  
  piVar2 = i960GetRegs();
  fStack_a4 = 0.0;
  sysMemWriteS(piVar2->g[7] + 0x87a,&fStack_a4);
  sysMemWriteS(piVar2->g[7] + 0x802,&fStack_a4);
  sysMemWriteS(piVar2->g[7] + 0x86c,&fStack_a4);
  sysMemWriteS(piVar2->g[7] + 0x870,&fStack_a4);
  sysMemWriteB(piVar2->g[7] + 0xa00,&fStack_a4);
  sysMemWriteS(piVar2->g[7] + 0x812,&fStack_a4);
  sysMemWriteB(piVar2->g[7] + 0x83c,&fStack_a4);
  sysMemWriteW(piVar2->g[7] + 0x844,&fStack_a4);
  sysMemWriteB(piVar2->g[7] + 0x840,&fStack_a4);
  sysMemWriteB(piVar2->g[7] + 0x823,&fStack_a4);
  sysMemWriteS(piVar2->g[7] + 0x850,&fStack_a4);
  sysMemWriteS(piVar2->g[7] + 0x818,&fStack_a4);
  sysMemWriteS(piVar2->g[7] + 0x872,&fStack_a4);
  sysMemWriteW(piVar2->g[7] + 0x854,&fStack_a4);
  sysMemWriteW(piVar2->g[7] + 0x864,&fStack_a4);
  sysMemWriteB(piVar2->g[7] + 0xa25,&fStack_a4);
  sysMemWriteB(piVar2->g[7] + 0xa28,&fStack_a4);
  sysMemWriteW(piVar2->g[7] + 0xacc,&fStack_a4);
  if (piVar2->g[0] == 0) {
    uStack_a0 = 2;
  }
  else {
    uStack_a0 = 4;
  }
  if ((uStack_a0 & 2) == 0) {
    sysMemReadW(&uStack_b4,piVar2->g[0] * 4 + 0x6411e94);
    sysMemReadW(&fStack_a4,piVar2->g[0] * 4 + 0x6c00004);
    sysMemReadS(&uStack_92,(uint)fStack_a4);
    fStack_a8 = (float)(uint)uStack_92;
    sysMemWriteS(piVar2->g[7] + 0x800,&fStack_a8);
    sysMemWriteS(piVar2->g[7] + 0x80a,&fStack_a8);
    sysMemWriteS(piVar2->g[7] + 0x80c,&fStack_a8);
    sysMemReadW(&fStack_a4,piVar2->g[7] + 0x1a4);
    sysMemWriteW(piVar2->g[7] + 0xbd4,&fStack_a4);
    sysMemReadW(&fStack_a4,piVar2->g[7] + 0x804);
    sysMemWriteW(piVar2->g[7] + 0xc30,&fStack_a4);
    sysMemReadB(&cStack_1,uStack_b4);
    fStack_a4 = (float)(int)cStack_1;
    sysMemWriteB(piVar2->g[7] + 0x804,&fStack_a4);
    sysMemReadB(&cStack_2,uStack_b4 + 1);
    fStack_a4 = (float)(int)cStack_2;
    sysMemWriteB(piVar2->g[7] + 0x805,&fStack_a4);
    sysMemReadB(&cStack_3,uStack_b4 + 2);
    fStack_a4 = (float)(int)cStack_3;
    sysMemWriteB(piVar2->g[7] + 0x806,&fStack_a4);
    sysMemReadB(&cStack_4,uStack_b4 + 3);
    fStack_a4 = (float)(int)cStack_4;
    sysMemWriteB(piVar2->g[7] + 0x807,&fStack_a4);
    sysMemReadB(&cStack_5,uStack_b4 + 4);
    fStack_a4 = (float)(int)cStack_5;
    sysMemWriteB(piVar2->g[7] + 0x860,&fStack_a4);
    sysMemReadB(&cStack_6,uStack_b4 + 5);
    fStack_a4 = (float)(int)cStack_6;
    sysMemWriteB(piVar2->g[7] + 0x861,&fStack_a4);
    sysMemReadB(&cStack_7,uStack_b4 + 6);
    fStack_a4 = (float)(int)cStack_7;
    sysMemWriteB(piVar2->g[7] + 0x862,&fStack_a4);
    sysMemReadB(&cStack_8,uStack_b4 + 7);
    fStack_a4 = (float)(int)cStack_8;
    sysMemWriteB(piVar2->g[7] + 0x863,&fStack_a4);
    sysMemReadB(&cStack_9,uStack_b4 + 8);
    fStack_a4 = (float)(int)cStack_9;
    sysMemWriteB(piVar2->g[7] + 0x810,&fStack_a4);
    sysMemReadB(&cStack_a,uStack_b4 + 9);
    fStack_a4 = (float)(int)cStack_a;
    sysMemWriteB(piVar2->g[7] + 0x811,&fStack_a4);
    sysMemReadB(&cStack_b,uStack_b4 + 10);
    fStack_a4 = (float)(int)cStack_b;
    sysMemWriteB(piVar2->g[7] + 0x814,&fStack_a4);
    sysMemReadB(&cStack_c,uStack_b4 + 0xb);
    fStack_a4 = (float)(int)cStack_c;
    sysMemWriteB(piVar2->g[7] + 0x815,&fStack_a4);
    uStack_b4 = uStack_b4 + 0xc;
    sysMemReadW(&fStack_d4,piVar2->g[7] + 0x804);
    fVar3 = (float)((uint)fStack_d4 & 0xffdfffff);
    uVar4 = (uint)fStack_d4 & 0x40;
    fStack_d4 = fVar3;
    if (uVar4 != 0) {
      fStack_a4 = 4.59177e-41;
      sysMemWriteS(piVar2->g[7] + 0x812,&fStack_a4);
    }
    if ((((uint)fStack_d4 & 0x100) != 0) && (((uint)fStack_d4 & 0x8000) != 0)) {
      fStack_d4 = (float)((uint)fStack_d4 & 0xffff7fff | 0x10000);
    }
    sysMemWriteW(piVar2->g[7] + 0x1a4,&fStack_d4);
    sysMemReadW(&fStack_d4,piVar2->g[7] + 0x860);
    sysMemWriteW(piVar2->g[7] + 0x720,&fStack_d4);
    do {
      sysMemReadB(&bStack_d,uStack_b4);
      fStack_d4 = (float)(uint)bStack_d;
      sysMemReadW(&fStack_d0,(int)fStack_d4 * 4 + 0x1b9a4);
      switch(fStack_d4) {
      case 0.0:
        goto switchD_001d2e14_caseD_0;
      case 1.4013e-45:
        sysMemReadB(&cStack_e,uStack_b4 + 1);
        fStack_a4 = (float)(int)cStack_e;
        sysMemWriteB(piVar2->g[7] + 0x802,&fStack_a4);
        sysMemReadB(&cStack_f,uStack_b4 + 2);
        fStack_a4 = (float)(int)cStack_f;
        sysMemWriteB(piVar2->g[7] + 0x803,&fStack_a4);
        uStack_b4 = uStack_b4 + 3;
        break;
      case 2.8026e-45:
        sysMemReadB(&cStack_10,uStack_b4 + 1);
        fStack_a4 = (float)(int)cStack_10;
        sysMemWriteB(piVar2->g[7] + 0x808,&fStack_a4);
        sysMemReadB(&cStack_11,uStack_b4 + 2);
        fStack_a4 = (float)(int)cStack_11;
        sysMemWriteB(piVar2->g[7] + 0x809,&fStack_a4);
        sysMemReadB(&cStack_12,uStack_b4 + 3);
        fStack_a4 = (float)(int)cStack_12;
        sysMemWriteB(piVar2->g[7] + 0x80a,&fStack_a4);
        sysMemReadB(&cStack_13,uStack_b4 + 4);
        fStack_a4 = (float)(int)cStack_13;
        sysMemWriteB(piVar2->g[7] + 0x80b,&fStack_a4);
        sysMemReadB(&cStack_14,uStack_b4 + 5);
        fStack_a4 = (float)(int)cStack_14;
        sysMemWriteB(piVar2->g[7] + 0x80c,&fStack_a4);
        sysMemReadB(&cStack_15,uStack_b4 + 6);
        fStack_a4 = (float)(int)cStack_15;
        sysMemWriteB(piVar2->g[7] + 0x80d,&fStack_a4);
        fStack_a4 = 1.4013e-45;
        uStack_b4 = uStack_b4 + 7;
        sysMemWriteB(piVar2->g[7] + 0xa00,&fStack_a4);
        sysMemReadW(&fStack_cc,piVar2->g[7] + 0x1a4);
        fStack_cc = (float)((uint)fStack_cc | 2);
        sysMemWriteW(piVar2->g[7] + 0x1a4,&fStack_cc);
        break;
      case 4.2039e-45:
        sysMemReadB(&cStack_16,uStack_b4 + 1);
        fStack_a4 = (float)(int)cStack_16;
        sysMemWriteB(piVar2->g[7] + 0x80e,&fStack_a4);
        sysMemReadB(&cStack_17,uStack_b4 + 2);
        fStack_a4 = (float)(int)cStack_17;
        sysMemWriteB(piVar2->g[7] + 0x80f,&fStack_a4);
        sysMemReadB(&cStack_18,uStack_b4 + 3);
        fStack_a4 = (float)(int)cStack_18;
        sysMemWriteB(piVar2->g[7] + 0x816,&fStack_a4);
        sysMemReadB(&cStack_19,uStack_b4 + 4);
        fStack_a4 = (float)(int)cStack_19;
        sysMemWriteB(piVar2->g[7] + 0x817,&fStack_a4);
        sysMemReadB(&cStack_1a,uStack_b4 + 5);
        fStack_a4 = (float)(int)cStack_1a;
        sysMemWriteB(piVar2->g[7] + 0x818,&fStack_a4);
        sysMemReadB(&cStack_1b,uStack_b4 + 6);
        fStack_a4 = (float)(int)cStack_1b;
        sysMemWriteB(piVar2->g[7] + 0x819,&fStack_a4);
        sysMemReadB(&cStack_1c,uStack_b4 + 7);
        fStack_a4 = (float)(int)cStack_1c;
        sysMemWriteB(piVar2->g[7] + 0x81c,&fStack_a4);
        sysMemReadB(&cStack_1d,uStack_b4 + 8);
        fStack_a4 = (float)(int)cStack_1d;
        sysMemWriteB(piVar2->g[7] + 0x81d,&fStack_a4);
        sysMemReadB(&cStack_1e,uStack_b4 + 9);
        fStack_a4 = (float)(int)cStack_1e;
        sysMemWriteB(piVar2->g[7] + 0x81e,&fStack_a4);
        sysMemReadB(&cStack_1f,uStack_b4 + 10);
        fStack_a4 = (float)(int)cStack_1f;
        sysMemWriteB(piVar2->g[7] + 0x81f,&fStack_a4);
        sysMemReadB(&cStack_20,uStack_b4 + 0xb);
        fStack_a4 = (float)(int)cStack_20;
        sysMemWriteB(piVar2->g[7] + 0x83f,&fStack_a4);
        sysMemReadB(&cStack_21,uStack_b4 + 0xc);
        fStack_a4 = (float)(int)cStack_21;
        sysMemWriteB(piVar2->g[7] + 0x850,&fStack_a4);
        sysMemReadB(&cStack_22,uStack_b4 + 0xd);
        fStack_a4 = (float)(int)cStack_22;
        sysMemWriteB(piVar2->g[7] + 0x851,&fStack_a4);
        uStack_b4 = uStack_b4 + 0xe;
        break;
      case 5.60519e-45:
        sysMemReadB(&cStack_23,uStack_b4 + 1);
        fStack_a4 = (float)(int)cStack_23;
        sysMemWriteB(piVar2->g[7] + 0x820,&fStack_a4);
        sysMemReadB(&cStack_24,uStack_b4 + 2);
        fStack_a4 = (float)(int)cStack_24;
        sysMemWriteB(piVar2->g[7] + 0x821,&fStack_a4);
        sysMemReadB(&cStack_25,uStack_b4 + 4);
        fStack_a4 = (float)(int)cStack_25;
        sysMemWriteB(piVar2->g[7] + 0x83e,&fStack_a4);
        sysMemReadB(&cStack_26,uStack_b4 + 5);
        fStack_a4 = (float)(int)cStack_26;
        sysMemWriteB(piVar2->g[7] + 0x82a,&fStack_a4);
        sysMemReadB(&cStack_27,uStack_b4 + 6);
        fStack_a4 = (float)(int)cStack_27;
        sysMemWriteB(piVar2->g[7] + 0x82b,&fStack_a4);
        sysMemReadB(&cStack_28,uStack_b4 + 7);
        fStack_a4 = (float)(int)cStack_28;
        sysMemWriteB(piVar2->g[7] + 0x828,&fStack_a4);
        sysMemReadB(&cStack_29,uStack_b4 + 8);
        fStack_a4 = (float)(int)cStack_29;
        sysMemWriteB(piVar2->g[7] + 0x829,&fStack_a4);
        sysMemReadB(&cStack_2a,uStack_b4 + 9);
        fStack_a4 = (float)(int)cStack_2a;
        sysMemWriteB(piVar2->g[7] + 0x823,&fStack_a4);
        sysMemReadB(&cStack_2b,uStack_b4 + 10);
        fStack_a4 = (float)(int)cStack_2b;
        sysMemWriteB(piVar2->g[7] + 0x843,&fStack_a4);
        sysMemReadB(&cStack_2c,uStack_b4 + 0xb);
        fStack_a4 = (float)(int)cStack_2c;
        sysMemWriteB(piVar2->g[7] + 0x85c,&fStack_a4);
        sysMemReadB(&cStack_2d,uStack_b4 + 0xc);
        fStack_a4 = (float)(int)cStack_2d;
        sysMemWriteB(piVar2->g[7] + 0x85d,&fStack_a4);
        sysMemReadB(&cStack_2e,uStack_b4 + 0xd);
        fStack_a4 = (float)(int)cStack_2e;
        sysMemWriteB(piVar2->g[7] + 0x85e,&fStack_a4);
        sysMemReadB(&cStack_2f,uStack_b4 + 3);
        fStack_a4 = (float)(int)cStack_2f;
        sysMemWriteB(piVar2->g[7] + 0x822,&fStack_a4);
        sysMemReadB(&cStack_30,uStack_b4 + 3);
        fStack_a4 = (float)(int)cStack_30;
        sysMemWriteB(piVar2->g[7] + 0x83d,&fStack_a4);
        sysMemReadB(&cStack_31,uStack_b4 + 0xe);
        fStack_a4 = (float)(int)cStack_31;
        sysMemWriteB(piVar2->g[7] + 0x874,&fStack_a4);
        sysMemReadB(&cStack_32,uStack_b4 + 0xf);
        fStack_a4 = (float)(int)cStack_32;
        sysMemWriteB(piVar2->g[7] + 0x876,&fStack_a4);
        sysMemReadB(&cStack_33,uStack_b4 + 0x10);
        fStack_a4 = (float)(int)cStack_33;
        sysMemWriteB(piVar2->g[7] + 0x877,&fStack_a4);
        sysMemReadB(&cStack_34,uStack_b4 + 0x11);
        fStack_a4 = (float)(int)cStack_34;
        sysMemWriteB(piVar2->g[7] + 0x86b,&fStack_a4);
        sysMemReadB(&cStack_35,uStack_b4 + 0x12);
        fStack_a4 = (float)(int)cStack_35;
        sysMemWriteB(piVar2->g[7] + 0x875,&fStack_a4);
        sysMemReadW(&fStack_a4,piVar2->g[7]);
        if (((uint)fStack_a4 & 0x40) != 0) {
          sysMemReadS(&sStack_98,piVar2->g[7] + 0x876);
          fStack_ac = (float)-(int)sStack_98;
          sysMemWriteS(piVar2->g[7] + 0x876,&fStack_ac);
        }
        uStack_b4 = uStack_b4 + 0x13;
        sysMemReadW(&fStack_a4,piVar2->g[7] + 0x1230);
        fStack_a4 = (float)((int)fStack_a4 + 1);
        sysMemWriteW(piVar2->g[7] + 0x1230,&fStack_a4);
        sysMemReadW(&fStack_a4,piVar2->g[7]);
        if (((uint)fStack_a4 & 0x40) != 0) {
          sysMemReadB(&bStack_36,piVar2->g[7] + 0x820);
          fStack_a4 = (float)(uint)bStack_36;
          sysMemReadB(&bStack_37,(int)fStack_a4 + 0x640e924);
          fStack_a4 = (float)(uint)bStack_37;
          sysMemWriteB(piVar2->g[7] + 0x820,&fStack_a4);
        }
        break;
      case 7.00649e-45:
        sysMemReadB(&cStack_38,uStack_b4 + 1);
        fStack_a4 = (float)(int)cStack_38;
        sysMemWriteB(piVar2->g[7] + 0x828,&fStack_a4);
        sysMemReadB(&cStack_39,uStack_b4 + 2);
        fStack_a4 = (float)(int)cStack_39;
        sysMemWriteB(piVar2->g[7] + 0x829,&fStack_a4);
        sysMemReadB(&cStack_3a,uStack_b4 + 3);
        fStack_a4 = (float)(int)cStack_3a;
        sysMemWriteB(piVar2->g[7] + 0x822,&fStack_a4);
        sysMemReadB(&cStack_3b,uStack_b4 + 4);
        fStack_a4 = (float)(int)cStack_3b;
        sysMemWriteB(piVar2->g[7] + 0x824,&fStack_a4);
        sysMemReadB(&cStack_3c,uStack_b4 + 5);
        fStack_a4 = (float)(int)cStack_3c;
        sysMemWriteB(piVar2->g[7] + 0x825,&fStack_a4);
        sysMemReadB(&cStack_3d,uStack_b4 + 6);
        fStack_a4 = (float)(int)cStack_3d;
        sysMemWriteB(piVar2->g[7] + 0x826,&fStack_a4);
        sysMemReadB(&cStack_3e,uStack_b4 + 7);
        fStack_a4 = (float)(int)cStack_3e;
        sysMemWriteB(piVar2->g[7] + 0x827,&fStack_a4);
        sysMemReadB(&cStack_3f,uStack_b4 + 8);
        fStack_a4 = (float)(int)cStack_3f;
        sysMemWriteB(piVar2->g[7] + 0x812,&fStack_a4);
        sysMemReadB(&cStack_40,uStack_b4 + 9);
        fStack_a4 = (float)(int)cStack_40;
        sysMemWriteB(piVar2->g[7] + 0x813,&fStack_a4);
        uStack_b4 = uStack_b4 + 0xe;
        sysMemReadW(&fStack_a4,piVar2->g[7] + 0x1230);
        fStack_a4 = (float)((int)fStack_a4 + 1);
        sysMemWriteW(piVar2->g[7] + 0x1230,&fStack_a4);
        sysMemReadW(&fStack_a4,piVar2->g[7] + 0x1234);
        fStack_a4 = (float)((int)fStack_a4 + 1);
        sysMemWriteW(piVar2->g[7] + 0x1234,&fStack_a4);
        break;
      case 8.40779e-45:
        sysMemReadB(&cStack_41,uStack_b4 + 1);
        fStack_a4 = (float)(int)cStack_41;
        sysMemWriteB(piVar2->g[7] + 0x872,&fStack_a4);
        sysMemReadB(&cStack_42,uStack_b4 + 2);
        fStack_a4 = (float)(int)cStack_42;
        sysMemWriteB(piVar2->g[7] + 0x873,&fStack_a4);
        sysMemReadB(&cStack_43,uStack_b4 + 3);
        fStack_a4 = (float)(int)cStack_43;
        sysMemWriteB(piVar2->g[7] + 0x812,&fStack_a4);
        sysMemReadB(&cStack_44,uStack_b4 + 4);
        fStack_a4 = (float)(int)cStack_44;
        sysMemWriteB(piVar2->g[7] + 0x813,&fStack_a4);
        sysMemReadB(&cStack_45,uStack_b4 + 5);
        fStack_a4 = (float)(int)cStack_45;
        sysMemWriteB(piVar2->g[7] + 0x85f,&fStack_a4);
        uStack_b4 = uStack_b4 + 6;
        break;
      case 9.80909e-45:
        sysMemReadB(&cStack_46,uStack_b4 + 1);
        fStack_a4 = (float)(int)cStack_46;
        sysMemWriteB(piVar2->g[7] + 0x812,&fStack_a4);
        sysMemReadB(&cStack_47,uStack_b4 + 2);
        fStack_a4 = (float)(int)cStack_47;
        sysMemWriteB(piVar2->g[7] + 0x813,&fStack_a4);
        uStack_b4 = uStack_b4 + 3;
        break;
      default:
        uStack_b4 = uStack_b4 + 1;
        goto switchD_001d2e14_caseD_0;
      case 1.26117e-44:
        sysMemReadB(&cStack_48,uStack_b4 + 1);
        fStack_a4 = (float)(int)cStack_48;
        sysMemWriteB(piVar2->g[7] + 0x830,&fStack_a4);
        sysMemReadB(&cStack_49,uStack_b4 + 2);
        fStack_a4 = (float)(int)cStack_49;
        sysMemWriteB(piVar2->g[7] + 0x831,&fStack_a4);
        sysMemReadB(&cStack_4a,uStack_b4 + 3);
        fStack_a4 = (float)(int)cStack_4a;
        sysMemWriteB(piVar2->g[7] + 0x832,&fStack_a4);
        sysMemReadB(&cStack_4b,uStack_b4 + 4);
        fStack_a4 = (float)(int)cStack_4b;
        sysMemWriteB(piVar2->g[7] + 0x833,&fStack_a4);
        sysMemReadB(&cStack_4c,uStack_b4 + 5);
        fStack_a4 = (float)(int)cStack_4c;
        sysMemWriteB(piVar2->g[7] + 0x834,&fStack_a4);
        sysMemReadB(&cStack_4d,uStack_b4 + 6);
        fStack_a4 = (float)(int)cStack_4d;
        sysMemWriteB(piVar2->g[7] + 0x835,&fStack_a4);
        sysMemReadB(&cStack_4e,uStack_b4 + 7);
        fStack_a4 = (float)(int)cStack_4e;
        sysMemWriteB(piVar2->g[7] + 0x836,&fStack_a4);
        sysMemReadB(&cStack_4f,uStack_b4 + 8);
        fStack_a4 = (float)(int)cStack_4f;
        sysMemWriteB(piVar2->g[7] + 0x837,&fStack_a4);
        sysMemReadB(&cStack_50,uStack_b4 + 9);
        fStack_a4 = (float)(int)cStack_50;
        sysMemWriteB(piVar2->g[7] + 0x5be,&fStack_a4);
        sysMemReadB(&bStack_51,uStack_b4 + 10);
        fStack_d4 = (float)(uint)bStack_51;
        sysMemReadB(&bStack_52,uStack_b4 + 0xb);
        fStack_a4 = (float)((uint)bStack_52 * 0x100);
        fStack_d4 = (float)((int)fStack_d4 + (int)fStack_a4);
        sysMemReadB(&bStack_53,uStack_b4 + 0xc);
        fStack_a4 = (float)((uint)bStack_53 * 0x10000);
        fStack_d4 = (float)((int)fStack_d4 + (int)fStack_a4);
        sysMemReadB(&bStack_54,uStack_b4 + 0xd);
        fStack_a4 = (float)((uint)bStack_54 * 0x1000000);
        fStack_a8 = fRam016c0dd0;
        fStack_d4 = (float)((uint)((float)((int)fStack_d4 + (int)fStack_a4) * fRam016c0dd0) |
                           0x80000000);
        sysMemWriteW(piVar2->g[7] + 0x5cc,&fStack_d4);
        sysMemReadB(&bStack_55,uStack_b4 + 0xe);
        fStack_d4 = (float)(uint)bStack_55;
        sysMemWriteS(piVar2->g[7] + 0x81a,&fStack_d4);
        uStack_b4 = uStack_b4 + 0xf;
        break;
      case 1.4013e-44:
        sysMemReadB(&bStack_56,piVar2->g[7] + 0x83c);
        fStack_d4 = (float)(uint)bStack_56;
        if (bStack_56 == 0) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 4;
        }
        if ((uStack_a0 & 5) == 0) {
          sysMemWriteW(piVar2->g[7] + 0x838,&uStack_b4);
        }
        fStack_d4 = (float)((int)fStack_d4 + 1);
        sysMemWriteB(piVar2->g[7] + 0x83c,&fStack_d4);
        uStack_b4 = uStack_b4 + 6;
        break;
      case 1.54143e-44:
        sysMemReadB(&bStack_57,uStack_b4 + 1);
        fStack_d4 = (float)(uint)bStack_57;
        sysMemReadB(&bStack_58,uStack_b4 + 2);
        fStack_a4 = (float)((uint)bStack_58 * 0x100);
        fStack_d4 = (float)((int)fStack_d4 + (int)fStack_a4);
        sysMemReadB(&bStack_59,uStack_b4 + 3);
        fStack_a4 = (float)((uint)bStack_59 * 0x10000);
        fStack_d4 = (float)((int)fStack_d4 + (int)fStack_a4);
        sysMemReadB(&bStack_5a,uStack_b4 + 4);
        fStack_a4 = (float)((uint)bStack_5a * 0x1000000);
        fStack_d4 = (float)((int)fStack_d4 + (int)fStack_a4);
        sysMemReadW(&fStack_a4,piVar2->g[7]);
        if (((uint)fStack_a4 & 0x40) != 0) {
          fStack_d4 = (float)((uint)fStack_d4 ^ 0x8000);
        }
        sysMemWriteW(piVar2->g[7] + 0x844,&fStack_d4);
        fStack_ac = 4.59163e-41;
        fStack_a4 = (float)((uint)fStack_d4 & 0x7fff);
        sysMemWriteS(piVar2->g[7] + 0x6ee,&fStack_a4);
        sysMemReadB(&cStack_5b,uStack_b4 + 5);
        fStack_a4 = (float)(int)cStack_5b;
        sysMemWriteB(piVar2->g[7] + 0x848,&fStack_a4);
        sysMemReadB(&cStack_5c,uStack_b4 + 6);
        fStack_a4 = (float)(int)cStack_5c;
        sysMemWriteB(piVar2->g[7] + 0x849,&fStack_a4);
        sysMemReadB(&cStack_5d,uStack_b4 + 7);
        fStack_a4 = (float)(int)cStack_5d;
        sysMemWriteB(piVar2->g[7] + 0x84a,&fStack_a4);
        sysMemReadB(&cStack_5e,uStack_b4 + 8);
        fStack_a4 = (float)(int)cStack_5e;
        sysMemWriteB(piVar2->g[7] + 0x84b,&fStack_a4);
        sysMemReadB(&cStack_5f,uStack_b4 + 9);
        fStack_a4 = (float)(int)cStack_5f;
        sysMemWriteB(piVar2->g[7] + 0x84e,&fStack_a4);
        sysMemReadB(&cStack_60,uStack_b4 + 10);
        fStack_a4 = (float)(int)cStack_60;
        sysMemWriteB(piVar2->g[7] + 0x84f,&fStack_a4);
        uStack_b4 = uStack_b4 + 0xb;
        break;
      case 1.68156e-44:
        sysMemReadB(&cStack_61,uStack_b4 + 1);
        fStack_a4 = (float)(int)cStack_61;
        sysMemWriteB(piVar2->g[7] + 0x840,&fStack_a4);
        sysMemReadB(&cStack_62,uStack_b4 + 2);
        fStack_a4 = (float)(int)cStack_62;
        sysMemWriteB(piVar2->g[7] + 0x841,&fStack_a4);
        sysMemReadB(&cStack_63,uStack_b4 + 3);
        fStack_a4 = (float)(int)cStack_63;
        sysMemWriteB(piVar2->g[7] + 0x842,&fStack_a4);
        uStack_b4 = uStack_b4 + 4;
        break;
      case 1.82169e-44:
        sysMemReadB(&cStack_64,uStack_b4 + 1);
        fStack_a4 = (float)(int)cStack_64;
        sysMemWriteB(piVar2->g[7] + 0x84d,&fStack_a4);
        sysMemReadB(&bStack_65,uStack_b4 + 2);
        fStack_d4 = (float)(uint)bStack_65;
        sysMemWriteS(piVar2->g[7] + 0x858,&fStack_d4);
        uStack_b4 = uStack_b4 + 3;
        break;
      case 1.96182e-44:
        sysMemReadB(&bStack_66,uStack_b4 + 1);
        fStack_c0 = (float)(uint)bStack_66;
        sysMemReadB(&bStack_67,uStack_b4 + 2);
        fStack_a4 = (float)((uint)bStack_67 * 0x100);
        fStack_c0 = (float)((int)fStack_c0 + (int)fStack_a4);
        sysMemReadB(&bStack_68,uStack_b4 + 3);
        fStack_a4 = (float)((uint)bStack_68 * 0x10000);
        fStack_c0 = (float)((int)fStack_c0 + (int)fStack_a4);
        sysMemReadB(&bStack_69,uStack_b4 + 4);
        fStack_a4 = (float)((uint)bStack_69 * 0x1000000);
        fStack_c0 = (float)((int)fStack_c0 + (int)fStack_a4);
        sysMemReadB(&cStack_6a,uStack_b4 + 5);
        fStack_bc = (float)(int)cStack_6a;
        sysMemReadB(&bStack_6b,uStack_b4 + 6);
        fStack_b8 = (float)(uint)bStack_6b;
        sysMemReadB(&bStack_6c,uStack_b4 + 7);
        fStack_a4 = (float)((uint)bStack_6c * 0x100);
        fStack_b8 = (float)((int)fStack_b8 + (int)fStack_a4);
        sysMemReadB(&bStack_6d,uStack_b4 + 8);
        fStack_a4 = (float)((uint)bStack_6d * 0x10000);
        fStack_b8 = (float)((int)fStack_b8 + (int)fStack_a4);
        sysMemReadB(&bStack_6e,uStack_b4 + 9);
        fStack_a4 = (float)((uint)bStack_6e * 0x1000000);
        fStack_b8 = (float)((int)fStack_b8 + (int)fStack_a4);
        sysMemReadB(&cStack_6f,uStack_b4 + 10);
        fStack_b0 = (float)(int)cStack_6f;
        sysMemReadB(&bStack_70,uStack_b4 + 0xb);
        fStack_ac = (float)(uint)bStack_70;
        sysMemReadB(&bStack_71,uStack_b4 + 0xc);
        fStack_a4 = (float)((uint)bStack_71 * 0x100);
        fStack_ac = (float)((int)fStack_ac + (int)fStack_a4);
        sysMemReadB(&bStack_72,uStack_b4 + 0xd);
        fStack_a4 = (float)((uint)bStack_72 * 0x10000);
        fStack_ac = (float)((int)fStack_ac + (int)fStack_a4);
        sysMemReadB(&bStack_73,uStack_b4 + 0xe);
        fStack_a4 = (float)((uint)bStack_73 * 0x1000000);
        fStack_ac = (float)((int)fStack_ac + (int)fStack_a4);
        sysMemReadW(&fStack_a8,piVar2->g[7] + 0x5f4);
        fStack_a4 = 0.0;
        fStack_d0 = fStack_c0 - fStack_b8;
        fStack_d4 = fStack_bc;
        fStack_cc = fStack_a8 - fStack_b8;
        sysMemReadB(&cStack_74,piVar2->g[7] + 0x822);
        fStack_c8 = (float)(int)cStack_74;
        if ((int)fStack_b0 < 1) {
          if (fStack_b0 == 0.0) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          fStack_c4 = fStack_ac - fStack_b8;
          if (fStack_cc <= fStack_c4) {
            if (fStack_c4 == fStack_cc) {
              bVar1 = false;
            }
            else {
              bVar1 = false;
            }
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            fStack_c8 = fStack_b0;
            fStack_d0 = fStack_c4;
          }
          else {
            fStack_d4 = fStack_b0;
            fStack_cc = fStack_a8 - fStack_ac;
            fStack_d0 = fStack_c0 - fStack_ac;
          }
        }
        if ((int)fStack_d0 < 1) {
          if (fStack_d0 == 0.0) {
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
          if (fStack_cc <= fStack_d0) {
            if (fStack_d0 == fStack_cc) {
              uStack_a0 = 2;
            }
            else {
              uStack_a0 = 1;
            }
          }
          else {
            uStack_a0 = 4;
          }
          if ((uStack_a0 & 4) == 0) {
            fStack_cc = fStack_d0;
          }
          else {
            if (fStack_cc <= fStack_a4) {
              if (fStack_a4 == fStack_cc) {
                uStack_a0 = 2;
              }
              else {
                uStack_a0 = 1;
              }
            }
            else {
              uStack_a0 = 4;
            }
            if ((uStack_a0 & 1) == 0) {
              fStack_cc = fStack_a4;
            }
          }
        }
        else {
          if (fStack_cc <= fStack_a4) {
            if (fStack_a4 == fStack_cc) {
              uStack_a0 = 2;
            }
            else {
              uStack_a0 = 1;
            }
          }
          else {
            uStack_a0 = 4;
          }
          if ((uStack_a0 & 4) == 0) {
            fStack_cc = fStack_a4;
          }
          else {
            if (fStack_cc <= fStack_d0) {
              if (fStack_d0 == fStack_cc) {
                uStack_a0 = 2;
              }
              else {
                uStack_a0 = 1;
              }
            }
            else {
              uStack_a0 = 4;
            }
            if ((uStack_a0 & 1) == 0) {
              fStack_cc = fStack_d0;
            }
          }
        }
        fStack_c8 = (float)(uint)((int)fStack_c8 - (int)fStack_d4);
        fStack_cc = (float)(int)((fStack_cc / fStack_d0) * fStack_c8);
        fStack_d4 = (float)((int)fStack_d4 + (int)fStack_cc);
        sysMemWriteB(piVar2->g[7] + 0x822,&fStack_d4);
        uStack_b4 = uStack_b4 + 0xf;
        break;
      case 2.10195e-44:
        uStack_b4 = uStack_b4 + 3;
        break;
      case 2.24208e-44:
        sysMemReadB(&bStack_75,uStack_b4 + 1);
        fStack_d0 = (float)(uStack_b4 + 2);
        fStack_d4 = (float)(uint)bStack_75;
        sysMemWriteW(piVar2->g[7] + 0x854,&fStack_d0);
        sysMemReadB(&bStack_76,(int)fStack_d0 + -2 + (int)fStack_d4 * 2);
        fStack_cc = (float)(uint)bStack_76;
        sysMemWriteS(piVar2->g[7] + 0x800,&fStack_cc);
        uStack_b4 = (int)fStack_d0 + (int)fStack_d4 * 2;
        break;
      case 2.38221e-44:
        uStack_b4 = uStack_b4 + 7;
        break;
      case 2.52234e-44:
        sysMemReadB(&cStack_77,uStack_b4 + 1);
        fStack_a4 = (float)(int)cStack_77;
        sysMemWriteB(piVar2->g[7] + 0x864,&fStack_a4);
        sysMemReadB(&cStack_78,uStack_b4 + 2);
        fStack_a4 = (float)(int)cStack_78;
        sysMemWriteB(piVar2->g[7] + 0x865,&fStack_a4);
        sysMemReadB(&cStack_79,uStack_b4 + 3);
        fStack_a4 = (float)(int)cStack_79;
        sysMemWriteB(piVar2->g[7] + 0x868,&fStack_a4);
        sysMemReadB(&cStack_7a,uStack_b4 + 4);
        fStack_a4 = (float)(int)cStack_7a;
        sysMemWriteB(piVar2->g[7] + 0x869,&fStack_a4);
        sysMemReadB(&cStack_7b,uStack_b4 + 5);
        fStack_a4 = (float)(int)cStack_7b;
        sysMemWriteB(piVar2->g[7] + 0x878,&fStack_a4);
        sysMemReadB(&cStack_7c,uStack_b4 + 6);
        fStack_a4 = (float)(int)cStack_7c;
        sysMemWriteB(piVar2->g[7] + 0x879,&fStack_a4);
        uStack_b4 = uStack_b4 + 7;
        break;
      case 2.66247e-44:
        sysMemReadB(&cStack_7d,uStack_b4 + 1);
        fStack_a4 = (float)(int)cStack_7d;
        sysMemWriteB(piVar2->g[7] + 0x802,&fStack_a4);
        sysMemReadB(&cStack_7e,uStack_b4 + 2);
        fStack_a4 = (float)(int)cStack_7e;
        sysMemWriteB(piVar2->g[7] + 0x803,&fStack_a4);
        sysMemReadB(&cStack_7f,uStack_b4 + 3);
        fStack_a4 = (float)(int)cStack_7f;
        sysMemWriteB(piVar2->g[7] + 0x86c,&fStack_a4);
        sysMemReadB(&cStack_80,uStack_b4 + 4);
        fStack_a4 = (float)(int)cStack_80;
        sysMemWriteB(piVar2->g[7] + 0x86d,&fStack_a4);
        sysMemReadB(&cStack_81,uStack_b4 + 5);
        fStack_a4 = (float)(int)cStack_81;
        sysMemWriteB(piVar2->g[7] + 0x86e,&fStack_a4);
        sysMemReadB(&cStack_82,uStack_b4 + 6);
        fStack_a4 = (float)(int)cStack_82;
        sysMemWriteB(piVar2->g[7] + 0x86f,&fStack_a4);
        uStack_b4 = uStack_b4 + 7;
        break;
      case 2.8026e-44:
        sysMemReadB(&cStack_83,uStack_b4 + 1);
        fStack_a4 = (float)(int)cStack_83;
        sysMemWriteB(piVar2->g[7] + 0x870,&fStack_a4);
        sysMemReadB(&cStack_84,uStack_b4 + 2);
        fStack_a4 = (float)(int)cStack_84;
        sysMemWriteB(piVar2->g[7] + 0x871,&fStack_a4);
        uStack_b4 = uStack_b4 + 3;
        break;
      case 2.94273e-44:
        sysMemReadB(&bStack_85,uStack_b4 + 1);
        fStack_d4 = (float)(uint)bStack_85;
        sysMemReadB(&bStack_86,piVar2->g[7] + 0xa20);
        fStack_d0 = (float)(uint)bStack_86;
        sysMemReadB(&bStack_87,piVar2->g[7] + 0xa21);
        fStack_cc = (float)(uint)bStack_87;
        if ((uint)fStack_d4 < (uint)fStack_d0) {
          uStack_a0 = 4;
        }
        else if (fStack_d4 == fStack_d0) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 1;
        }
        if ((uStack_a0 & 3) == 0) {
          fStack_c8 = (float)((int)fStack_d0 - (int)fStack_cc);
          if ((uint)fStack_c8 < (uint)fStack_d4) {
            uStack_a0 = 4;
          }
          else if (fStack_c8 == fStack_d4) {
            uStack_a0 = 2;
          }
          else {
            uStack_a0 = 1;
          }
          if ((uStack_a0 & 6) == 0) {
            if ((uint)fStack_cc < 2) {
              if (fStack_cc == 1.4013e-45) {
                uStack_a0 = 2;
              }
              else {
                uStack_a0 = 1;
              }
            }
            else {
              uStack_a0 = 4;
            }
            if ((uStack_a0 & 4) == 0) {
              sysMemReadB(&cStack_88,piVar2->g[7] + 0x822);
              fStack_d4 = (float)((uint)(int)cStack_88 >> 2);
              fStack_b8 = (float)((int)cStack_88 + (int)fStack_d4);
            }
            else {
              sysMemReadB(&bStack_89,uStack_b4 + 2);
              fStack_c8 = (float)(uint)bStack_89;
              sysMemReadB(&bStack_8a,uStack_b4 + 3);
              fStack_a4 = (float)((uint)bStack_8a * 0x100);
              fStack_c8 = (float)((int)fStack_c8 + (int)fStack_a4);
              sysMemReadB(&bStack_8b,uStack_b4 + 4);
              fStack_a4 = (float)((uint)bStack_8b * 0x10000);
              fStack_c8 = (float)((int)fStack_c8 + (int)fStack_a4);
              sysMemReadB(&bStack_8c,uStack_b4 + 5);
              fStack_a4 = (float)((uint)bStack_8c * 0x1000000);
              fStack_c8 = (float)((int)fStack_c8 + (int)fStack_a4);
              sysMemReadB(&cStack_8d,piVar2->g[7] + 0x822);
              if (cStack_8d < '\0') {
                fStack_ac = (float)((uint)(int)cStack_8d >> 1 | (int)cStack_8d & 1U);
                fStack_ac = fStack_ac + fStack_ac;
              }
              else {
                fStack_ac = (float)(int)cStack_8d;
              }
              fStack_c4 = (float)(uint)((int)fStack_d0 - (int)fStack_d4);
              fStack_c0 = (float)(uint)fStack_cc;
              fStack_bc = (fStack_c0 / fStack_c4) * fStack_c8;
              fStack_b0 = fStack_c8 * fStack_ac;
              fStack_ac = fStack_bc * fStack_ac;
              fStack_b8 = (float)(int)(fStack_b0 + fStack_ac);
            }
            sysMemWriteB(piVar2->g[7] + 0x822,&fStack_b8);
          }
        }
        uStack_b4 = uStack_b4 + 6;
        break;
      case 3.08286e-44:
        uStack_b4 = uStack_b4 + 5;
        break;
      case 3.22299e-44:
        sysMemReadB(&cStack_8e,uStack_b4 + 1);
        fStack_a4 = (float)(int)cStack_8e;
        sysMemWriteB(piVar2->g[7] + 0x87a,&fStack_a4);
        sysMemReadB(&cStack_8f,uStack_b4 + 2);
        fStack_a4 = (float)(int)cStack_8f;
        sysMemWriteB(piVar2->g[7] + 0x87b,&fStack_a4);
        uStack_b4 = uStack_b4 + 3;
        break;
      case 3.36312e-44:
        uStack_b4 = uStack_b4 + 0xd;
      }
    } while( true );
  }
LAB_001d2a64:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
switchD_001d2e14_caseD_0:
  sysMemWriteW(piVar2->g[7] + 0x82c,&uStack_b4);
  sysMemWriteW(piVar2->g[7] + 0x700,&uStack_b4);
  fStack_a4 = 0.0;
  sysMemWriteB(piVar2->g[7] + 0xa20,&fStack_a4);
  sysMemReadW(&fStack_a4,piVar2->g[7]);
  if (((uint)fStack_a4 & 0x40) != 0) {
    sysMemReadS(&uStack_94,piVar2->g[7] + 0x812);
    fStack_ac = (float)(uint)uStack_94;
    fStack_a4 = (float)-(int)fStack_ac;
    sysMemWriteS(piVar2->g[7] + 0x812,&fStack_a4);
    sysMemReadS(&uStack_96,piVar2->g[7] + 0x82a);
    fStack_ac = (float)(uint)uStack_96;
    fStack_a4 = (float)-(int)fStack_ac;
    sysMemWriteS(piVar2->g[7] + 0x82a,&fStack_a4);
    sysMemReadW(&fStack_a4,piVar2->g[7] + 0x830);
    fStack_a4 = -fStack_a4;
    sysMemWriteW(piVar2->g[7] + 0x830,&fStack_a4);
  }
  goto LAB_001d2a64;
}

