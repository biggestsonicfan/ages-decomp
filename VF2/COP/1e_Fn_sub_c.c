/* COP 1e Fn_sub_c: cprMathSubC @ 0019a640, 1 argument words, 0 reply bytes */

void cprMathSubC(void)

{
  *g_Acc = *g_Acc - *CprMain_RfiPtr;
  return;
}

