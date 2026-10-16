/* helper FUN_001bcb00 @ 001bcb00, called (depth 1) from set_obj_tpd */

int FUN_001bcb00(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 & 0xffff0000) == 0x800000) {
    iVar1 = iGpffff8428 + (param_1 & 0xffff) * 2 + 0x11d680;
  }
  return iVar1;
}

