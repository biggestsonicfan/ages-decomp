/* helper FUN_001f4440 @ 001f4440, called (depth 2) from rob_kage_disp_inside */

undefined8 FUN_001f4440(long param_1)

{
  i960_regs *piVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  uint auStack_14 [4];
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  uStack_28 = 0;
  uStack_24 = 0;
  sysMemReadW(auStack_14,piVar1->g[7]);
  if ((auStack_14[0] & 0x80) != 0) {
    sysMemReadB(&bStack_1,piVar1->g[7] + 4);
    if (((uRam016b6df0 ^ bStack_1) & 1) != 0) goto LAB_001f44d8;
    uStack_20 = (uint)bRam016b6e34;
    sysMemReadB(&bStack_2,uStack_20 + 0x60b98);
    auStack_14[0] = 0x3a807575;
    uStack_20 = (uint)bStack_2;
    FUN_0018df40();
    FUN_0018df40((uint)bStack_1);
    FUN_0018df40(uStack_20);
    FUN_0018df40(piVar1->g[5]);
    FUN_0018df40(piVar1->g[6]);
    FUN_0018df40(piVar1->g[3]);
    FUN_0018df40(piVar1->g[4]);
    uStack_28 = FUN_0018e100();
    uStack_24 = FUN_0018e100();
  }
  sysMemWriteW(piVar1->g[7] + 0xaa8 + piVar1->g[0] * 4,&uStack_28);
  sysMemWriteW(piVar1->g[7] + 0xab8 + piVar1->g[0] * 4,&uStack_24);
LAB_001f44d8:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

