/* helper cprSubTransCurMat @ 0019d180, called (depth 1) from cprMotCalcUnit2Fast */

void cprSubTransCurMat(undefined1 (*param_1) [16])

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  
  auVar1 = _lqc2(*param_1);
  _vmulabc(in_vf24,auVar1);
  _vmaddabc(in_vf25,auVar1);
  _vmaddabc(in_vf26,auVar1);
  _vmaddbc(in_vf27,in_vf0);
  return;
}

