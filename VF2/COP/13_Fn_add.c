/* COP 13 Fn_add: cprMathAdd @ 0019a900, 2 argument words, 4 reply bytes */

void cprMathAdd(void)

{
  *CprMain_RfoTop = *CprMain_RfiPtr + CprMain_RfiPtr[1];
  return;
}

