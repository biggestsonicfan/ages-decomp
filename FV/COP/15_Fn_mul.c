/* COP 15 Fn_mul: Fn_mul @ 0018fec0, 2 argument words, 4 reply bytes */

void Fn_mul(void)

{
  *pfGpffff8300 = *pfGpffff830c * pfGpffff830c[1];
  uGpffff82fc = 4;
  return;
}

