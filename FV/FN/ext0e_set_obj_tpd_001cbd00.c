/* EXT 0e: set_obj_tpd @ 001cbd00; patched over i960 005b68 (arcade set_obj_tpd) */

undefined8 set_obj_tpd(long param_1)

{
  i960_regs *piVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_18;
  int aiStack_14 [5];
  
  piVar1 = i960GetRegs();
  uRam016c5dcc = piVar1->g[0xe];
  piVar1->g[0xe] = 0xb0b;
  sysMemWriteW(piVar1->g[10] + 0xb0,piVar1->g + 0xe);
  piVar1->g[0xe] = uRam016c5dcc;
  aiStack_14[0] = 0x1a003434;
  FUN_0018df40();
  sysMemReadW(aiStack_14,piVar1->g[10] + 0x2008);
  iStack_18 = aiStack_14[0] + 0x30;
  sysMemWriteW(piVar1->g[10] + 0x1008,&iStack_18);
  FUN_0018df40(aiStack_14[0]);
  aiStack_14[0] = FUN_0018e100();
  FUN_001c63c0(piVar1->g[0],piVar1->g[1],&uStack_30);
  uStack_30 = FUN_001bcb00(piVar1->g[2]);
  i960GetRegs();
  FUN_00188ec0(0x800000);
  FUN_00188ec0(uStack_30);
  FUN_00188ec0(uStack_2c);
  FUN_00188ec0(uStack_28);
  FUN_00188ec0(uStack_24);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

