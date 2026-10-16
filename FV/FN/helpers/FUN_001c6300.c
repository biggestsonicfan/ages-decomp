/* helper FUN_001c6300 @ 001c6300, called (depth 1) from set_obj */

void FUN_001c6300(ulong param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 < 0x1525) {
    iVar1 = (int)param_1 * 4;
    uVar2 = *(uint *)(iVar1 + param_2 * 0x5494 + 0x1f834f0);
    if (uVar2 == 0) {
      uVar2 = *(uint *)(iVar1 + (param_2 ^ 1) * 0x5494 + 0x1f834f0);
    }
  }
  else {
    FUN_00180b80(0x289e00,param_1);
    uVar2 = 0;
  }
  param_3[1] = 0;
  param_3[2] = 0xffff0000;
  *param_3 = 0;
  param_3[3] = uVar2 | uRam0028a5d8;
  return;
}

