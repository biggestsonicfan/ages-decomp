/* COP 1c Fn_get_c: cprMathGetC @ 0019a6c0, 0 argument words, 4 reply bytes */

void cprMathGetC(void)

{
  *CprMain_RfoTop = *g_Acc;
  return;
}

