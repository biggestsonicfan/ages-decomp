/* helper cprSubScaleCurMat @ 001951c0, called (depth 1) from calc_unit_mat */

void cprSubScaleCurMat(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  
  auVar1 = _lqc2(*param_1);
  _vmulbc(in_vf24,auVar1);
  _vmulbc(in_vf25,auVar1);
  _vmulbc(in_vf26,auVar1);
  return;
}

