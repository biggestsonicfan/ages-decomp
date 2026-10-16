/* COP 0b Fn_mul_matrix: Fn_mul_matrix @ 0018f0c0, 12 argument words, 0 reply bytes */

void Fn_mul_matrix(void)

{
  *puGpffff82e4 = *puGpffff830c;
  puGpffff82e4[1] = puGpffff830c[1];
  puGpffff82e4[2] = puGpffff830c[2];
  puGpffff82e4[4] = puGpffff830c[3];
  puGpffff82e4[5] = puGpffff830c[4];
  puGpffff82e4[6] = puGpffff830c[5];
  puGpffff82e4[8] = puGpffff830c[6];
  puGpffff82e4[9] = puGpffff830c[7];
  puGpffff82e4[10] = puGpffff830c[8];
  puGpffff82e4[0xc] = puGpffff830c[9];
  puGpffff82e4[0xd] = puGpffff830c[10];
  puGpffff82e4[0xe] = puGpffff830c[0xb];
  func_0x001954c0();
  uGpffff82fc = 0;
  return;
}

