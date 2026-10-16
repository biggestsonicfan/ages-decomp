/* helper CalcDist2Frame @ 0019c2c0, called (depth 1) from cprCliColiDist */

float CalcDist2Frame(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  
  iVar3 = 0;
  CprMain_x0 = 3;
  CprMain_x1 = 3;
  do {
    iVar3 = iVar3 + 3;
    *(undefined4 *)(CprMain_BRam + (uint)CprMain_x1 * 4) =
         *(undefined4 *)(CprMain_ARam + (uint)CprMain_x0 * 4);
    CprMain_x0 = CprMain_x0 + 1;
    CprMain_x1 = CprMain_x1 + 1;
    *(undefined4 *)(CprMain_BRam + (uint)CprMain_x1 * 4) =
         *(undefined4 *)(CprMain_ARam + (uint)CprMain_x0 * 4);
    CprMain_x0 = CprMain_x0 + 1;
    CprMain_x1 = CprMain_x1 + 1;
    *(undefined4 *)(CprMain_BRam + (uint)CprMain_x1 * 4) =
         *(undefined4 *)(CprMain_ARam + (uint)CprMain_x0 * 4);
    iVar1 = CprMain_IRam;
    CprMain_x0 = CprMain_x0 + 1;
    CprMain_x1 = CprMain_x1 + 1;
  } while (iVar3 < 9);
  pfVar11 = (float *)(CprMain_ARam + 0xc);
  pfVar10 = (float *)(CprMain_ARam + 0x10);
  pfVar9 = (float *)(CprMain_ARam + 0x14);
  pfVar6 = (float *)(CprMain_BRam + 0x24);
  pfVar5 = (float *)(CprMain_BRam + 0x28);
  fVar12 = -(*(float *)(CprMain_ARam + 0x14) * *(float *)(CprMain_BRam + 0x2c) +
            *(float *)(CprMain_ARam + 0xc) * *(float *)(CprMain_BRam + 0x24) +
            *(float *)(CprMain_ARam + 0x10) * *(float *)(CprMain_BRam + 0x28));
  pfVar4 = (float *)(CprMain_BRam + 0x2c);
  if (fVar12 <= 0.0) {
    fVar12 = *(float *)(CprMain_ARam + 0x14) * *(float *)(CprMain_BRam + 0x14) +
             *(float *)(CprMain_ARam + 0xc) * *(float *)(CprMain_BRam + 0xc) +
             *(float *)(CprMain_ARam + 0x10) * *(float *)(CprMain_BRam + 0x10);
  }
  else {
    *(float *)(CprMain_IRam + 0x30) = fVar12;
    iVar2 = CprMain_IRam;
    iVar3 = CprMain_ARam;
    pfVar8 = (float *)(CprMain_ARam + 0x24);
    pfVar7 = (float *)(CprMain_ARam + 0x28);
    *(float *)(CprMain_IRam + 0x34) =
         *(float *)(CprMain_ARam + 0x2c) * *pfVar4 +
         *(float *)(CprMain_ARam + 0x24) * *pfVar6 + *(float *)(CprMain_ARam + 0x28) * *pfVar5;
    pfVar4 = (float *)(iVar3 + 0x2c);
    if (*(float *)(iVar2 + 0x34) - *(float *)(iVar1 + 0x30) <= 0.0) {
      fVar12 = *(float *)(CprMain_ARam + 0x20) * *(float *)(CprMain_BRam + 0x20) +
               *(float *)(CprMain_ARam + 0x18) * *(float *)(CprMain_BRam + 0x18) +
               *(float *)(CprMain_ARam + 0x1c) * *(float *)(CprMain_BRam + 0x1c);
    }
    else {
      fVar12 = *(float *)(iVar1 + 0x30) / *(float *)(iVar2 + 0x34);
      *pfVar8 = *pfVar11 + *pfVar8 * fVar12;
      *pfVar7 = *pfVar10 + *pfVar7 * fVar12;
      *pfVar4 = *pfVar9 + *pfVar4 * fVar12;
      fVar12 = *pfVar4 * *pfVar4 + *pfVar8 * *pfVar8 + *pfVar7 * *pfVar7;
    }
  }
  return fVar12;
}

