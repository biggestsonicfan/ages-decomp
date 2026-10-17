/* helper set_tpd_data @ 001ed4c0, called (depth 1) from tex_move_poly */

undefined8 set_tpd_data(int param_1)

{
  i960_regs *piVar1;
  float fVar2;
  uint uVar3;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 auStack_38 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  uint uStack_14;
  ushort uStack_2;
  
  piVar1 = i960GetRegs();
  iStack_3c = iRam016c4dd4;
  uRam016c4dd0 = uRam016c4dd0 | 1 << (piVar1->g[5] & 0x1f);
  uStack_14 = uRam016c4dd0;
  sysMemReadS(&uStack_2,piVar1->g[6] + 6);
  fStack_18 = (float)iRam016c4dd8;
  uStack_14 = (uint)uStack_2 + iRam016c4dd8;
  iRam016c4dd8 = uStack_14;
  *(uint *)(iStack_3c * 4 + 0x16c4ed0) = piVar1->g[6];
  sysMemReadT(&uStack_40,iRam016b75e4 + 0x18);
  sysMemReadW(&uStack_30,piVar1->g[6] + 8);
  sysMemReadW(&uStack_28,piVar1->g[6] + 0x10);
  uStack_14 = 0x800101;
  FUN_0018df40();
  uStack_14 = 0x1800303;
  FUN_0018df40();
  uStack_14 = 0x4800909;
  FUN_0018df40();
  uStack_14 = -(int)sRam016c0df2;
  FUN_0018df40(uStack_14);
  uStack_2c = 0;
  uStack_14 = 0x14802929;
  FUN_0018df40();
  FUN_0018df40(uStack_30);
  FUN_0018df40(uStack_2c);
  FUN_0018df40(uStack_28);
  uStack_30 = FUN_0018e100();
  uStack_2c = FUN_0018e100();
  uStack_28 = FUN_0018e100();
  uStack_14 = 0x1000202;
  FUN_0018df40();
  uStack_14 = 0x17802f2f;
  FUN_0018df40();
  FUN_0018df40(auStack_38[0]);
  FUN_0018df40(uStack_28);
  FUN_0018df40(uStack_30);
  FUN_0018df40(uStack_40);
  fStack_24 = (float)FUN_0018e100();
  sysMemReadW(&uStack_40,piVar1->g[6] + 0x18);
  sysMemReadW(auStack_38,piVar1->g[6] + 0x20);
  uStack_14 = 0x800101;
  FUN_0018df40();
  uStack_14 = 0x1800303;
  FUN_0018df40();
  uStack_14 = 0x4800909;
  FUN_0018df40();
  uStack_14 = -(int)sRam016c0df2;
  FUN_0018df40(uStack_14);
  iStack_3c = 0;
  uStack_14 = 0x14802929;
  FUN_0018df40();
  FUN_0018df40(uStack_40);
  FUN_0018df40(iStack_3c);
  FUN_0018df40(auStack_38[0]);
  uStack_40 = FUN_0018e100();
  iStack_3c = FUN_0018e100();
  auStack_38[0] = FUN_0018e100();
  uStack_14 = 0x1000202;
  FUN_0018df40();
  uStack_14 = 0x17802f2f;
  FUN_0018df40();
  FUN_0018df40(auStack_38[0]);
  FUN_0018df40(uStack_28);
  FUN_0018df40(uStack_30);
  FUN_0018df40(uStack_40);
  iStack_20 = FUN_0018e100();
  uStack_14 = 0x11802323;
  fStack_24 = (float)(iStack_20 - (int)fStack_24);
  FUN_0018df40();
  FUN_0018df40(fStack_24);
  fVar2 = (float)FUN_0018e100();
  fStack_18 = 2048.0;
  uStack_1c = 0x41000000;
  fStack_24 = fVar2 * 646.0 * 8.0;
  fStack_24 = (float)fmodf(fStack_24,0x45000000);
  if (((uint)fStack_24 & 0x80000000) != 0) {
    fStack_24 = fStack_24 + fStack_18;
  }
  uStack_14 = 0xc001818;
  FUN_0018df40();
  FUN_0018df40(fStack_24);
  uVar3 = FUN_0018e100();
  fStack_24 = (float)(uVar3 & 0xffff);
  uStack_1c = 0xffff;
  iStack_3c = iRam016c4dd4;
  *(float *)(iRam016c4dd4 * 4 + 0x16c50d0) = fStack_24;
  fStack_18 = (float)iRam016c4dd4;
  iRam016c4dd4 = iRam016c4dd4 + 1;
  if (param_1 != 0) {
    uStack_14 = iRam016c4dd4;
    i960ReturnProc();
  }
  return 0;
}

