/* COP 46 Fn_mul_matrix_inner_rev: cprMtxMulMatrixInnerRev @ 001995c0, 1 argument words, 0 reply bytes */

void cprMtxMulMatrixInnerRev(void)

{
  cprSubMultiCurMatrix44Rev(CprMain_MtxInner + *CprMain_RfiPtr * 0x40);
  return;
}

