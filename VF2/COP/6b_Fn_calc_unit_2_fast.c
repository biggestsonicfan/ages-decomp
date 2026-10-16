/* COP 6b Fn_calc_unit_2_fast: cprMotCalcUnit2Fast @ 0019a980, 17 argument words, 4 reply bytes */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cprMotCalcUnit2Fast(void)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 in_vf0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 extraout_vf24 [16];
  undefined1 auVar14 [16];
  undefined1 extraout_vf25 [16];
  undefined1 auVar15 [16];
  undefined1 extraout_vf26 [16];
  undefined4 extraout_vf27w;
  undefined1 extraout_var [12];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack_4;
  
  iVar2 = CprMain_RfiPtr;
  cprSubTransCurMat(CprMain_RfiPtr);
  cprSubRotateCurZ(*(undefined2 *)(iVar2 + 0xc));
  cprSubRotateCurY(*(undefined2 *)(iVar2 + 0x10));
  cprSubRotateCurX(*(undefined2 *)(iVar2 + 0x14));
  cprSubRotateCurY(*(undefined2 *)(iVar2 + 0x18));
  cprSubRotateCurX(*(undefined2 *)(iVar2 + 0x1c));
  cprSubRotateCurZ(*(undefined2 *)(iVar2 + 0x20));
  puVar4 = (undefined8 *)(CprMain_BufRam + *(int *)(iVar2 + 0x38) * 4);
  puVar3 = (undefined8 *)(CprMain_BufRam + *(int *)(iVar2 + 0x3c) * 4);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar8 = _vsubbc(in_vf0,in_vf0);
  auVar6 = _vaddbc(in_vf0,auVar6);
  auVar7 = _vaddbc(auVar6,auVar6);
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x40));
  auVar5 = _qmfc2(auVar6._0_4_);
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x30));
  _vaddbc(in_vf0,auVar6);
  auVar6 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x20));
  auVar9 = _vmr32(auVar6);
  auVar6._4_12_ = extraout_var;
  auVar6._0_4_ = extraout_vf27w;
  auVar6 = _vsub(auVar9,auVar6);
  auVar9 = _vmul(extraout_vf24,auVar6);
  auVar12 = _vaddbc(auVar9,auVar9);
  _vaddbc(auVar12,auVar9);
  auVar9 = _vmul(extraout_vf25,auVar6);
  auVar12 = _vaddbc(auVar9,auVar9);
  auVar9 = _vaddbc(auVar12,auVar9);
  _vmulbc(auVar9,auVar8);
  auVar6 = _vmul(extraout_vf26,auVar6);
  auVar9 = _vaddbc(auVar6,auVar6);
  auVar13 = _vaddbc(auVar9,auVar6);
  auVar6 = _vmul(auVar13,auVar13);
  auVar6 = _vaddbc(auVar6,auVar6);
  auVar9 = _vaddbc(auVar6,auVar6);
  _vsqrt(auVar9);
  uVar16 = _vwaitq();
  auVar10 = _vaddq(in_vf0,uVar16);
  _vrsqrt(in_vf0,auVar6);
  uVar16 = _vwaitq();
  auVar9 = _vaddq(in_vf0,uVar16);
  _vmulbc(auVar6,auVar9);
  _vdiv(in_vf0,0,auVar10,0);
  uVar16 = _vwaitq();
  auVar11 = _vaddq(in_vf0,uVar16);
  auVar6 = _vmulbc(auVar13,auVar11);
  auVar6 = _vmr32(auVar6);
  auVar6 = _vaddbc(in_vf0,auVar6);
  auVar6 = _vmini(auVar6,auVar7);
  auVar6 = _vmax(auVar6,auVar8);
  auVar9 = _vmove(extraout_vf24);
  auVar12 = _vmove(extraout_vf25);
  _vmulabc(auVar9,auVar6);
  auVar14 = _vmsubbc(auVar12,auVar6);
  _vmulabc(auVar9,auVar6);
  auVar15 = _vmaddbc(auVar12,auVar6);
  _vaddbc(in_vf0,auVar13);
  auVar6 = _vaddbc(in_vf0,auVar11);
  auVar6 = _vmulbc(auVar6,auVar11);
  auVar6 = _vmini(auVar6,auVar7);
  auVar6 = _vmax(auVar6,auVar8);
  auVar9 = _vmove(auVar14);
  auVar12 = _vmove(extraout_vf26);
  _vmulabc(auVar12,auVar6);
  auVar11 = _vmaddbc(auVar9,auVar6);
  _vmulabc(auVar12,auVar6);
  auVar9 = _vmsubbc(auVar9,auVar6);
  auVar6 = _vaddbc(auVar10,auVar10);
  auVar6 = _vsubbc(auVar6,auVar10);
  auVar6 = _qmfc2(auVar6._0_4_);
  uVar16 = auVar9._0_4_;
  if (0.0 < auVar6._0_4_) {
    auVar12 = _vmul(auVar10,auVar10);
    auVar6 = _vaddbc(auVar12,auVar12);
    auVar6 = _vsubbc(auVar6,auVar12);
    auVar9 = _vmulbc(auVar10,auVar10);
    auVar9 = _vmulbc(auVar7,auVar9);
    _vdiv(auVar6,0,auVar9,0);
    uVar17 = _vwaitq();
    auVar6 = _vaddq(in_vf0,uVar17);
    auVar6 = _vmul(auVar6,auVar6);
    auVar6 = _vsubbc(auVar7,auVar6);
    _vsqrt(auVar6);
    uVar17 = _vwaitq();
    auVar6 = _vaddq(in_vf0,uVar17);
    if (auVar5._0_8_ == 0) {
      auVar6 = _vmul(auVar6,auVar8);
    }
    auVar6 = _vmini(auVar6,auVar7);
    auVar6 = _vmax(auVar6,auVar8);
    auVar9 = _vmove(auVar11);
    auVar11 = _vmove(auVar15);
    _vmulabc(auVar9,auVar6);
    auVar13 = _vmsubbc(auVar11,auVar6);
    _vmulabc(auVar9,auVar6);
    auVar11 = _vmaddbc(auVar11,auVar6);
    auVar6 = _qmfc2(auVar13._0_4_);
    *puVar4 = auVar6._0_8_;
    auVar6 = _pcpyud(auVar6,auVar6);
    *(int *)(puVar4 + 1) = auVar6._0_4_;
    auVar6 = _qmfc2(auVar11._0_4_);
    *(long *)((int)puVar4 + 0xc) = auVar6._0_8_;
    auVar6 = _pcpyud(auVar6,auVar6);
    *(int *)((int)puVar4 + 0x14) = auVar6._0_4_;
    auVar6 = _qmfc2(uVar16);
    puVar4[3] = auVar6._0_8_;
    auVar6 = _pcpyud(auVar6,auVar6);
    *(int *)(puVar4 + 4) = auVar6._0_4_;
    auVar6 = _qmfc2(extraout_vf27w);
    *(long *)((int)puVar4 + 0x24) = auVar6._0_8_;
    auVar6 = _pcpyud(auVar6,auVar6);
    *(int *)((int)puVar4 + 0x2c) = auVar6._0_4_;
    auVar6 = _vaddbc(auVar12,auVar12);
    auVar6 = _vsubbc(auVar6,auVar12);
    auVar9 = _vmulbc(auVar10,auVar10);
    auVar9 = _vmulbc(auVar7,auVar9);
    _vdiv(auVar6,0,auVar9,0);
    uVar17 = _vwaitq();
    auVar6 = _vaddq(in_vf0,uVar17);
    _vmul(auVar6,auVar8);
    auVar6 = _vmul(auVar6,auVar6);
    auVar6 = _vsubbc(auVar7,auVar6);
    _vsqrt(auVar6);
    uVar17 = _vwaitq();
    auVar6 = _vaddq(in_vf0,uVar17);
    if (auVar5._0_8_ != 0) {
      auVar6 = _vmul(auVar6,auVar8);
    }
    auVar6 = _vmini(auVar6,auVar7);
    auVar5 = _vmax(auVar6,auVar8);
    auVar6 = _qmfc2(auVar11._0_4_);
    auVar6 = _pcpyud(auVar6,auVar6);
    uStack_4 = auVar6._0_4_;
    auVar6 = _vmove(auVar13);
    auVar7 = _vmove(auVar11);
    _vmulabc(auVar6,auVar5);
    auVar8 = _vmsubbc(auVar7,auVar5);
    _vmulabc(auVar6,auVar5);
    auVar5 = _vmaddbc(auVar7,auVar5);
    auVar6 = _qmfc2(auVar8._0_4_);
    *puVar3 = auVar6._0_8_;
    auVar6 = _pcpyud(auVar6,auVar6);
    *(int *)(puVar3 + 1) = auVar6._0_4_;
    auVar6 = _qmfc2(auVar5._0_4_);
    *(long *)((int)puVar3 + 0xc) = auVar6._0_8_;
    auVar6 = _pcpyud(auVar6,auVar6);
    *(int *)((int)puVar3 + 0x14) = auVar6._0_4_;
    auVar6 = _qmfc2(uVar16);
    puVar3[3] = auVar6._0_8_;
    auVar6 = _pcpyud(auVar6,auVar6);
    *(int *)(puVar3 + 4) = auVar6._0_4_;
    auVar6 = _qmfc2(extraout_vf27w);
    *(long *)((int)puVar3 + 0x24) = auVar6._0_8_;
    auVar6 = _pcpyud(auVar6,auVar6);
    *(int *)((int)puVar3 + 0x2c) = auVar6._0_4_;
    bVar1 = false;
    _A_len = _sqc2(auVar10);
  }
  else {
    auVar6 = _qmfc2(auVar11._0_4_);
    *puVar4 = auVar6._0_8_;
    *puVar3 = auVar6._0_8_;
    auVar6 = _pcpyud(auVar6,auVar6);
    *(int *)(puVar4 + 1) = auVar6._0_4_;
    *(int *)(puVar3 + 1) = auVar6._0_4_;
    auVar6 = _qmfc2(auVar15._0_4_);
    *(long *)((int)puVar4 + 0xc) = auVar6._0_8_;
    *(long *)((int)puVar3 + 0xc) = auVar6._0_8_;
    auVar6 = _pcpyud(auVar6,auVar6);
    *(int *)((int)puVar4 + 0x14) = auVar6._0_4_;
    *(int *)((int)puVar3 + 0x14) = auVar6._0_4_;
    auVar6 = _qmfc2(uVar16);
    puVar4[3] = auVar6._0_8_;
    puVar3[3] = auVar6._0_8_;
    auVar6 = _pcpyud(auVar6,auVar6);
    *(int *)(puVar4 + 4) = auVar6._0_4_;
    *(int *)(puVar3 + 4) = auVar6._0_4_;
    auVar6 = _qmfc2(extraout_vf27w);
    *(long *)((int)puVar4 + 0x24) = auVar6._0_8_;
    *(long *)((int)puVar3 + 0x24) = auVar6._0_8_;
    auVar6 = _pcpyud(auVar6,auVar6);
    *(int *)((int)puVar4 + 0x2c) = auVar6._0_4_;
    *(int *)((int)puVar3 + 0x2c) = auVar6._0_4_;
    bVar1 = true;
    _A_len = _sqc2(auVar10);
  }
  if (bVar1) {
    *CprMain_RfoTop = DAT_0168bb84;
  }
  else {
    *CprMain_RfoTop = uStack_4;
  }
  return;
}

