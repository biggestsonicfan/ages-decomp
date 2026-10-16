/* COP 3b Fn_calc_coli_flag: Fn_calc_coli_flag @ 001916c0, 7 argument words, 16 reply bytes */

void Fn_calc_coli_flag(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  uint uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar9 = 0x3f40;
  iVar8 = 0x340;
  iVar7 = 0;
  uVar2 = *puGpffff830c;
  uVar3 = puGpffff830c[1];
  uVar4 = puGpffff830c[2];
  uVar5 = puGpffff830c[5];
  uVar6 = puGpffff830c[6];
  uStack_4 = 0;
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  do {
    iVar15 = iVar9 + 1;
    iVar10 = iVar8 + 1;
    iVar16 = iVar9 + 2;
    iVar11 = iVar8 + 2;
    iVar7 = iVar7 + 8;
    iVar18 = iVar9 + 3;
    iVar19 = iVar8 + 3;
    iVar20 = iVar9 + 4;
    *(undefined4 *)(iGpffff832c + iVar8 * 4) = *(undefined4 *)(iGpffff8314 + iVar9 * 4);
    iVar21 = iVar8 + 4;
    iVar22 = iVar9 + 5;
    iVar12 = iVar9 + 6;
    iVar23 = iVar8 + 5;
    iVar13 = iVar9 + 7;
    iVar17 = iVar8 + 6;
    iVar9 = iVar9 + 8;
    iVar14 = iVar8 + 7;
    iVar8 = iVar8 + 8;
    *(undefined4 *)(iGpffff832c + iVar10 * 4) = *(undefined4 *)(iGpffff8314 + iVar15 * 4);
    *(undefined4 *)(iGpffff832c + iVar11 * 4) = *(undefined4 *)(iGpffff8314 + iVar16 * 4);
    *(undefined4 *)(iGpffff832c + iVar19 * 4) = *(undefined4 *)(iGpffff8314 + iVar18 * 4);
    *(undefined4 *)(iGpffff832c + iVar21 * 4) = *(undefined4 *)(iGpffff8314 + iVar20 * 4);
    *(undefined4 *)(iGpffff832c + iVar23 * 4) = *(undefined4 *)(iGpffff8314 + iVar22 * 4);
    *(undefined4 *)(iGpffff832c + iVar17 * 4) = *(undefined4 *)(iGpffff8314 + iVar12 * 4);
    *(undefined4 *)(iGpffff832c + iVar14 * 4) = *(undefined4 *)(iGpffff8314 + iVar13 * 4);
  } while (iVar7 < 0x60);
  iVar9 = 0x3fa0;
  iVar8 = 0x3a0;
  iVar7 = 0;
  do {
    iVar15 = iVar9 + 1;
    iVar10 = iVar8 + 1;
    iVar16 = iVar9 + 2;
    iVar11 = iVar8 + 2;
    iVar7 = iVar7 + 8;
    iVar18 = iVar9 + 3;
    iVar19 = iVar8 + 3;
    iVar20 = iVar9 + 4;
    *(undefined4 *)(iGpffff832c + iVar8 * 4) = *(undefined4 *)(iGpffff8314 + iVar9 * 4);
    iVar21 = iVar8 + 4;
    iVar22 = iVar9 + 5;
    iVar12 = iVar9 + 6;
    iVar23 = iVar8 + 5;
    iVar13 = iVar9 + 7;
    iVar17 = iVar8 + 6;
    iVar9 = iVar9 + 8;
    iVar14 = iVar8 + 7;
    iVar8 = iVar8 + 8;
    *(undefined4 *)(iGpffff832c + iVar10 * 4) = *(undefined4 *)(iGpffff8314 + iVar15 * 4);
    *(undefined4 *)(iGpffff832c + iVar11 * 4) = *(undefined4 *)(iGpffff8314 + iVar16 * 4);
    *(undefined4 *)(iGpffff832c + iVar19 * 4) = *(undefined4 *)(iGpffff8314 + iVar18 * 4);
    *(undefined4 *)(iGpffff832c + iVar21 * 4) = *(undefined4 *)(iGpffff8314 + iVar20 * 4);
    *(undefined4 *)(iGpffff832c + iVar23 * 4) = *(undefined4 *)(iGpffff8314 + iVar22 * 4);
    *(undefined4 *)(iGpffff832c + iVar17 * 4) = *(undefined4 *)(iGpffff8314 + iVar12 * 4);
    *(undefined4 *)(iGpffff832c + iVar14 * 4) = *(undefined4 *)(iGpffff8314 + iVar13 * 4);
  } while (iVar7 < 0x60);
  uVar25 = 1;
  iVar8 = 0xf880;
  iVar9 = 0x80;
  iVar7 = 0x20;
  do {
    uStack_14 = *(uint *)(iGpffff8314 + iVar8);
    if ((uStack_14 != 0) && (fVar26 = *(float *)(iGpffff832c + (iVar7 + 0x720) * 4), fVar26 != 0.0))
    {
      if (((uVar4 & uVar25) != 0) && (*(int *)(iGpffff832c + 0x106c) != 4)) {
        fVar26 = fVar26 * *(float *)(iGpffff832c + 0x1fc0);
      }
      iVar10 = *(int *)(iGpffff832c + iVar9 + 0x1904);
      iVar12 = (iVar10 + 0x7f40) * 4;
      iVar11 = (iVar10 + 0x7fa0) * 4;
      *(undefined4 *)(iGpffff832c + 0x1040) = *(undefined4 *)(iGpffff8314 + iVar12);
      *(undefined4 *)(iGpffff832c + 0x1044) = *(undefined4 *)(iGpffff8314 + iVar12 + 4);
      *(undefined4 *)(iGpffff832c + 0x1048) = *(undefined4 *)(iGpffff8314 + (iVar10 + 0x7f42) * 4);
      *(undefined4 *)(iGpffff832c + 0x104c) = *(undefined4 *)(iGpffff8314 + iVar11);
      *(undefined4 *)(iGpffff832c + 0x1050) = *(undefined4 *)(iGpffff8314 + iVar11 + 4);
      *(undefined4 *)(iGpffff832c + 0x1054) = *(undefined4 *)(iGpffff8314 + (iVar10 + 0x7fa2) * 4);
      if ((uVar6 & uVar25) != 0) {
        uVar24 = 1;
        iVar10 = 0x20;
        do {
          if (((uVar5 & uVar24) != 0) && ((uStack_14 & uVar24) != 0)) {
            func_0x00191300(fVar26,iVar10,0,&uStack_4,&uStack_8,&uStack_14,&uStack_c,&uStack_10,
                            uVar2);
          }
          uVar24 = uVar24 << 1;
          bVar1 = iVar10 != 1;
          iVar10 = iVar10 + -1;
        } while (bVar1);
      }
    }
    uVar25 = uVar25 << 1;
    iVar9 = iVar9 + -4;
    iVar10 = iGpffff8314 + iVar8;
    iVar8 = iVar8 + 4;
    bVar1 = iVar7 != 1;
    *(uint *)(iVar10 + 0x10000) = uStack_14;
    iVar7 = iVar7 + -1;
  } while (bVar1);
  func_0x001911c0(uVar3,uVar4);
  *puGpffff8300 = uStack_4;
  puGpffff8300[1] = uStack_8;
  puGpffff8300[2] = uStack_c;
  puGpffff8300[3] = uStack_10;
  uGpffff82fc = 0x10;
  return;
}

