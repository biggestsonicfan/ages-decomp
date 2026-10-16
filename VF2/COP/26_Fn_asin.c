/* COP 26 Fn_asin: cprTriAsin @ 0019de40, 1 argument words, 4 reply bytes */

void cprTriAsin(void)

{
  uint uVar1;
  
  uVar1 = cprSubAsin(*CprMain_RfiPtr);
  *CprMain_RfoTop = uVar1 & 0xffff;
  return;
}

