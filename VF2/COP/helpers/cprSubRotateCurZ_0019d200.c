/* helper cprSubRotateCurZ @ 0019d200, called (depth 1) from cprMtxZrot */

void cprSubRotateCurZ(uint param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined8 uStack_8;
  
  auVar1._4_4_ = *(undefined4 *)(&g_SinVal + ((param_1 & 0xffff) + 0x4000 & 0xffff) * 4);
  auVar1._0_4_ = *(undefined4 *)(&g_SinVal + (param_1 & 0xffff) * 4);
  auVar1._8_8_ = uStack_8;
  auVar1 = _lqc2(auVar1);
  auVar2 = _vmove(in_vf24);
  _vmulabc(auVar2,auVar1);
  _vmsubbc(in_vf25,auVar1);
  _vmulabc(auVar2,auVar1);
  _vmaddbc(in_vf25,auVar1);
  return;
}

