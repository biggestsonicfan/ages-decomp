/* COP 1a Fn_sqr: cprMathSqr @ 0019a740, 1 argument words, 4 reply bytes */

void cprMathSqr(void)

{
  undefined4 uVar1;
  
  uVar1 = cprSubSqrt(*CprMain_RfiPtr);
  *CprMain_RfoTop = uVar1;
  return;
}

