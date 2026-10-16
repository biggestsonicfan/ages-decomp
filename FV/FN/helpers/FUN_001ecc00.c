/* helper FUN_001ecc00 @ 001ecc00, called (depth 2) from send_init_ram_coli_data */

undefined8 FUN_001ecc00(long param_1)

{
  i960_regs *piVar1;
  uint uStack_2c;
  undefined4 uStack_14;
  uint uStack_10;
  
  piVar1 = i960GetRegs();
  uStack_2c = 0;
  do {
    sysMemReadW(&uStack_14,uStack_2c * 4 + 0x640e7dc);
    sysMemWriteW(piVar1->g[0] + uStack_2c * 4,&uStack_14);
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

