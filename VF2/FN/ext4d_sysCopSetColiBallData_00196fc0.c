/* EXT 4d: sysCopSetColiBallData @ 00196fc0; patched over i960 (no site) */

void sysCopSetColiBallData(void)

{
  i960_regs *piVar1;
  int iVar2;
  uint addr;
  undefined1 auStack_30 [16];
  int iStack_20;
  uint uStack_1c;
  uint auStack_18 [4];
  uint uStack_8;
  undefined *puStack_4;
  
  piVar1 = i960GetRegs();
  iVar2 = sysGetWorkRamAddr();
  sysMemReadW(&iStack_20,piVar1->g[0] * 4 + 0x2007bee);
  sysMemReadW(&uStack_1c,piVar1->g[0] + 0x2007c68);
  uStack_1c = (uint)(byte)uStack_1c;
  sysMemReadW(&uStack_8,*(uint *)(iVar2 + 0x828));
  addr = piVar1->g[0xb] + piVar1->g[0xc];
  if (0 < (int)uStack_1c) {
    do {
      uStack_1c = uStack_1c - 1;
      sysMemReadW(auStack_18,iStack_20 + uStack_1c);
      auStack_18[0] = auStack_18[0] & 0xff;
      sysMemReadQ(auStack_30,auStack_18[0] * 4 + 0x20078a8);
      puStack_4 = &DAT_1c803939;
      sysMemWriteW(addr,&puStack_4);
      sysMemWriteT(addr,auStack_30);
      if ((uStack_8 & 0x80000000) == 0) {
        puStack_4 = (undefined *)0x14802929;
        sysMemWriteW(addr,&puStack_4);
        sysMemWriteT(addr,auStack_30);
        sysMemReadT(auStack_30,addr);
        sysMemWriteQ(auStack_18[0] * 4 + piVar1->g[7] + 0xd00,auStack_30);
      }
    } while (0 < (int)uStack_1c);
  }
  return;
}

