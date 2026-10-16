/* COP 18 Fn_cvtsw: cprMathCvtsw @ 0019a7c0, 1 argument words, 4 reply bytes */

void cprMathCvtsw(void)

{
  *CprMain_RfoTop = (int)*CprMain_RfiPtr;
  return;
}

