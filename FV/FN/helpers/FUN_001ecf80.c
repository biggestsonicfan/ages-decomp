/* helper FUN_001ecf80 @ 001ecf80, called (depth 2) from send_init_ram_coli_data */

undefined8 FUN_001ecf80(long param_1)

{
  i960_regs *piVar1;
  undefined1 auStack_40 [20];
  uint uStack_2c;
  int iStack_24;
  undefined4 uStack_14;
  uint uStack_10;
  
  piVar1 = i960GetRegs();
  uStack_2c = 0;
  iStack_24 = 0x640e4fc;
  do {
    sysMemReadQ(auStack_40,iStack_24 + uStack_2c * 0x10);
    sysMemWriteQ(piVar1->g[0] + uStack_2c * 0x10,auStack_40);
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
  uRam016c0fec = 0x40000000;
  uRam016c1074 = 0x40000000;
  uRam016c0ff0 = 0x1e;
  uStack_14 = 0x1e;
  uRam016c1078 = 0x1e;
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

