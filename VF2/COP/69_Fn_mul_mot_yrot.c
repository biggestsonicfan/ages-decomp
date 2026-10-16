/* COP 69 Fn_mul_mot_yrot: cprMotMulMotYRot @ 0019ad80, 2 argument words, 0 reply bytes */

void cprMotMulMotYRot(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 in_a3_udw;
  uint *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar4 = (uint *)(CprMain_BufRam + (uint)*CprMain_RfiPtr * 4);
  cprSinCosf(&uStack_8,&uStack_10,CprMain_RfiPtr[2]);
  auVar5._4_4_ = uStack_c;
  auVar5._0_4_ = uStack_10;
  auVar5._8_4_ = uStack_8;
  auVar5._12_4_ = uStack_4;
  auVar5 = _lqc2(auVar5);
  auVar6._4_4_ = uStack_1c;
  auVar6._0_4_ = uStack_8;
  auVar6._8_4_ = uStack_10;
  auVar6._12_4_ = uStack_14;
  auVar6 = _lqc2(auVar6);
  auVar2 = _pextlw((ulong)puVar4[1],(ulong)*puVar4);
  auVar3._4_4_ = 0;
  auVar3._0_4_ = puVar4[2];
  auVar3._8_8_ = in_a3_udw;
  auVar3 = _pcpyld(auVar3,auVar2);
  auVar3 = _qmtc2(auVar3._0_4_);
  _vmulabc(auVar5,auVar3);
  _vmsubbc(auVar6,auVar3);
  _vmove(auVar3);
  _vmaddbc(auVar6,auVar3);
  auVar3 = _pextlw((ulong)puVar4[4],(ulong)puVar4[3]);
  auVar2._4_4_ = 0;
  auVar2._0_4_ = puVar4[5];
  auVar2._8_8_ = in_a3_udw;
  auVar3 = _pcpyld(auVar2,auVar3);
  auVar3 = _qmtc2(auVar3._0_4_);
  _vmulabc(auVar5,auVar3);
  _vmsubbc(auVar6,auVar3);
  _vmove(auVar3);
  _vmaddbc(auVar6,auVar3);
  auVar3 = _pextlw((ulong)puVar4[7],(ulong)puVar4[6]);
  auVar1._4_4_ = 0;
  auVar1._0_4_ = puVar4[8];
  auVar1._8_8_ = in_a3_udw;
  auVar3 = _pcpyld(auVar1,auVar3);
  auVar3 = _qmtc2(auVar3._0_4_);
  _vmulabc(auVar5,auVar3);
  _vmsubbc(auVar6,auVar3);
  _vmove(auVar3);
  _vmaddbc(auVar6,auVar3);
  return;
}

