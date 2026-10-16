/* COP 27 Fn_atan: Fn_atan @ 00196080, 2 argument words, 4 reply bytes */

void Fn_atan(void)

{
  uint uVar1;
  
  uVar1 = FUN_00195c40(*puGpffff830c,puGpffff830c[1]);
  *puGpffff8300 = uVar1 & 0xffff;
  uGpffff82fc = 4;
  return;
}

