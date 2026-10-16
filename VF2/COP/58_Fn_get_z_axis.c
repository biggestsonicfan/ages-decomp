/* COP 58 Fn_get_z_axis: cprMtxGetZaxis @ 00199400, 0 argument words, 12 reply bytes */

void cprMtxGetZaxis(void)

{
  undefined1 auVar1 [16];
  undefined1 in_vf26 [16];
  
  auVar1 = _sqc2(in_vf26);
  *CprMain_RfoTop = auVar1;
  return;
}

