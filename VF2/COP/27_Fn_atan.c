/* COP 27 Fn_atan: cprTriAtan @ 0019de00, 2 argument words, 4 reply bytes */

void cprTriAtan(void)

{
  uint uVar1;
  
  uVar1 = cprSubAtan(*CprMain_RfiPtr,CprMain_RfiPtr[1]);
  *CprMain_RfoTop = uVar1 & 0xffff;
  return;
}

