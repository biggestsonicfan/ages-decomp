/* COP 1f Fn_mul_c: cprMathMulC @ 0019a600, 1 argument words, 0 reply bytes */

void cprMathMulC(void)

{
  *g_Acc = *g_Acc * *CprMain_RfiPtr;
  return;
}

