/* EXT 4e: sysCopPatchColiContFast @ 00196ac0; patched over i960 023524 */

undefined4 sysCopPatchColiContFast(void)

{
  bool bVar1;
  i960_regs *piVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined *puStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_50;
  float fStack_4c;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  float afStack_20 [2];
  float fStack_18;
  uint uStack_14;
  float fStack_10;
  uint uStack_c;
  float fStack_8;
  undefined *puStack_4;
  
  piVar2 = i960GetRegs();
  iVar3 = sysGetWorkRamAddr();
  sysMemReadT(&fStack_30,piVar2->g[7] + 500);
  sysMemReadT(afStack_20,piVar2->g[8] + 500);
  fStack_10 = afStack_20[0] - fStack_30;
  fStack_8 = fStack_18 - fStack_28;
  puStack_60 = (undefined *)0x1f003e3e;
  fStack_5c = afStack_20[0] - fStack_30;
  fStack_58 = fStack_18 - fStack_28;
  fStack_54 = fStack_30;
  uStack_50 = uStack_2c;
  fStack_4c = fStack_28;
  iVar7 = 6;
  if ((g_copCtrlReg & 0x80000000) == 0) {
    ppuVar6 = &puStack_60;
    do {
      lVar5 = copExec(*ppuVar6);
      if (0 < lVar5) {
        DAT_01689640 = (uint)lVar5 >> 2;
        DAT_00255c9c = 0;
      }
      iVar7 = iVar7 + -1;
      ppuVar6 = ppuVar6 + 1;
    } while (0 < iVar7);
  }
  fStack_8 = (float)(piVar2->g[0xd] + 0x40);
  puStack_4 = (undefined *)0x0;
  uStack_c = 0x10;
  do {
    sysMemWriteW((uint)fStack_8,&puStack_4);
    fStack_8 = (float)((int)fStack_8 + 4);
    uVar4 = uStack_c - 1;
    bVar1 = 1 < uStack_c;
    uStack_c = uVar4;
  } while (bVar1);
  puStack_4 = &DAT_1d003a3a;
  if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(&DAT_1d003a3a), 0 < lVar5)) {
    DAT_01689640 = (uint)lVar5 >> 2;
    DAT_00255c9c = 0;
  }
  piVar2->g[7] = *(uint *)(iVar3 + 0x804);
  piVar2->g[9] = (uint)&DAT_01000550;
  areaColi();
  piVar2->g[7] = *(uint *)(iVar3 + 0x808);
  areaColi();
  decideColiKind();
  if ((piVar2->g[6] & 1) == 0) {
    piVar2->g[7] = *(uint *)(iVar3 + 0x804);
    calcAttackFlag();
    uStack_14 = piVar2->g[3];
    piVar2->g[7] = *(uint *)(iVar3 + 0x808);
    calcAttackFlag();
    fStack_10 = (float)piVar2->g[3];
    sysMemReadW(&uStack_34,piVar2->g[0xd] + 0x88);
    sysMemReadW(&uStack_c,piVar2->g[0xd] + 0xb4);
    sysMemReadW(&fStack_8,piVar2->g[0xd] + 0xb8);
    puStack_60 = &DAT_1d803b3b;
    fStack_5c = (float)uStack_34;
    fStack_58 = (float)uStack_14;
    fStack_54 = fStack_10;
    uStack_50 = uStack_c;
    fStack_4c = fStack_8;
    iVar3 = 6;
    if ((g_copCtrlReg & 0x80000000) == 0) {
      ppuVar6 = &puStack_60;
      do {
        lVar5 = copExec(*ppuVar6);
        if (0 < lVar5) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        iVar3 = iVar3 + -1;
        ppuVar6 = ppuVar6 + 1;
      } while (0 < iVar3);
    }
    fStack_10 = *(float *)(&g_fifoOut + DAT_01689644 * 4);
    uStack_c = *(uint *)(&DAT_01689244 + DAT_01689644 * 4);
    DAT_01689644 = DAT_01689644 + 2;
    if (DAT_01689640 <= DAT_01689644) {
      DAT_01689640 = 0;
      DAT_00255c9c = 1;
      DAT_01689644 = 0;
    }
    iVar3 = DAT_01689644 * 4;
    piVar2->g[4] = *(uint *)(&g_fifoOut + iVar3);
    piVar2->g[5] = *(uint *)(&DAT_01689244 + iVar3);
    DAT_01689644 = DAT_01689644 + 2;
    if (DAT_01689640 <= DAT_01689644) {
      DAT_01689640 = 0;
      DAT_00255c9c = 1;
      DAT_01689644 = 0;
    }
    sysMemWriteW(piVar2->g[0xd] + 0x144,&fStack_10);
    sysMemWriteW(piVar2->g[0xd] + 0x148,&uStack_c);
    sysMemReadW(&puStack_4,piVar2->g[0xd] + 0xf4);
    sysMemReadW(&fStack_8,piVar2->g[0xd] + 0xf0);
    puStack_4 = (undefined *)((float)puStack_4 + fStack_8);
    sysMemWriteW(piVar2->g[0xd] + 0xf4,&fStack_8);
    sysMemReadW(&fStack_8,piVar2->g[0xd] + 0xec);
    puStack_4 = (undefined *)((float)puStack_4 + fStack_8);
    sysMemWriteW(piVar2->g[0xd] + 0xf0,&fStack_8);
    puStack_4 = (undefined *)((float)puStack_4 + (float)piVar2->g[5]);
    sysMemWriteW(piVar2->g[0xd] + 0xec,piVar2->g + 5);
    fStack_8 = 4.0;
    piVar2->g[5] = (uint)((float)puStack_4 / 4.0);
    coliFlagConv();
    coliRecalcPos(auStack_40);
  }
  else {
    decideDir();
  }
  return 0x49;
}

