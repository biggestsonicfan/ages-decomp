/* helper FUN_00195ec0 @ 00195ec0, called (depth 2) from osage_dsp */

void FUN_00195ec0(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  
  auVar1 = _sqc2(in_vf24);
  *param_1 = auVar1;
  auVar1 = _sqc2(in_vf25);
  param_1[1] = auVar1;
  auVar1 = _sqc2(in_vf26);
  param_1[2] = auVar1;
  auVar1 = _sqc2(in_vf27);
  param_1[3] = auVar1;
  return;
}

