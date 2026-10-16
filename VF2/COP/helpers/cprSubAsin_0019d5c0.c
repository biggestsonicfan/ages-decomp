/* helper cprSubAsin @ 0019d5c0, called (depth 1) from cprTriAsin */

uint cprSubAsin(float param_1)

{
  uint uVar1;
  float fVar2;
  float __x;
  
  fVar2 = -1.0;
  if (-1.0 <= param_1) {
    fVar2 = param_1;
  }
  __x = 1.0;
  if (fVar2 <= 1.0) {
    __x = fVar2;
  }
  for (fVar2 = asinf(__x); fVar2 < 0.0; fVar2 = fVar2 + 6.2831855) {
  }
  for (; 6.2831855 <= fVar2; fVar2 = fVar2 - 6.2831855) {
  }
  fVar2 = (fVar2 * 65536.0) / 6.2831855;
  if (fVar2 < 2.1474836e+09) {
    uVar1 = (uint)fVar2;
  }
  else {
    uVar1 = (int)(fVar2 - 2.1474836e+09) | 0x80000000;
  }
  return uVar1;
}

