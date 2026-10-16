/* COP 2b Fn_get_2d_r: Fn_get_2d_r @ 00196900, 4 argument words, 4 reply bytes */

void Fn_get_2d_r(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00195dc0((*pfGpffff830c - pfGpffff830c[1]) * (*pfGpffff830c - pfGpffff830c[1]) +
                       (pfGpffff830c[2] - pfGpffff830c[3]) * (pfGpffff830c[2] - pfGpffff830c[3]));
  *puGpffff8300 = uVar1;
  uGpffff82fc = 4;
  return;
}

