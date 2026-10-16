/* COP 70 Fn_area_coli: Fn_area_coli @ 00192bc0, 5 argument words, 88 reply bytes */

void Fn_area_coli(void)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack_4;
  
  *(undefined4 *)(iGpffff832c + 0x2004) = *puGpffff830c;
  *(undefined4 *)(iGpffff832c + 0x2000) = puGpffff830c[1];
  *(undefined4 *)(iGpffff832c + 0x2008) = puGpffff830c[2];
  *(undefined4 *)(iGpffff832c + 0x2010) = puGpffff830c[3];
  uVar5 = puGpffff830c[4];
  if ((uVar5 & 0x7fffffff) == 0) {
    iVar16 = 16000;
    iVar10 = 0x600;
    iVar4 = 0;
    iVar1 = 0;
    do {
      iVar4 = iVar4 + 8;
      *(undefined4 *)(iGpffff832c + iVar1 + 0x205c) = 0;
      *(undefined4 *)(iGpffff832c + iVar1 + 0x2060) = 0;
      *(undefined4 *)(iGpffff832c + iVar1 + 0x2064) = 0;
      *(undefined4 *)(iGpffff832c + iVar1 + 0x2068) = 0;
      *(undefined4 *)(iGpffff832c + iVar1 + 0x206c) = 0;
      *(undefined4 *)(iGpffff832c + iVar1 + 0x2070) = 0;
      *(undefined4 *)(iGpffff832c + iVar1 + 0x2074) = 0;
      *(undefined4 *)(iGpffff832c + iVar1 + 0x2078) = 0;
      iVar1 = iVar1 + 0x20;
    } while (iVar4 < 0x10);
  }
  else {
    iVar16 = 0x7e80;
    iVar10 = 0x700;
  }
  iVar1 = 0;
  iVar4 = 0;
  *(int *)(iGpffff832c + 0x200c) = iVar16;
  do {
    iVar1 = iVar1 + 6;
    *(undefined4 *)(iGpffff832c + iVar4 + 0x2014) = 0;
    *(undefined4 *)(iGpffff832c + iVar4 + 0x2018) = 0;
    *(undefined4 *)(iGpffff832c + iVar4 + 0x201c) = 0;
    *(undefined4 *)(iGpffff832c + iVar4 + 0x2020) = 0;
    *(undefined4 *)(iGpffff832c + iVar4 + 0x2024) = 0;
    *(undefined4 *)(iGpffff832c + iVar4 + 0x2028) = 0;
    iVar4 = iVar4 + 0x18;
  } while (iVar1 < 0x12);
  uVar13 = 0;
  uVar14 = 0;
  *(undefined4 *)(iGpffff832c + 0x204c) = 0x42c80000;
  *(undefined4 *)(iGpffff832c + 0x2050) = 0x42c80000;
  *(undefined4 *)(iGpffff832c + 0x2054) = 0x42c80000;
  *(undefined4 *)(iGpffff832c + 0x2058) = 0x42c80000;
  do {
    fVar22 = *(float *)(iGpffff832c + (uVar14 + iVar10) * 4);
    fVar20 = *(float *)(iGpffff8314 + (iVar16 + 1) * 4);
    fVar21 = *(float *)(iGpffff8314 + (iVar16 + 2) * 4);
    fVar23 = *(float *)(iGpffff8314 + iVar16 * 4);
    if (fVar22 != 0.0) {
      fVar18 = fVar20 + fVar22;
      if (*(float *)(iGpffff832c + 0x2028) < fVar18) {
        *(float *)(iGpffff832c + 0x2028) = fVar18;
      }
      fVar20 = fVar20 - fVar22;
      if (fVar20 < *(float *)(iGpffff832c + 0x2010)) {
        uVar12 = 1 << (uVar14 & 0x1f);
        uVar13 = uVar13 | uVar12;
        if (fVar20 <= 0.05) {
          *(uint *)(iGpffff832c + 0x2014) = *(uint *)(iGpffff832c + 0x2014) | uVar12;
        }
        if (fVar18 <= -0.1) {
          *(uint *)(iGpffff832c + 0x2018) = *(uint *)(iGpffff832c + 0x2018) | uVar12;
        }
        if (fVar20 <= *(float *)(iGpffff832c + 0x2000) + 0.05) {
          *(uint *)(iGpffff832c + 0x201c) = *(uint *)(iGpffff832c + 0x201c) | uVar12;
        }
        if (fVar20 <= *(float *)(iGpffff832c + 0x2004) + 0.05) {
          *(uint *)(iGpffff832c + 0x2020) = *(uint *)(iGpffff832c + 0x2020) | uVar12;
        }
        uVar15 = 0;
        uVar17 = 0;
        fVar20 = *(float *)(iGpffff832c + 0x2008);
        uVar3 = 0;
        do {
          fVar18 = fVar23;
          if (uVar3 != 0) {
            fVar18 = fVar21;
          }
          fStack_4 = fVar18 + fVar22;
          if ((uVar15 & 1) == 0) {
            fVar18 = fVar20 - fStack_4;
          }
          else {
            fStack_4 = fVar18 - fVar22;
            fVar18 = fVar20 + fStack_4;
          }
          if ((((uVar17 ^ (uint)fStack_4) & 0x80000000) != 0) ||
             (fVar19 = (float)fabsf(), fVar19 < fVar20)) {
            pfVar2 = (float *)(iGpffff832c + (uVar15 + 0x813) * 4);
            if (fVar18 < *pfVar2) {
              *pfVar2 = fVar18;
            }
          }
          else {
            if (fVar20 == fVar19) {
              fVar19 = 0.001;
            }
            else {
              fVar19 = fVar19 - fVar20;
              *(uint *)(iGpffff832c + 0x2024) = *(uint *)(iGpffff832c + 0x2024) | uVar12;
            }
            pfVar2 = (float *)(iGpffff832c + (uVar15 + 0x80b) * 4);
            if (*pfVar2 <= fVar19) {
              *pfVar2 = fVar19;
            }
          }
          uVar15 = uVar15 + 1;
          uVar17 = uVar17 + 0x80000000;
          uVar3 = uVar15 & 2;
        } while (uVar15 < 4);
      }
    }
    uVar14 = uVar14 + 1;
    iVar16 = iVar16 + 3;
  } while (uVar14 < 0x20);
  uVar14 = uVar13 & *(uint *)(iGpffff832c + 0x2024);
  if ((uVar14 == uVar13) && ((uVar5 & 0x80000000) != 0)) {
    *(uint *)(iGpffff832c + 0x202c) = uVar14;
    *(uint *)(iGpffff832c + 0x2030) = uVar14;
    *(uint *)(iGpffff832c + 0x2034) = uVar14;
    *(uint *)(iGpffff832c + 0x2038) = uVar14;
  }
  iVar1 = 0x813;
  uVar5 = 0;
  iVar10 = 0x204c;
  iVar16 = 0x203c;
  fVar20 = *(float *)(iGpffff832c + 0x2008);
  do {
    if (*(float *)(iGpffff832c + iVar10) != 100.0) {
      if ((uVar5 & 1) == 0) {
        fVar21 = *(float *)(iGpffff832c + (iVar1 + 1) * 4);
      }
      else {
        fVar21 = *(float *)(iGpffff832c + (iVar1 + -1) * 4);
      }
      fVar21 = fVar20 * 2.0 - fVar21;
      if (fVar21 == 0.0) {
        fVar21 = 0.001;
      }
      *(float *)(iGpffff832c + iVar16) = fVar21;
    }
    uVar5 = uVar5 + 1;
    iVar10 = iVar10 + 4;
    iVar1 = iVar1 + 1;
    iVar16 = iVar16 + 4;
  } while (uVar5 < 4);
  iVar16 = 0x80f;
  iVar10 = 0;
  iVar1 = 0x203c;
  do {
    iVar4 = (iVar16 + 1) * 4;
    fVar21 = *(float *)(iGpffff832c + iVar1);
    fVar20 = *(float *)(iGpffff832c + iVar4);
    if (fVar21 < 0.0) {
      fVar21 = 0.0;
    }
    if (fVar20 < 0.0) {
      fVar20 = 0.0;
    }
    if (fVar20 < fVar21) {
      fVar21 = 0.0;
    }
    else {
      fVar20 = 0.0;
    }
    iVar10 = iVar10 + 1;
    *(float *)(iGpffff832c + iVar1) = fVar21;
    iVar1 = iVar1 + 8;
    iVar16 = iVar16 + 2;
    *(float *)(iGpffff832c + iVar4) = fVar20;
  } while (iVar10 < 2);
  fStack_4 = *(float *)(iGpffff832c + 0x2044);
  fVar20 = *(float *)(iGpffff832c + 0x203c);
  fVar21 = *(float *)(iGpffff832c + 0x2040);
  fVar22 = *(float *)(iGpffff832c + 0x2048);
  if (fStack_4 + fVar22 <= fVar20 + fVar21) {
    fVar20 = 0.0;
    fVar21 = 0.0;
  }
  else {
    fVar22 = 0.0;
    fStack_4 = 0.0;
  }
  *(float *)(iGpffff832c + 0x203c) = fVar20;
  iVar10 = 0;
  iVar16 = 0x805;
  iVar1 = 0;
  *(float *)(iGpffff832c + 0x2040) = fVar21;
  *(float *)(iGpffff832c + 0x2044) = fStack_4;
  *(float *)(iGpffff832c + 0x2048) = fVar22;
  do {
    iVar11 = iVar16 * 4;
    iVar4 = iVar16 + 1;
    iVar10 = iVar10 + 6;
    iVar6 = iVar16 + 2;
    iVar7 = iVar16 + 3;
    iVar8 = iVar16 + 4;
    iVar9 = iVar16 + 5;
    iVar16 = iVar16 + 6;
    *(undefined4 *)(iGpffff8300 + iVar1) = *(undefined4 *)(iGpffff832c + iVar11);
    *(undefined4 *)(iGpffff8300 + iVar1 + 4) = *(undefined4 *)(iGpffff832c + iVar4 * 4);
    *(undefined4 *)(iGpffff8300 + iVar1 + 8) = *(undefined4 *)(iGpffff832c + iVar6 * 4);
    *(undefined4 *)(iGpffff8300 + iVar1 + 0xc) = *(undefined4 *)(iGpffff832c + iVar7 * 4);
    *(undefined4 *)(iGpffff8300 + iVar1 + 0x10) = *(undefined4 *)(iGpffff832c + iVar8 * 4);
    iVar4 = iGpffff8300 + iVar1;
    iVar1 = iVar1 + 0x18;
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iGpffff832c + iVar9 * 4);
  } while (iVar10 < 0x12);
  uVar13 = 0;
  uVar5 = 0;
  iVar16 = iGpffff832c;
  do {
    if ((*(uint *)(iGpffff832c + 0x2014) & 1 << (uVar5 & 0x1f)) != 0) {
      uVar13 = uVar13 | 1 << (*(uint *)(iVar16 + 0x1a80) & 0x1f);
    }
    uVar5 = uVar5 + 1;
    iVar16 = iVar16 + 4;
  } while (uVar5 < 0x20);
  uVar14 = 0;
  uVar5 = 0;
  *(uint *)(iGpffff8300 + 0x48) = uVar13;
  iVar16 = iGpffff832c;
  do {
    if ((*(uint *)(iGpffff832c + 0x2024) & 1 << (uVar5 & 0x1f)) != 0) {
      uVar14 = uVar14 | 1 << (*(uint *)(iVar16 + 0x1a80) & 0x1f);
    }
    uVar5 = uVar5 + 1;
    iVar16 = iVar16 + 4;
  } while (uVar5 < 0x20);
  uVar13 = 0;
  uVar5 = 0;
  *(uint *)(iGpffff8300 + 0x4c) = uVar14;
  iVar16 = iGpffff832c;
  do {
    if ((*(uint *)(iGpffff832c + 0x201c) & 1 << (uVar5 & 0x1f)) != 0) {
      uVar13 = uVar13 | 1 << (*(uint *)(iVar16 + 0x1a80) & 0x1f);
    }
    uVar5 = uVar5 + 1;
    iVar16 = iVar16 + 4;
  } while (uVar5 < 0x20);
  uVar5 = 0;
  uVar14 = 0;
  *(uint *)(iGpffff8300 + 0x50) = uVar13;
  iVar16 = iGpffff832c;
  do {
    if ((*(uint *)(iGpffff832c + 0x2020) & 1 << (uVar14 & 0x1f)) != 0) {
      uVar5 = uVar5 | 1 << (*(uint *)(iVar16 + 0x1a80) & 0x1f);
    }
    uVar14 = uVar14 + 1;
    iVar16 = iVar16 + 4;
  } while (uVar14 < 0x20);
  *(uint *)(iGpffff8300 + 0x54) = uVar5;
  uGpffff82fc = 0x58;
  return;
}

