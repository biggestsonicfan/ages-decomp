/* COP 36 Fn_ld_unit_mat: cprMtxLdUnitMat @ 00199900, 2 argument words, 0 reply bytes */

void cprMtxLdUnitMat(void)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  
  iVar1 = CprMain_UnitMtx1;
  if (*CprMain_RfiPtr != 1) {
    iVar1 = CprMain_UnitMtx0;
  }
  pauVar2 = (undefined1 (*) [16])(iVar1 + ((uint)CprMain_RfiPtr[1] / 0xc) * 0x40);
  _lqc2(*pauVar2);
  _lqc2(pauVar2[1]);
  _lqc2(pauVar2[2]);
  _lqc2(pauVar2[3]);
  return;
}

