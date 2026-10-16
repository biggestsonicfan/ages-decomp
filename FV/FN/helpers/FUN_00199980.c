/* helper FUN_00199980 @ 00199980, called (depth 3) from play_motion */

void FUN_00199980(short param_1)

{
  if (param_1 != -1) {
    FUN_00196c00(*(undefined2 *)(param_1 * 0x10 + 0x2404fc),
                 *(undefined2 *)(&DAT_002404fe + param_1 * 0x10));
  }
  return;
}

