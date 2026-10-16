/* helper sysWriteWorkRam1 @ 00184d40, called (depth 1) from sysCopPatchCalcUnitMat */

void sysWriteWorkRam1(int param_1,undefined1 param_2)

{
  *(undefined1 *)(g_WorkRamBase + param_1) = param_2;
  return;
}

