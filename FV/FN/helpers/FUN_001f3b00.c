/* helper FUN_001f3b00 @ 001f3b00, called (depth 1) from play_motion */

/* WARNING: Removing unreachable block (ram,0x001f3bb4) */

undefined8 FUN_001f3b00(long param_1)

{
  i960_regs *piVar1;
  int iStack_44;
  uint auStack_40 [8];
  uint uStack_20;
  uint uStack_18;
  uint uStack_10;
  ushort uStack_4;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadW(&iStack_44,piVar1->g[0] * 4 + 0x64256c0);
  uStack_20 = (uint)bRam016b6e34;
  auStack_40[0] = uStack_20 * 0x100;
  sysMemReadB(&bStack_1,auStack_40[0] + 0x6ce105c);
  auStack_40[0] = (uint)bStack_1;
  sysMemReadS(&uStack_4,piVar1->g[7] + 0x624);
  uStack_18 = (uint)uStack_4;
  if (uStack_4 == 0) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 2) == 0) {
    auStack_40[0] = 0;
  }
  sysMemReadW(auStack_40,iStack_44 + auStack_40[0] * 4);
  piVar1->g[0] = auStack_40[0];
  FUN_001f3940(0);
  sound_request_u(0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

