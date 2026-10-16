/* helper FUN_001ec180 @ 001ec180, called (depth 1) from send_init_ram_coli_data */

undefined8 FUN_001ec180(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uStack_40;
  int iStack_3c;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  i960GetRegs();
  uStack_40 = 0x20;
  iStack_3c = 0x306c0;
  iStack_2c = 0x307c0;
  uStack_34 = 0x506680;
  uStack_30 = 0x5066a0;
  do {
    sysMemReadB(&uStack_1,uStack_34);
    uVar3 = uStack_1;
    sysMemReadB(&uStack_2,uStack_30);
    uVar2 = uStack_2;
    FUN_0018df40();
    FUN_0018df40(0x9801313);
    FUN_0018df40(0x9801313);
    FUN_0018e100();
    FUN_0018df40();
    FUN_0018df40(iStack_3c);
    FUN_0018df40(uVar3);
    FUN_0018df40();
    FUN_0018df40(iStack_2c);
    FUN_0018df40(uVar2);
    iStack_3c = iStack_3c + 1;
    iStack_2c = iStack_2c + 1;
    uStack_34 = uStack_34 + 1;
    uStack_30 = uStack_30 + 1;
    if (uStack_40 < 2) {
      if (uStack_40 == 1) {
        bVar1 = false;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
    uStack_40 = uStack_40 - 1;
  } while (bVar1);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

