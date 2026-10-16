/* COP 2c Fn_get_3d_r: cprVecGet3dR @ 0019e580, 6 argument words, 4 reply bytes */

void cprVecGet3dR(void)

{
  undefined4 uVar1;
  
  uVar1 = cprSubLength3D(CprMain_RfiPtr[1] - *CprMain_RfiPtr,CprMain_RfiPtr[3] - CprMain_RfiPtr[2],
                         CprMain_RfiPtr[5] - CprMain_RfiPtr[4]);
  *CprMain_RfoTop = uVar1;
  return;
}

