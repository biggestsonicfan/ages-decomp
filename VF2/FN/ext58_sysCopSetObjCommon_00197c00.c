/* EXT 58: sysCopSetObjCommon @ 00197c00; patched over i960 007d68, 007da8 */

void sysCopSetObjCommon(void)

{
  i960_regs *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined1 auStack_20 [4];
  int iStack_1c;
  uint uStack_14;
  
  piVar1 = i960GetRegs();
  puVar4 = piVar1->g;
  uVar2 = sysVf2GetObjAddr(piVar1->g[0],piVar1->g[1]);
  iVar3 = sysGetWorkRamAddr();
  *(int *)(iVar3 + 0x1010) = *(int *)(iVar3 + 0x1010) + 1;
  *puVar4 = *puVar4 * 0x10 + 0x20e0004;
  sysMemReadQ(auStack_20,*puVar4);
  if (piVar1->g[1] != 0) {
    iStack_1c = iStack_1c + (uStack_14 >> 0x10) * 4;
    *(uint *)(iVar3 + 0x10d0) = *(int *)(iVar3 + 0x10d0) + (uStack_14 & 0xffff);
  }
  *(uint *)(iVar3 + 0x101c) = *(int *)(iVar3 + 0x101c) + (uStack_14 & 0xffff);
  uStack_14 = uVar2;
  sysMemWriteW(piVar1->g[10] + 0x10,auStack_20);
  sysMemWriteQ(piVar1->g[10] + piVar1->g[0xc],auStack_20);
  i960Ret();
  return;
}

