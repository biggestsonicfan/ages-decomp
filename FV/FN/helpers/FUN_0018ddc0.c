/* helper FUN_0018ddc0 @ 0018ddc0, called (depth 1) from set_obj */

void FUN_0018ddc0(undefined4 *param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 4;
  if ((uRam017b7210 & 0x80000000) == 0) {
    do {
      lVar1 = FUN_0018f8c0(*param_1);
      if (0 < lVar1) {
        uRam017b7214 = 0;
        uRam017b7200 = (uint)lVar1 >> 2;
      }
      iVar2 = iVar2 + -1;
      param_1 = param_1 + 1;
    } while (0 < iVar2);
  }
  return;
}

