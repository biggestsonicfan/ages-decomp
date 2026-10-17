/* helper decide_dir @ 001e0a80, called (depth 1) from coli_cont_cop */

/* WARNING: Removing unreachable block (ram,0x001e0cd4) */

undefined8 decide_dir(long param_1)

{
  i960_regs *piVar1;
  float fVar2;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  float fStack_38;
  uint uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  uint uStack_10;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  piVar1->g[7] = uRam016b75d4;
  piVar1->g[8] = uRam016b75d8;
  fStack_20 = 0.4;
  sysMemReadW(&fStack_44,piVar1->g[7] + 0x1a4);
  sysMemReadW(&fStack_40,piVar1->g[8] + 0x1a4);
  uStack_3c = (uint)fStack_44 | (uint)fStack_40;
  if (((uStack_3c & 0x20000000) == 0) && ((uStack_3c & 0x40000) == 0)) {
    sysMemReadW(&fStack_38,piVar1->g[7] + 0x804);
    sysMemReadW(&uStack_34,piVar1->g[8] + 0x804);
    fStack_14 = (float)((uint)fStack_38 | uStack_34);
    if (((uint)fStack_14 & 0x100) == 0) {
LAB_001e0b84:
      if (((uint)fStack_44 & 0x4000) != 0) {
        fStack_20 = 0.85;
      }
    }
    else {
      sysMemReadB(&bStack_1,piVar1->g[7] + 0x821);
      fStack_30 = (float)(uint)bStack_1;
      sysMemReadB(&bStack_2,piVar1->g[8] + 0x821);
      fVar2 = (float)(uint)bStack_2;
      fStack_2c = fVar2;
      if (((uint)fStack_38 & 0x100) == 0) {
        if ((uStack_34 & 0x100) == 0) goto LAB_001e0b84;
        fStack_2c = fStack_30;
        fStack_30 = (float)(uint)bStack_2;
        fStack_14 = fVar2;
      }
      if ((uint)fStack_30 < 6) {
        if (fStack_30 == 7.00649e-45) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
      }
      else {
        uStack_10 = 4;
      }
      if ((uStack_10 & 5) != 0) goto LAB_001e0b84;
      fStack_20 = 0.3;
    }
    sysMemReadW(&fStack_1c,piVar1->g[7] + 0x5f4);
    sysMemReadW(&fStack_18,piVar1->g[7] + 0x7d8);
    if (fStack_18 <= fStack_1c) {
      if (fStack_1c == fStack_18) {
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
      fStack_20 = 0.0;
    }
    sysMemWriteW(piVar1->g[0xd] + 0x270,&fStack_20);
    sysMemReadW(&fStack_44,piVar1->g[0xd] + 0x168);
    if (fStack_44 <= fStack_20) {
      if (fStack_20 == fStack_44) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 1) != 0) goto LAB_001e0d28;
  }
  sysMemReadT(&fStack_40,piVar1->g[7] + 500);
  sysMemReadT(&fStack_30,piVar1->g[8] + 500);
  fStack_1c = 0.0;
  fStack_20 = fStack_30 - fStack_40;
  fStack_18 = fStack_28 - fStack_38;
  fStack_14 = (float)((ulong)((long)(int)((uint)fStack_20 | (uint)fStack_18) << 0x21) >> 0x21);
  if (((long)(int)((uint)fStack_20 | (uint)fStack_18) & 0x7fffffffU) == 0) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 5) == 0) {
    fStack_20 = 0.0;
    fStack_1c = 0.0;
    fStack_18 = 0.0;
  }
  else {
    fStack_14 = 1.656794e-24;
    FUN_0018df40();
    FUN_0018df40(fStack_20);
    FUN_0018df40(fStack_1c);
    FUN_0018df40(fStack_18);
    fStack_20 = (float)FUN_0018e100();
    fStack_1c = (float)FUN_0018e100();
    fStack_18 = (float)FUN_0018e100();
  }
  sysMemWriteW(piVar1->g[0xd] + 0xd4,&fStack_20);
  sysMemWriteW(piVar1->g[0xd] + 0xd8,&fStack_1c);
  sysMemWriteW(piVar1->g[0xd] + 0xdc,&fStack_18);
LAB_001e0d28:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

