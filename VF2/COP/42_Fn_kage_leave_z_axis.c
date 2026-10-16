/* COP 42 Fn_kage_leave_z_axis: cprMtxKageLeaveZAxis @ 001996c0, 0 argument words, 0 reply bytes */

void cprMtxKageLeaveZAxis(void)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 in_vf26 [16];
  undefined4 uVar3;
  
  auVar1 = _vmul(in_vf26,in_vf26);
  auVar1 = _vaddbc(auVar1,auVar1);
  _vrsqrt(in_vf0,auVar1);
  uVar3 = _vwaitq();
  auVar2 = _vmulq(in_vf26,uVar3);
  auVar1 = _vsubbc(in_vf0,in_vf0);
  _vmulbc(auVar1,auVar2);
  _vaddbc(in_vf0,auVar2);
  return;
}

