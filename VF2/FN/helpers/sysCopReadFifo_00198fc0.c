/* helper sysCopReadFifo @ 00198fc0, called (depth 1) from sysCopPatchCalcUnitMat */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sysCopReadFifo(uint *dst,int count)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = (uint *)(&g_fifoOut + DAT_01689644 * 4);
  if (0 < count) {
    if (8 < count) {
      do {
        iVar2 = iVar2 + 8;
        *dst = *puVar1;
        dst[1] = puVar1[1];
        dst[2] = puVar1[2];
        dst[3] = puVar1[3];
        dst[4] = puVar1[4];
        dst[5] = puVar1[5];
        dst[6] = puVar1[6];
        dst[7] = puVar1[7];
        puVar1 = puVar1 + 8;
        dst = dst + 8;
      } while (iVar2 < count + -8);
    }
    for (; iVar2 < count; iVar2 = iVar2 + 1) {
      *dst = *puVar1;
      puVar1 = puVar1 + 1;
      dst = dst + 1;
    }
  }
  DAT_01689644 = DAT_01689644 + count;
  if (DAT_01689640 <= DAT_01689644) {
    DAT_01689640 = 0;
    DAT_00255c9c = 1;
    DAT_01689644 = 0;
  }
  return;
}

