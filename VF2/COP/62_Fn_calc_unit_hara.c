/* COP 62 Fn_calc_unit_hara: cprMotCalcUnitHara @ 0019af80, 9 argument words, 0 reply bytes */

void cprMotCalcUnitHara(void)

{
  undefined1 (*pauVar1) [16];
  
  pauVar1 = CprMain_RfiPtr;
  CprMtx_MatrixSp = CprMtx_MatrixSp + 0x40;
  _lqc2(*CprMain_RfiPtr);
  RotBaseZYX(*(uint *)(*CprMain_RfiPtr + 0xc) & 0xffff,*(uint *)CprMain_RfiPtr[1] & 0xffff,
             *(uint *)(CprMain_RfiPtr[1] + 4) & 0xffff);
  cprSubRotateCurY(*(undefined2 *)(pauVar1[1] + 8));
  cprSubRotateCurX(*(undefined2 *)(pauVar1[1] + 0xc));
  cprSubRotateCurZ(*(undefined2 *)pauVar1[2]);
  return;
}

