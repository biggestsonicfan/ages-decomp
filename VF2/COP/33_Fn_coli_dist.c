/* COP 33 Fn_coli_dist: cprCliColiDist @ 0019c540, 12 argument words, 4 reply bytes */

void cprCliColiDist(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CprMain_IRam;
  *(undefined4 *)(CprMain_IRam + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(float *)(iVar1 + 0x24) = *(float *)(iVar1 + 0x18) - *(float *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(float *)(iVar1 + 0x28) = *(float *)(iVar1 + 0x1c) - *(float *)(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(float *)(iVar1 + 0x2c) = *(float *)(iVar1 + 0x20) - *(float *)(iVar1 + 0x14);
  uVar2 = CalcDist2Frame();
  uVar2 = cprSubSqrt(uVar2);
  *CprMain_RfoTop = uVar2;
  return;
}

