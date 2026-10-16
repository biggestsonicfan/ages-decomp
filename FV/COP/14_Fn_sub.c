/* COP 14 Fn_sub: Fn_sub @ 0018ff00, 2 argument words, 4 reply bytes */

void Fn_sub(void)

{
  *pfGpffff8300 = *pfGpffff830c - pfGpffff830c[1];
  uGpffff82fc = 4;
  return;
}

