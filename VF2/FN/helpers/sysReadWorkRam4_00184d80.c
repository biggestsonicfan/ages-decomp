/* helper sysReadWorkRam4 @ 00184d80, called (depth 1) from sysCopPatchCalcUnitMat */

undefined4 sysReadWorkRam4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_4;
  
  puVar1 = (undefined4 *)(g_WorkRamBase + param_1);
  if (((uint)puVar1 & 3) == 0) {
    uStack_4 = *puVar1;
  }
  else {
    uStack_4 = *puVar1;
  }
  return uStack_4;
}

