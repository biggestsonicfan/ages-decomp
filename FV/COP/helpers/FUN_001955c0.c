/* helper FUN_001955c0 @ 001955c0, called (depth 1) from Fn_get_2d_len */

float FUN_001955c0(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_1 * param_1 + param_2 * param_2;
  if (fVar1 != 0.0) {
    fVar1 = SQRT(fVar1);
  }
  return fVar1;
}

