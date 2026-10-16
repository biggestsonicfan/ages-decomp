/* helper cprCosf @ 00195f40, called (depth 1) from Fn_cos */

undefined4 cprCosf(uint param_1)

{
  return *(undefined4 *)(&DAT_00242d00 + ((param_1 & 0xffff) + 0x4000 & 0xffff) * 4);
}

