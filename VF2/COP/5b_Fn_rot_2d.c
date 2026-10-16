/* COP 5b Fn_rot_2d: cprVecRot2d @ 0019e300, 3 argument words, 8 reply bytes */

void cprVecRot2d(void)

{
  float fVar1;
  float fVar2;
  float fStack_8;
  float fStack_4;
  
  fVar1 = *(float *)(CprMain_RfiPtr + 2);
  fVar2 = *(float *)(CprMain_RfiPtr + 4);
  cprSinCosf(&fStack_4,&fStack_8,*CprMain_RfiPtr);
  *CprMain_RfoTop = fStack_8 * fVar1 - fStack_4 * fVar2;
  CprMain_RfoTop[1] = fStack_8 * fVar2 + fStack_4 * fVar1;
  return;
}

