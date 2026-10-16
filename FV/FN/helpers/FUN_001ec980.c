/* helper FUN_001ec980 @ 001ec980, called (depth 2) from send_init_ram_coli_data */

undefined8 FUN_001ec980(long param_1)

{
  i960_regs *piVar1;
  uint uStack_2c;
  uint uStack_14;
  uint uStack_10;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  uStack_2c = 0;
  do {
    sysMemReadB(&bStack_1,uStack_2c + 0x640e914);
    uStack_14 = (uint)bStack_1;
    sysMemWriteB(piVar1->g[0] + uStack_2c,&uStack_14);
    uStack_2c = uStack_2c + 1;
    if (uStack_2c < 0x11) {
      if (uStack_2c == 0x10) {
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

