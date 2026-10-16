/* COP 0f Fn_get_point: cprMtxGetPoint @ 00199c00, 0 argument words, 12 reply bytes */

void cprMtxGetPoint(void)

{
  undefined1 auVar1 [16];
  undefined1 in_vf27 [16];
  
  auVar1 = _sqc2(in_vf27);
  *CprMain_RfoTop = auVar1;
  return;
}

