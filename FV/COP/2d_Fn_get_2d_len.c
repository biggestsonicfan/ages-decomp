/* COP 2d Fn_get_2d_len: Fn_get_2d_len @ 00196840, 2 argument words, 4 reply bytes */

void Fn_get_2d_len(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_001955c0(*puGpffff830c,puGpffff830c[1]);
  *puGpffff8300 = uVar1;
  uGpffff82fc = 4;
  return;
}

