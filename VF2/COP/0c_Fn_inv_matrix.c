/* COP 0c Fn_inv_matrix: cprMtxInvMatrix @ 00199cc0, 0 argument words, 0 reply bytes */

void cprMtxInvMatrix(void)

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
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  undefined4 uVar9;
  
  auVar7 = _vmove(in_vf24);
  auVar1 = _vmr32(in_vf24);
  auVar1 = _vmr32(auVar1);
  auVar2 = _vmr32(auVar1);
  auVar2 = _vmr32(auVar2);
  auVar3 = _vmr32(in_vf25);
  auVar3 = _vmr32(auVar3);
  auVar4 = _vmr32(auVar3);
  auVar4 = _vmr32(auVar4);
  auVar5 = _vmr32(in_vf26);
  auVar5 = _vmr32(auVar5);
  auVar6 = _vmr32(auVar5);
  auVar6 = _vmr32(auVar6);
  _vmula(auVar3,auVar6);
  auVar8 = _vmsub(auVar4,auVar5);
  _vmula(auVar5,auVar2);
  auVar5 = _vmsub(auVar6,auVar1);
  _vmula(auVar1,auVar4);
  auVar3 = _vmsub(auVar2,auVar3);
  auVar1 = _qmfc2(auVar8._0_4_);
  auVar2 = _qmfc2(auVar5._0_4_);
  auVar3 = _qmfc2(auVar3._0_4_);
  auVar4 = _pextlw(auVar2._0_8_,auVar1._0_8_);
  auVar5 = _pextuw(auVar2,auVar1);
  auVar2 = _pextlw(auVar3._0_8_,auVar3._0_8_);
  auVar3 = _pextuw(auVar3,auVar3);
  auVar1 = _pcpyld(auVar2,auVar4);
  auVar2 = _pcpyud(auVar4,auVar2);
  auVar3 = _pcpyld(auVar3,auVar5);
  auVar4 = _qmtc2(auVar1._0_4_);
  auVar2 = _qmtc2(auVar2._0_4_);
  auVar3 = _qmtc2(auVar3._0_4_);
  auVar1 = _vsubbc(in_vf0,in_vf0);
  _vmulabc(auVar4,in_vf27);
  _vmaddabc(auVar2,in_vf27);
  auVar5 = _vmaddbc(auVar3,in_vf27);
  auVar5 = _vmulbc(auVar5,auVar1);
  _vmulabc(auVar4,auVar7);
  _vmaddabc(auVar2,auVar7);
  auVar1 = _vmaddbc(auVar3,auVar7);
  _vdiv(in_vf0,0,auVar1,0);
  uVar9 = _vwaitq();
  _vmulq(auVar4,uVar9);
  _vmulq(auVar2,uVar9);
  _vmulq(auVar3,uVar9);
  _vmulq(auVar5,uVar9);
  return;
}

