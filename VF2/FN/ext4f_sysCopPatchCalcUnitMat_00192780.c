/* EXT 4f: sysCopPatchCalcUnitMat @ 00192780; patched over i960 016504 */

undefined4 sysCopPatchCalcUnitMat(void)

{
  bool bVar1;
  i960_regs *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  uint uStack_20;
  float fStack_1c;
  uint uStack_18;
  undefined *apuStack_14 [4];
  short sStack_2;
  
  piVar2 = i960GetRegs();
  puVar6 = piVar2->g;
  uVar3 = sysReadWorkRam4(0x5001e4);
  apuStack_14[0] = &DAT_1c003838;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = &DAT_00800101;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = &DAT_01800303;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7000e0e;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x0;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadW(apuStack_14,piVar2->g[7] + 0x650);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x0;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x3000606;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadT(&uStack_20,piVar2->g[7] + 0x18);
  sysCopWriteFifo(&uStack_20,3);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x26);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36806d6d;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  apuStack_14[0] = (undefined *)0x9001212;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = &DAT_00501024;
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT((uint)apuStack_14[0],&uStack_20);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT((uint)(apuStack_14[0] + 0xc),&uStack_20);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT((uint)(apuStack_14[0] + 0x18),&uStack_20);
  sysMemReadW(apuStack_14,piVar2->g[7]);
  if (((uint)apuStack_14[0] & 4) == 0) {
    apuStack_14[0] = (undefined *)0x3000606;
    sysCopWriteFifo((uint *)apuStack_14,1);
    sysMemReadT(&uStack_20,piVar2->g[7] + 0x80);
    sysMemReadW(apuStack_14,piVar2->g[7] + 0xc50);
    fStack_1c = fStack_1c + (float)apuStack_14[0];
    sysCopWriteFifo(&uStack_20,3);
  }
  else {
    sysMemReadB(&uStack_18,piVar2->g[7] + 0x840);
    uVar5 = uStack_18 & 0xff;
    uVar4 = uStack_18 & 1;
    uStack_18 = uVar5;
    if (uVar4 != 0) {
      apuStack_14[0] = (undefined *)0x3000606;
      sysCopWriteFifo((uint *)apuStack_14,1);
      sysMemReadW(apuStack_14,piVar2->g[7] + 0x80);
      sysCopWriteFifo((uint *)apuStack_14,1);
      apuStack_14[0] = (undefined *)0x0;
      sysCopWriteFifo((uint *)apuStack_14,1);
      sysMemReadW(apuStack_14,piVar2->g[7] + 0x88);
      sysCopWriteFifo((uint *)apuStack_14,1);
    }
  }
  apuStack_14[0] = (undefined *)0x34806969;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  if (((uint)apuStack_14[0] & 1) == 0) {
    apuStack_14[0] = (undefined *)0x3a00;
  }
  else {
    apuStack_14[0] = (undefined *)0x3b00;
  }
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x26);
  apuStack_14[0] = (undefined *)(int)sStack_2;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x1a803535;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x0;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7800f0f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT(piVar2->g[7] + 500,&uStack_20);
  *puVar6 = 0;
  sysCopSetColiBallData();
  apuStack_14[0] = &DAT_00800101;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x3000606;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadT(&uStack_20,piVar2->g[7] + 0x8c);
  sysCopWriteFifo(&uStack_20,3);
  apuStack_14[0] = (undefined *)0x34806969;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  if (((uint)apuStack_14[0] & 1) == 0) {
    apuStack_14[0] = (undefined *)0x3a0c;
  }
  else {
    apuStack_14[0] = (undefined *)0x3b0c;
  }
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x26);
  apuStack_14[0] = (undefined *)(int)sStack_2;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbe6);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36006c6c;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  apuStack_14[0] = (undefined *)0x1a803535;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0xc;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7800f0f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT(piVar2->g[7] + 0x200,&uStack_20);
  *puVar6 = 1;
  sysCopSetColiBallData();
  apuStack_14[0] = &DAT_00800101;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x3000606;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadT(&uStack_20,piVar2->g[7] + 0x98);
  sysCopWriteFifo(&uStack_20,3);
  apuStack_14[0] = (undefined *)0x1f803f3f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbb2);
  uStack_20 = (uint)sStack_2;
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbb0);
  fStack_1c = (float)(int)sStack_2;
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbae);
  uStack_18 = (uint)sStack_2;
  sysCopWriteFifo(&uStack_20,3);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xc0e);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36806d6d;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xc0c);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36006c6c;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xc10);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x37006e6e;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x150);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x37006e6e;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x14e);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36806d6d;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  apuStack_14[0] = (undefined *)0x1a803535;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x18;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7800f0f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT(piVar2->g[7] + 0x20c,&uStack_20);
  *puVar6 = 2;
  sysCopSetColiBallData();
  apuStack_14[0] = &DAT_01000202;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = &DAT_00800101;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x3000606;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadT(&uStack_20,piVar2->g[7] + 0xa4);
  sysCopWriteFifo(&uStack_20,3);
  apuStack_14[0] = (undefined *)0x34806969;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  if (((uint)apuStack_14[0] & 1) == 0) {
    apuStack_14[0] = (undefined *)0x3a24;
  }
  else {
    apuStack_14[0] = (undefined *)0x3b24;
  }
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x26);
  apuStack_14[0] = (undefined *)(int)sStack_2;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x1a803535;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x24;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7800f0f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT(piVar2->g[7] + 0x218,&uStack_20);
  *puVar6 = 3;
  sysCopSetColiBallData();
  apuStack_14[0] = (undefined *)0x3000606;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadT(&uStack_20,piVar2->g[7] + 0xb0);
  sysCopWriteFifo(&uStack_20,3);
  apuStack_14[0] = (undefined *)0x34806969;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  if (((uint)apuStack_14[0] & 1) == 0) {
    apuStack_14[0] = (undefined *)0x3a30;
  }
  else {
    apuStack_14[0] = (undefined *)0x3b30;
  }
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x26);
  apuStack_14[0] = (undefined *)(int)sStack_2;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x1a803535;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x30;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7800f0f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT(piVar2->g[7] + 0x224,&uStack_20);
  *puVar6 = 4;
  sysCopSetColiBallData();
  apuStack_14[0] = (undefined *)0x3000606;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadT(&uStack_20,piVar2->g[7] + 0xbc);
  sysCopWriteFifo(&uStack_20,3);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x15e);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x37006e6e;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x15c);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36806d6d;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x15a);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36006c6c;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbea);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36806d6d;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbe8);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36006c6c;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbec);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x37006e6e;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  apuStack_14[0] = (undefined *)0x1a803535;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x3c;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7800f0f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT(piVar2->g[7] + 0x230,&uStack_20);
  *puVar6 = 5;
  sysCopSetColiBallData();
  apuStack_14[0] = &DAT_01000202;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x3000606;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadT(&uStack_20,piVar2->g[7] + 200);
  sysCopWriteFifo(&uStack_20,3);
  apuStack_14[0] = (undefined *)0x34806969;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  if (((uint)apuStack_14[0] & 1) == 0) {
    apuStack_14[0] = (undefined *)0x3a48;
  }
  else {
    apuStack_14[0] = (undefined *)0x3b48;
  }
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x26);
  apuStack_14[0] = (undefined *)(int)sStack_2;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x1a803535;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x48;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7800f0f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT(piVar2->g[7] + 0x23c,&uStack_20);
  *puVar6 = 6;
  sysCopSetColiBallData();
  apuStack_14[0] = (undefined *)0x3000606;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadT(&uStack_20,piVar2->g[7] + 0xd4);
  sysCopWriteFifo(&uStack_20,3);
  apuStack_14[0] = (undefined *)0x34806969;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  if (((uint)apuStack_14[0] & 1) == 0) {
    apuStack_14[0] = (undefined *)0x3a54;
  }
  else {
    apuStack_14[0] = (undefined *)0x3b54;
  }
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x26);
  apuStack_14[0] = (undefined *)(int)sStack_2;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x1a803535;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x54;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7800f0f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT(piVar2->g[7] + 0x248,&uStack_20);
  *puVar6 = 7;
  sysCopSetColiBallData();
  apuStack_14[0] = (undefined *)0x3000606;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadT(&uStack_20,piVar2->g[7] + 0xe0);
  sysCopWriteFifo(&uStack_20,3);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x16c);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x37006e6e;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x16a);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36806d6d;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x168);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36006c6c;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbf0);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36806d6d;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbee);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36006c6c;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbf2);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x37006e6e;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  apuStack_14[0] = (undefined *)0x1a803535;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x60;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7800f0f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT(piVar2->g[7] + 0x254,&uStack_20);
  *puVar6 = 8;
  sysCopSetColiBallData();
  apuStack_14[0] = &DAT_01000202;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x3000606;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadT(&uStack_20,piVar2->g[7] + 0xec);
  sysCopWriteFifo(&uStack_20,3);
  apuStack_14[0] = (undefined *)0x1f803f3f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbc4);
  uStack_20 = (uint)sStack_2;
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbc2);
  fStack_1c = (float)(int)sStack_2;
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbc0);
  uStack_18 = (uint)sStack_2;
  sysCopWriteFifo(&uStack_20,3);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xc20);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36806d6d;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xc1e);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36006c6c;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xc22);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x37006e6e;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x172);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x37006e6e;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x170);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36806d6d;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  apuStack_14[0] = (undefined *)0x1a803535;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x6c;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7800f0f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT(piVar2->g[7] + 0x260,&uStack_20);
  *puVar6 = 9;
  sysCopSetColiBallData();
  sysMemReadW(&iStack_44,piVar2->g[7] + 400);
  sysMemReadW(&uStack_34,iStack_44 + 0x38);
  if (uStack_34 != 0) {
    apuStack_14[0] = &DAT_00800101;
    sysCopWriteFifo((uint *)apuStack_14,1);
    apuStack_14[0] = (undefined *)0x6000c0c;
    sysCopWriteFifo((uint *)apuStack_14,1);
    apuStack_14[0] = (undefined *)0x1b803737;
    sysCopWriteFifo((uint *)apuStack_14,1);
    sysMemReadB(apuStack_14,piVar2->g[7] + 4);
    apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
    sysCopWriteFifo((uint *)apuStack_14,1);
    apuStack_14[0] = (undefined *)0xc;
    sysCopWriteFifo((uint *)apuStack_14,1);
    uStack_2c = uStack_34 + 0x70;
    uStack_30 = piVar2->g[7] + 0x1860;
    uStack_34 = 0x10;
    do {
      apuStack_14[0] = (undefined *)0x14802929;
      sysCopWriteFifo((uint *)apuStack_14,1);
      sysMemReadT(&uStack_20,uStack_2c);
      sysCopWriteFifo(&uStack_20,3);
      sysCopReadFifo(&uStack_20,3);
      sysMemWriteT(uStack_30,&uStack_20);
      uStack_2c = uStack_2c + 0xc;
      uStack_30 = uStack_30 + 0xc;
      uVar5 = uStack_34 - 1;
      bVar1 = 1 < uStack_34;
      uStack_34 = uVar5;
    } while (bVar1);
    sysMemReadW(&iStack_44,piVar2->g[7] + 400);
    sysMemReadW(&uStack_34,iStack_44 + 0x38);
    uStack_38 = uStack_34 + 0xd4;
    sysMemReadW(&uStack_30,uStack_34 + 0xd0);
    uStack_40 = uStack_30 * 10 + 1;
    uStack_2c = uStack_38 + uStack_40 * 4;
    iStack_28 = piVar2->g[7] + 0x1800;
    sysMemReadB(&iStack_44,piVar2->g[7] + 4);
    iStack_44 = (uint)(byte)iStack_44 << 8;
    sysMemWriteW(piVar2->g[10] + 0x50,&iStack_44);
    sysMemWriteW(piVar2->g[0xc] + piVar2->g[10],&iStack_44);
    sysMemWriteW(piVar2->g[0xc] + piVar2->g[10],&uStack_40);
    do {
      sysMemReadQ(&uStack_20,uStack_38);
      sysMemWriteQ(piVar2->g[0xc] + piVar2->g[10],&uStack_20);
      uStack_3c = uStack_38 + 0x10;
      sysMemReadB(&uStack_40,uStack_2c);
      uVar5 = uStack_40 & 0xff;
      uStack_40 = uVar5;
      if (7 < uVar5) {
        uStack_40 = uVar5 * 3;
        uStack_3c = iStack_28 + uVar5 * 0xc;
      }
      sysMemReadT(&uStack_20,uStack_3c);
      sysMemWriteT(piVar2->g[10] + piVar2->g[0xc],&uStack_20);
      uStack_3c = uStack_38 + 0x1c;
      sysMemReadB(&uStack_40,uStack_2c + 1);
      uVar5 = uStack_40 & 0xff;
      uStack_40 = uVar5;
      if (7 < uVar5) {
        uStack_40 = uVar5 * 3;
        uStack_3c = iStack_28 + uVar5 * 0xc;
      }
      sysMemReadT(&uStack_20,uStack_3c);
      sysMemWriteT(piVar2->g[10] + piVar2->g[0xc],&uStack_20);
      uStack_38 = uStack_38 + 0x28;
      uStack_2c = uStack_2c + 2;
      uVar5 = uStack_30 - 1;
      bVar1 = 1 < uStack_30;
      uStack_30 = uVar5;
    } while (bVar1);
    sysMemReadW(&iStack_44,uStack_38);
    sysMemWriteW(piVar2->g[0xc] + piVar2->g[10],&iStack_44);
    apuStack_14[0] = &DAT_01000202;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  apuStack_14[0] = &DAT_00800101;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x3000606;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadT(&uStack_20,piVar2->g[7] + 0xf8);
  sysCopWriteFifo(&uStack_20,3);
  apuStack_14[0] = (undefined *)0x34806969;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  if (((uint)apuStack_14[0] & 1) == 0) {
    apuStack_14[0] = (undefined *)0x3a78;
  }
  else {
    apuStack_14[0] = (undefined *)0x3b78;
  }
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x26);
  apuStack_14[0] = (undefined *)(int)sStack_2;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x1a803535;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x78;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7800f0f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT(piVar2->g[7] + 0x26c,&uStack_20);
  *puVar6 = 10;
  sysCopSetColiBallData();
  apuStack_14[0] = (undefined *)0x3000606;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadT(&uStack_20,piVar2->g[7] + 0x104);
  sysCopWriteFifo(&uStack_20,3);
  apuStack_14[0] = (undefined *)0x34806969;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  if (((uint)apuStack_14[0] & 1) == 0) {
    apuStack_14[0] = (undefined *)0x3a84;
  }
  else {
    apuStack_14[0] = (undefined *)0x3b84;
  }
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x26);
  apuStack_14[0] = (undefined *)(int)sStack_2;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x1a803535;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x84;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7800f0f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT(piVar2->g[7] + 0x278,&uStack_20);
  *puVar6 = 0xb;
  sysCopSetColiBallData();
  apuStack_14[0] = (undefined *)0x3000606;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadT(&uStack_20,piVar2->g[7] + 0x110);
  sysCopWriteFifo(&uStack_20,3);
  apuStack_14[0] = (undefined *)0x8801111;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = &DAT_00501024;
  sysMemReadT(&uStack_20,0x501024);
  sysCopWriteFifo(&uStack_20,3);
  sysMemReadT(&uStack_20,(uint)(apuStack_14[0] + 0xc));
  sysCopWriteFifo(&uStack_20,3);
  sysMemReadT(&uStack_20,(uint)(apuStack_14[0] + 0x18));
  sysCopWriteFifo(&uStack_20,3);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x180);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x37006e6e;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x17e);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36806d6d;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x17c);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36006c6c;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbf6);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36806d6d;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbf4);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36006c6c;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbf8);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x37006e6e;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  apuStack_14[0] = (undefined *)0x1a803535;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x90;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7800f0f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT(piVar2->g[7] + 0x284,&uStack_20);
  *puVar6 = 0xc;
  sysCopSetColiBallData();
  apuStack_14[0] = &DAT_01000202;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x3000606;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadT(&uStack_20,piVar2->g[7] + 0x11c);
  sysCopWriteFifo(&uStack_20,3);
  apuStack_14[0] = (undefined *)0x34806969;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  if (((uint)apuStack_14[0] & 1) == 0) {
    apuStack_14[0] = (undefined *)0x3a9c;
  }
  else {
    apuStack_14[0] = (undefined *)0x3b9c;
  }
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x26);
  apuStack_14[0] = (undefined *)(int)sStack_2;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x1a803535;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x9c;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7800f0f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT(piVar2->g[7] + 0x290,&uStack_20);
  *puVar6 = 0xd;
  sysCopSetColiBallData();
  apuStack_14[0] = (undefined *)0x3000606;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadT(&uStack_20,piVar2->g[7] + 0x128);
  sysCopWriteFifo(&uStack_20,3);
  apuStack_14[0] = (undefined *)0x34806969;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  if (((uint)apuStack_14[0] & 1) == 0) {
    apuStack_14[0] = (undefined *)0x3aa8;
  }
  else {
    apuStack_14[0] = (undefined *)0x3ba8;
  }
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x26);
  apuStack_14[0] = (undefined *)(int)sStack_2;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x1a803535;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0xa8;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7800f0f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT(piVar2->g[7] + 0x29c,&uStack_20);
  *puVar6 = 0xe;
  sysCopSetColiBallData();
  apuStack_14[0] = (undefined *)0x3000606;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadT(&uStack_20,piVar2->g[7] + 0x134);
  sysCopWriteFifo(&uStack_20,3);
  apuStack_14[0] = (undefined *)0x8801111;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = &DAT_00501024;
  sysMemReadT(&uStack_20,0x501024);
  sysCopWriteFifo(&uStack_20,3);
  sysMemReadT(&uStack_20,(uint)(apuStack_14[0] + 0xc));
  sysCopWriteFifo(&uStack_20,3);
  sysMemReadT(&uStack_20,(uint)(apuStack_14[0] + 0x18));
  sysCopWriteFifo(&uStack_20,3);
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x18e);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x37006e6e;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x18c);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36806d6d;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0x18a);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36006c6c;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbfc);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36806d6d;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbfa);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x36006c6c;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xbfe);
  uStack_18 = (uint)sStack_2;
  if (uStack_18 != 0) {
    sysMemWriteW(uVar3 + 0x90e000,&uStack_18);
    uVar3 = uVar3 + 4 & 0xff;
    apuStack_14[0] = (undefined *)0x37006e6e;
    sysCopWriteFifo((uint *)apuStack_14,1);
  }
  apuStack_14[0] = (undefined *)0x1a803535;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysMemReadB(apuStack_14,piVar2->g[7] + 4);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0xb4;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)0x7800f0f;
  sysCopWriteFifo((uint *)apuStack_14,1);
  sysCopReadFifo(&uStack_20,3);
  sysMemWriteT(piVar2->g[7] + 0x2a8,&uStack_20);
  *puVar6 = 0xf;
  sysCopSetColiBallData();
  apuStack_14[0] = &DAT_01000202;
  sysCopWriteFifo((uint *)apuStack_14,1);
  apuStack_14[0] = (undefined *)sysReadWorkRam4(0x508000);
  if (((uint)apuStack_14[0] & 0x20) == 0) {
    sysMemReadT(&uStack_30,piVar2->g[7] + 500);
    sysMemReadT(&uStack_20,piVar2->g[7] + 0x6e0);
    sysMemWriteT(piVar2->g[7] + 0x1e0c,&uStack_20);
    sysMemWriteT(piVar2->g[7] + 0x6e0,&uStack_30);
  }
  sysWriteWorkRam1(0x5001e4,uVar3 & 0xff);
  return 0x466;
}

