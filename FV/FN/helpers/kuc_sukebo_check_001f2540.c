/* helper kuc_sukebo_check @ 001f2540, called (depth 2) from rob_disp */

/* WARNING: Removing unreachable block (ram,0x001f25a0) */

undefined8 kuc_sukebo_check(long param_1)

{
  i960_regs *piVar1;
  float fVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_20;
  undefined4 uStack_14;
  uint uStack_10;
  
  piVar1 = i960GetRegs();
  fStack_20 = fRam016c11fc;
  if (fRam016c11fc == 0.0) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 2) == 0) {
    sysMemReadT(&uStack_40,0x50a420);
    sysMemReadT(&uStack_30,piVar1->g[7] + 500);
    uStack_14 = 0x16002c2c;
    FUN_0018df40();
    FUN_0018df40(uStack_40);
    FUN_0018df40(uStack_30);
    FUN_0018df40(uStack_3c);
    FUN_0018df40(uStack_2c);
    FUN_0018df40(uStack_38);
    FUN_0018df40(uStack_28);
    fVar2 = (float)FUN_0018e100();
    if (fStack_20 <= fVar2) {
      if (fVar2 == fStack_20) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 1) == 0) {
      uStack_14 = 0x3ecccccd;
      if (fStack_20 <= fVar2 + 0.4) {
        if (fVar2 + 0.4 == fStack_20) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
      }
      else {
        uStack_10 = 4;
      }
      if ((uStack_10 & 4) == 0) {
        uStack_14 = 1;
        sysMemWriteW(piVar1->g[7] + 0xc8c,&uStack_14);
      }
    }
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

