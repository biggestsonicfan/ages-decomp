/* COP 6c Fn_x_rot_e: cprMtxXrote @ 001992c0, 0 argument words, 0 reply bytes */

void cprMtxXrote(void)

{
  uint uVar1;
  
  uVar1 = g_Param_ptr & 0x3f;
  g_Param_ptr = g_Param_ptr + 1;
  cprSubRotateCurX(*(undefined2 *)(CprMain_BufRam + (uVar1 + 0x3800) * 4));
  return;
}

