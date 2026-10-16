/* COP 16 Fn_div: Fn_div @ 0018fe80, 2 argument words, 4 reply bytes */

void Fn_div(void)

{
  *pfGpffff8300 = *pfGpffff830c / pfGpffff830c[1];
  uGpffff82fc = 4;
  return;
}

