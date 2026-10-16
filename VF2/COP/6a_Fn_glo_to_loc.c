/* COP 6a Fn_glo_to_loc: cprVecGloToLoc @ 0019e240, 3 argument words, 12 reply bytes */

void cprVecGloToLoc(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  auVar1 = _lqc2(*CprMain_RfiPtr);
  auVar1 = _vsub(auVar1,in_vf27);
  auVar2 = _vmul(in_vf24,auVar1);
  auVar3 = _vmul(in_vf25,auVar1);
  auVar4 = _vmul(in_vf26,auVar1);
  auVar5 = _vmove(auVar2);
  auVar1 = _vmr32(auVar2);
  auVar2 = _vadd(auVar5,auVar1);
  auVar1 = _vmr32(auVar1);
  auVar1 = _vadd(auVar2,auVar1);
  _vmr32(auVar1);
  auVar2 = _vmove(auVar3);
  auVar1 = _vmr32(auVar3);
  auVar2 = _vadd(auVar2,auVar1);
  auVar1 = _vmr32(auVar1);
  auVar1 = _vadd(auVar2,auVar1);
  _vmr32(auVar1);
  auVar2 = _vmove(auVar4);
  auVar1 = _vmr32(auVar4);
  auVar2 = _vadd(auVar2,auVar1);
  auVar1 = _vmr32(auVar1);
  auVar1 = _vadd(auVar2,auVar1);
  auVar1 = _vmr32(auVar1);
  auVar1 = _vmr32(auVar1);
  auVar1 = _sqc2(auVar1);
  uStack_10 = auVar1._0_4_;
  *CprMain_RfoTop = uStack_10;
  uStack_c = auVar1._4_4_;
  CprMain_RfoTop[1] = uStack_c;
  uStack_8 = auVar1._8_4_;
  CprMain_RfoTop[2] = uStack_8;
  return;
}

