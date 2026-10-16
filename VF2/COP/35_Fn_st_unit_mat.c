/* COP 35 Fn_st_unit_mat: cprMtxStUnitMat @ 00199980, 2 argument words, 0 reply bytes */

void cprMtxStUnitMat(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 (*pauVar3) [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  
  iVar2 = CprMain_UnitMtx1;
  if (*CprMain_RfiPtr != 1) {
    iVar2 = CprMain_UnitMtx0;
  }
  pauVar3 = (undefined1 (*) [16])(iVar2 + ((uint)CprMain_RfiPtr[1] / 0xc) * 0x40);
  auVar1 = _sqc2(in_vf24);
  *pauVar3 = auVar1;
  auVar1 = _sqc2(in_vf25);
  pauVar3[1] = auVar1;
  auVar1 = _sqc2(in_vf26);
  pauVar3[2] = auVar1;
  auVar1 = _sqc2(in_vf27);
  pauVar3[3] = auVar1;
  return;
}

