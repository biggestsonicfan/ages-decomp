/* COP 1d Fn_add_c: Fn_add_c @ 0018fcc0, 1 argument words, 0 reply bytes */

void Fn_add_c(void)

{
  *pfGpffff8330 = *pfGpffff8330 + *pfGpffff830c;
  uGpffff82fc = 0;
  return;
}

