/* COP 21 Fn_sin: Fn_sin @ 00196300, 1 argument words, 4 reply bytes */

void Fn_sin(void)

{
  undefined4 uVar1;
  
  uVar1 = cprSinf(*puRam0028a47c);
  *puRam0028a470 = uVar1;
  uRam0028a46c = 4;
  return;
}

