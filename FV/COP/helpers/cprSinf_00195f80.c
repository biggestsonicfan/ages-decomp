/* helper cprSinf @ 00195f80, called (depth 1) from Fn_sin */

undefined4 cprSinf(uint param_1)

{
  return *(undefined4 *)(&DAT_00242d00 + (param_1 & 0xffff) * 4);
}

