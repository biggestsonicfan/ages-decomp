/* COP 23 Fn_tan: Fn_tan @ 00196200, 1 argument words, 4 reply bytes */

/* WARNING: Removing unreachable block (ram,0x00196244) */

void Fn_tan(void)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *puGpffff830c;
  if ((uVar1 == 0x4000) || (uVar1 == 0xc000)) {
    *puGpffff8300 = 0;
  }
  else {
    uVar2 = tanf(((float)uVar1 * 6.2831855) / 65536.0);
    *puGpffff8300 = uVar2;
  }
  uGpffff82fc = 4;
  return;
}

