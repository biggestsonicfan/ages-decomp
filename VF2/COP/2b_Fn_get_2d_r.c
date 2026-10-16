/* COP 2b Fn_get_2d_r: cprVecGet2dR @ 0019e600, 4 argument words, 4 reply bytes */

void cprVecGet2dR(void)

{
  undefined4 uVar1;
  
  uVar1 = cprSubSqrt((CprMain_RfiPtr[3] - CprMain_RfiPtr[2]) *
                     (CprMain_RfiPtr[3] - CprMain_RfiPtr[2]) +
                     (CprMain_RfiPtr[1] - *CprMain_RfiPtr) * (CprMain_RfiPtr[1] - *CprMain_RfiPtr));
  *CprMain_RfoTop = uVar1;
  return;
}

