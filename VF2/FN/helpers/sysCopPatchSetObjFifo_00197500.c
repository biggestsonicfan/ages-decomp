/* helper sysCopPatchSetObjFifo @ 00197500, called (depth 1) from sysCopPatchSetOsageAfter */

void sysCopPatchSetObjFifo(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uStack_34;
  int aiStack_30 [4];
  undefined1 auStack_20 [4];
  int iStack_1c;
  uint uStack_14;
  undefined1 auStack_10 [12];
  int iStack_4;
  
  iVar1 = sysGetWorkRamAddr();
  iVar4 = 0;
  piVar3 = (int *)(&g_fifoOut + DAT_01689644 * 4);
  piVar5 = aiStack_30;
  do {
    iVar4 = iVar4 + 6;
    *piVar5 = *piVar3;
    piVar5[1] = piVar3[1];
    piVar5[2] = piVar3[2];
    piVar5[3] = piVar3[3];
    piVar5[4] = piVar3[4];
    piVar5[5] = piVar3[5];
    piVar3 = piVar3 + 6;
    piVar5 = piVar5 + 6;
  } while (iVar4 < 0xc);
  DAT_01689644 = DAT_01689644 + 0xc;
  if (DAT_01689640 <= DAT_01689644) {
    DAT_01689640 = 0;
    DAT_00255c9c = 1;
    DAT_01689644 = 0;
  }
  if (param_1[2] != 1) {
    param_1[2] = *(uint *)(iVar1 + 0x1018);
    if (((*(uint *)(iVar1 + 0x101c) <= param_1[2]) &&
        (param_1[4] = (uint)((ulong)((long)aiStack_30[0] << 0x21) >> 0x21), param_1[4] < 0x3f800001)
        ) && (param_1[4] = (uint)((ulong)((long)iStack_4 << 0x21) >> 0x21), 0x3e4ccccc < param_1[4])
       ) {
      uStack_34 = 0;
      sysMemWriteW(param_1[10] + 0xb0,&uStack_34);
      uVar6 = param_1[10] + param_1[0xc];
      sysMemWriteQ(uVar6,aiStack_30);
      sysMemWriteQ(uVar6,auStack_20);
      sysMemWriteQ(uVar6,auStack_10);
      uVar6 = param_1[3];
      sysMemWriteQ(uVar6,aiStack_30);
      sysMemWriteQ(uVar6 + 0x10,auStack_20);
      sysMemWriteQ(uVar6 + 0x20,auStack_10);
      param_1[3] = param_1[3] + 0x30;
      uVar2 = sysVf2GetObjAddr(*param_1,param_1[1]);
      iVar1 = sysGetWorkRamAddr();
      *(int *)(iVar1 + 0x1010) = *(int *)(iVar1 + 0x1010) + 1;
      *param_1 = *param_1 * 0x10 + 0x20e0004;
      sysMemReadQ(auStack_20,*param_1);
      uStack_34 = uStack_14 >> 0x10;
      if (param_1[1] != 0) {
        iStack_1c = iStack_1c + uStack_34 * 4;
        *(uint *)(iVar1 + 0x10d0) = *(int *)(iVar1 + 0x10d0) + (uStack_14 & 0xffff);
      }
      *(uint *)(iVar1 + 0x101c) = *(int *)(iVar1 + 0x101c) + (uStack_14 & 0xffff);
      uStack_14 = uVar2;
      sysMemWriteW(param_1[10] + 0x10,auStack_20);
      sysMemWriteQ(param_1[10] + param_1[0xc],auStack_20);
    }
  }
  return;
}

