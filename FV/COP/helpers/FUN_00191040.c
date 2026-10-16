/* helper FUN_00191040 @ 00191040, called (depth 1) from Fn_coli_trans_xz */

void FUN_00191040(float param_1,float param_2,float *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar3 = param_4 + 0xc0;
  iVar4 = 0;
  iVar2 = param_4 << 2;
  iVar1 = iVar3 * 4;
  do {
    iVar9 = param_4 + 1;
    iVar5 = param_4 + 2;
    iVar4 = iVar4 + 1;
    iVar6 = iVar3 + 1;
    param_4 = param_4 + 3;
    iVar7 = iVar3 + 2;
    fVar12 = *(float *)(iRam0028a484 + iVar9 * 4);
    iVar3 = iVar3 + 3;
    fVar14 = param_3[1];
    pfVar8 = (float *)(iRam0028a484 + iVar2);
    pfVar10 = (float *)(iRam0028a484 + iVar1);
    iVar2 = iVar2 + 0xc;
    iVar1 = iVar1 + 0xc;
    fVar11 = *(float *)(iRam0028a484 + iVar5 * 4) - param_3[2];
    fVar13 = *pfVar8 - *param_3;
    *pfVar10 = fVar13 * param_1 + fVar11 * param_2;
    *(float *)(iRam0028a484 + iVar6 * 4) = fVar12 - fVar14;
    *(float *)(iRam0028a484 + iVar7 * 4) = fVar11 * param_1 - fVar13 * param_2;
  } while (iVar4 < 0x20);
  return;
}

