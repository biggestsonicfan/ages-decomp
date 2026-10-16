/* COP 17 Fn_cvtws: cprMathCvtws @ 0019a800, 1 argument words, 4 reply bytes */

void cprMathCvtws(void)

{
  *CprMain_RfoTop = (float)*CprMain_RfiPtr;
  return;
}

