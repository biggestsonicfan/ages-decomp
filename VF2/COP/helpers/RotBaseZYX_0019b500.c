/* helper RotBaseZYX @ 0019b500, called (depth 1) from cprMotBaseZYXAng */

undefined8 RotBaseZYX(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  cprSinCosf(&uStack_8,&uStack_4,param_1);
  cprSinCosf(&uStack_10,&uStack_c,param_2);
  cprSinCosf(&uStack_18,&uStack_14,param_3);
  auVar7 = _vsubbc(in_vf0,in_vf0);
  auVar1 = _qmtc2(uStack_18);
  auVar2 = _qmtc2(uStack_14);
  auVar3 = _qmtc2(uStack_10);
  auVar4 = _qmtc2(uStack_c);
  auVar5 = _qmtc2(uStack_8);
  auVar6 = _qmtc2(uStack_4);
  auVar8 = _vmul(auVar5,auVar2);
  auVar9 = _vmul(auVar6,auVar1);
  auVar10 = _vmul(auVar6,auVar2);
  auVar11 = _vmul(auVar5,auVar1);
  auVar6 = _vmul(auVar6,auVar4);
  _vmr32(auVar6);
  auVar5 = _vmul(auVar5,auVar4);
  auVar5 = _vmul(auVar5,auVar7);
  _vmr32(auVar5);
  auVar5 = _vmove(auVar3);
  auVar5 = _vmr32(auVar5);
  _vmr32(auVar5);
  auVar5 = _vmul(auVar9,auVar3);
  auVar5 = _vadd(auVar5,auVar8);
  _vmr32(auVar5);
  auVar5 = _vmul(auVar11,auVar3);
  auVar5 = _vsub(auVar10,auVar5);
  _vmr32(auVar5);
  auVar1 = _vmul(auVar4,auVar1);
  auVar1 = _vmul(auVar1,auVar7);
  auVar1 = _vmr32(auVar1);
  _vmr32(auVar1);
  auVar1 = _vmul(auVar10,auVar3);
  auVar1 = _vsub(auVar11,auVar1);
  _vmr32(auVar1);
  auVar1 = _vmul(auVar8,auVar3);
  auVar1 = _vadd(auVar1,auVar9);
  _vmr32(auVar1);
  auVar1 = _vmul(auVar4,auVar2);
  auVar1 = _vmr32(auVar1);
  _vmr32(auVar1);
  return 0;
}

