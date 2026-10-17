/* helper ucb_unit_init @ 001ecd40, called (depth 2) from send_init_ram_coli_data */

undefined8 ucb_unit_init(long param_1)

{
  i960_regs *piVar1;
  undefined1 auStack_40 [20];
  uint uStack_2c;
  int aiStack_28 [6];
  uint uStack_10;
  
  piVar1 = i960GetRegs();
  aiStack_28[0] = 0x640e85c;
  sysMemReadW(aiStack_28,0x640e860);
  uStack_2c = 0;
  do {
    sysMemReadL(auStack_40,aiStack_28[0] + uStack_2c * 8);
    sysMemWriteL(piVar1->g[0] + uStack_2c * 8,auStack_40);
    uStack_2c = uStack_2c + 1;
    if (uStack_2c < 0x10) {
      if (uStack_2c == 0xf) {
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

