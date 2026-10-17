/* helper sound_chainlink_hit @ 001f35c0, called (depth 1) from play_motion */

/* WARNING: Removing unreachable block (ram,0x001f3664) */
/* WARNING: Removing unreachable block (ram,0x001f36e0) */

undefined8 sound_chainlink_hit(long param_1)

{
  i960_regs *piVar1;
  uint uStack_44;
  uint uStack_40;
  uint uStack_20;
  uint uStack_10;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  uStack_20 = (uint)bRam016b6e34;
  sysMemReadB(&bStack_1,uStack_20 + 0x6425700);
  uStack_40 = (uint)bStack_1;
  sysMemReadW(piVar1->g,uStack_40 * 4 + 0x64256f4);
  sysMemReadW(&uStack_44,piVar1->g[7] + 0xacc);
  if (uStack_44 == 0) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 5) == 0) {
    sysMemReadW(&uStack_44,piVar1->g[8] + 0xacc);
    if (uStack_44 == 0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 2) != 0) goto LAB_001f3684;
  }
  piVar1->g[0] = uStack_44;
LAB_001f3684:
  check_same_sound(0);
  sound_request_u(0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

