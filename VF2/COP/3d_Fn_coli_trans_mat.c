/* COP 3d Fn_coli_trans_mat: cprMtxColiTransMat @ 00199780, 6 argument words, 0 reply bytes */

void cprMtxColiTransMat(void)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar7 = 0xc;
  fVar13 = *CprMain_RfiPtr;
  fVar11 = CprMain_RfiPtr[1];
  fVar12 = CprMain_RfiPtr[2];
  fVar9 = CprMain_RfiPtr[3];
  fVar10 = CprMain_RfiPtr[4];
  fVar8 = CprMain_RfiPtr[5];
  iVar6 = 0x10;
  do {
    iVar5 = iVar7 * 4;
    iVar4 = (iVar7 + 1) * 4;
    iVar3 = (iVar7 + 2) * 4;
    iVar7 = iVar7 + 0x10;
    pfVar2 = (float *)(CprMain_UnitMtx0 + iVar5);
    *pfVar2 = *pfVar2 + fVar13;
    pfVar2 = (float *)(CprMain_UnitMtx1 + iVar5);
    *pfVar2 = *pfVar2 + fVar9;
    pfVar2 = (float *)(CprMain_UnitMtx0 + iVar4);
    *pfVar2 = *pfVar2 + fVar11;
    pfVar2 = (float *)(CprMain_UnitMtx1 + iVar4);
    *pfVar2 = *pfVar2 + fVar10;
    pfVar2 = (float *)(CprMain_UnitMtx0 + iVar3);
    *pfVar2 = *pfVar2 + fVar12;
    pfVar2 = (float *)(CprMain_UnitMtx1 + iVar3);
    bVar1 = iVar6 != 1;
    *pfVar2 = *pfVar2 + fVar8;
    iVar6 = iVar6 + -1;
  } while (bVar1);
  return;
}

