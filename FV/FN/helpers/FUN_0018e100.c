/* helper FUN_0018e100 @ 0018e100, called (depth 1) from set_obj */

undefined4 FUN_0018e100(void)

{
  int iVar1;
  
  iVar1 = uRam017b7204 * 4;
  uRam017b7204 = uRam017b7204 + 1;
  if (uRam017b7200 <= uRam017b7204) {
    uRam017b7214 = 1;
    uRam017b7200 = 0;
    uRam017b7204 = 0;
  }
  return *(undefined4 *)(iVar1 + 0x17b6e00);
}

