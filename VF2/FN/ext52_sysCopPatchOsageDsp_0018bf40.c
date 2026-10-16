/* EXT 52: sysCopPatchOsageDsp @ 0018bf40; patched over i960 0644ec */

undefined4 sysCopPatchOsageDsp(void)

{
  i960_regs *piVar1;
  i960_regs *piVar2;
  
  piVar1 = i960GetRegs();
  piVar2 = i960GetRegs();
  sysMemReadW(piVar1->g + 8,piVar1->g[0xd] + 0x48);
  while( true ) {
    sysMemReadW(piVar2->r + 3,piVar1->g[9]);
    piVar1->g[9] = piVar1->g[9] + 4;
    sysMemWriteW(piVar1->g[8],piVar2->r + 3);
    piVar1->g[8] = piVar1->g[8] + 4;
    if (piVar2->r[3] == 0) break;
    (**(code **)(osFunc_1537 + piVar2->r[3] * 4))();
    sysMemReadL(piVar2->r + 4,piVar2->r[3] * 8 + 0x640c0);
    piVar1->g[9] = piVar1->g[9] + piVar2->r[4];
    piVar1->g[8] = piVar1->g[8] + piVar2->r[5];
  }
  return 0x14;
}

