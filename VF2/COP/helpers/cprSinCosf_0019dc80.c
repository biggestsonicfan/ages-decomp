/* helper cprSinCosf @ 0019dc80, called (depth 1) from cprMotBaseZY */

void cprSinCosf(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  *param_1 = *(undefined4 *)(&g_SinVal + (param_3 & 0xffff) * 4);
  *param_2 = *(undefined4 *)(&g_SinVal + ((param_3 & 0xffff) + 0x4000 & 0xffff) * 4);
  return;
}

