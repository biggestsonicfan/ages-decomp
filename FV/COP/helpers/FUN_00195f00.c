/* helper FUN_00195f00 @ 00195f00, called (depth 1) from Fn_rot_2d */

void FUN_00195f00(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(&DAT_00242d00 + ((param_3 & 0xffff) + 0x4000 & 0xffff) * 4);
  *param_1 = *(undefined4 *)(&DAT_00242d00 + (param_3 & 0xffff) * 4);
  *param_2 = uVar1;
  return;
}

