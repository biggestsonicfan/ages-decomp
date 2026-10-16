/* COP 45 Fn_mul_matrix_inner: cprMtxMulMatrixInner @ 00199600, 1 argument words, 0 reply bytes */

void cprMtxMulMatrixInner(void)

{
  cprSubMultiCurMatrix44(CprMain_MtxInner + *CprMain_RfiPtr * 0x40);
  return;
}

