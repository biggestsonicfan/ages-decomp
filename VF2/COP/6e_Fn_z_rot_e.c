/* COP 6e Fn_z_rot_e: cprMtxZrote @ 00199240, 0 argument words, 0 reply bytes */

void cprMtxZrote(void)

{
  uint uVar1;
  
  uVar1 = g_Param_ptr & 0x3f;
  g_Param_ptr = g_Param_ptr + 1;
  cprSubRotateCurZ(*(undefined2 *)(CprMain_BufRam + (uVar1 + 0x3800) * 4));
  return;
}

