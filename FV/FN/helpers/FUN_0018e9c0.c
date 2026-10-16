/* helper FUN_0018e9c0 @ 0018e9c0, called (depth 1) from calc_unit_mat */

void FUN_0018e9c0(uint param_1,int param_2)

{
  undefined1 (*pauVar1) [16];
  
  pauVar1 = (undefined1 (*) [16])(**(int **)(&gp0xffff8048 + (param_1 & 1) * 4) + param_2 * 0x40);
  _lqc2(*pauVar1);
  _lqc2(pauVar1[1]);
  _lqc2(pauVar1[2]);
  _lqc2(pauVar1[3]);
  return;
}

