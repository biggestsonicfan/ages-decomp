/* helper cprSubMultiCurMatrix44Rev @ 00195440, called (depth 1) from Fn_mul_matrix_inner_rev */

void cprSubMultiCurMatrix44Rev(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  
  auVar1 = _lqc2(*param_1);
  auVar2 = _lqc2(param_1[1]);
  auVar3 = _lqc2(param_1[2]);
  auVar4 = _lqc2(param_1[3]);
  _vmulabc(auVar1,in_vf24);
  _vmaddabc(auVar2,in_vf24);
  _vmaddbc(auVar3,in_vf24);
  _vmulabc(auVar1,in_vf25);
  _vmaddabc(auVar2,in_vf25);
  _vmaddbc(auVar3,in_vf25);
  _vmulabc(auVar1,in_vf26);
  _vmaddabc(auVar2,in_vf26);
  _vmaddbc(auVar3,in_vf26);
  _vmulabc(auVar1,in_vf27);
  _vmaddabc(auVar2,in_vf27);
  auVar1 = _vmaddbc(auVar3,in_vf27);
  _vadd(auVar4,auVar1);
  return;
}

