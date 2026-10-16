/* COP 75 Fn_kage_flag: Fn_kage_flag @ 00192980, 6 argument words, 8 reply bytes */

void Fn_kage_flag(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_4;
  
  iVar1 = piGpffff830c[1];
  fVar16 = (float)piGpffff830c[3];
  fVar13 = (float)piGpffff830c[4];
  fVar14 = (float)piGpffff830c[5];
  fVar15 = (float)piGpffff830c[2];
  if (*piGpffff830c == 0) {
    iVar9 = 16000;
    iVar4 = 0x6e0;
  }
  else {
    iVar9 = 0x7e80;
    iVar4 = 0x7e0;
  }
  uVar7 = 0;
  uVar8 = 0;
  uVar6 = 0;
  iVar5 = 0;
  iVar4 = iVar4 << 2;
  do {
    piVar2 = (int *)(iGpffff832c + iVar4);
    iVar4 = iVar4 + 4;
    iVar3 = *piVar2 * 3 + iVar9;
    fVar11 = *(float *)(iGpffff8314 + (iVar3 + 1) * 4);
    fVar12 = fVar15 * fVar11 + *(float *)(iGpffff8314 + iVar3 * 4) + 0.0;
    fVar10 = fVar16 * fVar11 + *(float *)(iGpffff8314 + (iVar3 + 2) * 4) + 0.0;
    if (iVar1 == 0) {
      fVar12 = (float)((ulong)((long)(int)fVar12 << 0x21) >> 0x21);
      fStack_4 = (float)((ulong)((long)(int)fVar10 << 0x21) >> 0x21);
      if (fStack_4 <= fVar12) {
        fStack_4 = fVar12;
      }
    }
    else {
      fStack_4 = (float)FUN_00195dc0(fVar12 * fVar12 + fVar10 * fVar10 + 0.0);
      fStack_4 = fStack_4 * 0.707106;
    }
    if ((((uint)fVar11 & 0x80000000) != 0) || (fVar13 < fStack_4)) {
      if (fVar14 <= fStack_4) {
        uVar8 = uVar8 | 1 << (uVar6 & 0x1f);
      }
    }
    else {
      uVar7 = uVar7 | 1 << (uVar6 & 0x1f);
    }
    iVar5 = iVar5 + 1;
    uVar6 = uVar6 + 1;
  } while (iVar5 < 0x10);
  *puGpffff8300 = uVar7;
  puGpffff8300[1] = uVar8;
  uGpffff82fc = 8;
  return;
}

