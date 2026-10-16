/* COP 17 Fn_cvtws: Fn_cvtws @ 0018fe40, 1 argument words, 4 reply bytes */

void Fn_cvtws(void)

{
  *pfGpffff8300 = (float)*piGpffff830c;
  uGpffff82fc = 4;
  return;
}

