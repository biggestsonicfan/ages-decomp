/* helper FUN_00195600 @ 00195600, called (depth 1) from Fn_get_3d_r */

float FUN_00195600(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_3 * param_3 + param_1 * param_1 + param_2 * param_2;
  if (fVar1 != 0.0) {
    fVar1 = SQRT(fVar1);
  }
  return fVar1;
}

