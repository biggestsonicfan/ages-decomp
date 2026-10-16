/* COP 28 Fn_tri_shin: Fn_tri_shin @ 00195fc0, 3 argument words, 12 reply bytes */

void Fn_tri_shin(void)

{
  uint uVar1;
  
  uVar1 = FUN_001956c0(0xffc00000);
  *puGpffff8300 = 0x4000 - (uVar1 & 0xffff) & 0xffff;
  puGpffff8300[1] = 0xffc00000;
  uVar1 = FUN_00195dc0();
  puGpffff8300[2] = uVar1;
  uGpffff82fc = 0xc;
  return;
}

