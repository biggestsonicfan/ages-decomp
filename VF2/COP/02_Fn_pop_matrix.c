/* COP 02 Fn_pop_matrix: cprMtxPopMatrix @ 0019a000, 0 argument words, 0 reply bytes */

void cprMtxPopMatrix(void)

{
  undefined1 (*pauVar1) [16];
  
  CprMtx_MatrixSp = CprMtx_MatrixSp + -0x40;
  pauVar1 = (undefined1 (*) [16])(CprMain_MtxStack + CprMtx_MatrixSp);
  _lqc2(*pauVar1);
  _lqc2(pauVar1[1]);
  _lqc2(pauVar1[2]);
  _lqc2(pauVar1[3]);
  return;
}

