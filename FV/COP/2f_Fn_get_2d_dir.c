/* COP 2f Fn_get_2d_dir: Fn_get_2d_dir @ 00196780, 4 argument words, 4 reply bytes */

void Fn_get_2d_dir(void)

{
  uint uVar1;
  
  uVar1 = FUN_00195c40(pfGpffff830c[1] - *pfGpffff830c,pfGpffff830c[3] - pfGpffff830c[2]);
  *puGpffff8300 = uVar1 & 0xffff;
  uGpffff82fc = 4;
  return;
}

