/* helper FUN_001bbb80 @ 001bbb80, called (depth 1) from rob_grass_disp_p768 */

int FUN_001bbb80(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 & 0xffff8000) == 0) {
    iVar1 = iRam0028a598 + (param_1 & 0x7fff) * 4 + 0xfd480;
  }
  return iVar1;
}

