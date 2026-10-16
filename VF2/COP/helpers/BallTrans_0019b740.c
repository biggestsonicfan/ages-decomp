/* helper BallTrans @ 0019b740, called (depth 1) from cprCliColiTransXZ */

void BallTrans(void)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar2 = CprMain_b1;
  pfVar8 = (float *)(CprMain_IRam + 0xc);
  pfVar7 = (float *)(CprMain_IRam + 0x10);
  pfVar6 = (float *)(CprMain_IRam + 0x14);
  pfVar5 = (float *)(CprMain_IRam + 0x34);
  pfVar4 = (float *)(CprMain_IRam + 0x30);
  iVar9 = 0x1e;
  do {
    fVar13 = *(float *)(CprMain_ERam + (uint)CprMain_x1 * 4) - *pfVar8;
    fVar10 = *(float *)(CprMain_ERam + (uint)(ushort)(CprMain_x1 + 1) * 4);
    fVar11 = *pfVar7;
    fVar12 = *(float *)(CprMain_ERam + (uint)(ushort)(CprMain_x1 + 2) * 4) - *pfVar6;
    uVar3 = (uint)CprMain_x1;
    CprMain_x1 = CprMain_x1 + 1;
    *(float *)(CprMain_ERam + (uVar2 + uVar3) * 4) = fVar12 * *pfVar5 + fVar13 * *pfVar4;
    uVar3 = (uint)CprMain_x1;
    CprMain_x1 = CprMain_x1 + 1;
    *(float *)(CprMain_ERam + (uVar2 + uVar3) * 4) = fVar10 - fVar11;
    uVar3 = (uint)CprMain_x1;
    CprMain_x1 = CprMain_x1 + 1;
    bVar1 = iVar9 != 1;
    *(float *)(CprMain_ERam + (uVar2 + uVar3) * 4) = fVar12 * *pfVar4 - fVar13 * *pfVar5;
    iVar9 = iVar9 + -1;
  } while (bVar1);
  return;
}

