/* COP 0a Fn_z_rot: cprMtxZrot @ 00199dc0, 1 argument words, 0 reply bytes */

void cprMtxZrot(void)

{
  cprSubRotateCurZ(*CprMain_RfiPtr);
  return;
}

