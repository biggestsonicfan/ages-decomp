/* helper FUN_00199640 @ 00199640, called (depth 3) from play_motion */

undefined1 FUN_00199640(byte param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (5 < param_1) {
    uVar1 = 2;
  }
  return (&DAT_00228214)[uVar1 * 8];
}

