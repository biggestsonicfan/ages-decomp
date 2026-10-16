/* COP 3b Fn_calc_coli_flag: cprCliCalcColiFlag @ 0019b9c0, 5 argument words, 16 reply bytes */

void cprCliCalcColiFlag(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 in_a3_udw;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  float *pfVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined4 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  float *pfVar22;
  int iVar23;
  int iVar24;
  uint *puVar25;
  uint *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 in_vf0 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  
  piVar6 = CprMain_RfoTop;
  puVar26 = (uint *)(CprMain_ERam + 0xf880);
  puVar25 = (uint *)(CprMain_ERam + 0x1fd00);
  auVar32 = _vsubbc(in_vf0,in_vf0);
  iVar1 = *CprMain_RfiPtr;
  uVar2 = CprMain_RfiPtr[1];
  uVar3 = CprMain_RfiPtr[2];
  uVar4 = CprMain_RfiPtr[3];
  uVar5 = CprMain_RfiPtr[4];
  iVar23 = 0;
  iVar24 = 0;
  fVar28 = 0.0;
  fVar30 = 0.0;
  puVar18 = &g_Ball0OldA;
  puVar13 = (undefined4 *)(CprMain_ERam + 0xfd00);
  puVar20 = (undefined4 *)(CprMain_ERam + 0xfe80);
  iVar10 = 0x1e;
  pauVar16 = (undefined1 (*) [16])&g_Ball0NewA;
  do {
    iVar10 = iVar10 + -1;
    *(undefined4 *)*pauVar16 = *puVar13;
    *(undefined4 *)((int)*pauVar16 + 4) = puVar13[1];
    *(undefined4 *)((int)*pauVar16 + 8) = puVar13[2];
    *puVar18 = *puVar20;
    puVar18[1] = puVar20[1];
    puVar18[2] = puVar20[2];
    pauVar16 = pauVar16 + 1;
    puVar13 = puVar13 + 3;
    puVar18 = puVar18 + 4;
    puVar20 = puVar20 + 3;
  } while (iVar10 != 0);
  iVar10 = 0x1e;
  pfVar22 = (float *)(RColiballRev + 0x78);
  uVar21 = 1;
  do {
    iVar10 = iVar10 + -1;
    uVar12 = *puVar26;
    if (uVar12 != 0) {
      auVar8 = _pextlw((ulong)puVar25[1],(ulong)*puVar25);
      auVar9._4_4_ = 0;
      auVar9._0_4_ = puVar25[2];
      auVar9._8_8_ = in_a3_udw;
      auVar9 = _pcpyld(auVar9,auVar8);
      auVar37 = _qmtc2(auVar9._0_4_);
      auVar9 = _pextlw((ulong)puVar25[0x61],(ulong)puVar25[0x60]);
      auVar8._4_4_ = 0;
      auVar8._0_4_ = puVar25[0x62];
      auVar8._8_8_ = in_a3_udw;
      auVar9 = _pcpyld(auVar8,auVar9);
      auVar9 = _qmtc2(auVar9._0_4_);
      uVar19 = 0xffffffff;
      if ((uVar3 & uVar21) == 0) {
        uVar19 = uVar2;
      }
      uVar14 = 1;
      iVar11 = 0x1e;
      pauVar16 = (undefined1 (*) [16])&g_Ball0OldA;
      pfVar15 = (float *)(RColiballRev + 0x78);
      fVar29 = fVar28;
      fVar31 = fVar30;
      pauVar17 = (undefined1 (*) [16])&g_Ball0NewA;
      do {
        iVar11 = iVar11 + -1;
        auVar8 = _lqc2(*pauVar16);
        auVar36 = _lqc2(*pauVar17);
        fVar28 = fVar29;
        fVar30 = fVar31;
        if ((uVar14 & uVar12) != 0) {
          iVar23 = iVar23 + 1;
          auVar36 = _vsub(auVar37,auVar36);
          if ((uVar19 & uVar14) == 0) {
LAB_0019bc18:
            auVar8 = _vmul(auVar36,auVar36);
            auVar8 = _vaddbc(auVar8,auVar8);
            auVar8 = _vaddbc(auVar8,auVar8);
            auVar8 = _qmfc2(auVar8._0_4_);
            fVar7 = auVar8._0_4_;
          }
          else {
            auVar33 = _vsub(auVar9,auVar8);
            auVar34 = _vsub(auVar36,auVar33);
            auVar8 = _vmul(auVar33,auVar34);
            auVar8 = _vaddbc(auVar8,auVar8);
            auVar8 = _vaddbc(auVar8,auVar8);
            auVar8 = _vmul(auVar8,auVar32);
            auVar8 = _qmfc2(auVar8._0_4_);
            if (0.0 < auVar8._0_4_) {
              auVar8 = _vmul(auVar34,auVar34);
              auVar35 = _vaddbc(auVar8,auVar8);
              auVar35 = _vaddbc(auVar35,auVar8);
              auVar8 = _vsubbc(auVar35,auVar35);
              auVar8 = _qmfc2(auVar8._0_4_);
              auVar8 = _prot3w(auVar8);
              if (auVar8._0_4_ <= 0.0) goto LAB_0019bc18;
              _vdiv(auVar35,0,auVar35,0);
              uVar38 = _vwaitq();
              auVar8 = _vmulq(auVar34,uVar38);
              auVar8 = _vadd(auVar33,auVar8);
              auVar8 = _vmul(auVar8,auVar8);
              auVar8 = _vaddbc(auVar8,auVar8);
              auVar8 = _vaddbc(auVar8,auVar8);
              auVar8 = _qmfc2(auVar8._0_4_);
              fVar7 = auVar8._0_4_;
            }
            else {
              auVar8 = _vmul(auVar33,auVar33);
              auVar8 = _vaddbc(auVar8,auVar8);
              auVar8 = _vaddbc(auVar8,auVar8);
              auVar8 = _qmfc2(auVar8._0_4_);
              fVar7 = auVar8._0_4_;
            }
          }
          fVar27 = *pfVar22 + *pfVar15;
          fVar27 = fVar27 * fVar27;
          if (fVar27 <= fVar7) {
            uVar12 = uVar12 & ~uVar14;
          }
          else {
            iVar24 = iVar24 + 1;
            if (iVar1 == 4) {
              auVar8 = _vmove(auVar36);
              _vmul(auVar8,auVar32);
            }
            else {
              if (iVar1 != 5) {
                if ((uVar19 & uVar14) == 0) {
                  fVar28 = (*pfVar15 + *pfVar22) - SQRT(fVar7);
                  if (((uVar4 & uVar14) == 0) || ((uVar5 & uVar21) == 0)) {
                    if (fVar28 < fVar29) {
                      fVar28 = fVar29;
                    }
                  }
                  else {
                    fVar28 = fVar29;
                    if (fVar29 <= 0.0) {
                      fVar28 = 0.0;
                    }
                  }
                }
                goto LAB_0019bd18;
              }
              _vmove(auVar36);
            }
            auVar8 = _vmul(auVar36,auVar36);
            auVar8 = _vsubbc(auVar8,auVar8);
            auVar8 = _qmfc2(auVar8._0_4_);
            auVar36 = _prot3w(auVar8);
            fVar30 = SQRT(fVar27 - auVar8._0_4_) + auVar36._0_4_;
            if (fVar30 <= fVar31) {
              fVar30 = fVar31;
            }
          }
        }
LAB_0019bd18:
        uVar14 = uVar14 << 1;
        pauVar17 = pauVar17 + 1;
        pauVar16 = pauVar16 + 1;
        pfVar15 = pfVar15 + -1;
        fVar29 = fVar28;
        fVar31 = fVar30;
      } while (iVar11 != 0);
    }
    puVar26[0x4000] = uVar12;
    puVar26 = puVar26 + 1;
    uVar21 = uVar21 << 1;
    puVar25 = puVar25 + 3;
    pfVar22 = pfVar22 + -1;
    if (iVar10 == 0) {
      *piVar6 = iVar23;
      piVar6[1] = iVar24;
      piVar6[2] = (int)fVar28;
      piVar6[3] = (int)fVar30;
      return;
    }
  } while( true );
}

