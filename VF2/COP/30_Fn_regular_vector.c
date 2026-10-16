/* COP 30 Fn_regular_vector: cprVecRegularVector @ 0019e400, 3 argument words, 12 reply bytes */

void cprVecRegularVector(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *CprMain_RfiPtr;
  fVar2 = CprMain_RfiPtr[1];
  fVar3 = CprMain_RfiPtr[2];
  fVar1 = (float)cprSubLength3DR(fVar4,fVar2,fVar3);
  *CprMain_RfoTop = fVar1 * fVar4;
  CprMain_RfoTop[1] = fVar1 * fVar2;
  CprMain_RfoTop[2] = fVar1 * fVar3;
  return;
}

