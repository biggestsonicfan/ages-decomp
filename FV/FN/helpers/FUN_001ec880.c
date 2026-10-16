/* helper FUN_001ec880 @ 001ec880, called (depth 1) from send_init_ram_coli_data */

undefined8 FUN_001ec880(long param_1)

{
  i960_regs *piVar1;
  
  piVar1 = i960GetRegs();
  piVar1->g[0] = 0x506000;
  FUN_001ecf80(0);
  piVar1->g[0] = 0x506400;
  piVar1->g[1] = 0x506480;
  FUN_001ece80(0);
  piVar1->g[0] = 0x506480;
  FUN_001ecd40(0);
  piVar1->g[0] = 0x506580;
  FUN_001ecc00(0);
  piVar1->g[0] = 0x506680;
  FUN_001ecac0(0);
  piVar1->g[0] = 0x5066c0;
  FUN_001ec980(0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

