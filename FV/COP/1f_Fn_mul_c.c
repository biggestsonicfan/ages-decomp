/* COP 1f Fn_mul_c: Fn_mul_c @ 0018fc40, 1 argument words, 0 reply bytes */

void Fn_mul_c(void)

{
  *pfGpffff8330 = *pfGpffff8330 * *pfGpffff830c;
  uGpffff82fc = 0;
  return;
}

