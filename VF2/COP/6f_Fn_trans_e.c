/* COP 6f Fn_trans_e: cprMtxTranse @ 00199180, 0 argument words, 0 reply bytes */

void cprMtxTranse(void)

{
  uint uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *(undefined4 *)(CprMain_BufRam + ((g_Param_ptr & 0x3f) + 0x3800) * 4);
  uVar1 = g_Param_ptr + 2;
  uStack_c = *(undefined4 *)(CprMain_BufRam + ((g_Param_ptr + 1 & 0x3f) + 0x3800) * 4);
  g_Param_ptr = g_Param_ptr + 3;
  uStack_8 = *(undefined4 *)(CprMain_BufRam + ((uVar1 & 0x3f) + 0x3800) * 4);
  cprSubTransCurMat(&uStack_10);
  return;
}

