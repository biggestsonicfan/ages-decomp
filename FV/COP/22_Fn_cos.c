/* COP 22 Fn_cos: Fn_cos @ 001962c0, 1 argument words, 4 reply bytes */

void Fn_cos(void)

{
  undefined4 uVar1;
  
  uVar1 = cprCosf(*puRam0028a47c);
  *puRam0028a470 = uVar1;
  uRam0028a46c = 4;
  return;
}

