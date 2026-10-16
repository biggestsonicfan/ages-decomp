/* COP 56 Fn_get_x_axis: cprMtxGetXaxis @ 00199480, 0 argument words, 12 reply bytes */

void cprMtxGetXaxis(void)

{
  undefined1 auVar1 [16];
  undefined1 in_vf24 [16];
  
  auVar1 = _sqc2(in_vf24);
  *CprMain_RfoTop = auVar1;
  return;
}

