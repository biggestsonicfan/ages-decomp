/* helper tanf @ 00115140, called (depth 1) from Fn_tan */

void tanf(uint param_1)

{
  uint uVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_20;
  
  uStack_20 = param_1;
  if ((param_1 & 0x7fffffff) < 0x3f490fdb) {
    __kernel_tanf(1);
  }
  else {
    uVar1 = __ieee754_rem_pio2f(param_1,0,&uStack_30);
    __kernel_tanf(uStack_30,uStack_2c,(uVar1 & 1) * -2 + 1);
  }
  return;
}

