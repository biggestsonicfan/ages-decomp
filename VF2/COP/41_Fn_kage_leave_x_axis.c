/* COP 41 Fn_kage_leave_x_axis: cprMtxKageLeaveXAxis @ 00199700, 0 argument words, 0 reply bytes */

void cprMtxKageLeaveXAxis(void)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 in_vf24 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  
  auVar1 = _vmul(in_vf24,in_vf24);
  auVar1 = _vaddbc(auVar1,auVar1);
  _vrsqrt(in_vf0,auVar1);
  uVar3 = _vwaitq();
  auVar2 = _vmulq(in_vf24,uVar3);
  auVar1 = _vsubbc(in_vf0,in_vf0);
  _vmulbc(auVar1,auVar2);
  _vaddbc(in_vf0,auVar2);
  return;
}

