/* helper FUN_001956c0 @ 001956c0, called (depth 1) from Fn_asin */

uint FUN_001956c0(float param_1)

{
  uint uVar1;
  float fVar2;
  
  if (-1.0 < param_1) {
    uVar1 = 0x4000;
    if (param_1 < 1.0) {
      for (fVar2 = (float)asinf(); fVar2 < 0.0; fVar2 = fVar2 + 6.2831855) {
      }
      for (; 6.2831855 <= fVar2; fVar2 = fVar2 - 6.2831855) {
      }
      fVar2 = (fVar2 * 65536.0) / 6.2831855;
      if (fVar2 < 2.1474836e+09) {
        uVar1 = (int)fVar2 & 0xffff;
      }
      else {
        uVar1 = (int)(fVar2 - 2.1474836e+09) & 0xffff;
      }
    }
  }
  else {
    uVar1 = 0xc000;
  }
  return uVar1;
}

