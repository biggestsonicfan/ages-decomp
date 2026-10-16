/* COP 5e Fn_mul3: cprVecMul3 @ 0019e0c0, 4 argument words, 12 reply bytes */

void cprVecMul3(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *CprMain_RfiPtr;
  fVar2 = CprMain_RfiPtr[2];
  fVar3 = CprMain_RfiPtr[3];
  *CprMain_RfoTop = fVar1 * CprMain_RfiPtr[1];
  CprMain_RfoTop[1] = fVar1 * fVar2;
  CprMain_RfoTop[2] = fVar1 * fVar3;
  return;
}

