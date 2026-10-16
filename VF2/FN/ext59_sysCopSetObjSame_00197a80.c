/* EXT 59: sysCopSetObjSame @ 00197a80; patched over i960 007dbc */

undefined4 sysCopSetObjSame(void)

{
  i960_regs *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  int iStack_1c;
  uint uStack_14;
  
  piVar1 = i960GetRegs();
  if (piVar1->r[5] < piVar1->r[4]) {
    uVar2 = sysVf2GetObjAddr(piVar1->g[0],piVar1->g[1]);
    iVar3 = sysGetWorkRamAddr();
    *(int *)(iVar3 + 0x1010) = *(int *)(iVar3 + 0x1010) + 1;
    piVar1->g[0] = piVar1->g[0] * 0x10 + 0x20e0004;
    sysMemReadQ(auStack_20,piVar1->g[0]);
    if (piVar1->g[1] != 0) {
      iStack_1c = iStack_1c + (uStack_14 >> 0x10) * 4;
      *(uint *)(iVar3 + 0x10d0) = *(int *)(iVar3 + 0x10d0) + (uStack_14 & 0xffff);
    }
    *(uint *)(iVar3 + 0x101c) = *(int *)(iVar3 + 0x101c) + (uStack_14 & 0xffff);
    uStack_14 = uVar2;
    sysMemWriteW(piVar1->g[10] + 0x10,auStack_20);
    sysMemWriteQ(piVar1->g[10] + piVar1->g[0xc],auStack_20);
    i960Ret();
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

