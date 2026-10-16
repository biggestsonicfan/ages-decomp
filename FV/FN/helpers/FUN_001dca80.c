/* helper FUN_001dca80 @ 001dca80, called (depth 1) from coli_cont_cop */

undefined8 FUN_001dca80(long param_1)

{
  int iVar1;
  i960_regs *piVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piVar2 = i960GetRegs();
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  sysMemWriteQ(piVar2->g[0xd] + 0x170,&uStack_20);
  sysMemWriteQ(piVar2->g[0xd] + 0x180,&uStack_20);
  sysMemWriteQ(piVar2->g[0xd] + 400,&uStack_20);
  sysMemWriteQ(piVar2->g[0xd] + 0x1a0,&uStack_20);
  iVar1 = iRam016b75d4;
  sysMemWriteS(iRam016b75d4 + 0x770,&uStack_20);
  sysMemWriteS(iVar1 + 0x772,&uStack_20);
  sysMemWriteL(iVar1 + 0xa68,&uStack_20);
  iVar1 = iRam016b75d8;
  sysMemWriteS(iRam016b75d8 + 0x770,&uStack_20);
  sysMemWriteS(iVar1 + 0x772,&uStack_20);
  sysMemWriteL(iVar1 + 0xa68,&uStack_20);
  sysMemWriteW(piVar2->g[0xd] + 0x98,&uStack_20);
  sysMemWriteW(piVar2->g[0xd] + 0x9c,&uStack_20);
  sysMemWriteW(piVar2->g[0xd] + 0xa0,&uStack_20);
  sysMemWriteW(piVar2->g[0xd] + 0xa4,&uStack_20);
  sysMemWriteW(piVar2->g[0xd] + 0xa8,&uStack_20);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

