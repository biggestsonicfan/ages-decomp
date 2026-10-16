/* helper FUN_001c4300 @ 001c4300, called (depth 2) from ScrollCG_Initialize */

int FUN_001c4300(ulong param_1)

{
  int iVar1;
  
  if ((param_1 < 0x6400000) || (0x64fffff < param_1)) {
    if (param_1 < 0x6c00000) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      if (param_1 < 0x6d00000) {
        iVar1 = (int)param_1 + -0x4e7de00;
      }
    }
  }
  else {
    iVar1 = (int)param_1 + -0x457de00;
  }
  return iVar1;
}

