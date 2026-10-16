/* COP 20 Fn_div_c: Fn_div_c @ 0018fc00, 1 argument words, 0 reply bytes */

void Fn_div_c(void)

{
  *pfGpffff8330 = *pfGpffff8330 / *pfGpffff830c;
  uGpffff82fc = 0;
  return;
}

