/* COP 07 Fn_scale: cprMtxScale @ 00199e80, 3 argument words, 0 reply bytes */

void cprMtxScale(void)

{
  undefined1 auVar1 [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  
  auVar1 = _lqc2(*CprMain_RfiPtr);
  _vmulbc(in_vf24,auVar1);
  _vmulbc(in_vf25,auVar1);
  _vmulbc(in_vf26,auVar1);
  return;
}

