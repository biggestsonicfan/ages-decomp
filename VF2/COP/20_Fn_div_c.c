/* COP 20 Fn_div_c: cprMathDivC @ 0019a5c0, 1 argument words, 0 reply bytes */

void cprMathDivC(void)

{
  *g_Acc = *g_Acc / *CprMain_RfiPtr;
  return;
}

