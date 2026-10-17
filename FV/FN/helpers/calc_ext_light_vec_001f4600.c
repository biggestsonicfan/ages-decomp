/* helper calc_ext_light_vec @ 001f4600, called (depth 1) from rob_kage_disp_inside */

undefined8 calc_ext_light_vec(long param_1)

{
  i960_regs *piVar1;
  int iVar2;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piVar1 = i960GetRegs();
  sysMemReadL(&fStack_40,piVar1->g[0] * 8 + 0x60620);
  fStack_40 = fStack_40 * fRam016c0ddc;
  fStack_38 = fRam016b704c;
  fStack_3c = fStack_3c * fRam016c0ddc;
  sysMemReadT(&fStack_30,piVar1->g[7] + 500);
  uStack_14 = 0x15802b2b;
  FUN_0018df40();
  FUN_0018df40(fStack_40);
  FUN_0018df40(fStack_30);
  FUN_0018df40(fStack_3c);
  FUN_0018df40(fStack_28);
  fStack_24 = (float)FUN_0018e100();
  uStack_14 = 0x13802727;
  fStack_30 = fStack_30 - fStack_40;
  fStack_2c = fStack_2c - fStack_38;
  fStack_28 = fStack_28 - fStack_3c;
  FUN_0018df40();
  FUN_0018df40(fStack_28);
  FUN_0018df40(fStack_30);
  iVar2 = FUN_0018e100();
  fStack_40 = (float)(0x8000 - iVar2);
  uStack_18 = 0xbf800000;
  fStack_44 = (fRam016c0ddc - -1.0) - fStack_24;
  if (((uint)fStack_44 & 0x80000000) != 0) {
    fStack_44 = 0.0;
  }
  uStack_14 = 0x13802727;
  FUN_0018df40();
  FUN_0018df40(fStack_44);
  FUN_0018df40(fStack_38);
  fStack_3c = (float)FUN_0018e100();
  uRam016b877c = SUB42(fStack_3c,0);
  uRam016b877e = SUB42(fStack_40,0);
  piVar1->g[0] = 1;
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

