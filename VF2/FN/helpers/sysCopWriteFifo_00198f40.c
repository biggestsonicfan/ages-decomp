/* helper sysCopWriteFifo @ 00198f40, called (depth 1) from sysCopPatchCalcUnitMat */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sysCopWriteFifo(uint *src,int count)

{
  long lVar1;
  
  if ((g_copCtrlReg & 0x80000000) == 0) {
    for (; 0 < count; count = count + -1) {
      lVar1 = copExec(*src);
      if (0 < lVar1) {
        DAT_00255c9c = 0;
        DAT_01689640 = (uint)lVar1 >> 2;
      }
      src = src + 1;
    }
  }
  return;
}

