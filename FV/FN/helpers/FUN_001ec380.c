/* helper FUN_001ec380 @ 001ec380, called (depth 1) from send_init_ram_coli_data */

undefined8 FUN_001ec380(int param_1)

{
  uint uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 auStack_28 [5];
  undefined4 uStack_14;
  uint uStack_10;
  
  i960GetRegs();
  uStack_40 = 0x20;
  iStack_3c = 0x306a0;
  iStack_2c = 0x307a0;
  uStack_34 = 0x506580;
  uStack_30 = 0x506600;
  do {
    sysMemReadW(&uStack_38,uStack_34);
    sysMemReadW(auStack_28,uStack_30);
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
    FUN_0018df40(iStack_2c);
    FUN_0018df40(auStack_28[0]);
    iStack_3c = iStack_3c + 1;
    iStack_2c = iStack_2c + 1;
    uStack_34 = uStack_34 + 4;
    uStack_30 = uStack_30 + 4;
    if (uStack_40 < 2) {
      if (uStack_40 == 1) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    uStack_40 = uStack_40 - 1;
  } while ((uStack_10 & 4) != 0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

