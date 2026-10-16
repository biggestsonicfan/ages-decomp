/* helper cprCosf @ 0019dcc0, called (depth 1) from cprTriCos */

undefined4 cprCosf(uint param_1)

{
  return *(undefined4 *)(&g_SinVal + ((param_1 & 0xffff) + 0x4000 & 0xffff) * 4);
}

