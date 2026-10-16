/* COP 04 Fn_load_matrix: Fn_load_matrix @ 0018f380, 12 argument words, 0 reply bytes */

void Fn_load_matrix(void)

{
  *(undefined4 *)*pauGpffff82e4 = *puGpffff830c;
  *(undefined4 *)(*pauGpffff82e4 + 4) = puGpffff830c[1];
  *(undefined4 *)(*pauGpffff82e4 + 8) = puGpffff830c[2];
  *(undefined4 *)pauGpffff82e4[1] = puGpffff830c[3];
  *(undefined4 *)(pauGpffff82e4[1] + 4) = puGpffff830c[4];
  *(undefined4 *)(pauGpffff82e4[1] + 8) = puGpffff830c[5];
  *(undefined4 *)pauGpffff82e4[2] = puGpffff830c[6];
  *(undefined4 *)(pauGpffff82e4[2] + 4) = puGpffff830c[7];
  *(undefined4 *)(pauGpffff82e4[2] + 8) = puGpffff830c[8];
  *(undefined4 *)pauGpffff82e4[3] = puGpffff830c[9];
  *(undefined4 *)(pauGpffff82e4[3] + 4) = puGpffff830c[10];
  *(undefined4 *)(pauGpffff82e4[3] + 8) = puGpffff830c[0xb];
  _lqc2(*pauGpffff82e4);
  _lqc2(pauGpffff82e4[1]);
  _lqc2(pauGpffff82e4[2]);
  _lqc2(pauGpffff82e4[3]);
  uGpffff82fc = 0;
  return;
}

