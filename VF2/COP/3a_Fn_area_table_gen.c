/* COP 3a Fn_area_table_gen: cprCliAreaTableGen @ 0019bdc0, 0 argument words, 0 reply bytes */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * cprCliAreaTableGen(void)

{
  undefined4 uVar1;
  void *pvVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 in_a3_udw;
  undefined1 auVar13 [16];
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined1 (*pauVar18) [16];
  uint *__s;
  undefined4 uVar19;
  undefined4 in_vc2;
  undefined1 in_vf0 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar1 = DAT_001f0e0c;
  uVar19 = DAT_001f0e08;
  uVar5 = __216;
  pauVar18 = (undefined1 (*) [16])&g_FlagMin;
  __s = (uint *)(CprMain_ERam + 0xf880);
  memset(__s,0xff,0x78);
  memset(&g_FlagMin,0,0x400);
  pvVar2 = memset(&g_FlagMax,0,0x400);
  puVar4 = &RColiball;
  puVar17 = (uint *)(CprMain_ERam + 0xfd00);
  puVar3 = (uint *)(CprMain_ERam + 0x1fd00);
  auVar20 = _vmr32(in_vf0);
  auVar21._8_4_ = uVar19;
  auVar21._0_8_ = uVar5;
  auVar21._12_4_ = uVar1;
  auVar21 = _lqc2(auVar21);
  iVar15 = 0x1e;
  uVar14 = 1;
  puVar16 = puVar4;
  do {
    iVar15 = iVar15 + -1;
    auVar12 = _pextlw((ulong)puVar17[1],(ulong)*puVar17);
    auVar22._4_4_ = 0;
    auVar22._0_4_ = puVar17[2];
    auVar22._8_8_ = in_a3_udw;
    auVar12 = _pcpyld(auVar22,auVar12);
    auVar22 = _qmtc2(auVar12._0_4_);
    auVar12 = _pextlw((ulong)puVar17[0x61],(ulong)puVar17[0x60]);
    auVar23._4_4_ = 0;
    auVar23._0_4_ = puVar17[0x62];
    auVar23._8_8_ = in_a3_udw;
    auVar12 = _pcpyld(auVar23,auVar12);
    auVar23 = _qmtc2(auVar12._0_4_);
    auVar12 = _vmini(auVar22,auVar23);
    auVar22 = _vmax(auVar22,auVar23);
    auVar23 = _qmtc2(*puVar16);
    auVar12 = _vsubbc(auVar12,auVar23);
    auVar22 = _vaddbc(auVar22,auVar23);
    auVar12 = _vmulbc(auVar12,auVar21);
    auVar12 = _vaddbc(auVar12,auVar21);
    auVar12 = _vsubbc(auVar12,auVar21);
    auVar12 = _vftoi0(auVar12);
    uVar19 = _vmtir(auVar12);
    uVar5 = _cfc2(uVar19);
    (&g_FlagMin)[((uint)uVar5 & 0x3f) * 4] = (&g_FlagMin)[((uint)uVar5 & 0x3f) * 4] | uVar14;
    uVar19 = _vmtir(auVar12);
    uVar5 = _cfc2(uVar19);
    (&DAT_0168c3c4)[((uint)uVar5 & 0x3f) * 4] = (&DAT_0168c3c4)[((uint)uVar5 & 0x3f) * 4] | uVar14;
    uVar19 = _vmtir(auVar12);
    uVar5 = _cfc2(uVar19);
    (&DAT_0168c3c8)[((uint)uVar5 & 0x3f) * 4] = (&DAT_0168c3c8)[((uint)uVar5 & 0x3f) * 4] | uVar14;
    auVar12 = _vmulbc(auVar22,auVar21);
    auVar12 = _vaddbc(auVar12,auVar21);
    auVar12 = _vsubbc(auVar12,auVar21);
    auVar12 = _vftoi0(auVar12);
    uVar19 = _vmtir(auVar12);
    uVar5 = _cfc2(uVar19);
    *(uint *)(&g_FlagMax + ((uint)uVar5 & 0x3f) * 0x10) =
         *(uint *)(&g_FlagMax + ((uint)uVar5 & 0x3f) * 0x10) | uVar14;
    uVar19 = _vmtir(auVar12);
    uVar5 = _cfc2(uVar19);
    *(uint *)(&DAT_0168bfc4 + ((uint)uVar5 & 0x3f) * 0x10) =
         *(uint *)(&DAT_0168bfc4 + ((uint)uVar5 & 0x3f) * 0x10) | uVar14;
    uVar19 = _vmtir(auVar12);
    uVar5 = _cfc2(uVar19);
    *(uint *)(&DAT_0168bfc8 + ((uint)uVar5 & 0x3f) * 0x10) =
         *(uint *)(&DAT_0168bfc8 + ((uint)uVar5 & 0x3f) * 0x10) | uVar14;
    puVar17 = puVar17 + 3;
    puVar16 = puVar16 + 1;
    uVar14 = uVar14 << 1;
  } while (iVar15 != 0);
  iVar15 = 0x3e;
  do {
    iVar15 = iVar15 + -1;
    auVar12 = _por(pauVar18[1],*pauVar18);
    *(int *)pauVar18[1] = auVar12._0_4_;
    *(int *)((int)pauVar18[1] + 4) = auVar12._4_4_;
    *(int *)((int)pauVar18[1] + 8) = auVar12._8_4_;
    *(int *)((int)pauVar18[1] + 0xc) = auVar12._12_4_;
    pauVar18 = pauVar18 + 1;
  } while (iVar15 != 0);
  iVar15 = 0x3e;
  pauVar18 = (undefined1 (*) [16])&DAT_0168c3a0;
  do {
    iVar15 = iVar15 + -1;
    auVar12 = pauVar18[1];
    auVar22 = _por(*pauVar18,auVar12);
    *(int *)*pauVar18 = auVar22._0_4_;
    *(int *)((int)*pauVar18 + 4) = auVar22._4_4_;
    *(int *)((int)*pauVar18 + 8) = auVar22._8_4_;
    *(int *)((int)*pauVar18 + 0xc) = auVar22._12_4_;
    pauVar18 = pauVar18 + -1;
  } while (iVar15 != 0);
  iVar15 = 0x1e;
  do {
    iVar15 = iVar15 + -1;
    auVar13._8_8_ = auVar12._8_8_;
    auVar12 = _pextlw((ulong)puVar3[1],(ulong)*puVar3);
    auVar13._4_4_ = 0;
    auVar13._0_4_ = puVar3[2];
    auVar12 = _pcpyld(auVar13,auVar12);
    auVar23 = _qmtc2(auVar12._0_4_);
    auVar22 = _pextlw((ulong)puVar3[0x61],(ulong)puVar3[0x60]);
    auVar12._4_4_ = 0;
    auVar12._0_4_ = puVar3[0x62];
    auVar12._8_8_ = auVar13._8_8_;
    auVar22 = _pcpyld(auVar12,auVar22);
    auVar24 = _qmtc2(auVar22._0_4_);
    auVar22 = _vmini(auVar23,auVar24);
    auVar23 = _vmax(auVar23,auVar24);
    auVar24 = _qmtc2(*puVar4);
    auVar22 = _vsubbc(auVar22,auVar24);
    auVar23 = _vaddbc(auVar23,auVar24);
    auVar22 = _vmulbc(auVar22,auVar21);
    auVar22 = _vaddbc(auVar22,auVar21);
    auVar23 = _vmulbc(auVar23,auVar21);
    auVar23 = _vaddbc(auVar23,auVar21);
    _vclip(auVar22,auVar20);
    auVar24 = _vsubbc(auVar22,auVar21);
    _vclip(auVar24,auVar20);
    _vclip(auVar23,auVar20);
    auVar24 = _vsubbc(auVar23,auVar21);
    _vclip(auVar24,auVar20);
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    uVar6 = _cfc2(in_vc2);
    if ((uVar6 & 0xaaaaaa) == 0x2a02a) {
      auVar12 = _vsubbc(auVar22,auVar21);
      auVar22 = _vsubbc(auVar23,auVar21);
      auVar12 = _vftoi0(auVar12);
      auVar22 = _vftoi0(auVar22);
      uVar19 = _vmtir(auVar12);
      uVar5 = _cfc2(uVar19);
      uVar19 = _vmtir(auVar22);
      uVar7 = _cfc2(uVar19);
      uVar19 = _vmtir(auVar12);
      uVar8 = _cfc2(uVar19);
      uVar19 = _vmtir(auVar22);
      uVar9 = _cfc2(uVar19);
      uVar19 = _vmtir(auVar12);
      uVar10 = _cfc2(uVar19);
      uVar19 = _vmtir(auVar22);
      uVar11 = _cfc2(uVar19);
      auVar12._0_8_ = (ulong)(int)(&DAT_0168c3c8)[((uint)uVar11 & 0x3f) * 4];
      *__s = *__s & *(uint *)(&g_FlagMax + ((uint)uVar5 & 0x3f) * 0x10) &
             (&g_FlagMin)[((uint)uVar7 & 0x3f) * 4] &
             *(uint *)(&DAT_0168bfc4 + ((uint)uVar8 & 0x3f) * 0x10) &
             (&DAT_0168c3c4)[((uint)uVar9 & 0x3f) * 4] &
             *(uint *)(&DAT_0168bfc8 + ((uint)uVar10 & 0x3f) * 0x10) &
             (&DAT_0168c3c8)[((uint)uVar11 & 0x3f) * 4];
    }
    else {
      *__s = 0;
    }
    puVar3 = puVar3 + 3;
    puVar4 = puVar4 + 1;
    __s = __s + 1;
  } while (iVar15 != 0);
  return pvVar2;
}

