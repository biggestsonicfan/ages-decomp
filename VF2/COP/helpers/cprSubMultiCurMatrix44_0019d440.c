/* helper cprSubMultiCurMatrix44 @ 0019d440, called (depth 1) from cprMtxMulMatrix */

void cprSubMultiCurMatrix44(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  
  auVar1 = _vmove(in_vf24);
  auVar2 = _vmove(in_vf25);
  auVar3 = _vmove(in_vf26);
  auVar4 = _lqc2(*param_1);
  _vmulabc(auVar1,auVar4);
  _vmaddabc(auVar2,auVar4);
  _vmaddbc(auVar3,auVar4);
  auVar4 = _lqc2(param_1[1]);
  _vmulabc(auVar1,auVar4);
  _vmaddabc(auVar2,auVar4);
  _vmaddbc(auVar3,auVar4);
  auVar4 = _lqc2(param_1[2]);
  _vmulabc(auVar1,auVar4);
  _vmaddabc(auVar2,auVar4);
  _vmaddbc(auVar3,auVar4);
  auVar4 = _lqc2(param_1[3]);
  _vmulabc(auVar1,auVar4);
  _vmaddabc(auVar2,auVar4);
  auVar1 = _vmaddbc(auVar3,auVar4);
  _vadd(in_vf27,auVar1);
  return;
}

