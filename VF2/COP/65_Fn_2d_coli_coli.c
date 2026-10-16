/* COP 65 Fn_2d_coli_coli: cprOsg2dColiColi @ 0019c600, 3 argument words, 0 reply bytes */

void cprOsg2dColiColi(void)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar2 = (float *)(CprMain_ARam + 0x30);
  fVar6 = *CprMain_RfiPtr;
  fVar8 = CprMain_RfiPtr[2];
  fVar4 = CprMain_RfiPtr[1];
  fVar7 = *(float *)(CprMain_ARam + 0x30) - fVar6;
  fVar5 = *(float *)(CprMain_ARam + 0x34) - fVar4;
  pfVar1 = (float *)(CprMain_ARam + 0x34);
  if ((fVar5 * fVar5 + fVar7 * fVar7) - fVar8 * fVar8 < 0.0) {
    fVar3 = (float)cprSubSqrtR();
    *pfVar2 = fVar6 + fVar3 * fVar8 * fVar7;
    *pfVar1 = fVar4 + fVar3 * fVar8 * fVar5;
  }
  return;
}

