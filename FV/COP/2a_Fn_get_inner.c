/* COP 2a Fn_get_inner: Fn_get_inner @ 001969c0, 6 argument words, 4 reply bytes */

void Fn_get_inner(void)

{
  *pfGpffff8300 =
       pfGpffff830c[4] * pfGpffff830c[5] +
       *pfGpffff830c * pfGpffff830c[1] + pfGpffff830c[2] * pfGpffff830c[3];
  uGpffff82fc = 4;
  return;
}

