/* helper FUN_00199a00 @ 00199a00, called (depth 3) from play_motion */

void FUN_00199a00(short param_1)

{
  if (param_1 != -1) {
    FUN_00196d40(*(undefined2 *)(param_1 * 0x10 + 0x2404fc),
                 *(undefined2 *)(&DAT_002404fe + param_1 * 0x10));
  }
  return;
}

