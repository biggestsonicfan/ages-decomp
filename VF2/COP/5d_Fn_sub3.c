/* COP 5d Fn_sub3: cprVecSub3 @ 0019e140, 6 argument words, 12 reply bytes */

void cprVecSub3(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = CprMain_RfiPtr[2];
  fVar3 = CprMain_RfiPtr[3];
  fVar2 = CprMain_RfiPtr[4];
  fVar4 = CprMain_RfiPtr[5];
  *CprMain_RfoTop = *CprMain_RfiPtr - CprMain_RfiPtr[1];
  CprMain_RfoTop[1] = fVar1 - fVar3;
  CprMain_RfoTop[2] = fVar2 - fVar4;
  return;
}

