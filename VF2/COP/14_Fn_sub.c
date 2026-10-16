/* COP 14 Fn_sub: cprMathSub @ 0019a8c0, 2 argument words, 4 reply bytes */

void cprMathSub(void)

{
  *CprMain_RfoTop = *CprMain_RfiPtr - CprMain_RfiPtr[1];
  return;
}

