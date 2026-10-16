/* helper FUN_001ec580 @ 001ec580, called (depth 1) from send_init_ram_coli_data */

undefined8 FUN_001ec580(long param_1)

{
  undefined1 auStack_3c [16];
  uint uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_14;
  uint uStack_10;
  
  i960GetRegs();
  iStack_28 = 0x50a19c;
  iStack_24 = 0x506000;
  uStack_2c = 0;
  do {
    sysMemReadW(auStack_3c,iStack_24 + 0xc + uStack_2c * 0x10);
    sysMemWriteW(iStack_28 + uStack_2c * 4,auStack_3c);
    uStack_14 = 0x20;
    uStack_2c = uStack_2c + 1;
    if (uStack_2c < 0x21) {
      if (uStack_2c == 0x20) {
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
  uStack_2c = 0;
  iStack_28 = 0x50a224;
  iStack_24 = 0x506200;
  do {
    uStack_14 = 0x20;
    sysMemReadW(auStack_3c,iStack_24 + 0xc + uStack_2c * 0x10);
    sysMemWriteW(iStack_28 + uStack_2c * 4,auStack_3c);
    uStack_14 = 0x20;
    uStack_2c = uStack_2c + 1;
    if (uStack_2c < 0x21) {
      if (uStack_2c == 0x20) {
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
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

