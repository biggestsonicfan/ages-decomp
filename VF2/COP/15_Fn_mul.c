/* COP 15 Fn_mul: cprMathMul @ 0019a880, 2 argument words, 4 reply bytes */

void cprMathMul(void)

{
  *CprMain_RfoTop = *CprMain_RfiPtr * CprMain_RfiPtr[1];
  return;
}

