/* helper getFcurveValueF @ 0018e640, called (depth 1) from sysCopPatchGetFrameDat */

void getFcurveValueF(void)

{
  bool bVar1;
  i960_regs *piVar2;
  uint uVar3;
  long lVar4;
  uint *dst;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  float afStack_c [2];
  uint uStack_4;
  
  piVar2 = i960GetRegs();
  dst = piVar2->g;
  sysMemReadW(&fStack_30,piVar2->g[7] + 0xbd8);
  piVar2->g[4] = (int)fStack_30 + 0x78c;
  sysMemReadW(piVar2->g + 3,(int)fStack_30 + 0x788);
  sysMemReadW(piVar2->g + 2,(int)fStack_30 + 0x780);
  piVar2->g[1] = 0x3c;
  sysMemReadW(dst,(int)fStack_30 + 0x784);
  do {
    uStack_18 = piVar2->g[3];
    sysMemReadB(&fStack_28,piVar2->g[4]);
    fStack_28 = (float)((uint)fStack_28 & 0xff);
    if (fStack_28 == 5.60519e-45) {
      sysMemReadW(&fStack_34,piVar2->g[2]);
      sysMemWriteW(piVar2->g[5],&fStack_34);
      piVar2->g[2] = piVar2->g[2] + 4;
    }
    else if ((uint)fStack_28 < 4) {
      if (fStack_28 == 4.2039e-45) {
        fStack_34 = 0.0;
        sysMemWriteW(piVar2->g[5],&fStack_34);
      }
      else {
        piVar2->g[2] = piVar2->g[2] + 4;
      }
    }
    else {
      sysMemReadB(&uStack_14,*dst);
      uStack_14 = uStack_14 & 0xff;
      *dst = *dst + 1;
      uStack_1c = 0;
      if (fStack_28 == 7.00649e-45) {
        do {
          sysMemReadW(&fStack_20,uStack_18);
          uStack_18 = uStack_18 + 4;
          if (piVar2->g[6] <= (uint)fStack_20) {
            fStack_30 = (float)(uStack_14 * 4);
            piVar2->g[3] = piVar2->g[3] + (int)fStack_30;
            uStack_1c = uStack_1c * 4 + piVar2->g[2];
            uStack_14 = uStack_14 * 4;
            piVar2->g[2] = piVar2->g[2] + uStack_14;
            if ((float)piVar2->g[6] == fStack_20) goto LAB_0018edc8;
            fStack_28 = fStack_20 - fStack_24;
            fStack_2c = (float)piVar2->g[6] - fStack_24;
            sysMemReadW(&fStack_30,uStack_1c);
            sysMemReadW(&fStack_34,uStack_1c - 4);
            uStack_4 = 0x18803131;
            if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(0x18803131), 0 < lVar4)) {
              DAT_01689640 = (uint)lVar4 >> 2;
              DAT_00255c9c = 0;
            }
            if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(fStack_34), 0 < lVar4)) {
              DAT_01689640 = (uint)lVar4 >> 2;
              DAT_00255c9c = 0;
            }
            if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(fStack_30), 0 < lVar4)) {
              DAT_01689640 = (uint)lVar4 >> 2;
              DAT_00255c9c = 0;
            }
            if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(fStack_2c), 0 < lVar4)) {
              DAT_01689640 = (uint)lVar4 >> 2;
              DAT_00255c9c = 0;
            }
            if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(fStack_28), 0 < lVar4)) {
              DAT_01689640 = (uint)lVar4 >> 2;
              DAT_00255c9c = 0;
            }
            fStack_34 = *(float *)(&g_fifoOut + DAT_01689644 * 4);
            DAT_01689644 = DAT_01689644 + 1;
            if (DAT_01689640 <= DAT_01689644) {
              DAT_01689640 = 0;
              DAT_00255c9c = 1;
              DAT_01689644 = 0;
            }
            sysMemWriteW(piVar2->g[5],&fStack_34);
            goto LAB_0018ee48;
          }
          fStack_24 = fStack_20;
          uStack_1c = uStack_1c + 1;
        } while (uStack_1c < uStack_14);
        fStack_30 = (float)(uStack_14 * 4);
        piVar2->g[3] = piVar2->g[3] + (int)fStack_30;
        piVar2->g[2] = piVar2->g[2] + (int)fStack_30;
      }
      else {
        do {
          sysMemReadW(&fStack_20,uStack_18);
          uStack_18 = uStack_18 + 4;
          if (piVar2->g[6] <= (uint)fStack_20) {
            piVar2->g[3] = piVar2->g[3] + uStack_14 * 4;
            uStack_1c = uStack_1c * 0xc + piVar2->g[2];
            fStack_30 = (float)(uStack_14 * 3);
            uStack_14 = uStack_14 * 0xc;
            piVar2->g[2] = piVar2->g[2] + uStack_14;
            if ((float)piVar2->g[6] == fStack_20) {
LAB_0018edc8:
              sysMemReadW(&fStack_34,uStack_1c);
              sysMemWriteW(piVar2->g[5],&fStack_34);
            }
            else {
              fStack_34 = fStack_20 - fStack_24;
              fStack_30 = (float)piVar2->g[6] - fStack_24;
              sysMemReadW(&fStack_2c,uStack_1c - 0xc);
              sysMemReadW(&fStack_28,uStack_1c);
              sysMemReadW(&fStack_24,uStack_1c - 4);
              sysMemReadW(&fStack_20,uStack_1c + 4);
              uStack_4 = 0x19003232;
              if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(0x19003232), 0 < lVar4)) {
                DAT_01689640 = (uint)lVar4 >> 2;
                DAT_00255c9c = 0;
              }
              if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(fStack_34), 0 < lVar4)) {
                DAT_01689640 = (uint)lVar4 >> 2;
                DAT_00255c9c = 0;
              }
              if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(fStack_30), 0 < lVar4)) {
                DAT_01689640 = (uint)lVar4 >> 2;
                DAT_00255c9c = 0;
              }
              if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(fStack_2c), 0 < lVar4)) {
                DAT_01689640 = (uint)lVar4 >> 2;
                DAT_00255c9c = 0;
              }
              if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(fStack_28), 0 < lVar4)) {
                DAT_01689640 = (uint)lVar4 >> 2;
                DAT_00255c9c = 0;
              }
              if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(fStack_24), 0 < lVar4)) {
                DAT_01689640 = (uint)lVar4 >> 2;
                DAT_00255c9c = 0;
              }
              if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(fStack_20), 0 < lVar4)) {
                DAT_01689640 = (uint)lVar4 >> 2;
                DAT_00255c9c = 0;
              }
              fStack_34 = *(float *)(&g_fifoOut + DAT_01689644 * 4);
              DAT_01689644 = DAT_01689644 + 1;
              if (DAT_01689640 <= DAT_01689644) {
                DAT_01689640 = 0;
                DAT_00255c9c = 1;
                DAT_01689644 = 0;
              }
              sysMemWriteW(piVar2->g[5],&fStack_34);
            }
            goto LAB_0018ee48;
          }
          fStack_24 = fStack_20;
          uStack_1c = uStack_1c + 1;
        } while (uStack_1c < uStack_14);
        piVar2->g[3] = piVar2->g[3] + uStack_14 * 4;
        fStack_30 = (float)(uStack_14 * 0xc);
        piVar2->g[2] = piVar2->g[2] + (int)fStack_30;
      }
    }
LAB_0018ee48:
    piVar2->g[4] = piVar2->g[4] + 1;
    piVar2->g[5] = piVar2->g[5] + 4;
    uVar3 = piVar2->g[1];
    piVar2->g[1] = uVar3 - 1;
    if (uVar3 < 2) {
      uStack_4 = 0xf0;
      piVar2->g[5] = piVar2->g[5] - 0xf0;
      uStack_10 = 0x24;
      do {
        sysMemReadW(afStack_c,piVar2->g[5]);
        if (afStack_c[0] < 2.1474836e+09) {
          afStack_c[0] = (float)(int)afStack_c[0];
        }
        else {
          afStack_c[0] = (float)((int)(afStack_c[0] - 2.1474836e+09) | 0x80000000);
        }
        sysMemWriteS(piVar2->g[5],afStack_c);
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
  } while( true );
}

