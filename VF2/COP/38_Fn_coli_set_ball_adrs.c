/* COP 38 Fn_coli_set_ball_adrs: cprCliColiSetBallAdrs @ 0019c280, 1 argument words, 0 reply bytes */

void cprCliColiSetBallAdrs(void)

{
  if (*CprMain_RfiPtr == 1) {
    *(undefined4 *)(CprMain_IRam + 0xf8) = 0x7e80;
  }
  else {
    *(undefined4 *)(CprMain_IRam + 0xf8) = 16000;
  }
  return;
}

