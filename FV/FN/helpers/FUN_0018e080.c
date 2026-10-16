/* helper FUN_0018e080 @ 0018e080, called (depth 1) from calc_unit_mat */

void FUN_0018e080(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = uRam017b7204 * 4;
  uRam017b7204 = uRam017b7204 + 3;
  bVar1 = uRam017b7200 <= uRam017b7204;
  *param_1 = *(undefined4 *)(iVar2 + 0x17b6e00);
  param_1[1] = *(undefined4 *)(iVar2 + 0x17b6e04);
  param_1[2] = *(undefined4 *)(iVar2 + 0x17b6e08);
  if (bVar1) {
    uRam017b7214 = 1;
    uRam017b7200 = 0;
    uRam017b7204 = 0;
  }
  return;
}

