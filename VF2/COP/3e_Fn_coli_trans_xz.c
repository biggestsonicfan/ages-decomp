/* COP 3e Fn_coli_trans_xz: cprCliColiTransXZ @ 0019b880, 5 argument words, 0 reply bytes */

void cprCliColiTransXZ(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar1 = CprMain_RfiPtr;
  fVar8 = *CprMain_RfiPtr;
  fVar9 = CprMain_RfiPtr[1];
  pfVar6 = (float *)(CprMain_IRam + 0xc);
  pfVar5 = (float *)(CprMain_IRam + 0x10);
  pfVar4 = (float *)(CprMain_IRam + 0x14);
  pfVar3 = (float *)(CprMain_IRam + 0x34);
  pfVar2 = (float *)(CprMain_IRam + 0x30);
  fVar7 = (float)cprSubSqrt(fVar9 * fVar9 + fVar8 * fVar8);
  *pfVar2 = fVar8 / fVar7;
  *pfVar3 = fVar9 / fVar7;
  *pfVar6 = pfVar1[2];
  *pfVar5 = pfVar1[3];
  *pfVar4 = pfVar1[4];
  CprMain_b1 = 0xc0;
  CprMain_x1 = 16000;
  BallTrans();
  CprMain_x1 = 0x3ee0;
  BallTrans();
  CprMain_x1 = 0x7e80;
  BallTrans();
  CprMain_x1 = 0x7ee0;
  BallTrans();
  return;
}

