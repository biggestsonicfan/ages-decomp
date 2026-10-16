/* COP 6d Fn_y_rot_e: cprMtxYrote @ 00199280, 0 argument words, 0 reply bytes */

void cprMtxYrote(void)

{
  uint uVar1;
  
  uVar1 = g_Param_ptr & 0x3f;
  g_Param_ptr = g_Param_ptr + 1;
  cprSubRotateCurY(*(undefined2 *)(CprMain_BufRam + (uVar1 + 0x3800) * 4));
  return;
}

