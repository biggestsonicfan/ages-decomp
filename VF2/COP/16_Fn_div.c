/* COP 16 Fn_div: cprMathDiv @ 0019a840, 2 argument words, 4 reply bytes */

void cprMathDiv(void)

{
  *CprMain_RfoTop = *CprMain_RfiPtr / CprMain_RfiPtr[1];
  return;
}

