/* helper FUN_00193400 @ 00193400, called (depth 1) from Fn_parts_oidasi */

float FUN_00193400(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6,
                  float *param_7,float *param_8)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar10 = 0.0;
  fVar7 = (float)FUN_00195600(*(float *)(iRam0028a484 + (param_5 + 0x27) * 4) - param_1,
                              *(float *)(iRam0028a484 + (param_5 + 0x28) * 4) - param_2,
                              *(float *)(iRam0028a484 + (param_5 + 0x29) * 4) - param_3);
  uVar6 = 0;
  if (fVar7 <= 1.4) {
    iVar5 = param_5 << 2;
    param_6 = param_6 << 2;
    do {
      iVar1 = param_5 + 1;
      iVar2 = param_5 + 2;
      param_5 = param_5 + 3;
      pfVar4 = (float *)(iRam0028a484 + iVar5);
      iVar5 = iVar5 + 0xc;
      pfVar3 = (float *)(iRam0028a49c + param_6);
      param_6 = param_6 + 4;
      fVar11 = *pfVar3;
      fVar7 = *pfVar4 - param_1;
      fVar9 = *(float *)(iRam0028a484 + iVar2 * 4) - param_3;
      if (fVar11 != 0.0) {
        fVar8 = (float)FUN_00195600(fVar7,*(float *)(iRam0028a484 + iVar1 * 4) - param_2,fVar9);
        if (fVar8 <= fVar11 + param_4) {
          fVar10 = 1.0 - fVar8 / (fVar11 + param_4);
          fVar11 = *param_8;
          *param_7 = (*param_7 + 0.0) - fVar7 * fVar10;
          *param_8 = (fVar11 + 0.0) - fVar9 * fVar10;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x20);
  }
  return fVar10;
}

