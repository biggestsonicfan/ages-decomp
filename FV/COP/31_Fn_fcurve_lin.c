/* COP 31 Fn_fcurve_lin: Fn_fcurve_lin @ 00190ec0, 4 argument words, 4 reply bytes */

void Fn_fcurve_lin(void)

{
  *pfGpffff8300 =
       *pfGpffff830c + (pfGpffff830c[2] * (pfGpffff830c[1] - *pfGpffff830c)) / pfGpffff830c[3];
  uGpffff82fc = 4;
  return;
}

