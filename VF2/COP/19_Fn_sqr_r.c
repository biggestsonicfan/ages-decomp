/* COP 19 Fn_sqr_r: cprMathSqrR @ 0019a780, 1 argument words, 4 reply bytes */

void cprMathSqrR(void)

{
  undefined4 uVar1;
  
  uVar1 = cprSubSqrtR(*CprMain_RfiPtr);
  *CprMain_RfoTop = uVar1;
  return;
}

