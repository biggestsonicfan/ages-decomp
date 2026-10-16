/* COP 05 Fn_get_matrix: cprMtxGetMatrix @ 00199f00, 0 argument words, 48 reply bytes */

void cprMtxGetMatrix(void)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  
  pauVar2 = CprMain_MtxA0;
  auVar1 = _sqc2(in_vf24);
  *CprMain_MtxA0 = auVar1;
  auVar1 = _sqc2(in_vf25);
  pauVar2[1] = auVar1;
  auVar1 = _sqc2(in_vf26);
  pauVar2[2] = auVar1;
  auVar1 = _sqc2(in_vf27);
  pauVar2[3] = auVar1;
  rfoMatrix44();
  return;
}

