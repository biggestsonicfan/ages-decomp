/* helper copy_option_data @ 001db640, called (depth 2) from play_motion */

/* WARNING: Removing unreachable block (ram,0x001db6d4) */
/* WARNING: Removing unreachable block (ram,0x001db730) */

undefined8 copy_option_data(long param_1)

{
  i960_regs *piVar1;
  uint auStack_54 [4];
  int aiStack_44 [5];
  int aiStack_30 [3];
  uint uStack_24;
  uint uStack_20;
  short sStack_1c;
  short sStack_1a;
  short sStack_18;
  short sStack_16;
  short sStack_14;
  short sStack_12;
  short sStack_10;
  short sStack_e;
  short sStack_c;
  short sStack_a;
  short sStack_8;
  short sStack_6;
  short sStack_4;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadW(aiStack_44,piVar1->g[7] + 400);
  sysMemReadW(auStack_54,aiStack_44[0] + 0x2c);
  aiStack_30[2] = iRam016b6f3c;
  sysMemReadB(&bStack_1,iRam016b6f3c + 0x3350);
  aiStack_30[2] = (int)bStack_1;
  if (bStack_1 == 0) {
    uStack_20 = 2;
  }
  else {
    uStack_20 = 4;
  }
  if ((uStack_20 & 2) == 0) {
    sysMemReadW(auStack_54,aiStack_44[0] + 0x38);
  }
  sysMemReadW(aiStack_30,piVar1->g[7] + 0xafc);
  if (aiStack_30[0] == 0) {
    uStack_20 = 2;
  }
  else {
    uStack_20 = 4;
  }
  if ((uStack_20 & 2) == 0) {
    aiStack_30[1] = 0x70;
    aiStack_30[0] = (aiStack_30[0] + -1) * 0x70;
    auStack_54[0] = auStack_54[0] + aiStack_30[0];
  }
  sysMemReadW(&uStack_24,piVar1->g[7]);
  if ((uStack_24 & 0x40) != 0) {
    aiStack_30[1] = 0x38;
    auStack_54[0] = auStack_54[0] + 0x38;
  }
  sysMemReadW(&uStack_24,auStack_54[0]);
  sysMemWriteW(piVar1->g[7] + 0x784,&uStack_24);
  sysMemReadS(&sStack_4,auStack_54[0] + 4);
  uStack_24 = (uint)sStack_4;
  sysMemWriteS(piVar1->g[7] + 0x788,&uStack_24);
  sysMemReadS(&sStack_6,auStack_54[0] + 6);
  uStack_24 = (uint)sStack_6;
  sysMemWriteS(piVar1->g[7] + 0x78a,&uStack_24);
  sysMemReadW(&uStack_24,auStack_54[0] + 8);
  sysMemWriteW(piVar1->g[7] + 0x78c,&uStack_24);
  sysMemReadW(&uStack_24,auStack_54[0] + 0xc);
  sysMemWriteW(piVar1->g[7] + 0x790,&uStack_24);
  sysMemReadW(&uStack_24,auStack_54[0] + 0x10);
  sysMemWriteW(piVar1->g[7] + 0x794,&uStack_24);
  sysMemReadS(&sStack_8,auStack_54[0] + 0x14);
  uStack_24 = (uint)sStack_8;
  sysMemWriteS(piVar1->g[7] + 0x798,&uStack_24);
  sysMemReadS(&sStack_a,auStack_54[0] + 0x16);
  uStack_24 = (uint)sStack_a;
  sysMemWriteS(piVar1->g[7] + 0x79a,&uStack_24);
  sysMemReadS(&sStack_c,auStack_54[0] + 0x18);
  uStack_24 = (uint)sStack_c;
  sysMemWriteS(piVar1->g[7] + 0x79c,&uStack_24);
  sysMemReadS(&sStack_e,auStack_54[0] + 0x1a);
  uStack_24 = (uint)sStack_e;
  sysMemWriteS(piVar1->g[7] + 0x79e,&uStack_24);
  sysMemReadS(&sStack_10,auStack_54[0] + 0x1c);
  uStack_24 = (uint)sStack_10;
  sysMemWriteS(piVar1->g[7] + 0x7a0,&uStack_24);
  sysMemReadS(&sStack_12,auStack_54[0] + 0x1e);
  uStack_24 = (uint)sStack_12;
  sysMemWriteS(piVar1->g[7] + 0x7a2,&uStack_24);
  sysMemReadW(&uStack_24,auStack_54[0] + 0x20);
  sysMemWriteW(piVar1->g[7] + 0x7a4,&uStack_24);
  sysMemReadW(&uStack_24,auStack_54[0] + 0x24);
  sysMemWriteW(piVar1->g[7] + 0x7a8,&uStack_24);
  sysMemReadW(&uStack_24,auStack_54[0] + 0x28);
  sysMemWriteW(piVar1->g[7] + 0x7ac,&uStack_24);
  sysMemReadS(&sStack_14,auStack_54[0] + 0x2c);
  uStack_24 = (uint)sStack_14;
  sysMemWriteS(piVar1->g[7] + 0x7b0,&uStack_24);
  sysMemReadS(&sStack_16,auStack_54[0] + 0x2e);
  uStack_24 = (uint)sStack_16;
  sysMemWriteS(piVar1->g[7] + 0x7b2,&uStack_24);
  sysMemReadS(&sStack_18,auStack_54[0] + 0x30);
  uStack_24 = (uint)sStack_18;
  sysMemWriteS(piVar1->g[7] + 0x7b4,&uStack_24);
  sysMemReadS(&sStack_1a,auStack_54[0] + 0x32);
  uStack_24 = (uint)sStack_1a;
  sysMemWriteS(piVar1->g[7] + 0x7b6,&uStack_24);
  sysMemReadS(&sStack_1c,auStack_54[0] + 0x34);
  uStack_24 = (uint)sStack_1c;
  sysMemWriteS(piVar1->g[7] + 0x7f8,&uStack_24);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

