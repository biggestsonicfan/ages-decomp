/* COP 22 Fn_cos: cprTriCos @ 0019dfc0, 1 argument words, 4 reply bytes */

void cprTriCos(void)

{
  undefined4 uVar1;
  
  uVar1 = cprCosf(*CprMain_RfiPtr);
  *CprMain_RfoTop = uVar1;
  return;
}

