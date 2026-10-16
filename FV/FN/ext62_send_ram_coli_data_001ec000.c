/* EXT 62: send_ram_coli_data @ 001ec000; patched over i960 001b20 (arcade send_ram_coli_data) */

undefined8 send_ram_coli_data(long param_1)

{
  i960GetRegs();
  FUN_001ec580(0);
  send_coli_ball_R(0);
  FUN_001ec380(0);
  FUN_001ec180(0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

