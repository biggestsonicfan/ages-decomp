/* COP 21 Fn_sin: cprTriSin @ 0019e000, 1 argument words, 4 reply bytes */

void cprTriSin(void)

{
  undefined4 uVar1;
  
  uVar1 = cprSinf(*CprMain_RfiPtr);
  *CprMain_RfoTop = uVar1;
  return;
}

