/* helper coliFlagConv @ 00195940, called (depth 1) from sysCopPatchColiContFast */

void coliFlagConv(void)

{
  bool bVar1;
  i960_regs *piVar2;
  int iVar3;
  int iStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint auStack_14 [5];
  
  piVar2 = i960GetRegs();
  iVar3 = piVar2->g[0xd] + 0x40;
  iStack_28 = 0;
  do {
    sysMemReadB(&uStack_24,iStack_28 + 0x23284);
    uStack_24 = uStack_24 & 0xff;
    sysMemReadW(&uStack_18,(uint)(&DAT_0091f880 + iStack_28 * 4));
    uStack_20 = 0;
    do {
      if ((uStack_18 & 1 << (uStack_20 & 0x1f)) != 0) {
        sysMemReadB(&uStack_1c,uStack_20 + 0x23284);
        uStack_1c = uStack_1c & 0xff;
        sysMemReadW(auStack_14,iVar3 + uStack_1c * 4);
        auStack_14[0] = auStack_14[0] | 1 << (uStack_24 & 0x1f);
        sysMemWriteW(iVar3 + uStack_1c * 4,auStack_14);
      }
      bVar1 = uStack_20 != 0x1d;
      uStack_20 = uStack_20 + 1;
    } while (bVar1);
    bVar1 = iStack_28 != 0x1d;
    uStack_20 = 0x1e;
    iStack_28 = iStack_28 + 1;
  } while (bVar1);
  return;
}

