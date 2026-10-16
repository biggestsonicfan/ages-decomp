/* helper FUN_00195c40 @ 00195c40, called (depth 1) from Fn_atan */

uint FUN_00195c40(void)

{
  float fVar1;
  
  for (fVar1 = (float)FUN_00195800(); fVar1 < 0.0; fVar1 = fVar1 + 6.2831855) {
  }
  for (; 6.2831855 <= fVar1; fVar1 = fVar1 - 6.2831855) {
  }
  fVar1 = (fVar1 * 65536.0) / 6.2831855;
  if (2.1474836e+09 <= fVar1) {
    fVar1 = fVar1 - 2.1474836e+09;
  }
  return (int)fVar1 & 0xffff;
}

