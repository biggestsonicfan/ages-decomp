/* helper rob0_coli_ball_table_all_init @ 001ec880, called (depth 1) from send_init_ram_coli_data */

undefined8 rob0_coli_ball_table_all_init(long param_1)

{
  i960_regs *piVar1;
  
  piVar1 = i960GetRegs();
  piVar1->g[0] = 0x506000;
  cb_data_init(0);
  piVar1->g[0] = 0x506400;
  piVar1->g[1] = 0x506480;
  ucb_adr_init(0);
  piVar1->g[0] = 0x506480;
  ucb_unit_init(0);
  piVar1->g[0] = 0x506580;
  coli_bu_rd_init(0);
  piVar1->g[0] = 0x506680;
  coli_bu_co_init(0);
  piVar1->g[0] = 0x5066c0;
  coli_ucb_num_init(0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

