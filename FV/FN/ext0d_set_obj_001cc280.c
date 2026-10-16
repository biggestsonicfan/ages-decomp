/* EXT 0d: set_obj @ 001cc280; patched over i960 005a48 (arcade set_obj) */

undefined8 set_obj(long param_1)

{
  i960_regs *piVar1;
  undefined1 auStack_30 [24];
  int iStack_18;
  int aiStack_14 [5];
  
  piVar1 = i960GetRegs();
  FUN_001c6300(piVar1->g[0],piVar1->g[1],auStack_30);
  aiStack_14[0] = 0x3c007878;
  FUN_0018df40();
  sysMemReadW(aiStack_14,piVar1->g[10] + 0x2008);
  iStack_18 = aiStack_14[0] + 0x48;
  sysMemWriteW(piVar1->g[10] + 0x1008,&iStack_18);
  FUN_0018df40(aiStack_14[0]);
  FUN_0018df40(piVar1->g[1]);
  FUN_0018ddc0(auStack_30);
  aiStack_14[0] = iRam016b7ea0;
  FUN_0018df40();
  aiStack_14[0] = iRam016b7dec;
  FUN_0018df40();
  aiStack_14[0] = FUN_0018e100();
  aiStack_14[0] = FUN_0018e100();
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

