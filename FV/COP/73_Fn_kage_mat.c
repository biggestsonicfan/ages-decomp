/* COP 73 Fn_kage_mat: Fn_kage_mat @ 001926c0, 2 argument words, 0 reply bytes */

void Fn_kage_mat(void)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  undefined4 *puVar4;
  ushort uVar5;
  undefined4 *puVar6;
  float fVar7;
  float fStack_c;
  float afStack_8 [2];
  
  puVar4 = puGpffff82cc;
  sVar1 = *psGpffff830c;
  uVar2 = psGpffff830c[2];
  FUN_00195f00(afStack_8,&fStack_c,sVar1);
  afStack_8[0] = 1.0 / afStack_8[0];
  puVar6 = (undefined4 *)(iGpffff832c + 0x2000);
  fVar7 = *(float *)(iGpffff832c + 0x2000);
  fStack_c = afStack_8[0] * fStack_c;
  uVar5 = uVar2 & 0x7fff;
  if ((uVar2 & 0x8000) == 0) {
    uVar5 = uVar2 | 0x8000;
  }
  sVar3 = -uVar5;
  FUN_0018f580();
  func_0x00195300(uVar5);
  *puVar4 = 0x3f800000;
  puVar4[1] = 0x3f800000;
  puVar4[2] = afStack_8[0];
  cprSubScaleCurMat(puVar4);
  func_0x00195300(sVar3);
  func_0x0018e640(1);
  FUN_0018f480();
  FUN_0018f580();
  func_0x00195300(uVar5);
  *puVar4 = 0;
  puVar4[1] = *puVar6;
  puVar4[2] = -fVar7 * fStack_c;
  func_0x00195200(puVar4);
  *puVar4 = 0x3f800000;
  puVar4[1] = 0x3f800000;
  puVar4[2] = afStack_8[0];
  cprSubScaleCurMat(puVar4);
  func_0x00195300(sVar3);
  func_0x0018e640(2);
  FUN_0018f480();
  FUN_0018f580();
  func_0x0018f400();
  func_0x00195300(uVar5);
  *puVar4 = 0x3f800000;
  puVar4[1] = 0;
  puVar4[2] = 0x3f800000;
  cprSubScaleCurMat(puVar4);
  func_0x00195380(sVar1 + -0x4000);
  func_0x00195300(sVar3);
  func_0x0018e640(0);
  FUN_0018f480();
  uGpffff82fc = 0;
  return;
}

