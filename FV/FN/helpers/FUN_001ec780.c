/* helper FUN_001ec780 @ 001ec780, called (depth 1) from send_init_ram_coli_data */

undefined8 FUN_001ec780(long param_1)

{
  i960_regs *piVar1;
  
  piVar1 = i960GetRegs();
  piVar1->g[0] = 0x506200;
  FUN_001ecf80(0);
  piVar1->g[0] = 0x506440;
  piVar1->g[1] = 0x506500;
  FUN_001ece80(0);
  piVar1->g[0] = 0x506500;
  FUN_001ecd40(0);
  piVar1->g[0] = 0x506600;
  FUN_001ecc00(0);
  piVar1->g[0] = 0x5066a0;
  FUN_001ecac0(0);
  piVar1->g[0] = 0x5066d0;
  FUN_001ec980(0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

