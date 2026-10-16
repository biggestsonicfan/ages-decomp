/* helper coliRecalcPos @ 00195cc0, called (depth 1) from sysCopPatchColiContFast */

void coliRecalcPos(int param_1)

{
  i960_regs *piVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  float fVar5;
  
  piVar1 = i960GetRegs();
  iVar2 = sysGetWorkRamAddr();
  piVar1->g[7] = *(uint *)(iVar2 + 0x804);
  piVar1->g[8] = *(uint *)(iVar2 + 0x808);
  if ((piVar1->g[6] & 8) != 0) {
    decideDir();
  }
  sysMemReadW((void *)(param_1 + 0xc),piVar1->g[0xd] + 0x148);
  if (*(int *)(param_1 + 0xc) == 0) {
    decideDir();
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[0xd] + 0x88);
    if (*(int *)(param_1 + 0x3c) == 5) {
      sysMemReadW((void *)(param_1 + 0x30),piVar1->g[7] + 0x650);
      *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x30) + (float)piVar1->g[5];
      *(undefined4 *)(param_1 + 0x38) = 0x3e4ccccd;
      if (*(float *)(param_1 + 0x38) <= *(float *)(param_1 + 0x3c)) {
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
        piVar1->g[5] = (uint)(*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x30));
      }
      sysMemWriteW(piVar1->g[7] + 0x650,(void *)(param_1 + 0x3c));
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(uint *)(param_1 + 0x24) = piVar1->g[5];
    }
    else if (*(int *)(param_1 + 0x3c) == 4) {
      sysMemReadW((void *)(param_1 + 0x30),piVar1->g[8] + 0x650);
      *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x30) + (float)piVar1->g[5];
      *(undefined4 *)(param_1 + 0x38) = 0x3e4ccccd;
      if (*(float *)(param_1 + 0x38) <= *(float *)(param_1 + 0x3c)) {
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
        piVar1->g[5] = (uint)(*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x30));
      }
      sysMemWriteW(piVar1->g[8] + 0x650,(void *)(param_1 + 0x3c));
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(uint *)(param_1 + 0x34) = piVar1->g[5];
    }
    else {
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x10);
      *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x18);
      sysMemReadW((void *)(param_1 + 0x20),piVar1->g[0xd] + 200);
      sysMemReadW((void *)(param_1 + 0x28),piVar1->g[0xd] + 0xd0);
      *(undefined4 *)(param_1 + 0x3c) = 0x3e99999a;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x20);
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x3c);
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x24);
      *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x20);
      fVar5 = *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x28);
      *(float *)(param_1 + 0x18) = fVar5;
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar5;
      if ((*(uint *)(param_1 + 0x10) & 0x80000000) != 0) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) ^ 0x80000000;
        piVar1->g[4] = (uint)((float)piVar1->g[4] + *(float *)(param_1 + 0x10));
      }
      sysMemReadW((void *)(param_1 + 0x30),piVar1->g[0xd] + 200);
      sysMemReadW((void *)(param_1 + 0x34),piVar1->g[0xd] + 0xcc);
      sysMemReadW((void *)(param_1 + 0x38),piVar1->g[0xd] + 0xd0);
      sysMemReadW((void *)(param_1 + 0xc),piVar1->g[0xd] + 0xc0);
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) ^ 0x80000000;
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * (float)piVar1->g[4];
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0xc);
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0xc);
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0xc);
      sysMemReadW((void *)(param_1 + 0xc),piVar1->g[0xd] + 0xc4);
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * (float)piVar1->g[4];
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0xc);
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0xc);
      *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0xc);
    }
  }
  sysMemWriteW(piVar1->g[0xd] + 0xd4,(void *)(param_1 + 0x20));
  sysMemWriteW(piVar1->g[0xd] + 0xd8,(void *)(param_1 + 0x24));
  sysMemWriteW(piVar1->g[0xd] + 0xdc,(void *)(param_1 + 0x28));
  sysMemWriteW(piVar1->g[0xd] + 0xe0,(void *)(param_1 + 0x30));
  sysMemWriteW(piVar1->g[0xd] + 0xe4,(void *)(param_1 + 0x34));
  sysMemWriteW(piVar1->g[0xd] + 0xe8,(void *)(param_1 + 0x38));
  sysMemReadW((void *)(param_1 + 0xc),piVar1->g[7] + 0x644);
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0xc);
  sysMemReadW((void *)(param_1 + 0xc),piVar1->g[7] + 0x64c);
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0xc);
  sysMemReadW((void *)(param_1 + 0xc),piVar1->g[8] + 0x644);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0xc);
  sysMemReadW((void *)(param_1 + 0xc),piVar1->g[8] + 0x64c);
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3c) = 0x1e803d3d;
  if (((g_copCtrlReg & 0x80000000) == 0) &&
     (lVar3 = copExec(*(undefined4 *)(param_1 + 0x3c)), 0 < lVar3)) {
    DAT_01689640 = (uint)lVar3 >> 2;
    DAT_00255c9c = 0;
  }
  iVar2 = 3;
  if ((g_copCtrlReg & 0x80000000) == 0) {
    puVar4 = (undefined4 *)(param_1 + 0x20);
    do {
      lVar3 = copExec(*puVar4);
      if (0 < lVar3) {
        DAT_01689640 = (uint)lVar3 >> 2;
        DAT_00255c9c = 0;
      }
      iVar2 = iVar2 + -1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
  }
  iVar2 = 3;
  if ((g_copCtrlReg & 0x80000000) == 0) {
    puVar4 = (undefined4 *)(param_1 + 0x30);
    do {
      lVar3 = copExec(*puVar4);
      if (0 < lVar3) {
        DAT_01689640 = (uint)lVar3 >> 2;
        DAT_00255c9c = 0;
      }
      iVar2 = iVar2 + -1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
  }
  sysMemReadW((void *)(param_1 + 0x10),piVar1->g[7] + 0x18);
  sysMemReadW((void *)(param_1 + 0x18),piVar1->g[7] + 0x20);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x28);
  sysMemWriteW(piVar1->g[7] + 0x18,(void *)(param_1 + 0x10));
  sysMemWriteW(piVar1->g[7] + 0x20,(void *)(param_1 + 0x18));
  sysMemReadW((void *)(param_1 + 0x10),piVar1->g[8] + 0x18);
  sysMemReadW((void *)(param_1 + 0x18),piVar1->g[8] + 0x20);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x38);
  sysMemWriteW(piVar1->g[8] + 0x18,(void *)(param_1 + 0x10));
  sysMemWriteW(piVar1->g[8] + 0x20,(void *)(param_1 + 0x18));
  sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[7] + 0x650);
  *(undefined4 *)(param_1 + 0x38) = 0x3cf5c28f;
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x38);
  if ((*(uint *)(param_1 + 0x3c) & 0x80000000) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  sysMemWriteW(piVar1->g[7] + 0x650,(void *)(param_1 + 0x3c));
  sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[8] + 0x650);
  *(undefined4 *)(param_1 + 0x38) = 0x3cf5c28f;
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x38);
  if ((*(uint *)(param_1 + 0x3c) & 0x80000000) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  sysMemWriteW(piVar1->g[8] + 0x650,(void *)(param_1 + 0x3c));
  return;
}

