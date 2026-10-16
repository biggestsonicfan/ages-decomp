/* EXT 57: calc_unit_mat @ 001d8500; patched over i960 017160 (arcade calc_unit_mat) */

/* WARNING: Removing unreachable block (ram,0x001d97b8) */

undefined8 calc_unit_mat(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  i960_regs *piVar3;
  uint *puVar4;
  float fVar5;
  char *pcVar6;
  int iStack_e4;
  float fStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  float fStack_d0;
  uint uStack_cc;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined *puStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  short sStack_88;
  short sStack_86;
  short sStack_84;
  short sStack_82;
  short sStack_80;
  short sStack_7e;
  short sStack_7c;
  short sStack_7a;
  short sStack_78;
  short sStack_76;
  short sStack_74;
  short sStack_72;
  short sStack_70;
  short sStack_6e;
  short sStack_6c;
  short sStack_6a;
  short sStack_68;
  short sStack_66;
  short sStack_64;
  short sStack_62;
  short sStack_60;
  short sStack_5e;
  short sStack_5c;
  short sStack_5a;
  short sStack_58;
  short sStack_56;
  short sStack_54;
  short sStack_52;
  short sStack_50;
  short sStack_4e;
  short sStack_4c;
  short sStack_4a;
  short sStack_48;
  short sStack_46;
  short sStack_44;
  short sStack_42;
  short sStack_40;
  short sStack_3e;
  short sStack_3c;
  short sStack_3a;
  short sStack_38;
  short sStack_36;
  short sStack_34;
  short sStack_32;
  short sStack_30;
  short sStack_2e;
  short sStack_2c;
  short sStack_2a;
  short sStack_28;
  short sStack_26;
  short sStack_24;
  short sStack_22;
  byte bStack_20;
  byte bStack_1f;
  byte bStack_1e;
  byte bStack_1d;
  byte bStack_1c;
  byte bStack_1b;
  byte bStack_1a;
  byte bStack_19;
  byte bStack_18;
  byte bStack_17;
  byte bStack_16;
  byte bStack_15;
  byte bStack_14;
  byte bStack_13;
  byte bStack_12;
  byte bStack_11;
  byte bStack_10;
  byte bStack_f;
  byte bStack_e;
  byte bStack_d;
  byte bStack_c;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  byte bStack_8;
  byte bStack_7;
  byte bStack_6;
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar3 = i960GetRegs();
  puVar4 = piVar3->g;
  puStack_b4 = puRam016bedd0;
  if (((uint)puRam016bedd0 & 0x20) == 0) {
    sysMemReadT(&fStack_e0,piVar3->g[7] + 500);
    sysMemWriteT(piVar3->g[7] + 0xc7c,&fStack_e0);
  }
  puStack_b4 = &DAT_1c003838;
  FUN_0018df40();
  sysMemReadB(&bStack_1,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_1;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x800101;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1800303;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x7000e0e;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x0;
  FUN_0018df40(0);
  sysMemReadW(&puStack_b4,piVar3->g[7] + 0x678);
  FUN_0018df40(puStack_b4);
  puStack_b4 = (undefined *)0x0;
  FUN_0018df40(0);
  puStack_b4 = (undefined *)0x3000606;
  FUN_0018df40();
  sysMemReadT(&fStack_c0,piVar3->g[7] + 0x18);
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x4800909;
  FUN_0018df40();
  sysMemReadS(&sStack_22,piVar3->g[7] + 0x26);
  puStack_b4 = (undefined *)(int)sStack_22;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x9001212;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x501024;
  FUN_0018e080(&fStack_c0);
  sysMemWriteT((uint)puStack_b4,&fStack_c0);
  FUN_0018e080(&fStack_c0);
  sysMemWriteT((uint)(puStack_b4 + 0xc),&fStack_c0);
  FUN_0018e080(&fStack_c0);
  sysMemWriteT((uint)(puStack_b4 + 0x18),&fStack_c0);
  sysMemReadW(&puStack_b4,piVar3->g[7]);
  if (((uint)puStack_b4 & 4) == 0) {
    puStack_b4 = (undefined *)0x3000606;
    FUN_0018df40();
    sysMemReadT(&fStack_c0,piVar3->g[7] + 0x80);
    sysMemReadW(&puStack_b4,piVar3->g[7] + 0xc50);
    fStack_bc = fStack_bc + (float)puStack_b4;
    FUN_0018de40(&fStack_c0);
  }
  else {
    sysMemReadB(&bStack_2,piVar3->g[7] + 0x83f);
    fStack_b8 = (float)(uint)bStack_2;
    if ((bStack_2 & 1) != 0) {
      puStack_b4 = (undefined *)0x3000606;
      FUN_0018df40();
      sysMemReadW(&puStack_b4,piVar3->g[7] + 0x80);
      FUN_0018df40(puStack_b4);
      puStack_b4 = (undefined *)0x0;
      FUN_0018df40(0);
      sysMemReadW(&puStack_b4,piVar3->g[7] + 0x88);
      FUN_0018df40(puStack_b4);
    }
  }
  puStack_b4 = (undefined *)0x34806969;
  FUN_0018df40();
  sysMemReadB(&bStack_3,piVar3->g[7] + 4);
  if ((bStack_3 & 1) == 0) {
    puStack_b4 = (undefined *)0x3a00;
  }
  else {
    puStack_b4 = (undefined *)0x3b00;
  }
  FUN_0018df40(puStack_b4);
  sysMemReadS(&sStack_24,piVar3->g[7] + 0x26);
  puStack_b4 = (undefined *)(int)sStack_24;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1a803535;
  FUN_0018df40();
  sysMemReadB(&bStack_4,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_4;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x0;
  FUN_0018df40(0);
  puStack_b4 = (undefined *)0x7800f0f;
  FUN_0018df40();
  FUN_0018e080(&fStack_c0);
  sysMemWriteT(piVar3->g[7] + 500,&fStack_c0);
  piVar3->g[0] = 0;
  FUN_001daf80(0);
  puStack_b4 = (undefined *)0x800101;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x3000606;
  FUN_0018df40();
  sysMemReadT(&fStack_c0,piVar3->g[7] + 0x8c);
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x34806969;
  FUN_0018df40();
  sysMemReadB(&bStack_5,piVar3->g[7] + 4);
  if ((bStack_5 & 1) == 0) {
    puStack_b4 = (undefined *)0x3a0c;
  }
  else {
    puStack_b4 = (undefined *)0x3b0c;
  }
  FUN_0018df40(puStack_b4);
  sysMemReadS(&sStack_26,piVar3->g[7] + 0x26);
  puStack_b4 = (undefined *)(int)sStack_26;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4000808;
  FUN_0018df40();
  sysMemReadS(&sStack_28,piVar3->g[7] + 0xbe6);
  puStack_b4 = (undefined *)(int)sStack_28;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1a803535;
  FUN_0018df40();
  sysMemReadB(&bStack_6,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_6;
  FUN_0018df40();
  puStack_b4 = (undefined *)0xc;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x7800f0f;
  FUN_0018df40();
  FUN_0018e080(&fStack_c0);
  sysMemWriteT(piVar3->g[7] + 0x200,&fStack_c0);
  piVar3->g[0] = 1;
  FUN_001daf80(0);
  puStack_b4 = (undefined *)0x800101;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x3000606;
  FUN_0018df40();
  sysMemReadT(&fStack_c0,piVar3->g[7] + 0x98);
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x1f803f3f;
  FUN_0018df40();
  sysMemReadS(&sStack_2a,piVar3->g[7] + 0xbb2);
  fStack_c0 = (float)(int)sStack_2a;
  sysMemReadS(&sStack_2c,piVar3->g[7] + 0xbb0);
  fStack_bc = (float)(int)sStack_2c;
  sysMemReadS(&sStack_2e,piVar3->g[7] + 0xbae);
  fStack_b8 = (float)(int)sStack_2e;
  FUN_0018de40(&fStack_c0);
  FUN_0018e100();
  puStack_b4 = (undefined *)0x4800909;
  FUN_0018df40();
  sysMemReadS(&sStack_30,piVar3->g[7] + 0xc0e);
  puStack_b4 = (undefined *)(int)sStack_30;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4000808;
  FUN_0018df40();
  sysMemReadS(&sStack_32,piVar3->g[7] + 0xc0c);
  puStack_b4 = (undefined *)(int)sStack_32;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x5000a0a;
  FUN_0018df40();
  sysMemReadS(&sStack_34,piVar3->g[7] + 0xc10);
  puStack_b4 = (undefined *)(int)sStack_34;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x5000a0a;
  FUN_0018df40();
  sysMemReadS(&sStack_36,piVar3->g[7] + 0x150);
  puStack_b4 = (undefined *)(int)sStack_36;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4800909;
  FUN_0018df40();
  sysMemReadS(&sStack_38,piVar3->g[7] + 0x14e);
  puStack_b4 = (undefined *)(int)sStack_38;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1a803535;
  FUN_0018df40();
  sysMemReadB(&bStack_7,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_7;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x18;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x7800f0f;
  FUN_0018df40();
  FUN_0018e080(&fStack_c0);
  sysMemWriteT(piVar3->g[7] + 0x20c,&fStack_c0);
  piVar3->g[0] = 2;
  FUN_001daf80(0);
  puStack_b4 = (undefined *)0x1000202;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x800101;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x3000606;
  FUN_0018df40();
  sysMemReadT(&fStack_c0,piVar3->g[7] + 0xa4);
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x34806969;
  FUN_0018df40();
  sysMemReadB(&bStack_8,piVar3->g[7] + 4);
  if ((bStack_8 & 1) == 0) {
    puStack_b4 = (undefined *)0x3a24;
  }
  else {
    puStack_b4 = (undefined *)0x3b24;
  }
  FUN_0018df40(puStack_b4);
  sysMemReadS(&sStack_3a,piVar3->g[7] + 0x26);
  puStack_b4 = (undefined *)(int)sStack_3a;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1a803535;
  FUN_0018df40();
  sysMemReadB(&bStack_9,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_9;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x24;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x7800f0f;
  FUN_0018df40();
  FUN_0018e080(&fStack_c0);
  sysMemWriteT(piVar3->g[7] + 0x218,&fStack_c0);
  piVar3->g[0] = 3;
  FUN_001daf80(0);
  puStack_b4 = (undefined *)0x3000606;
  FUN_0018df40();
  sysMemReadT(&fStack_c0,piVar3->g[7] + 0xb0);
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x34806969;
  FUN_0018df40();
  sysMemReadB(&bStack_a,piVar3->g[7] + 4);
  if ((bStack_a & 1) == 0) {
    puStack_b4 = (undefined *)0x3a30;
  }
  else {
    puStack_b4 = (undefined *)0x3b30;
  }
  FUN_0018df40(puStack_b4);
  sysMemReadS(&sStack_3c,piVar3->g[7] + 0x26);
  puStack_b4 = (undefined *)(int)sStack_3c;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1a803535;
  FUN_0018df40();
  sysMemReadB(&bStack_b,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_b;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x30;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x7800f0f;
  FUN_0018df40();
  FUN_0018e080(&fStack_c0);
  sysMemWriteT(piVar3->g[7] + 0x224,&fStack_c0);
  piVar3->g[0] = 4;
  FUN_001daf80(0);
  puStack_b4 = (undefined *)0x3000606;
  FUN_0018df40();
  sysMemReadT(&fStack_c0,piVar3->g[7] + 0xbc);
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x5000a0a;
  FUN_0018df40();
  sysMemReadS(&sStack_3e,piVar3->g[7] + 0x15e);
  puStack_b4 = (undefined *)(int)sStack_3e;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4800909;
  FUN_0018df40();
  sysMemReadS(&sStack_40,piVar3->g[7] + 0x15c);
  puStack_b4 = (undefined *)(int)sStack_40;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4000808;
  FUN_0018df40();
  sysMemReadS(&sStack_42,piVar3->g[7] + 0x15a);
  puStack_b4 = (undefined *)(int)sStack_42;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4800909;
  FUN_0018df40();
  sysMemReadS(&sStack_44,piVar3->g[7] + 0xbea);
  puStack_b4 = (undefined *)(int)sStack_44;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4000808;
  FUN_0018df40();
  sysMemReadS(&sStack_46,piVar3->g[7] + 0xbe8);
  puStack_b4 = (undefined *)(int)sStack_46;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x5000a0a;
  FUN_0018df40();
  sysMemReadS(&sStack_48,piVar3->g[7] + 0xbec);
  puStack_b4 = (undefined *)(int)sStack_48;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1a803535;
  FUN_0018df40();
  sysMemReadB(&bStack_c,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_c;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x3c;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x7800f0f;
  FUN_0018df40();
  FUN_0018e080(&fStack_c0);
  sysMemWriteT(piVar3->g[7] + 0x230,&fStack_c0);
  piVar3->g[0] = 5;
  FUN_001daf80(0);
  puStack_b4 = (undefined *)0x1000202;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x3000606;
  FUN_0018df40();
  sysMemReadT(&fStack_c0,piVar3->g[7] + 200);
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x34806969;
  FUN_0018df40();
  sysMemReadB(&bStack_d,piVar3->g[7] + 4);
  if ((bStack_d & 1) == 0) {
    puStack_b4 = (undefined *)0x3a48;
  }
  else {
    puStack_b4 = (undefined *)0x3b48;
  }
  FUN_0018df40(puStack_b4);
  sysMemReadS(&sStack_4a,piVar3->g[7] + 0x26);
  puStack_b4 = (undefined *)(int)sStack_4a;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1a803535;
  FUN_0018df40();
  sysMemReadB(&bStack_e,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_e;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x48;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x7800f0f;
  FUN_0018df40();
  FUN_0018e080(&fStack_c0);
  sysMemWriteT(piVar3->g[7] + 0x23c,&fStack_c0);
  piVar3->g[0] = 6;
  FUN_001daf80(0);
  puStack_b4 = (undefined *)0x3000606;
  FUN_0018df40();
  sysMemReadT(&fStack_c0,piVar3->g[7] + 0xd4);
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x34806969;
  FUN_0018df40();
  sysMemReadB(&bStack_f,piVar3->g[7] + 4);
  if ((bStack_f & 1) == 0) {
    puStack_b4 = (undefined *)0x3a54;
  }
  else {
    puStack_b4 = (undefined *)0x3b54;
  }
  FUN_0018df40(puStack_b4);
  sysMemReadS(&sStack_4c,piVar3->g[7] + 0x26);
  puStack_b4 = (undefined *)(int)sStack_4c;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1a803535;
  FUN_0018df40();
  sysMemReadB(&bStack_10,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_10;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x54;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x7800f0f;
  FUN_0018df40();
  FUN_0018e080(&fStack_c0);
  sysMemWriteT(piVar3->g[7] + 0x248,&fStack_c0);
  piVar3->g[0] = 7;
  FUN_001daf80(0);
  puStack_b4 = (undefined *)0x3000606;
  FUN_0018df40();
  sysMemReadT(&fStack_c0,piVar3->g[7] + 0xe0);
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x5000a0a;
  FUN_0018df40();
  sysMemReadS(&sStack_4e,piVar3->g[7] + 0x16c);
  puStack_b4 = (undefined *)(int)sStack_4e;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4800909;
  FUN_0018df40();
  sysMemReadS(&sStack_50,piVar3->g[7] + 0x16a);
  puStack_b4 = (undefined *)(int)sStack_50;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4000808;
  FUN_0018df40();
  sysMemReadS(&sStack_52,piVar3->g[7] + 0x168);
  puStack_b4 = (undefined *)(int)sStack_52;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4800909;
  FUN_0018df40();
  sysMemReadS(&sStack_54,piVar3->g[7] + 0xbf0);
  puStack_b4 = (undefined *)(int)sStack_54;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4000808;
  FUN_0018df40();
  sysMemReadS(&sStack_56,piVar3->g[7] + 0xbee);
  puStack_b4 = (undefined *)(int)sStack_56;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x5000a0a;
  FUN_0018df40();
  sysMemReadS(&sStack_58,piVar3->g[7] + 0xbf2);
  puStack_b4 = (undefined *)(int)sStack_58;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1a803535;
  FUN_0018df40();
  sysMemReadB(&bStack_11,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_11;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x60;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x7800f0f;
  FUN_0018df40();
  FUN_0018e080(&fStack_c0);
  sysMemWriteT(piVar3->g[7] + 0x254,&fStack_c0);
  piVar3->g[0] = 8;
  FUN_001daf80(0);
  puStack_b4 = (undefined *)0x1000202;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x3000606;
  FUN_0018df40();
  sysMemReadT(&fStack_c0,piVar3->g[7] + 0xec);
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x1f803f3f;
  FUN_0018df40();
  sysMemReadS(&sStack_5a,piVar3->g[7] + 0xbc4);
  fStack_c0 = (float)(int)sStack_5a;
  sysMemReadS(&sStack_5c,piVar3->g[7] + 0xbc2);
  fStack_bc = (float)(int)sStack_5c;
  sysMemReadS(&sStack_5e,piVar3->g[7] + 0xbc0);
  fStack_b8 = (float)(int)sStack_5e;
  FUN_0018de40(&fStack_c0);
  FUN_0018e100();
  puStack_b4 = (undefined *)0x4800909;
  FUN_0018df40();
  sysMemReadS(&sStack_60,piVar3->g[7] + 0xc20);
  puStack_b4 = (undefined *)(int)sStack_60;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4000808;
  FUN_0018df40();
  sysMemReadS(&sStack_62,piVar3->g[7] + 0xc1e);
  puStack_b4 = (undefined *)(int)sStack_62;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x5000a0a;
  FUN_0018df40();
  sysMemReadS(&sStack_64,piVar3->g[7] + 0xc22);
  puStack_b4 = (undefined *)(int)sStack_64;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x5000a0a;
  FUN_0018df40();
  sysMemReadS(&sStack_66,piVar3->g[7] + 0x172);
  puStack_b4 = (undefined *)(int)sStack_66;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4800909;
  FUN_0018df40();
  sysMemReadS(&sStack_68,piVar3->g[7] + 0x170);
  puStack_b4 = (undefined *)(int)sStack_68;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1a803535;
  FUN_0018df40();
  sysMemReadB(&bStack_12,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_12;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x6c;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x7800f0f;
  FUN_0018df40();
  FUN_0018e080(&fStack_c0);
  sysMemWriteT(piVar3->g[7] + 0x260,&fStack_c0);
  piVar3->g[0] = 9;
  FUN_001daf80(0);
  piVar3->r[1] = piVar3->r[1] + 4;
  sysMemWriteW(piVar3->r[1] - 4,&iStack_e4);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,&fStack_e0);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,&fStack_d0);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,&fStack_c0);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,piVar3->g);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,piVar3->g + 4);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,piVar3->g + 8);
  piVar3->r[1] = piVar3->r[1] + 4;
  sysMemWriteW(piVar3->r[1] - 4,piVar3->g + 0xc);
  piVar3->r[1] = piVar3->r[1] + 4;
  sysMemWriteW(piVar3->r[1] - 4,piVar3->g + 0xd);
  piVar3->r[1] = piVar3->r[1] + 4;
  sysMemWriteW(piVar3->r[1] - 4,piVar3->g + 0xe);
  puStack_b4 = (undefined *)0x28805151;
  FUN_0018df40();
  uStack_8c = FUN_0018e100();
  *puVar4 = (int)(short)uStack_8c;
  uStack_90 = FUN_0018e100();
  piVar3->g[1] = (int)(short)uStack_90;
  uStack_94 = FUN_0018e100();
  piVar3->g[2] = (int)(short)uStack_94;
  sysMemWriteS(piVar3->g[7] + 0xad0,piVar3->g);
  sysMemWriteS(piVar3->g[7] + 0xad2,piVar3->g + 1);
  fStack_b8 = 4.59177e-41;
  piVar3->g[2] = 0x8000 - piVar3->g[2];
  sysMemWriteS(piVar3->g[7] + 0xad4,piVar3->g + 2);
  sysMemReadW(piVar3->g + 0xe,piVar3->r[1] - 4);
  piVar3->r[1] = piVar3->r[1] - 4;
  sysMemReadW(piVar3->g + 0xd,piVar3->r[1] - 4);
  piVar3->r[1] = piVar3->r[1] - 4;
  sysMemReadW(piVar3->g + 0xc,piVar3->r[1] - 4);
  piVar3->r[1] = piVar3->r[1] - 4;
  sysMemReadQ(piVar3->g + 8,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadQ(piVar3->g + 4,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadQ(piVar3->g,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadQ(&fStack_c0,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadQ(&fStack_d0,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadQ(&fStack_e0,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadW(&iStack_e4,piVar3->r[1] - 4);
  piVar3->r[1] = piVar3->r[1] - 4;
  sysMemReadW(&iStack_e4,piVar3->g[7] + 400);
  sysMemReadW(&uStack_d4,iStack_e4 + 0x24);
  if (uStack_d4 == 0) {
    uStack_b0 = 2;
  }
  else {
    uStack_b0 = 4;
  }
  if ((uStack_b0 & 2) == 0) {
    puStack_b4 = (undefined *)0x800101;
    FUN_0018df40();
    puStack_b4 = (undefined *)0x6000c0c;
    FUN_0018df40();
    puStack_b4 = (undefined *)0x9801313;
    FUN_0018df40();
    FUN_0018df40(puStack_b4);
    FUN_0018df40(puStack_b4);
    FUN_0018e100();
    puStack_b4 = (undefined *)0x1b803737;
    FUN_0018df40();
    sysMemReadB(&bStack_13,piVar3->g[7] + 4);
    puStack_b4 = (undefined *)(uint)bStack_13;
    FUN_0018df40();
    puStack_b4 = (undefined *)0xc;
    FUN_0018df40();
    uStack_cc = uStack_d4 + 0x70;
    uStack_d4 = 0x10;
    fStack_d0 = (float)(piVar3->g[7] + 0x1860);
    do {
      puStack_b4 = (undefined *)0x14802929;
      FUN_0018df40();
      sysMemReadT(&fStack_c0,uStack_cc);
      FUN_0018de40(&fStack_c0);
      FUN_0018e080(&fStack_c0);
      sysMemWriteT((uint)fStack_d0,&fStack_c0);
      uStack_cc = uStack_cc + 0xc;
      fStack_d0 = (float)((int)fStack_d0 + 0xc);
      if (uStack_d4 < 2) {
        if (uStack_d4 == 1) {
          uStack_b0 = 2;
        }
        else {
          uStack_b0 = 1;
        }
      }
      else {
        uStack_b0 = 4;
      }
      uStack_d4 = uStack_d4 - 1;
    } while ((uStack_b0 & 4) != 0);
    sysMemReadW(&iStack_e4,piVar3->g[7] + 400);
    sysMemReadW(&uStack_d4,iStack_e4 + 0x24);
    uStack_d8 = uStack_d4 + 0xd4;
    sysMemReadW(&fStack_d0,uStack_d4 + 0xd0);
    fStack_e0 = (float)((int)fStack_d0 * 10 + 1);
    uStack_cc = uStack_d8 + (int)fStack_e0 * 4;
    fStack_c8 = (float)(piVar3->g[7] + 0x1800);
    sysMemReadB(&bStack_14,piVar3->g[7] + 4);
    iStack_e4 = (uint)bStack_14 << 8;
    uRam016c5dcc = piVar3->g[0xe];
    piVar3->g[0xe] = 0x505;
    sysMemWriteW(piVar3->g[10] + 0x50,piVar3->g + 0xe);
    piVar3->g[0xe] = uRam016c5dcc;
    sysMemWriteW(piVar3->g[10] + piVar3->g[0xc],&iStack_e4);
    sysMemWriteW(piVar3->g[10] + piVar3->g[0xc],&fStack_e0);
    do {
      sysMemReadQ(&fStack_c0,uStack_d8);
      sysMemWriteQ(piVar3->g[10] + piVar3->g[0xc],&fStack_c0);
      uStack_dc = uStack_d8 + 0x10;
      sysMemReadB(&bStack_15,uStack_cc);
      fVar5 = (float)(uint)bStack_15;
      if (bStack_15 < 9) {
        if (bStack_15 == 8) {
          uStack_b0 = 2;
        }
        else {
          uStack_b0 = 1;
        }
      }
      else {
        uStack_b0 = 4;
      }
      fStack_e0 = fVar5;
      if ((uStack_b0 & 1) == 0) {
        fStack_e0 = (float)((int)fVar5 * 3);
        uStack_dc = (int)fStack_c8 + (int)fVar5 * 0xc;
      }
      sysMemReadT(&fStack_c0,uStack_dc);
      sysMemWriteT(piVar3->g[10] + piVar3->g[0xc],&fStack_c0);
      uStack_dc = uStack_d8 + 0x1c;
      sysMemReadB(&bStack_16,uStack_cc + 1);
      fVar5 = (float)(uint)bStack_16;
      if (bStack_16 < 9) {
        if (bStack_16 == 8) {
          uStack_b0 = 2;
        }
        else {
          uStack_b0 = 1;
        }
      }
      else {
        uStack_b0 = 4;
      }
      fStack_e0 = fVar5;
      if ((uStack_b0 & 1) == 0) {
        fStack_e0 = (float)((int)fVar5 * 3);
        uStack_dc = (int)fStack_c8 + (int)fVar5 * 0xc;
      }
      sysMemReadT(&fStack_c0,uStack_dc);
      sysMemWriteT(piVar3->g[10] + piVar3->g[0xc],&fStack_c0);
      uStack_d8 = uStack_d8 + 0x28;
      uStack_cc = uStack_cc + 2;
      if ((uint)fStack_d0 < 2) {
        if (fStack_d0 == 1.4013e-45) {
          uStack_b0 = 2;
        }
        else {
          uStack_b0 = 1;
        }
      }
      else {
        uStack_b0 = 4;
      }
      fStack_d0 = (float)((int)fStack_d0 + -1);
    } while ((uStack_b0 & 4) != 0);
    sysMemReadW(&iStack_e4,uStack_d8);
    sysMemWriteW(piVar3->g[10] + piVar3->g[0xc],&iStack_e4);
    puStack_b4 = (undefined *)(uint)bRam016b7cd0;
    if (bRam016b7cd0 < 3) {
      if (bRam016b7cd0 == 2) {
        uStack_b0 = 2;
      }
      else {
        uStack_b0 = 1;
      }
    }
    else {
      uStack_b0 = 4;
    }
    if ((uStack_b0 & 5) == 0) {
      iStack_e4 = 0;
      uRam016c5dcc = piVar3->g[0xe];
      piVar3->g[0xe] = 0x1010;
      sysMemWriteW(piVar3->g[10] + 0x100,piVar3->g + 0xe);
      piVar3->g[0xe] = uRam016c5dcc;
      sysMemWriteW(piVar3->g[10] + piVar3->g[0xc],&iStack_e4);
    }
    puStack_b4 = (undefined *)0x1000202;
    FUN_0018df40();
  }
  puStack_b4 = (undefined *)0x800101;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x3000606;
  FUN_0018df40();
  sysMemReadT(&fStack_c0,piVar3->g[7] + 0xf8);
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x34806969;
  FUN_0018df40();
  sysMemReadB(&bStack_17,piVar3->g[7] + 4);
  if ((bStack_17 & 1) == 0) {
    puStack_b4 = (undefined *)0x3a78;
  }
  else {
    puStack_b4 = (undefined *)0x3b78;
  }
  FUN_0018df40(puStack_b4);
  sysMemReadS(&sStack_6a,piVar3->g[7] + 0x26);
  puStack_b4 = (undefined *)(int)sStack_6a;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1a803535;
  FUN_0018df40();
  sysMemReadB(&bStack_18,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_18;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x78;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x7800f0f;
  FUN_0018df40();
  FUN_0018e080(&fStack_c0);
  sysMemWriteT(piVar3->g[7] + 0x26c,&fStack_c0);
  piVar3->g[0] = 10;
  FUN_001daf80(0);
  puStack_b4 = (undefined *)0x800101;
  FUN_0018df40();
  piVar3->r[1] = piVar3->r[1] + 4;
  sysMemWriteW(piVar3->r[1] - 4,&iStack_e4);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,&fStack_e0);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,&fStack_d0);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,&fStack_c0);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,piVar3->g);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,piVar3->g + 4);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,piVar3->g + 8);
  piVar3->r[1] = piVar3->r[1] + 4;
  sysMemWriteW(piVar3->r[1] - 4,piVar3->g + 0xc);
  piVar3->r[1] = piVar3->r[1] + 4;
  sysMemWriteW(piVar3->r[1] - 4,piVar3->g + 0xd);
  piVar3->r[1] = piVar3->r[1] + 4;
  sysMemWriteW(piVar3->r[1] - 4,piVar3->g + 0xe);
  puStack_b4 = (undefined *)0x28805151;
  FUN_0018df40();
  uStack_98 = FUN_0018e100();
  *puVar4 = (int)(short)uStack_98;
  uStack_9c = FUN_0018e100();
  piVar3->g[1] = (int)(short)uStack_9c;
  uStack_a0 = FUN_0018e100();
  piVar3->g[2] = (int)(short)uStack_a0;
  sysMemWriteS(piVar3->g[7] + 0xadc,piVar3->g);
  sysMemWriteS(piVar3->g[7] + 0xade,piVar3->g + 1);
  sysMemWriteS(piVar3->g[7] + 0xae0,piVar3->g + 2);
  sysMemReadW(piVar3->g + 0xe,piVar3->r[1] - 4);
  piVar3->r[1] = piVar3->r[1] - 4;
  sysMemReadW(piVar3->g + 0xd,piVar3->r[1] - 4);
  piVar3->r[1] = piVar3->r[1] - 4;
  sysMemReadW(piVar3->g + 0xc,piVar3->r[1] - 4);
  piVar3->r[1] = piVar3->r[1] - 4;
  sysMemReadQ(piVar3->g + 8,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadQ(piVar3->g + 4,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadQ(piVar3->g,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadQ(&fStack_c0,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadQ(&fStack_d0,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadQ(&fStack_e0,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadW(&iStack_e4,piVar3->r[1] - 4);
  piVar3->r[1] = piVar3->r[1] - 4;
  puStack_b4 = (undefined *)0x1000202;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x3000606;
  FUN_0018df40();
  sysMemReadT(&fStack_c0,piVar3->g[7] + 0x104);
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x34806969;
  FUN_0018df40();
  sysMemReadB(&bStack_19,piVar3->g[7] + 4);
  if ((bStack_19 & 1) == 0) {
    puStack_b4 = (undefined *)0x3a84;
  }
  else {
    puStack_b4 = (undefined *)0x3b84;
  }
  FUN_0018df40(puStack_b4);
  sysMemReadS(&sStack_6c,piVar3->g[7] + 0x26);
  puStack_b4 = (undefined *)(int)sStack_6c;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1a803535;
  FUN_0018df40();
  sysMemReadB(&bStack_1a,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_1a;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x84;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x7800f0f;
  FUN_0018df40();
  FUN_0018e080(&fStack_c0);
  sysMemWriteT(piVar3->g[7] + 0x278,&fStack_c0);
  piVar3->g[0] = 0xb;
  FUN_001daf80(0);
  puStack_b4 = (undefined *)0x3000606;
  FUN_0018df40();
  sysMemReadT(&fStack_c0,piVar3->g[7] + 0x110);
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x8801111;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x501024;
  sysMemReadT(&fStack_c0,0x501024);
  FUN_0018de40(&fStack_c0);
  sysMemReadT(&fStack_c0,(uint)(puStack_b4 + 0xc));
  FUN_0018de40(&fStack_c0);
  sysMemReadT(&fStack_c0,(uint)(puStack_b4 + 0x18));
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x5000a0a;
  FUN_0018df40();
  sysMemReadS(&sStack_6e,piVar3->g[7] + 0x180);
  puStack_b4 = (undefined *)(int)sStack_6e;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4800909;
  FUN_0018df40();
  sysMemReadS(&sStack_70,piVar3->g[7] + 0x17e);
  puStack_b4 = (undefined *)(int)sStack_70;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4000808;
  FUN_0018df40();
  sysMemReadS(&sStack_72,piVar3->g[7] + 0x17c);
  puStack_b4 = (undefined *)(int)sStack_72;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4800909;
  FUN_0018df40();
  sysMemReadS(&sStack_74,piVar3->g[7] + 0xbf6);
  puStack_b4 = (undefined *)(int)sStack_74;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4000808;
  FUN_0018df40();
  sysMemReadS(&sStack_76,piVar3->g[7] + 0xbf4);
  puStack_b4 = (undefined *)(int)sStack_76;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x5000a0a;
  FUN_0018df40();
  sysMemReadS(&sStack_78,piVar3->g[7] + 0xbf8);
  puStack_b4 = (undefined *)(int)sStack_78;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1a803535;
  FUN_0018df40();
  sysMemReadB(&bStack_1b,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_1b;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x90;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x7800f0f;
  FUN_0018df40();
  FUN_0018e080(&fStack_c0);
  sysMemWriteT(piVar3->g[7] + 0x284,&fStack_c0);
  piVar3->g[0] = 0xc;
  FUN_001daf80(0);
  puStack_b4 = (undefined *)0x1000202;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x3000606;
  FUN_0018df40();
  sysMemReadT(&fStack_c0,piVar3->g[7] + 0x11c);
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x34806969;
  FUN_0018df40();
  sysMemReadB(&bStack_1c,piVar3->g[7] + 4);
  if ((bStack_1c & 1) == 0) {
    puStack_b4 = (undefined *)0x3a9c;
  }
  else {
    puStack_b4 = (undefined *)0x3b9c;
  }
  FUN_0018df40(puStack_b4);
  sysMemReadS(&sStack_7a,piVar3->g[7] + 0x26);
  puStack_b4 = (undefined *)(int)sStack_7a;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1a803535;
  FUN_0018df40();
  sysMemReadB(&bStack_1d,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_1d;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x9c;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x7800f0f;
  FUN_0018df40();
  FUN_0018e080(&fStack_c0);
  sysMemWriteT(piVar3->g[7] + 0x290,&fStack_c0);
  piVar3->g[0] = 0xd;
  FUN_001daf80(0);
  puStack_b4 = (undefined *)0x800101;
  FUN_0018df40();
  piVar3->r[1] = piVar3->r[1] + 4;
  sysMemWriteW(piVar3->r[1] - 4,&iStack_e4);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,&fStack_e0);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,&fStack_d0);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,&fStack_c0);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,piVar3->g);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,piVar3->g + 4);
  piVar3->r[1] = piVar3->r[1] + 0x10;
  sysMemWriteQ(piVar3->r[1] - 0x10,piVar3->g + 8);
  piVar3->r[1] = piVar3->r[1] + 4;
  sysMemWriteW(piVar3->r[1] - 4,piVar3->g + 0xc);
  piVar3->r[1] = piVar3->r[1] + 4;
  sysMemWriteW(piVar3->r[1] - 4,piVar3->g + 0xd);
  piVar3->r[1] = piVar3->r[1] + 4;
  sysMemWriteW(piVar3->r[1] - 4,piVar3->g + 0xe);
  puStack_b4 = (undefined *)0x28805151;
  FUN_0018df40();
  uStack_a4 = FUN_0018e100();
  *puVar4 = (int)(short)uStack_a4;
  uStack_a8 = FUN_0018e100();
  piVar3->g[1] = (int)(short)uStack_a8;
  uStack_ac = FUN_0018e100();
  piVar3->g[2] = (int)(short)uStack_ac;
  sysMemWriteS(piVar3->g[7] + 0xad6,piVar3->g);
  sysMemWriteS(piVar3->g[7] + 0xad8,piVar3->g + 1);
  sysMemWriteS(piVar3->g[7] + 0xada,piVar3->g + 2);
  sysMemReadW(piVar3->g + 0xe,piVar3->r[1] - 4);
  piVar3->r[1] = piVar3->r[1] - 4;
  sysMemReadW(piVar3->g + 0xd,piVar3->r[1] - 4);
  piVar3->r[1] = piVar3->r[1] - 4;
  sysMemReadW(piVar3->g + 0xc,piVar3->r[1] - 4);
  piVar3->r[1] = piVar3->r[1] - 4;
  sysMemReadQ(piVar3->g + 8,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadQ(piVar3->g + 4,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadQ(piVar3->g,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadQ(&fStack_c0,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadQ(&fStack_d0,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadQ(&fStack_e0,piVar3->r[1] - 0x10);
  piVar3->r[1] = piVar3->r[1] - 0x10;
  sysMemReadW(&iStack_e4,piVar3->r[1] - 4);
  piVar3->r[1] = piVar3->r[1] - 4;
  puStack_b4 = (undefined *)0x1000202;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x3000606;
  FUN_0018df40();
  sysMemReadT(&fStack_c0,piVar3->g[7] + 0x128);
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x34806969;
  FUN_0018df40();
  sysMemReadB(&bStack_1e,piVar3->g[7] + 4);
  if ((bStack_1e & 1) == 0) {
    puStack_b4 = (undefined *)0x3aa8;
  }
  else {
    puStack_b4 = (undefined *)0x3ba8;
  }
  FUN_0018df40(puStack_b4);
  sysMemReadS(&sStack_7c,piVar3->g[7] + 0x26);
  puStack_b4 = (undefined *)(int)sStack_7c;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1a803535;
  FUN_0018df40();
  sysMemReadB(&bStack_1f,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_1f;
  FUN_0018df40();
  puStack_b4 = (undefined *)0xa8;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x7800f0f;
  FUN_0018df40();
  FUN_0018e080(&fStack_c0);
  sysMemWriteT(piVar3->g[7] + 0x29c,&fStack_c0);
  piVar3->g[0] = 0xe;
  FUN_001daf80(0);
  puStack_b4 = (undefined *)0x3000606;
  FUN_0018df40();
  sysMemReadT(&fStack_c0,piVar3->g[7] + 0x134);
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x8801111;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x501024;
  sysMemReadT(&fStack_c0,0x501024);
  FUN_0018de40(&fStack_c0);
  sysMemReadT(&fStack_c0,(uint)(puStack_b4 + 0xc));
  FUN_0018de40(&fStack_c0);
  sysMemReadT(&fStack_c0,(uint)(puStack_b4 + 0x18));
  FUN_0018de40(&fStack_c0);
  puStack_b4 = (undefined *)0x5000a0a;
  FUN_0018df40();
  sysMemReadS(&sStack_7e,piVar3->g[7] + 0x18e);
  puStack_b4 = (undefined *)(int)sStack_7e;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4800909;
  FUN_0018df40();
  sysMemReadS(&sStack_80,piVar3->g[7] + 0x18c);
  puStack_b4 = (undefined *)(int)sStack_80;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4000808;
  FUN_0018df40();
  sysMemReadS(&sStack_82,piVar3->g[7] + 0x18a);
  puStack_b4 = (undefined *)(int)sStack_82;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4800909;
  FUN_0018df40();
  sysMemReadS(&sStack_84,piVar3->g[7] + 0xbfc);
  puStack_b4 = (undefined *)(int)sStack_84;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x4000808;
  FUN_0018df40();
  sysMemReadS(&sStack_86,piVar3->g[7] + 0xbfa);
  puStack_b4 = (undefined *)(int)sStack_86;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x5000a0a;
  FUN_0018df40();
  sysMemReadS(&sStack_88,piVar3->g[7] + 0xbfe);
  puStack_b4 = (undefined *)(int)sStack_88;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x1a803535;
  FUN_0018df40();
  sysMemReadB(&bStack_20,piVar3->g[7] + 4);
  puStack_b4 = (undefined *)(uint)bStack_20;
  FUN_0018df40();
  puStack_b4 = (undefined *)0xb4;
  FUN_0018df40();
  puStack_b4 = (undefined *)0x7800f0f;
  FUN_0018df40();
  FUN_0018e080(&fStack_c0);
  sysMemWriteT(piVar3->g[7] + 0x2a8,&fStack_c0);
  piVar3->g[0] = 0xf;
  FUN_001daf80(0);
  puStack_b4 = (undefined *)0x1000202;
  FUN_0018df40();
  rob_ball_data_make(0);
  puStack_b4 = puRam016bedd0;
  if (((uint)puRam016bedd0 & 0x20) == 0) {
    sysMemReadT(&fStack_d0,piVar3->g[7] + 500);
    sysMemReadT(&fStack_c0,piVar3->g[7] + 0x710);
    sysMemWriteT(piVar3->g[7] + 0x1e0c,&fStack_c0);
    sysMemWriteT(piVar3->g[7] + 0x710,&fStack_d0);
    fStack_d0 = fStack_d0 - fStack_c0;
    fStack_c8 = fStack_c8 - fStack_b8;
    sysMemReadT(&fStack_e0,piVar3->g[7] + 0x1e00);
    fStack_b8 = (float)(uint)bRam016b6dfb;
    iStack_e4 = 9;
    if ((uint)fStack_b8 < 10) {
      if (fStack_b8 == 1.26117e-44) {
        uStack_b0 = 2;
      }
      else {
        uStack_b0 = 1;
      }
    }
    else {
      uStack_b0 = 4;
    }
    if ((uStack_b0 & 5) == 0) {
      fStack_b8 = (float)(uint)bRam016b6e01;
      iStack_e4 = 9;
      if ((uint)fStack_b8 < 10) {
        if (fStack_b8 == 1.26117e-44) {
          uStack_b0 = 2;
        }
        else {
          uStack_b0 = 1;
        }
      }
      else {
        uStack_b0 = 4;
      }
      if (((uStack_b0 & 5) == 0) &&
         (sysMemReadW(&puStack_b4,piVar3->g[7]), ((uint)puStack_b4 & 0x80) != 0)) {
        puStack_b4 = (undefined *)0x16802d2d;
        FUN_0018df40();
        FUN_0018df40(fStack_d0);
        FUN_0018df40(fStack_c8);
        fStack_e0 = (float)FUN_0018e100();
        iStack_e4 = 0x3f333333;
        if (0.7 <= fStack_e0) {
          if (fStack_e0 == 0.7) {
            uStack_b0 = 2;
          }
          else {
            uStack_b0 = 1;
          }
        }
        else {
          uStack_b0 = 4;
        }
        if ((uStack_b0 & 4) == 0) {
          sysMemReadW(&iStack_e4,piVar3->g[7] + 0x1a4);
        }
      }
    }
  }
  if (iRam0028a5dc != 0) {
    pcVar6 = &DAT_00289f00;
    cVar1 = DAT_00289f00;
    while (-1 < cVar1) {
      uVar2 = *(undefined1 *)(piVar3->g[7] + 0x11b6dd4);
      FUN_0018f580();
      FUN_0018e9c0(uVar2,*pcVar6);
      cprSubScaleCurMat(0x289ef0);
      FUN_0018ea80(uVar2,*pcVar6);
      FUN_0018f480();
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

