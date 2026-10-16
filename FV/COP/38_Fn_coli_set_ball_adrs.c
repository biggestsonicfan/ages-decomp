/* COP 38 Fn_coli_set_ball_adrs: Fn_coli_set_ball_adrs @ 00192580, 1 argument words, 0 reply bytes */

void Fn_coli_set_ball_adrs(void)

{
  if (*piGpffff830c == 1) {
    *(undefined4 *)(iGpffff832c + 0xcf8) = 0x7e80;
  }
  else {
    *(undefined4 *)(iGpffff832c + 0xcf8) = 16000;
  }
  uGpffff82fc = 0;
  return;
}

