/* COP 09 Fn_y_rot: cprMtxYrot @ 00199e00, 1 argument words, 0 reply bytes */

void cprMtxYrot(void)

{
  cprSubRotateCurY(*CprMain_RfiPtr);
  return;
}

