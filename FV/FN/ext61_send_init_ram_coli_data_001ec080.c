/* EXT 61: send_init_ram_coli_data @ 001ec080; patched over i960 001b0c (arcade send_init_ram_coli_data) */

undefined8 send_init_ram_coli_data(long param_1)

{
  bool bVar1;
  i960_regs *piVar2;
  byte bStack_1;
  
  piVar2 = i960GetRegs();
  sysMemReadB(&bStack_1,piVar2->g[7] + 4);
  if (bStack_1 < 2) {
    if (bStack_1 == 1) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    FUN_001ec780(0);
  }
  else {
    FUN_001ec880(0);
  }
  FUN_001ec580(0);
  send_coli_ball_R(0);
  FUN_001ec380(0);
  FUN_001ec180(0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

