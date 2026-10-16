/* COP 26 Fn_asin: Fn_asin @ 001960c0, 1 argument words, 4 reply bytes */

void Fn_asin(void)

{
  uint uVar1;
  
  uVar1 = FUN_001956c0(*puRam0028a47c);
  *puRam0028a470 = uVar1 & 0xffff;
  uRam0028a46c = 4;
  return;
}

