/* helper decideDir @ 001963c0, called (depth 1) from sysCopPatchColiContFast */

/* WARNING: Type propagation algorithm not settling */

void decideDir(void)

{
  i960_regs *piVar1;
  long lVar2;
  int iVar3;
  float *pfVar4;
  float afStack_30 [2];
  float fStack_28;
  float afStack_20 [2];
  float fStack_18;
  float afStack_10 [4];
  
  piVar1 = i960GetRegs();
  sysMemReadT(afStack_30,piVar1->g[7] + 500);
  sysMemReadT(afStack_20,piVar1->g[8] + 500);
  afStack_10[0] = afStack_20[0] - afStack_30[0];
  afStack_10[1] = 0.0;
  afStack_10[2] = fStack_18 - fStack_28;
  afStack_10[3] = 1.656794e-24;
  if (((g_copCtrlReg & 0x80000000) == 0) && (lVar2 = copExec(0x18003030), 0 < lVar2)) {
    DAT_01689640 = (uint)lVar2 >> 2;
    DAT_00255c9c = 0;
  }
  iVar3 = 3;
  if ((g_copCtrlReg & 0x80000000) == 0) {
    pfVar4 = afStack_10;
    do {
      lVar2 = copExec(*pfVar4);
      if (0 < lVar2) {
        DAT_01689640 = (uint)lVar2 >> 2;
        DAT_00255c9c = 0;
      }
      iVar3 = iVar3 + -1;
      pfVar4 = pfVar4 + 1;
    } while (0 < iVar3);
  }
  iVar3 = DAT_01689644 * 4;
  afStack_10[0] = *(float *)(&g_fifoOut + iVar3);
  afStack_10[1] = *(float *)(&DAT_01689244 + iVar3);
  afStack_10[2] = *(float *)(&DAT_01689248 + iVar3);
  DAT_01689644 = DAT_01689644 + 3;
  if (DAT_01689640 <= DAT_01689644) {
    DAT_01689640 = 0;
    DAT_00255c9c = 1;
    DAT_01689644 = 0;
  }
  sysMemWriteW(piVar1->g[0xd] + 200,afStack_10);
  sysMemWriteW(piVar1->g[0xd] + 0xcc,afStack_10 + 1);
  sysMemWriteW(piVar1->g[0xd] + 0xd0,afStack_10 + 2);
  return;
}

