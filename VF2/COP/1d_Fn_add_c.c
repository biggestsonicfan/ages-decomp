/* COP 1d Fn_add_c: cprMathAddC @ 0019a680, 1 argument words, 0 reply bytes */

void cprMathAddC(void)

{
  *g_Acc = *g_Acc + *CprMain_RfiPtr;
  return;
}

