/* COP 2d Fn_get_2d_len: cprVecGet2dLen @ 0019e540, 2 argument words, 4 reply bytes */

void cprVecGet2dLen(void)

{
  undefined4 uVar1;
  
  uVar1 = cprSubLength2D(*CprMain_RfiPtr,CprMain_RfiPtr[1]);
  *CprMain_RfoTop = uVar1;
  return;
}

