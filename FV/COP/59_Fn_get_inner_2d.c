/* COP 59 Fn_get_inner_2d: Fn_get_inner_2d @ 00196980, 4 argument words, 4 reply bytes */

void Fn_get_inner_2d(void)

{
  *pfGpffff8300 = *pfGpffff830c * pfGpffff830c[1] + pfGpffff830c[2] * pfGpffff830c[3];
  uGpffff82fc = 4;
  return;
}

