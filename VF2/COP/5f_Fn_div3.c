/* COP 5f Fn_div3: cprVecDiv3 @ 0019e040, 4 argument words, 12 reply bytes */

void cprVecDiv3(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = 1.0 / *CprMain_RfiPtr;
  fVar2 = CprMain_RfiPtr[2];
  fVar3 = CprMain_RfiPtr[3];
  *CprMain_RfoTop = fVar1 * CprMain_RfiPtr[1];
  CprMain_RfoTop[1] = fVar1 * fVar2;
  CprMain_RfoTop[2] = fVar1 * fVar3;
  return;
}

