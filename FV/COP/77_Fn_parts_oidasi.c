/* COP 77 Fn_parts_oidasi: Fn_parts_oidasi @ 00193600, 4 argument words, 36 reply bytes */

void Fn_parts_oidasi(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar4 = *puGpffff830c;
  uVar5 = puGpffff830c[1];
  uVar2 = puGpffff830c[2];
  uVar3 = puGpffff830c[3];
  uStack_4 = 0;
  uStack_8 = 0;
  fVar1 = (float)FUN_00193400(uVar4,uVar5,uVar2,uVar3,16000,0x600,&uStack_4,&uStack_8);
  if (fVar1 == 0.0) {
    FUN_00193400(uVar4,uVar5,uVar2,uVar3,0x7e80,0x700,&uStack_4,&uStack_8);
  }
  *puGpffff8300 = uStack_4;
  puGpffff8300[1] = uStack_8;
  uGpffff82fc = 8;
  return;
}

