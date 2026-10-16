/* COP 1a Fn_sqr: Fn_sqr @ 0018fd80, 1 argument words, 4 reply bytes */

void Fn_sqr(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00195dc0(*puGpffff830c);
  *puGpffff8300 = uVar1;
  uGpffff82fc = 4;
  return;
}

