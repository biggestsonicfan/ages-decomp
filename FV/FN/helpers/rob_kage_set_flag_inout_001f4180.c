/* helper rob_kage_set_flag_inout @ 001f4180, called (depth 1) from rob_kage_disp_inside */

/* WARNING: Removing unreachable block (ram,0x001f425c) */

undefined8 rob_kage_set_flag_inout(long param_1)

{
  i960_regs *piVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  char cStack_1;
  
  piVar1 = i960GetRegs();
  fVar2 = fRam016c0ddc;
  piVar1->g[3] = (uint)(fRam016c0ddc - 0.3);
  piVar1->g[4] = (uint)(fVar2 + 0.2);
  piVar1->g[5] = uRam016b8760;
  piVar1->g[6] = uRam016b8764;
  sysMemReadB(&cStack_1,bRam016b6e34 + 0x5fa6c);
  if (cStack_1 == '\0') {
    piVar1->g[7] = uRam016b75d4;
    rob_kage_set_flag_sub(0);
    piVar1->g[7] = uRam016b75d8;
  }
  else {
    piVar1->g[3] = (uint)((float)piVar1->g[3] + 0.2);
    piVar1->g[4] = (uint)((float)piVar1->g[4] + 0.2);
    FUN_0018df40();
    FUN_0018df40(uRam016b877c);
    fVar2 = (float)FUN_0018e100();
    FUN_0018df40();
    FUN_0018df40(uRam016b877c);
    fVar3 = (float)FUN_0018e100();
    iVar5 = (int)sRam016b877e;
    fVar3 = (1.0 / fVar2) * fVar3;
    FUN_0018df40();
    FUN_0018df40(iVar5 + 0x8000);
    FUN_0018df40(fVar3);
    uVar4 = FUN_0018e100();
    piVar1->g[5] = uVar4;
    piVar1->g[5] = piVar1->g[5] ^ 0x80000000;
    FUN_0018df40();
    FUN_0018df40(iVar5 + 0x8000);
    FUN_0018df40(fVar3);
    uVar4 = FUN_0018e100();
    piVar1->g[6] = uVar4;
  }
  rob_kage_set_flag_sub(0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

