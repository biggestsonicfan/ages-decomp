/* EXT 62: send_ram_coli_data @ 001ec000; patched over i960 001b20 (arcade send_ram_coli_data) */

undefined8 send_ram_coli_data(long param_1)

{
  i960GetRegs();
  set_coli_ball_init(0);
  send_coli_ball_R(0);
  send_ball_to_unit(0);
  send_ball_to_unit2(0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

