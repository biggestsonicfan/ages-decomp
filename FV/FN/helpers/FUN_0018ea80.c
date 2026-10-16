/* helper FUN_0018ea80 @ 0018ea80, called (depth 1) from calc_unit_mat */

void FUN_0018ea80(uint param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  
  pauVar2 = (undefined1 (*) [16])(**(int **)(&gp0xffff8048 + (param_1 & 1) * 4) + param_2 * 0x40);
  auVar1 = _sqc2(in_vf24);
  *pauVar2 = auVar1;
  auVar1 = _sqc2(in_vf25);
  pauVar2[1] = auVar1;
  auVar1 = _sqc2(in_vf26);
  pauVar2[2] = auVar1;
  auVar1 = _sqc2(in_vf27);
  pauVar2[3] = auVar1;
  return;
}

