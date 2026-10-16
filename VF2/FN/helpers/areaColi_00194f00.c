/* helper areaColi @ 00194f00, called (depth 1) from sysCopPatchColiContFast */

void areaColi(void)

{
  bool bVar1;
  i960_regs *piVar2;
  int iVar3;
  uint uVar4;
  i960_regs *piVar5;
  float fVar6;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  int iStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  int iStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  uint uStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar2 = i960GetRegs();
  iVar3 = sysGetWorkRamAddr();
  fStack_34 = 9.438581e-38;
  sysMemReadB(&fStack_4,piVar2->g[7] + 4);
  fStack_4 = (float)(uint)fStack_4._0_1_;
  sysMemReadW(&fStack_20,(int)fStack_4 * 4 + 0x23944);
  fStack_1c = 0.0;
  do {
    sysMemReadB(&fStack_14,(int)fStack_1c + 0x2394c);
    fStack_14 = (float)((uint)fStack_14 & 0xff);
    fStack_18 = (float)((int)fStack_1c * 0xc);
    sysMemReadT(&fStack_30,(int)fStack_18 + (int)fStack_20);
    sysMemReadW(&fStack_24,(int)fStack_34 + (int)fStack_14 * 0x10 + 0xc);
    sysMemWriteQ(piVar2->g[7] + (int)fStack_14 * 0x10 + 0xd00,&fStack_30);
    fVar6 = (float)((int)fStack_1c + 1);
    bVar1 = fStack_1c != 4.06377e-44;
    fStack_1c = fVar6;
  } while (bVar1);
  fStack_4 = 0.05;
  fStack_10 = *(float *)(iVar3 + 0xa010);
  sysMemReadW(&fStack_14,piVar2->g[7] + 0x1c);
  fStack_8 = fStack_4;
  uStack_c = 0xbdcccccd;
  fStack_10 = fStack_10 + fStack_4;
  fStack_14 = fStack_14 + fStack_4;
  sysMemWriteW(piVar2->g[0xd] + 0xfc,&fStack_8);
  sysMemWriteW(piVar2->g[0xd] + 0x100,&uStack_c);
  sysMemWriteW(piVar2->g[0xd] + 0x104,&fStack_10);
  sysMemWriteW(piVar2->g[0xd] + 0x108,&fStack_14);
  fStack_4 = 0.0;
  sysMemWriteW(piVar2->g[0xd] + 0x10c,&fStack_4);
  sysMemWriteW(piVar2->g[0xd] + 0x110,&fStack_4);
  sysMemWriteW(piVar2->g[0xd] + 0x114,&fStack_4);
  sysMemWriteW(piVar2->g[0xd] + 0x118,&fStack_4);
  fStack_8 = (float)(piVar2->g[0xd] + 0x11c);
  fStack_4 = 0.0;
  uStack_c = 4;
  do {
    sysMemWriteW((uint)fStack_8,&fStack_4);
    fStack_8 = (float)((int)fStack_8 + 4);
    bVar1 = 1 < uStack_c;
    uStack_c = uStack_c - 1;
  } while (bVar1);
  fStack_8 = (float)(piVar2->g[0xd] + 300);
  fStack_4 = 0.0;
  uStack_c = 4;
  do {
    sysMemWriteW((uint)fStack_8,&fStack_4);
    fStack_8 = (float)((int)fStack_8 + 4);
    uVar4 = uStack_c - 1;
    bVar1 = 1 < uStack_c;
    uStack_c = uVar4;
  } while (bVar1);
  piVar2->g[4] = 0;
  fStack_34 = 0.0;
  do {
    sysMemReadQ(&fStack_30,piVar2->g[7] + (int)fStack_34 * 0x10 + 0xd00);
    fStack_4 = fStack_24;
    fVar6 = fStack_2c - fStack_24;
    fStack_2c = fStack_2c + fStack_24;
    fStack_24 = fVar6;
    sysMemReadW(&fStack_4,piVar2->g[0xd] + 0xfc);
    if (fStack_24 <= fStack_4) {
      sysMemReadW(&fStack_4,piVar2->g[0xd] + 0x10c);
      fStack_4 = (float)((uint)fStack_4 | 1 << ((uint)fStack_34 & 0x1f));
      sysMemWriteW(piVar2->g[0xd] + 0x10c,&fStack_4);
    }
    sysMemReadW(&fStack_4,piVar2->g[0xd] + 0x100);
    if (fStack_2c <= fStack_4) {
      sysMemReadW(&fStack_4,piVar2->g[0xd] + 0x110);
      fStack_4 = (float)((uint)fStack_4 | 1 << ((uint)fStack_34 & 0x1f));
      sysMemWriteW(piVar2->g[0xd] + 0x110,&fStack_4);
    }
    sysMemReadW(&fStack_4,piVar2->g[0xd] + 0x104);
    if (fStack_24 <= fStack_4) {
      sysMemReadW(&fStack_4,piVar2->g[0xd] + 0x114);
      fStack_4 = (float)((uint)fStack_4 | 1 << ((uint)fStack_34 & 0x1f));
      sysMemWriteW(piVar2->g[0xd] + 0x114,&fStack_4);
    }
    sysMemReadW(&fStack_4,piVar2->g[7]);
    if (((((uint)fStack_4 & 4) == 0) &&
        (sysMemReadW(&fStack_4,piVar2->g[7] + 0x1a4), ((uint)fStack_4 & 0x800000) == 0)) &&
       (sysMemReadW(&fStack_4,piVar2->g[0xd] + 0x108), fStack_24 <= fStack_4)) {
      sysMemReadW(&fStack_4,piVar2->g[0xd] + 0x118);
      fStack_4 = (float)((uint)fStack_4 | 1 << ((uint)fStack_34 & 0x1f));
      sysMemWriteW(piVar2->g[0xd] + 0x118,&fStack_4);
    }
    sysMemReadW(&fStack_14,0x23bb8);
    do {
      fStack_14 = (float)((int)fStack_14 + -1);
      sysMemReadT(&fStack_20,(int)fStack_14 * 0x10 + 0x23bbc);
      fStack_20 = fStack_20 * fStack_30;
      fStack_1c = fStack_1c * fStack_28;
      fStack_18 = -*(float *)(iVar3 + 0xa00c) + fStack_20 + fStack_1c;
      if ((int)fStack_18 < 0) {
        sysMemReadW(&fStack_4,piVar2->g[0xd] + 0x110);
        if ((((uint)fStack_4 & 1 << ((uint)fStack_34 & 0x1f)) != 0) &&
           (sysMemReadW(&fStack_4,piVar2->g[0xd] + (int)fStack_14 * 4 + 300), fStack_18 <= fStack_4)
           ) {
          sysMemWriteW(piVar2->g[0xd] + (int)fStack_14 * 4 + 300,&fStack_18);
        }
      }
      else {
        piVar2->g[4] = piVar2->g[4] | 1 << ((uint)fStack_34 & 0x1f);
        sysMemReadW(&fStack_4,piVar2->g[0xd] + (int)fStack_14 * 4 + 0x11c);
        fStack_4 = (float)((int)fStack_4 + 1);
        sysMemWriteW(piVar2->g[0xd] + (int)fStack_14 * 4 + 0x11c,&fStack_4);
      }
    } while (0 < (int)fStack_14);
    uVar4 = (int)fStack_34 + 1;
    bVar1 = fStack_34 != 4.06377e-44;
    fStack_34 = (float)uVar4;
  } while (bVar1);
  sysMemReadW(piVar2->g + 3,piVar2->g[0xd] + 0x114);
  piVar2->g[3] = piVar2->g[3] & piVar2->g[4];
  piVar5 = i960GetRegs();
  iStack_74 = 0x2007b76;
  uStack_68 = 0;
  uStack_70 = 0;
  do {
    if ((piVar5->g[3] & 1 << (uStack_70 & 0x1f)) != 0) {
      sysMemReadW(&uStack_6c,iStack_74 + uStack_70 * 4);
      uStack_68 = uStack_68 | 1 << (uStack_6c & 0x1f);
    }
    uVar4 = uStack_70 + 1;
    bVar1 = uStack_70 != 0x1d;
    uStack_70 = uVar4;
  } while (bVar1);
  piVar5->g[3] = uStack_68;
  sysMemWriteS(piVar2->g[7] + 0x624,piVar2->g + 3);
  piVar2->g[4] = ~piVar2->g[4];
  sysMemReadW(piVar2->g + 3,piVar2->g[0xd] + 0x10c);
  piVar2->g[3] = piVar2->g[3] & piVar2->g[4];
  piVar5 = i960GetRegs();
  iStack_b4 = 0x2007b76;
  uStack_a8 = 0;
  uStack_b0 = 0;
  do {
    if ((piVar5->g[3] & 1 << (uStack_b0 & 0x1f)) != 0) {
      sysMemReadW(&uStack_ac,iStack_b4 + uStack_b0 * 4);
      uStack_a8 = uStack_a8 | 1 << (uStack_ac & 0x1f);
    }
    uVar4 = uStack_b0 + 1;
    bVar1 = uStack_b0 != 0x1d;
    uStack_b0 = uVar4;
  } while (bVar1);
  piVar5->g[3] = uStack_a8;
  sysMemWriteS(piVar2->g[7] + 0x614,piVar2->g + 3);
  sysMemReadW(piVar2->g + 3,piVar2->g[0xd] + 0x118);
  piVar5 = i960GetRegs();
  uStack_e8 = 0;
  uStack_f0 = 0;
  do {
    if ((piVar5->g[3] & 1 << (uStack_f0 & 0x1f)) != 0) {
      sysMemReadW(&uStack_ec,uStack_f0 * 4 + 0x2007b76);
      uStack_e8 = uStack_e8 | 1 << (uStack_ec & 0x1f);
    }
    bVar1 = uStack_f0 != 0x1d;
    uStack_f0 = uStack_f0 + 1;
  } while (bVar1);
  piVar5->g[3] = uStack_e8;
  sysMemWriteS(piVar2->g[7] + 0x618,piVar2->g + 3);
  sysMemReadW(&fStack_14,0x23bb8);
  fStack_28 = fStack_14;
  fStack_34 = 0.0;
  do {
    fStack_14 = (float)((int)fStack_14 + -1);
    sysMemReadW(&fStack_4,piVar2->g[0xd] + (int)fStack_14 * 4 + 0x11c);
    if ((int)fStack_34 < (int)fStack_4) {
      fStack_34 = fStack_4;
      fStack_28 = fStack_14;
    }
  } while (0 < (int)fStack_14);
  sysMemReadW(&fStack_24,piVar2->g[0xd] + (int)fStack_28 * 4 + 300);
  sysMemReadL(&fStack_30,(int)fStack_28 * 0x10 + 0x23bbc);
  fStack_30 = fStack_30 * fStack_24;
  fStack_2c = fStack_2c * fStack_24;
  sysMemWriteW(piVar2->g[7] + 0x644,&fStack_30);
  sysMemWriteW(piVar2->g[7] + 0x64c,&fStack_2c);
  return;
}

