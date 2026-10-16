/* EXT 7c: line_disp @ 001f9240; patched over i960 07ab24 (arcade line_disp) */

undefined8 line_disp(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  i960_regs *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  uint uStack_44;
  float fStack_3c;
  
  piVar4 = i960GetRegs();
  fVar2 = fRam0172af00;
  fVar9 = fRam0172aef8;
  fVar8 = fRam0172add0 - -5.0;
  FUN_0018df40();
  FUN_0018df40(fVar8);
  FUN_0018df40(fVar9);
  uVar5 = FUN_0018e100();
  FUN_0018df40();
  FUN_0018df40(fVar9);
  FUN_0018df40(fVar8);
  uVar6 = FUN_0018e100();
  FUN_0018df40();
  FUN_0018df40(uVar6);
  FUN_0018df40(-fVar2);
  uVar6 = FUN_0018e100();
  FUN_0018df40();
  FUN_0018df40(fVar8);
  FUN_0018df40(fVar2);
  FUN_0018df40(fVar9);
  uVar7 = FUN_0018e100();
  uStack_44 = 0;
  fStack_3c = fVar2 * 0.5 + -0.2;
  while( true ) {
    fVar3 = fRam0172af00;
    fVar2 = fRam0172aef8;
    if (uStack_44 < 6) {
      if (uStack_44 == 5) {
        bVar1 = false;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    FUN_0018df40();
    FUN_0018df40(0x9801313);
    FUN_0018df40(0x9801313);
    FUN_0018e100();
    FUN_0018df40();
    FUN_0018df40();
    FUN_0018df40(fVar8 * 0.5 + -5.0);
    FUN_0018df40(fStack_3c);
    FUN_0018df40(fVar9 * 0.5 + 5.7);
    FUN_0018df40();
    FUN_0018df40(uVar5);
    FUN_0018df40();
    FUN_0018df40(uVar6);
    FUN_0018df40();
    FUN_0018df40(uVar7);
    FUN_0018df40(0x3f800000);
    FUN_0018df40(0x3f800000);
    piVar4->g[1] = 0;
    piVar4->g[0] = piVar4->g[4];
    set_obj(0);
    FUN_0018df40();
    uStack_44 = uStack_44 + 1;
    fStack_3c = fStack_3c + 0.6;
  }
  fVar9 = fRam0172add0 - 5.0;
  FUN_0018df40();
  FUN_0018df40(fVar9);
  FUN_0018df40(fVar2);
  uVar5 = FUN_0018e100();
  FUN_0018df40();
  FUN_0018df40(fVar2);
  FUN_0018df40(fVar9);
  uVar6 = FUN_0018e100();
  FUN_0018df40();
  FUN_0018df40(uVar6);
  FUN_0018df40(-fVar3);
  uVar6 = FUN_0018e100();
  FUN_0018df40();
  FUN_0018df40(fVar9);
  FUN_0018df40(fVar3);
  FUN_0018df40(fVar2);
  uVar7 = FUN_0018e100();
  uStack_44 = 0;
  fStack_3c = fVar3 * 0.5 + -0.2;
  while( true ) {
    if (uStack_44 < 6) {
      if (uStack_44 == 5) {
        bVar1 = false;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    FUN_0018df40();
    FUN_0018df40(0x9801313);
    FUN_0018df40(0x9801313);
    FUN_0018e100();
    FUN_0018df40();
    FUN_0018df40();
    FUN_0018df40(fVar9 * 0.5 + 5.0);
    FUN_0018df40(fStack_3c);
    FUN_0018df40(fVar2 * 0.5 + 5.7);
    FUN_0018df40();
    FUN_0018df40(uVar5);
    FUN_0018df40();
    FUN_0018df40(uVar6);
    FUN_0018df40();
    FUN_0018df40(uVar7);
    FUN_0018df40(0x3f800000);
    FUN_0018df40(0x3f800000);
    piVar4->g[1] = 0;
    piVar4->g[0] = 0xa92;
    set_obj(0);
    FUN_0018df40();
    uStack_44 = uStack_44 + 1;
    fStack_3c = fStack_3c + 0.6;
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

