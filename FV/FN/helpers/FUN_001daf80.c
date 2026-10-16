/* helper FUN_001daf80 @ 001daf80, called (depth 1) from calc_unit_mat */

undefined8 FUN_001daf80(long param_1)

{
  i960_regs *piVar1;
  int iStack_44;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [4];
  int iStack_30;
  uint uStack_2c;
  uint uStack_28;
  int aiStack_24 [2];
  uint uStack_1c;
  uint uStack_18;
  undefined *puStack_14;
  uint uStack_10;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadW(&iStack_44,piVar1->g[7] + 0x1d0c);
  sysMemReadW(aiStack_24,piVar1->g[7] + 0x1d00);
  sysMemReadW(&iStack_30,piVar1->g[7] + 0x1d10);
  sysMemReadW(&iStack_30,iStack_30 + piVar1->g[0] * 4);
  sysMemReadW(&uStack_2c,piVar1->g[7] + 0x1d20);
  sysMemReadB(&bStack_1,uStack_2c + piVar1->g[0]);
  uStack_2c = (uint)bStack_1;
  uStack_18 = uRam016b75f8;
  sysMemReadW(&uStack_18,uRam016b75f8);
  while( true ) {
    if ((int)uStack_2c < 1) {
      if (uStack_2c == 0) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    uStack_2c = uStack_2c - 1;
    if ((uStack_10 & 3) != 0) break;
    sysMemReadB(&bStack_2,iStack_30 + uStack_2c);
    uStack_28 = (uint)bStack_2;
    sysMemReadQ(auStack_40,iStack_44 + uStack_28 * 4);
    sysMemReadW(auStack_34,aiStack_24[0] + uStack_28 * 4);
    uStack_1c = uStack_28 >> 2;
    sysMemReadB(&bStack_3,uStack_1c + 0x182e4);
    puStack_14 = &DAT_1c803939;
    uStack_1c = (uint)bStack_3;
    FUN_0018df40();
    FUN_0018de40(auStack_40);
    puStack_14 = (undefined *)(uStack_1c * 3);
    FUN_0018df40();
    if ((uStack_18 & 0x80000000) == 0) {
      puStack_14 = (undefined *)0x14802929;
      FUN_0018df40();
      FUN_0018de40(auStack_40);
      FUN_0018e080(auStack_40);
    }
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

