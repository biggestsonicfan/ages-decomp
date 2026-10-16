/* COP 5a Fn_regular_vector_2d: cprVecRegularVector2d @ 0019e380, 2 argument words, 8 reply bytes */

void cprVecRegularVector2d(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *CprMain_RfiPtr;
  fVar3 = CprMain_RfiPtr[1];
  fVar1 = (float)cprSubLength2DR(fVar2,fVar3);
  *CprMain_RfoTop = fVar1 * fVar2;
  CprMain_RfoTop[1] = fVar1 * fVar3;
  return;
}

