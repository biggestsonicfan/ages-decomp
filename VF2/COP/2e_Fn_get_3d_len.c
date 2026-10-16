/* COP 2e Fn_get_3d_len: cprVecGet3dLen @ 0019e500, 3 argument words, 4 reply bytes */

void cprVecGet3dLen(void)

{
  undefined4 uVar1;
  
  uVar1 = cprSubLength3D(*CprMain_RfiPtr,CprMain_RfiPtr[1],CprMain_RfiPtr[2]);
  *CprMain_RfoTop = uVar1;
  return;
}

