/* COP 79 Fn_ziku_rot: Fn_ziku_rot @ 00193840, 5 argument words, 0 reply bytes */

void Fn_ziku_rot(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_8;
  float fStack_4;
  
  fVar7 = (float)puGpffff830c[2];
  fVar5 = (float)puGpffff830c[3];
  fVar6 = (float)puGpffff830c[4];
  pfVar1 = (float *)(iGpffff82d4 + (*puGpffff830c / 9) * 0x40);
  FUN_00195f00(&fStack_4,&fStack_8,(short)puGpffff830c[1]);
  fVar4 = 1.0 - fStack_8;
  *pfVar1 = fVar4 * fVar7 * fVar7 + fStack_8 + 0.0;
  fVar3 = fVar4 * fVar7 * fVar5;
  pfVar1[5] = fVar4 * fVar5 * fVar5 + fStack_8 + 0.0;
  fVar2 = fVar4 * fVar7 * fVar6;
  pfVar1[10] = fVar4 * fVar6 * fVar6 + fStack_8 + 0.0;
  fVar4 = fVar4 * fVar5 * fVar6;
  pfVar1[1] = fVar3 + fVar6 * fStack_4;
  pfVar1[4] = fVar3 - fVar6 * fStack_4;
  pfVar1[2] = fVar2 - fVar5 * fStack_4;
  pfVar1[8] = fVar2 + fVar5 * fStack_4;
  pfVar1[6] = fVar4 + fVar7 * fStack_4;
  pfVar1[9] = fVar4 - fVar7 * fStack_4;
  uGpffff82fc = 0;
  return;
}

