/* helper cprSubTransCur @ 0019d1c0, called (depth 1) from cprVecPointTrans */

void cprSubTransCur(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  
  auVar1 = _lqc2(*param_2);
  _vmulabc(in_vf24,auVar1);
  _vmaddabc(in_vf25,auVar1);
  auVar1 = _vmaddbc(in_vf26,auVar1);
  auVar1 = _vadd(auVar1,in_vf27);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

