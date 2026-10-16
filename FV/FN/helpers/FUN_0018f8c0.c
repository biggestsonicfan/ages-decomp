/* helper FUN_0018f8c0 @ 0018f8c0, called (depth 2) from set_obj */

undefined4 FUN_0018f8c0(uint param_1)

{
  int iVar1;
  
  if (uGpffff82c8 == 0xffffffff) {
    uGpffff82c8 = param_1 & 0xff;
    ppuGpffff82c4 = &PTR_Fn_initialize_0023fc20 + uGpffff82c8 * 4;
    iGpffff8304 = *(int *)(&DAT_0023fc24 + uGpffff82c8 * 0x10);
    if (iGpffff8304 != 0) {
      return 0xffffffff;
    }
  }
  else {
    iVar1 = iGpffff8308 * 4;
    iGpffff8308 = iGpffff8308 + 1;
    iGpffff8304 = iGpffff8304 + -1;
    *(uint *)(iVar1 + 0x17be400) = param_1;
    if (0 < iGpffff8304) {
      return 0xffffffff;
    }
  }
  (*(code *)*ppuGpffff82c4)();
  iGpffff8308 = 0;
  uGpffff82c8 = 0xffffffff;
  return uGpffff82fc;
}

