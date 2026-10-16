/* COP 2e Fn_get_3d_len: Fn_get_3d_len @ 00196800, 3 argument words, 4 reply bytes */

void Fn_get_3d_len(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00195600(*puGpffff830c,puGpffff830c[1],puGpffff830c[2]);
  *puGpffff8300 = uVar1;
  uGpffff82fc = 4;
  return;
}

