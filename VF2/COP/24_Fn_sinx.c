/* COP 24 Fn_sinx: cprTriSinx @ 0019dec0, 2 argument words, 4 reply bytes */

void cprTriSinx(void)

{
  undefined2 *puVar1;
  float fVar2;
  
  puVar1 = CprMain_RfiPtr;
  fVar2 = (float)cprSinf(*CprMain_RfiPtr);
  *CprMain_RfoTop = *(float *)(puVar1 + 2) * fVar2;
  return;
}

