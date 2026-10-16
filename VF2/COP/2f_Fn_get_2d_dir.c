/* COP 2f Fn_get_2d_dir: cprVecGet2dDir @ 0019e4c0, 4 argument words, 4 reply bytes */

void cprVecGet2dDir(void)

{
  uint uVar1;
  
  uVar1 = cprSubAtan(CprMain_RfiPtr[1] - *CprMain_RfiPtr,CprMain_RfiPtr[3] - CprMain_RfiPtr[2]);
  *CprMain_RfoTop = uVar1 & 0xffff;
  return;
}

