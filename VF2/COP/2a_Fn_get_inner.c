/* COP 2a Fn_get_inner: cprVecGetInner @ 0019e6c0, 6 argument words, 4 reply bytes */

void cprVecGetInner(void)

{
  *CprMain_RfoTop =
       CprMain_RfiPtr[4] * CprMain_RfiPtr[5] +
       *CprMain_RfiPtr * CprMain_RfiPtr[1] + CprMain_RfiPtr[2] * CprMain_RfiPtr[3];
  return;
}

