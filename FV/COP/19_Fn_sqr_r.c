/* COP 19 Fn_sqr_r: Fn_sqr_r @ 0018fdc0, 1 argument words, 4 reply bytes */

void Fn_sqr_r(void)

{
  undefined4 uVar1;
  
  uVar1 = cprSubSqrtR(*puGpffff830c);
  *puGpffff8300 = uVar1;
  uGpffff82fc = 4;
  return;
}

