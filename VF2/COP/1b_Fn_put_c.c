/* COP 1b Fn_put_c: cprMathPutC @ 0019a700, 1 argument words, 0 reply bytes */

void cprMathPutC(void)

{
  *g_Acc = *CprMain_RfiPtr;
  return;
}

