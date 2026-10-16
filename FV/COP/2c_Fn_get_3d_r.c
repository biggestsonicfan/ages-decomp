/* COP 2c Fn_get_3d_r: Fn_get_3d_r @ 00196880, 6 argument words, 4 reply bytes */

void Fn_get_3d_r(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00195600(*pfGpffff830c - pfGpffff830c[1],pfGpffff830c[2] - pfGpffff830c[3],
                       pfGpffff830c[4] - pfGpffff830c[5]);
  *puGpffff8300 = uVar1;
  uGpffff82fc = 4;
  return;
}

