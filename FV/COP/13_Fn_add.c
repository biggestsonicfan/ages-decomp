/* COP 13 Fn_add: Fn_add @ 0018ff40, 2 argument words, 4 reply bytes */

void Fn_add(void)

{
  *pfGpffff8300 = *pfGpffff830c + pfGpffff830c[1];
  uGpffff82fc = 4;
  return;
}

