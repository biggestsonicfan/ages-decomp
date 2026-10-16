/* COP 37 Fn_mul_unit_mat: cprMtxMulUnitMat @ 00199880, 2 argument words, 0 reply bytes */

void cprMtxMulUnitMat(void)

{
  int iVar1;
  
  iVar1 = CprMain_UnitMtx1;
  if (*CprMain_RfiPtr != 1) {
    iVar1 = CprMain_UnitMtx0;
  }
  cprSubMultiCurMatrix44(iVar1 + ((uint)CprMain_RfiPtr[1] / 0xc) * 0x40);
  return;
}

