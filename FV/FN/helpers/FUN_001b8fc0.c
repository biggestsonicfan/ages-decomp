/* helper FUN_001b8fc0 @ 001b8fc0, called (depth 1) from ScrollCG_Initialize */

int FUN_001b8fc0(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_001c4300();
  if (iVar1 == 0) {
    uVar2 = param_1 + 0xfe000000 >> 0xc;
    if ((uVar2 < 0x1000) && (iVar1 = *(int *)(uVar2 * 4 + 0x185e190), iVar1 != 0)) {
      iVar1 = iVar1 + (param_1 & 0xfff);
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}

