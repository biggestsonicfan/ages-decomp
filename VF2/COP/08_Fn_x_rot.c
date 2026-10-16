/* COP 08 Fn_x_rot: cprMtxXrot @ 00199e40, 1 argument words, 0 reply bytes */

void cprMtxXrot(void)

{
  cprSubRotateCurX(*CprMain_RfiPtr);
  return;
}

