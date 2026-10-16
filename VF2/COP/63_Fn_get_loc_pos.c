/* COP 63 Fn_get_loc_pos: cprMotGetLocPos @ 0019ae80, 7 argument words, 12 reply bytes */

void cprMotGetLocPos(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_8;
  float fStack_4;
  
  pfVar1 = CprMain_RfiPtr;
  fVar6 = *CprMain_RfiPtr;
  fVar7 = CprMain_RfiPtr[2];
  fVar4 = CprMain_RfiPtr[4];
  fVar5 = CprMain_RfiPtr[6];
  cprSinCosf(&fStack_8,&fStack_4,*(undefined2 *)(CprMain_RfiPtr + 3));
  fVar3 = pfVar1[5];
  fVar2 = pfVar1[1];
  *CprMain_RfoTop = ((fStack_8 * fVar5 + fStack_4 * fVar4) - fStack_8 * fVar7) - fStack_4 * fVar6;
  CprMain_RfoTop[1] = fVar3 - fVar2;
  CprMain_RfoTop[2] = ((fStack_8 * fVar6 + fStack_4 * fVar5) - fStack_8 * fVar4) - fStack_4 * fVar7;
  return;
}

