/* COP 3f Fn_zyx_rot: cprMtxZYXrot @ 00199d80, 3 argument words, 0 reply bytes */

void cprMtxZYXrot(void)

{
  undefined2 *puVar1;
  
  puVar1 = CprMain_RfiPtr;
  cprSubRotateCurZ(*CprMain_RfiPtr);
  cprSubRotateCurY(puVar1[2]);
  cprSubRotateCurX(puVar1[4]);
  return;
}

