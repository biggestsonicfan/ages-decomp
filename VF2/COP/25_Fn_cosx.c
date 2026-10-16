/* COP 25 Fn_cosx: cprTriCosx @ 0019de80, 2 argument words, 4 reply bytes */

void cprTriCosx(void)

{
  undefined2 *puVar1;
  float fVar2;
  
  puVar1 = CprMain_RfiPtr;
  fVar2 = (float)cprCosf(*CprMain_RfiPtr);
  *CprMain_RfoTop = *(float *)(puVar1 + 2) * fVar2;
  return;
}

