/* helper sysWriteWorkRam4 @ 00184c80, called (depth 1) from sysCopPatchSmoothInt */

void sysWriteWorkRam4(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(g_WorkRamBase + param_1);
  if (((uint)puVar1 & 3) == 0) {
    *puVar1 = param_2;
  }
  else {
    *puVar1 = param_2;
  }
  return;
}

