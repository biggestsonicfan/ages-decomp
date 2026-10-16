/* COP 28 Fn_tri_shin: cprTriTriShin @ 0019dd40, 3 argument words, 12 reply bytes */

void cprTriTriShin(void)

{
  uint uVar1;
  
  uVar1 = cprSubAsin();
  *CprMain_RfoTop = 0x4000 - (uVar1 & 0xffff) & 0xffff;
  CprMain_RfoTop[1] = 0xffc00000;
  uVar1 = cprSubSqrt();
  CprMain_RfoTop[2] = uVar1;
  return;
}

