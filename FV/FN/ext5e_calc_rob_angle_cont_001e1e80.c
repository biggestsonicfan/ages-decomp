/* EXT 5e: calc_rob_angle_cont @ 001e1e80; patched over i960 02aaa8 (arcade calc_rob_angle_cont) */

undefined8 calc_rob_angle_cont(long param_1)

{
  i960_regs *piVar1;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined *apuStack_54 [4];
  ushort uStack_44;
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
  short sStack_a;
  short sStack_8;
  byte bStack_6;
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  apuStack_54[0] = &DAT_31006262;
  FUN_0018df40();
  sysMemReadW(&iStack_60,piVar1->g[7] + 0x80);
  sysMemReadW(&iStack_5c,piVar1->g[7] + 0x84);
  sysMemReadW(&iStack_58,piVar1->g[7] + 0x88);
  FUN_0018de40(&iStack_60);
  sysMemReadS(&sStack_8,piVar1->g[7] + 0x144);
  iStack_60 = (int)sStack_8;
  sysMemReadS(&sStack_a,piVar1->g[7] + 0x142);
  iStack_5c = (int)sStack_a;
  sysMemReadS(&sStack_c,piVar1->g[7] + 0x140);
  iStack_58 = (int)sStack_c;
  FUN_0018de40(&iStack_60);
  sysMemReadS(&sStack_e,piVar1->g[7] + 0xc02);
  iStack_60 = (int)sStack_e;
  sysMemReadS(&sStack_10,piVar1->g[7] + 0xc00);
  iStack_5c = (int)sStack_10;
  sysMemReadS(&sStack_12,piVar1->g[7] + 0xc04);
  iStack_58 = (int)sStack_12;
  FUN_0018de40(&iStack_60);
  apuStack_54[0] = (undefined *)0x33806767;
  FUN_0018df40();
  sysMemReadB(&bStack_1,piVar1->g[7] + 4);
  if ((bStack_1 & 1) == 0) {
    apuStack_54[0] = (undefined *)0x3a00;
  }
  else {
    apuStack_54[0] = (undefined *)0x3b00;
  }
  FUN_0018df40(apuStack_54[0]);
  piVar1->g[6] = 0x2c194;
  piVar1->g[5] = piVar1->g[7] + 0xba8;
  piVar1->g[4] = piVar1->g[7] + 0xb00;
  piVar1->g[1] = 1;
  piVar1->g[0] = piVar1->g[7] + 0x146;
  piVar1->g[3] = piVar1->g[7] + 0xc06;
  apuStack_54[0] = (undefined *)0x800101;
  FUN_0018df40();
  calc_unit_1(0);
  apuStack_54[0] = (undefined *)0x33806767;
  FUN_0018df40();
  sysMemReadB(&bStack_2,piVar1->g[7] + 4);
  if ((bStack_2 & 1) == 0) {
    apuStack_54[0] = (undefined *)0x3a0c;
  }
  else {
    apuStack_54[0] = (undefined *)0x3b0c;
  }
  FUN_0018df40(apuStack_54[0]);
  apuStack_54[0] = (undefined *)0x800101;
  FUN_0018df40();
  calc_unit_1(0);
  apuStack_54[0] = (undefined *)0x1000202;
  FUN_0018df40();
  apuStack_54[0] = (undefined *)0x800101;
  FUN_0018df40();
  apuStack_54[0] = (undefined *)0x9801313;
  FUN_0018df40();
  FUN_0018df40(apuStack_54[0]);
  FUN_0018df40(apuStack_54[0]);
  FUN_0018e100();
  apuStack_54[0] = (undefined *)0x35806b6b;
  FUN_0018df40();
  sysMemReadW(&iStack_60,piVar1->g[6]);
  sysMemReadW(&iStack_5c,piVar1->g[6] + 4);
  sysMemReadW(&iStack_58,piVar1->g[6] + 8);
  FUN_0018de40(&iStack_60);
  sysMemReadS(&sStack_14,piVar1->g[5] + 4);
  iStack_60 = (int)sStack_14;
  sysMemReadS(&sStack_16,piVar1->g[5] + 2);
  iStack_5c = (int)sStack_16;
  sysMemReadS(&sStack_18,piVar1->g[5]);
  iStack_58 = (int)sStack_18;
  FUN_0018de40(&iStack_60);
  sysMemReadS(&sStack_1a,piVar1->g[3] + 2);
  iStack_60 = (int)sStack_1a;
  sysMemReadS(&sStack_1c,piVar1->g[3]);
  iStack_5c = (int)sStack_1c;
  sysMemReadS(&sStack_1e,piVar1->g[3] + 4);
  iStack_58 = (int)sStack_1e;
  FUN_0018de40(&iStack_60);
  sysMemReadW(&iStack_60,piVar1->g[4]);
  sysMemReadW(&iStack_5c,piVar1->g[4] + 4);
  sysMemReadW(&iStack_58,piVar1->g[4] + 8);
  FUN_0018de40(&iStack_60);
  sysMemReadW(&iStack_60,piVar1->g[6] + 0x10);
  sysMemReadW(&iStack_5c,piVar1->g[6] + 0xc);
  FUN_0018dec0(&iStack_60);
  sysMemReadB(&bStack_3,piVar1->g[7] + 4);
  if ((bStack_3 & 1) == 0) {
    apuStack_54[0] = (undefined *)0x3a30;
    FUN_0018df40();
    apuStack_54[0] = (undefined *)0x3a24;
    FUN_0018df40();
  }
  else {
    apuStack_54[0] = (undefined *)0x3b30;
    FUN_0018df40();
    apuStack_54[0] = (undefined *)0x3b24;
    FUN_0018df40();
  }
  apuStack_54[0] = (undefined *)0x0;
  FUN_0018df40(0);
  piVar1->g[6] = piVar1->g[6] + 0x14;
  piVar1->g[5] = piVar1->g[5] + 6;
  piVar1->g[4] = piVar1->g[4] + 0xc;
  piVar1->g[3] = piVar1->g[3] + 6;
  piVar1->g[1] = piVar1->g[1] + 1;
  piVar1->g[0] = piVar1->g[0] + 0xe;
  FUN_0018e100();
  apuStack_54[0] = (undefined *)0x1000202;
  FUN_0018df40();
  apuStack_54[0] = (undefined *)0x9801313;
  FUN_0018df40();
  FUN_0018df40(apuStack_54[0]);
  FUN_0018df40(apuStack_54[0]);
  FUN_0018e100();
  apuStack_54[0] = (undefined *)0x35806b6b;
  FUN_0018df40();
  sysMemReadW(&iStack_60,piVar1->g[6]);
  sysMemReadW(&iStack_5c,piVar1->g[6] + 4);
  sysMemReadW(&iStack_58,piVar1->g[6] + 8);
  FUN_0018de40(&iStack_60);
  sysMemReadS(&sStack_20,piVar1->g[5] + 4);
  iStack_60 = (int)sStack_20;
  sysMemReadS(&sStack_22,piVar1->g[5] + 2);
  iStack_5c = (int)sStack_22;
  sysMemReadS(&sStack_24,piVar1->g[5]);
  iStack_58 = (int)sStack_24;
  FUN_0018de40(&iStack_60);
  sysMemReadS(&sStack_26,piVar1->g[3] + 2);
  iStack_60 = (int)sStack_26;
  sysMemReadS(&sStack_28,piVar1->g[3]);
  iStack_5c = (int)sStack_28;
  sysMemReadS(&sStack_2a,piVar1->g[3] + 4);
  iStack_58 = (int)sStack_2a;
  FUN_0018de40(&iStack_60);
  sysMemReadW(&iStack_60,piVar1->g[4]);
  sysMemReadW(&iStack_5c,piVar1->g[4] + 4);
  sysMemReadW(&iStack_58,piVar1->g[4] + 8);
  FUN_0018de40(&iStack_60);
  sysMemReadW(&iStack_60,piVar1->g[6] + 0x10);
  sysMemReadW(&iStack_5c,piVar1->g[6] + 0xc);
  FUN_0018dec0(&iStack_60);
  sysMemReadB(&bStack_4,piVar1->g[7] + 4);
  if ((bStack_4 & 1) == 0) {
    apuStack_54[0] = (undefined *)0x3a54;
    FUN_0018df40();
    apuStack_54[0] = (undefined *)0x3a48;
    FUN_0018df40();
  }
  else {
    apuStack_54[0] = (undefined *)0x3b54;
    FUN_0018df40();
    apuStack_54[0] = (undefined *)0x3b48;
    FUN_0018df40();
  }
  apuStack_54[0] = (undefined *)0x0;
  FUN_0018df40(0);
  piVar1->g[6] = piVar1->g[6] + 0x14;
  piVar1->g[5] = piVar1->g[5] + 6;
  piVar1->g[4] = piVar1->g[4] + 0xc;
  piVar1->g[3] = piVar1->g[3] + 6;
  piVar1->g[1] = piVar1->g[1] + 1;
  piVar1->g[0] = piVar1->g[0] + 0xe;
  FUN_0018e100();
  apuStack_54[0] = (undefined *)0x1000202;
  FUN_0018df40();
  calc_unit_1(0);
  apuStack_54[0] = (undefined *)0x800101;
  FUN_0018df40();
  apuStack_54[0] = (undefined *)0x9801313;
  FUN_0018df40();
  FUN_0018df40(apuStack_54[0]);
  FUN_0018df40(apuStack_54[0]);
  FUN_0018e100();
  apuStack_54[0] = (undefined *)0x35806b6b;
  FUN_0018df40();
  sysMemReadW(&iStack_60,piVar1->g[6]);
  sysMemReadW(&iStack_5c,piVar1->g[6] + 4);
  sysMemReadW(&iStack_58,piVar1->g[6] + 8);
  FUN_0018de40(&iStack_60);
  sysMemReadS(&sStack_2c,piVar1->g[5] + 4);
  iStack_60 = (int)sStack_2c;
  sysMemReadS(&sStack_2e,piVar1->g[5] + 2);
  iStack_5c = (int)sStack_2e;
  sysMemReadS(&sStack_30,piVar1->g[5]);
  iStack_58 = (int)sStack_30;
  FUN_0018de40(&iStack_60);
  sysMemReadS(&sStack_32,piVar1->g[3] + 2);
  iStack_60 = (int)sStack_32;
  sysMemReadS(&sStack_34,piVar1->g[3]);
  iStack_5c = (int)sStack_34;
  sysMemReadS(&sStack_36,piVar1->g[3] + 4);
  iStack_58 = (int)sStack_36;
  FUN_0018de40(&iStack_60);
  sysMemReadW(&iStack_60,piVar1->g[4]);
  sysMemReadW(&iStack_5c,piVar1->g[4] + 4);
  sysMemReadW(&iStack_58,piVar1->g[4] + 8);
  FUN_0018de40(&iStack_60);
  sysMemReadW(&iStack_60,piVar1->g[6] + 0x10);
  sysMemReadW(&iStack_5c,piVar1->g[6] + 0xc);
  FUN_0018dec0(&iStack_60);
  sysMemReadB(&bStack_5,piVar1->g[7] + 4);
  if ((bStack_5 & 1) == 0) {
    apuStack_54[0] = (undefined *)0x3a84;
    FUN_0018df40();
    apuStack_54[0] = (undefined *)0x3a78;
    FUN_0018df40();
  }
  else {
    apuStack_54[0] = (undefined *)0x3b84;
    FUN_0018df40();
    apuStack_54[0] = (undefined *)0x3b78;
    FUN_0018df40();
  }
  apuStack_54[0] = (undefined *)0x1;
  FUN_0018df40();
  piVar1->g[6] = piVar1->g[6] + 0x14;
  piVar1->g[5] = piVar1->g[5] + 6;
  piVar1->g[4] = piVar1->g[4] + 0xc;
  piVar1->g[3] = piVar1->g[3] + 6;
  piVar1->g[1] = piVar1->g[1] + 1;
  piVar1->g[0] = piVar1->g[0] + 0xe;
  FUN_0018e100();
  apuStack_54[0] = (undefined *)0x1000202;
  FUN_0018df40();
  apuStack_54[0] = (undefined *)0x9801313;
  FUN_0018df40();
  FUN_0018df40(apuStack_54[0]);
  FUN_0018df40(apuStack_54[0]);
  FUN_0018e100();
  apuStack_54[0] = (undefined *)0x35806b6b;
  FUN_0018df40();
  sysMemReadW(&iStack_60,piVar1->g[6]);
  sysMemReadW(&iStack_5c,piVar1->g[6] + 4);
  sysMemReadW(&iStack_58,piVar1->g[6] + 8);
  FUN_0018de40(&iStack_60);
  sysMemReadS(&sStack_38,piVar1->g[5] + 4);
  iStack_60 = (int)sStack_38;
  sysMemReadS(&sStack_3a,piVar1->g[5] + 2);
  iStack_5c = (int)sStack_3a;
  sysMemReadS(&sStack_3c,piVar1->g[5]);
  iStack_58 = (int)sStack_3c;
  FUN_0018de40(&iStack_60);
  sysMemReadS(&sStack_3e,piVar1->g[3] + 2);
  iStack_60 = (int)sStack_3e;
  sysMemReadS(&sStack_40,piVar1->g[3]);
  iStack_5c = (int)sStack_40;
  sysMemReadS(&sStack_42,piVar1->g[3] + 4);
  iStack_58 = (int)sStack_42;
  FUN_0018de40(&iStack_60);
  sysMemReadW(&iStack_60,piVar1->g[4]);
  sysMemReadW(&iStack_5c,piVar1->g[4] + 4);
  sysMemReadW(&iStack_58,piVar1->g[4] + 8);
  FUN_0018de40(&iStack_60);
  sysMemReadW(&iStack_60,piVar1->g[6] + 0x10);
  sysMemReadW(&iStack_5c,piVar1->g[6] + 0xc);
  FUN_0018dec0(&iStack_60);
  sysMemReadB(&bStack_6,piVar1->g[7] + 4);
  if ((bStack_6 & 1) == 0) {
    apuStack_54[0] = (undefined *)0x3aa8;
    FUN_0018df40();
    apuStack_54[0] = (undefined *)0x3a9c;
    FUN_0018df40();
  }
  else {
    apuStack_54[0] = (undefined *)0x3ba8;
    FUN_0018df40();
    apuStack_54[0] = (undefined *)0x3b9c;
    FUN_0018df40();
  }
  apuStack_54[0] = (undefined *)0x1;
  FUN_0018df40();
  piVar1->g[6] = piVar1->g[6] + 0x14;
  piVar1->g[5] = piVar1->g[5] + 6;
  piVar1->g[4] = piVar1->g[4] + 0xc;
  piVar1->g[3] = piVar1->g[3] + 6;
  piVar1->g[1] = piVar1->g[1] + 1;
  piVar1->g[0] = piVar1->g[0] + 0xe;
  FUN_0018e100();
  apuStack_54[0] = (undefined *)0x1000202;
  FUN_0018df40();
  adj_taikaku(0);
  sysMemReadS(&uStack_44,piVar1->g[7] + 0x1a8);
  apuStack_54[0] = (undefined *)(uint)uStack_44;
  sysMemWriteS(piVar1->g[7] + 0xc4c,apuStack_54);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

