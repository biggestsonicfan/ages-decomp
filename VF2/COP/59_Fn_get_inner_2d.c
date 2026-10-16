/* COP 59 Fn_get_inner_2d: cprVecGetInner2d @ 0019e680, 4 argument words, 4 reply bytes */

void cprVecGetInner2d(void)

{
  *CprMain_RfoTop = CprMain_RfiPtr[2] * CprMain_RfiPtr[3] + *CprMain_RfiPtr * CprMain_RfiPtr[1];
  return;
}

