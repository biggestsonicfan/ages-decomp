/* helper FUN_0018df40 @ 0018df40, called (depth 1) from set_obj */

void FUN_0018df40(void)

{
  long lVar1;
  
  if ((uRam017b7210 & 0x80000000) == 0) {
    lVar1 = FUN_0018f8c0();
    if (0 < lVar1) {
      uRam017b7214 = 0;
      uRam017b7200 = (uint)lVar1 >> 2;
    }
  }
  return;
}

