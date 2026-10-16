/* COP 3a Fn_area_table_gen: Fn_area_table_gen @ 00191c80, 4 argument words, 0 reply bytes */

void Fn_area_table_gen(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar12 = *puGpffff830c;
  uVar11 = puGpffff830c[1];
  uVar1 = puGpffff830c[2];
  uVar2 = puGpffff830c[3];
  *(uint *)(iGpffff832c + 0x1068) = uVar1;
  *(uint *)(iGpffff832c + 0x106c) = uVar2;
  memset(iGpffff8314 + 0xf880,0xff,0x80);
  uVar15 = 0;
  do {
    uVar13 = 1;
    memset(iGpffff832c + 0xd00,0,0x200);
    iVar6 = uVar15 + 0x3f40;
    iVar7 = 0;
    iVar5 = iVar6 * 4;
    iVar3 = 0x1800;
    do {
      iVar8 = iVar6 + 0x60;
      iVar6 = iVar6 + 3;
      pfVar10 = (float *)(iGpffff8314 + iVar5);
      fVar16 = *(float *)(iGpffff8314 + iVar8 * 4);
      iVar5 = iVar5 + 0xc;
      fVar18 = *pfVar10;
      fVar17 = fVar18;
      if (fVar18 <= fVar16) {
        fVar17 = fVar16;
        fVar16 = fVar18;
      }
      fVar18 = *(float *)(iGpffff832c + iVar3);
      iVar3 = iVar3 + 4;
      if (fVar18 != 0.0) {
        uVar9 = uVar12 & 1;
        uVar12 = uVar12 >> 1;
        if ((uVar9 != 0) && (uVar1 != 4)) {
          fVar18 = fVar18 * *(float *)(iGpffff832c + 0x1bc0);
        }
        fVar16 = ((fVar16 - fVar18) * 16.0 + 32.0) - 0.5;
        if (2.1474836e+09 <= fVar16) {
          fVar16 = fVar16 - 2.1474836e+09;
        }
        iVar8 = iGpffff832c + ((int)fVar16 & 0x3fU) * 4;
        fVar17 = ((fVar17 + fVar18) * 16.0 + 32.0) - 0.5;
        *(uint *)(iVar8 + 0xd00) = *(uint *)(iVar8 + 0xd00) | uVar13;
        if (2.1474836e+09 <= fVar17) {
          fVar17 = fVar17 - 2.1474836e+09;
        }
        iVar8 = iGpffff832c + ((int)fVar17 & 0x3fU) * 4;
        *(uint *)(iVar8 + 0xe00) = *(uint *)(iVar8 + 0xe00) | uVar13;
      }
      iVar7 = iVar7 + 1;
      uVar13 = uVar13 << 1;
    } while (iVar7 < 0x20);
    iVar3 = 1;
    iVar5 = 4;
    do {
      iVar3 = iVar3 + 8;
      iVar6 = iGpffff832c + iVar5;
      *(uint *)(iVar6 + 0xd00) = *(uint *)(iVar6 + 0xd00) | *(uint *)(iVar6 + 0xcfc);
      iVar6 = iGpffff832c + iVar5;
      *(uint *)(iVar6 + 0xd04) = *(uint *)(iVar6 + 0xd04) | *(uint *)(iVar6 + 0xd00);
      iVar6 = iGpffff832c + iVar5;
      *(uint *)(iVar6 + 0xd08) = *(uint *)(iVar6 + 0xd08) | *(uint *)(iVar6 + 0xd04);
      iVar6 = iGpffff832c + iVar5;
      *(uint *)(iVar6 + 0xd0c) = *(uint *)(iVar6 + 0xd0c) | *(uint *)(iVar6 + 0xd08);
      iVar6 = iGpffff832c + iVar5;
      *(uint *)(iVar6 + 0xd10) = *(uint *)(iVar6 + 0xd10) | *(uint *)(iVar6 + 0xd0c);
      iVar6 = iGpffff832c + iVar5;
      *(uint *)(iVar6 + 0xd14) = *(uint *)(iVar6 + 0xd14) | *(uint *)(iVar6 + 0xd10);
      iVar6 = iGpffff832c + iVar5;
      *(uint *)(iVar6 + 0xd18) = *(uint *)(iVar6 + 0xd18) | *(uint *)(iVar6 + 0xd14);
      iVar6 = iGpffff832c + iVar5;
      iVar5 = iVar5 + 0x20;
      *(uint *)(iVar6 + 0xd1c) = *(uint *)(iVar6 + 0xd1c) | *(uint *)(iVar6 + 0xd18);
    } while (iVar3 < 0x37);
    iVar3 = iVar3 * 4;
    iVar5 = iGpffff832c + iVar3;
    *(uint *)(iVar5 + 0xd00) = *(uint *)(iVar5 + 0xd00) | *(uint *)(iVar5 + 0xcfc);
    iVar5 = iGpffff832c + iVar3;
    *(uint *)(iVar5 + 0xd04) = *(uint *)(iVar5 + 0xd04) | *(uint *)(iVar5 + 0xd00);
    iVar5 = iGpffff832c + iVar3;
    *(uint *)(iVar5 + 0xd08) = *(uint *)(iVar5 + 0xd08) | *(uint *)(iVar5 + 0xd04);
    iVar5 = iGpffff832c + iVar3;
    *(uint *)(iVar5 + 0xd0c) = *(uint *)(iVar5 + 0xd0c) | *(uint *)(iVar5 + 0xd08);
    iVar5 = iGpffff832c + iVar3;
    *(uint *)(iVar5 + 0xd10) = *(uint *)(iVar5 + 0xd10) | *(uint *)(iVar5 + 0xd0c);
    iVar3 = iGpffff832c + iVar3;
    *(uint *)(iVar3 + 0xd14) = *(uint *)(iVar3 + 0xd14) | *(uint *)(iVar3 + 0xd10);
    iVar3 = 1;
    do {
      iVar5 = iVar3;
      puVar4 = (uint *)(iGpffff832c + (0x3bf - iVar5) * 4);
      *puVar4 = *puVar4 | *(uint *)(iGpffff832c + (0x3c0 - iVar5) * 4);
      iVar3 = iVar5 + 8;
      puVar4 = (uint *)(iGpffff832c + (0x3bf - (iVar5 + 1)) * 4);
      *puVar4 = *puVar4 | *(uint *)(iGpffff832c + (0x3c0 - (iVar5 + 1)) * 4);
      puVar4 = (uint *)(iGpffff832c + (0x3bf - (iVar5 + 2)) * 4);
      *puVar4 = *puVar4 | *(uint *)(iGpffff832c + (0x3c0 - (iVar5 + 2)) * 4);
      puVar4 = (uint *)(iGpffff832c + (0x3bf - (iVar5 + 3)) * 4);
      *puVar4 = *puVar4 | *(uint *)(iGpffff832c + (0x3c0 - (iVar5 + 3)) * 4);
      puVar4 = (uint *)(iGpffff832c + (0x3bf - (iVar5 + 4)) * 4);
      *puVar4 = *puVar4 | *(uint *)(iGpffff832c + (0x3c0 - (iVar5 + 4)) * 4);
      puVar4 = (uint *)(iGpffff832c + (0x3bf - (iVar5 + 5)) * 4);
      *puVar4 = *puVar4 | *(uint *)(iGpffff832c + (0x3c0 - (iVar5 + 5)) * 4);
      puVar4 = (uint *)(iGpffff832c + (0x3bf - (iVar5 + 6)) * 4);
      *puVar4 = *puVar4 | *(uint *)(iGpffff832c + (0x3c0 - (iVar5 + 6)) * 4);
      puVar4 = (uint *)(iGpffff832c + (0x3bf - (iVar5 + 7)) * 4);
      *puVar4 = *puVar4 | *(uint *)(iGpffff832c + (0x3c0 - (iVar5 + 7)) * 4);
    } while (iVar3 < 0x37);
    iVar8 = 0x1c00;
    iVar7 = 0;
    puVar4 = (uint *)(iGpffff832c + (0x3bf - iVar3) * 4);
    *puVar4 = *puVar4 | *(uint *)(iGpffff832c + (0x3c0 - iVar3) * 4);
    iVar6 = uVar15 + 0x7f40;
    puVar4 = (uint *)(iGpffff832c + (0x3bf - (iVar5 + 9)) * 4);
    iVar3 = 0;
    iVar14 = iVar6 * 4;
    *puVar4 = *puVar4 | *(uint *)(iGpffff832c + (0x3c0 - (iVar5 + 9)) * 4);
    puVar4 = (uint *)(iGpffff832c + (0x3bf - (iVar5 + 10)) * 4);
    *puVar4 = *puVar4 | *(uint *)(iGpffff832c + (0x3c0 - (iVar5 + 10)) * 4);
    puVar4 = (uint *)(iGpffff832c + (0x3bf - (iVar5 + 0xb)) * 4);
    *puVar4 = *puVar4 | *(uint *)(iGpffff832c + (0x3c0 - (iVar5 + 0xb)) * 4);
    puVar4 = (uint *)(iGpffff832c + (0x3bf - (iVar5 + 0xc)) * 4);
    *puVar4 = *puVar4 | *(uint *)(iGpffff832c + (0x3c0 - (iVar5 + 0xc)) * 4);
    puVar4 = (uint *)(iGpffff832c + (0x3bf - (iVar5 + 0xd)) * 4);
    *puVar4 = *puVar4 | *(uint *)(iGpffff832c + (0x3c0 - (iVar5 + 0xd)) * 4);
    do {
      iVar5 = iVar6 + 0x60;
      iVar6 = iVar6 + 3;
      pfVar10 = (float *)(iGpffff8314 + iVar14);
      fVar18 = *(float *)(iGpffff8314 + iVar5 * 4);
      iVar14 = iVar14 + 0xc;
      fVar16 = *pfVar10;
      fVar17 = fVar18;
      if (fVar16 <= fVar18) {
        fVar17 = fVar16;
        fVar16 = fVar18;
      }
      fVar18 = *(float *)(iGpffff832c + iVar8);
      iVar8 = iVar8 + 4;
      if (fVar18 == 0.0) {
        *(undefined4 *)(iGpffff8314 + iVar3 * 4 + 0xf880) = 0;
        break;
      }
      uVar13 = uVar11 & 1;
      uVar11 = uVar11 >> 1;
      if ((uVar13 != 0) && (uVar2 != 4)) {
        fVar18 = fVar18 * *(float *)(iGpffff832c + 0x1fc0);
      }
      fVar17 = (fVar17 - fVar18) * 16.0 + 32.0;
      if ((fVar17 < 0.0) || (64.0 <= fVar17)) {
        *(undefined4 *)(iVar7 + iGpffff8314 + 0xf880) = 0;
      }
      else {
        fVar17 = fVar17 - 0.5;
        if (2.1474836e+09 <= fVar17) {
          fVar17 = fVar17 - 2.1474836e+09;
        }
        fVar16 = (fVar16 + fVar18) * 16.0 + 32.0;
        if ((fVar16 < 0.0) || (64.0 <= fVar16)) {
          *(undefined4 *)(iVar7 + iGpffff8314 + 0xf880) = 0;
        }
        else {
          fVar16 = fVar16 - 0.5;
          if (2.1474836e+09 <= fVar16) {
            fVar16 = fVar16 - 2.1474836e+09;
          }
          *(uint *)(iVar7 + iGpffff8314 + 0xf880) =
               *(uint *)(iVar7 + iGpffff8314 + 0xf880) &
               *(uint *)(iGpffff832c + ((int)fVar16 & 0x3fU) * 4 + 0xd00) &
               *(uint *)(iGpffff832c + ((int)fVar17 & 0x3fU) * 4 + 0xe00);
        }
      }
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar3 < 0x20);
    uVar15 = uVar15 + 1;
    if (2 < uVar15) {
      memset(iGpffff8314 + 0xf600,0,0x40);
      uGpffff82fc = 0;
      return;
    }
  } while( true );
}

