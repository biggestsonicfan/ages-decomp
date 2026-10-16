/* EXT 63: send_coli_ball_R @ 001ebb40; patched over i960 001b90 (arcade send_coli_ball_R) */

undefined8 send_coli_ball_R(int param_1)

{
  undefined4 uVar1;
  uint uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  uint uStack_28;
  int iStack_24;
  undefined4 auStack_20 [3];
  undefined4 uStack_14;
  uint uStack_10;
  byte bStack_2;
  byte bStack_1;
  
  i960GetRegs();
  iStack_24 = 0x50a224;
  uStack_40 = 0;
  iStack_3c = 0x30600;
  iStack_34 = 0x30700;
  do {
    sysMemReadB(&bStack_1,uStack_40 + 0x292ac);
    uStack_28 = (uint)bStack_1;
    sysMemReadW(&uStack_38,uStack_28 * 4 + 0x50a19c);
    sysMemReadW(auStack_20,iStack_24 + uStack_28 * 4);
    uStack_14 = 0x9801313;
    FUN_0018df40();
    FUN_0018df40(uStack_14);
    FUN_0018df40(uStack_14);
    FUN_0018e100();
    uStack_14 = 0x24804949;
    FUN_0018df40();
    FUN_0018df40(iStack_3c);
    FUN_0018df40(uStack_38);
    uStack_14 = 0x24804949;
    FUN_0018df40();
    FUN_0018df40(iStack_34);
    FUN_0018df40(auStack_20[0]);
    uStack_14 = 0x20;
    uStack_40 = uStack_40 + 1;
    iStack_3c = iStack_3c + 1;
    iStack_34 = iStack_34 + 1;
    if (uStack_40 < 0x21) {
      if (uStack_40 == 0x20) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
  } while ((uStack_10 & 5) != 0);
  uStack_38 = 0;
  iStack_34 = 0x30720;
  uStack_14 = 0x9801313;
  FUN_0018df40();
  FUN_0018df40(uStack_14);
  FUN_0018df40(uStack_14);
  FUN_0018e100();
  uStack_14 = 0x24804949;
  FUN_0018df40();
  FUN_0018df40(0x30620);
  FUN_0018df40(uStack_38);
  uStack_14 = 0x24804949;
  FUN_0018df40();
  FUN_0018df40(iStack_34);
  FUN_0018df40(uStack_38);
  uStack_40 = 0x1f;
  iStack_3c = 0x30621;
  iStack_34 = iStack_34 + 1;
  do {
    sysMemReadB(&bStack_2,uStack_40 + 0x292ac);
    uStack_28 = (uint)bStack_2;
    sysMemReadW(&uStack_38,uStack_28 * 4 + 0x50a19c);
    sysMemReadW(auStack_20,iStack_24 + uStack_28 * 4);
    uStack_14 = 0x9801313;
    FUN_0018df40();
    FUN_0018df40(uStack_14);
    FUN_0018df40(uStack_14);
    FUN_0018e100();
    uStack_14 = 0x24804949;
    FUN_0018df40();
    FUN_0018df40(iStack_3c);
    FUN_0018df40(uStack_38);
    uStack_14 = 0x24804949;
    FUN_0018df40();
    FUN_0018df40(iStack_34);
    FUN_0018df40(auStack_20[0]);
    uVar1 = uRam016c0fec;
    uStack_40 = uStack_40 + -1;
    iStack_3c = iStack_3c + 1;
    iStack_34 = iStack_34 + 1;
    if ((int)uStack_40 < 1) {
      if (uStack_40 == 0) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
  } while ((uStack_10 & 6) != 0);
  uStack_14 = 0x24804949;
  FUN_0018df40();
  FUN_0018df40(0x306f0);
  FUN_0018df40(uVar1);
  uVar1 = uRam016c1074;
  uStack_14 = 0x24804949;
  FUN_0018df40();
  FUN_0018df40(0x307f0);
  FUN_0018df40(uVar1);
  uVar1 = uRam016c0ff0;
  uStack_14 = 0x24804949;
  FUN_0018df40();
  FUN_0018df40(0x306f1);
  FUN_0018df40(uVar1);
  uVar1 = uRam016c1078;
  uStack_14 = 0x24804949;
  FUN_0018df40();
  FUN_0018df40(0x307f1);
  FUN_0018df40(uVar1);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

