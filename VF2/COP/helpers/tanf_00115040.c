/* helper tanf @ 00115040, called (depth 1) from cprTriTan */

float tanf(float __x)

{
  uint uVar1;
  float fVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_20;
  
  fStack_20 = __x;
  if ((uint)ABS(__x) < 0x3f490fdb) {
    fVar2 = (float)__kernel_tanf(1);
  }
  else {
    uVar1 = __ieee754_rem_pio2f(__x,0,&uStack_30);
    fVar2 = (float)__kernel_tanf(uStack_30,uStack_2c,(uVar1 & 1) * -2 + 1);
  }
  return fVar2;
}

