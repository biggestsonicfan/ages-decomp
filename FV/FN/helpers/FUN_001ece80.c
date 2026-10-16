/* helper FUN_001ece80 @ 001ece80, called (depth 2) from send_init_ram_coli_data */

undefined8 FUN_001ece80(long param_1)

{
  i960_regs *piVar1;
  uint uStack_2c;
  int iStack_10;
  
  piVar1 = i960GetRegs();
  uStack_2c = 0;
  piVar1->g[0] = piVar1->g[0] + 4;
  do {
    sysMemWriteW(piVar1->g[0] + uStack_2c * 4,piVar1->g + 1);
    piVar1->g[1] = piVar1->g[1] + 8;
    uStack_2c = uStack_2c + 1;
    if (uStack_2c < 0x10) {
      if (uStack_2c == 0xf) {
        iStack_10 = 0;
      }
      else {
        iStack_10 = 1;
      }
    }
    else {
      iStack_10 = 4;
    }
  } while (iStack_10 != 0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

