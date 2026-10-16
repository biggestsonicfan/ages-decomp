/* EXT 4c: sysCopPatchSetObj @ 00197800; patched over i960 0190f0, 01918c, 0193c8, 0194e0, 0195f0, 01977c, 019888, 01994c, 019d04, 019eb4, 01e468, 01e4a4, 01efdc, 020084, 020138, 020144, 0201ac, 0201b8, 020240, 02024c, 0202d4, 0203a8, 0203f8, 020474, 020810, 020870, 0208e4, 020948, 02095c, 020970, 020984, 020998, 0209ac, 020b2c, 020b88, 020ba0, 020bac, 020bb8, 020bcc, 020bdc, 020bf0, 020ca8, 020d20, 020d54, 020d60, 020e50, 020e90, 020ff4, 021058, 021134, 02134c, 0213dc, 021414, 021440, 02148c, 0214a4, 0214bc, 0214d4, 0218e0, 0219a8, 021a9c, 021aac, 021af0, 021b30, 021b50, 021b70, 021bd8, 02e4e4, 02e59c, 02e684, 02e73c, 02e82c, 02e8e4, 02e9d4, 02ea8c, 02ed60, 02edfc, 02efe8, 02f01c, 02f094, 02f2d0, 02f9cc, 02fb2c, 02fe4c, 02ff60, 03004c, 030154, 0303fc, 030494, 0304ac, 0304b8, 0304c8, 0304d8, 0304e8, 0304f8, 0305d8, 030668, 03071c, 03078c, 03082c, 0308cc, 030bec, 030bfc, 030c0c, 030c1c, 030c30, 030c40, 030c50, 030c60, 030e60, 030ea4, 030fe0, 030ff0, 0310b8, 0311a4, 031778, 0337ec, 0337fc, 0339bc, 033c0c, 03b428, 03b4a8, 03b528, 03b5ac, 046d80, 046e0c, 056fa4, 057084, 058340, 061b74, 061cc8, 0634a8, 0634bc, 063588, 063690, 063798, 063e78, 063ea4, 063ed0, 064794 */

void sysCopPatchSetObj(void)

{
  i960_regs *piVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  uint *puVar5;
  undefined1 auStack_20 [4];
  int iStack_1c;
  uint uStack_14;
  int iStack_8;
  int iStack_4;
  
  piVar1 = i960GetRegs();
  puVar5 = piVar1->g;
  iVar2 = sysGetWorkRamAddr();
  if (*(uint *)(iVar2 + 0x101c) <= *(uint *)(iVar2 + 0x1018)) {
    iStack_4 = 0;
    sysMemWriteW(piVar1->g[10] + 0xb0,&iStack_4);
    iStack_4 = 0x1a003434;
    if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(0x1a003434), 0 < lVar4)) {
      DAT_01689640 = (uint)lVar4 >> 2;
      DAT_00255c9c = 0;
    }
    sysMemReadW(&iStack_4,piVar1->g[10] + 0x2008);
    iStack_8 = iStack_4 + 0x30;
    sysMemWriteW(piVar1->g[10] + 0x1008,&iStack_8);
    if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(iStack_4), 0 < lVar4)) {
      DAT_01689640 = (uint)lVar4 >> 2;
      DAT_00255c9c = 0;
    }
    iStack_4 = *(int *)(&g_fifoOut + DAT_01689644 * 4);
    DAT_01689644 = DAT_01689644 + 1;
    if (DAT_01689640 <= DAT_01689644) {
      DAT_01689640 = 0;
      DAT_00255c9c = 1;
      DAT_01689644 = 0;
    }
    uVar3 = sysVf2GetObjAddr(*puVar5,piVar1->g[1]);
    iVar2 = sysGetWorkRamAddr();
    *(int *)(iVar2 + 0x1010) = *(int *)(iVar2 + 0x1010) + 1;
    *puVar5 = *puVar5 * 0x10 + 0x20e0004;
    sysMemReadQ(auStack_20,*puVar5);
    if (piVar1->g[1] != 0) {
      iStack_1c = iStack_1c + (uStack_14 >> 0x10) * 4;
      *(uint *)(iVar2 + 0x10d0) = *(int *)(iVar2 + 0x10d0) + (uStack_14 & 0xffff);
    }
    *(uint *)(iVar2 + 0x101c) = *(int *)(iVar2 + 0x101c) + (uStack_14 & 0xffff);
    uStack_14 = uVar3;
    sysMemWriteW(piVar1->g[10] + 0x10,auStack_20);
    sysMemWriteQ(piVar1->g[10] + piVar1->g[0xc],auStack_20);
  }
  return;
}

