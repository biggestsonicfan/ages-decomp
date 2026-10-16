/* COP 18 Fn_cvtsw: Fn_cvtsw @ 0018fe00, 1 argument words, 4 reply bytes */

void Fn_cvtsw(void)

{
  *piGpffff8300 = (int)*pfGpffff830c;
  uGpffff82fc = 4;
  return;
}

