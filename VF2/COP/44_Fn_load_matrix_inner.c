/* COP 44 Fn_load_matrix_inner: cprMtxLoadMatrixInner @ 00199640, 1 argument words, 0 reply bytes */

void cprMtxLoadMatrixInner(void)

{
  undefined1 (*pauVar1) [16];
  
  pauVar1 = (undefined1 (*) [16])(CprMain_MtxInner + *CprMain_RfiPtr * 0x40);
  _lqc2(*pauVar1);
  _lqc2(pauVar1[1]);
  _lqc2(pauVar1[2]);
  _lqc2(pauVar1[3]);
  return;
}

