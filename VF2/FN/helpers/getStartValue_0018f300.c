/* helper getStartValue @ 0018f300, called (depth 1) from sysCopPatchGetFrameDat */

void getStartValue(void)

{
  bool bVar1;
  i960_regs *piVar2;
  uint uVar3;
  undefined4 uStack_34;
  int aiStack_30 [2];
  uint auStack_28 [5];
  uint uStack_14;
  uint uStack_10;
  float fStack_c;
  undefined1 auStack_8 [4];
  uint uStack_4;
  
  piVar2 = i960GetRegs();
  sysMemReadW(aiStack_30,piVar2->g[7] + 0xbd8);
  piVar2->g[4] = aiStack_30[0] + 0x78c;
  sysMemReadW(piVar2->g + 3,aiStack_30[0] + 0x784);
  sysMemReadW(piVar2->g + 2,aiStack_30[0] + 0x780);
  piVar2->g[1] = 0x3c;
  do {
    sysMemReadB(auStack_28,piVar2->g[4]);
    auStack_28[0] = auStack_28[0] & 0xff;
    if (auStack_28[0] == 4) {
      sysMemReadW(&uStack_34,piVar2->g[2]);
      sysMemWriteW(piVar2->g[5],&uStack_34);
      piVar2->g[2] = piVar2->g[2] + 4;
    }
    else if (auStack_28[0] < 4) {
      if (auStack_28[0] == 3) {
        uStack_34 = 0;
        sysMemWriteW(piVar2->g[5],&uStack_34);
      }
      else {
        piVar2->g[2] = piVar2->g[2] + 4;
      }
    }
    else {
      sysMemReadB(&uStack_14,piVar2->g[3]);
      uStack_14 = uStack_14 & 0xff;
      piVar2->g[3] = piVar2->g[3] + 1;
      if (auStack_28[0] == 5) {
        sysMemReadW(auStack_8,piVar2->g[2]);
        sysMemWriteW(piVar2->g[5],auStack_8);
        aiStack_30[0] = uStack_14 * 4;
        piVar2->g[2] = piVar2->g[2] + aiStack_30[0];
      }
      else {
        sysMemReadW(auStack_8,piVar2->g[2]);
        sysMemWriteW(piVar2->g[5],auStack_8);
        aiStack_30[0] = uStack_14 * 0xc;
        piVar2->g[2] = piVar2->g[2] + aiStack_30[0];
      }
    }
    piVar2->g[4] = piVar2->g[4] + 1;
    piVar2->g[5] = piVar2->g[5] + 4;
    uVar3 = piVar2->g[1];
    piVar2->g[1] = uVar3 - 1;
  } while (1 < uVar3);
  uStack_4 = 0xf0;
  piVar2->g[5] = piVar2->g[5] - 0xf0;
  uStack_10 = 0x24;
  do {
    sysMemReadW(&fStack_c,piVar2->g[5]);
    if (fStack_c < 2.1474836e+09) {
      fStack_c = (float)(int)fStack_c;
    }
    else {
      fStack_c = (float)((int)(fStack_c - 2.1474836e+09) | 0x80000000);
    }
    sysMemWriteS(piVar2->g[5],&fStack_c);
    piVar2->g[5] = piVar2->g[5] + 4;
    uVar3 = uStack_10 - 1;
    bVar1 = 1 < uStack_10;
    uStack_10 = uVar3;
  } while (bVar1);
  uStack_4 = 0x90;
  piVar2->g[5] = piVar2->g[5] - 0x90;
  sysMemReadW(&uStack_4,piVar2->g[7]);
  if ((uStack_4 & 0x40) != 0) {
    setMirror();
  }
  return;
}

