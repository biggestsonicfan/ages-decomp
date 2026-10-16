/* COP 57 Fn_get_y_axis: cprMtxGetYaxis @ 00199440, 0 argument words, 12 reply bytes */

void cprMtxGetYaxis(void)

{
  undefined1 auVar1 [16];
  undefined1 in_vf25 [16];
  
  auVar1 = _sqc2(in_vf25);
  *CprMain_RfoTop = auVar1;
  return;
}

