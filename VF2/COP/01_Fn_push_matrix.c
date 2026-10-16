/* COP 01 Fn_push_matrix: cprMtxPushMatrix @ 0019a040, 0 argument words, 0 reply bytes */

void cprMtxPushMatrix(void)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  
  pauVar2 = (undefined1 (*) [16])(CprMain_MtxStack + CprMtx_MatrixSp);
  auVar1 = _sqc2(in_vf24);
  *pauVar2 = auVar1;
  auVar1 = _sqc2(in_vf25);
  pauVar2[1] = auVar1;
  auVar1 = _sqc2(in_vf26);
  pauVar2[2] = auVar1;
  auVar1 = _sqc2(in_vf27);
  pauVar2[3] = auVar1;
  CprMtx_MatrixSp = CprMtx_MatrixSp + 0x40;
  return;
}

