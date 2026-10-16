/* helper cprSinf @ 0019dd00, called (depth 1) from cprTriSin */

undefined4 cprSinf(uint param_1)

{
  return *(undefined4 *)(&g_SinVal + (param_1 & 0xffff) * 4);
}

