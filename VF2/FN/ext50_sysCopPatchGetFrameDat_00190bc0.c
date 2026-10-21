/* EXT 50: sysCopPatchGetFrameDat @ 00190bc0; patched over i960 028184 (arcade get_frame_dat) */

undefined4 sysCopPatchGetFrameDat(void)

{
  bool bVar1;
  i960_regs *piVar2;
  uint uVar3;
  undefined *puVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  float *pfVar9;
  float *dst;
  float *dst_00;
  float *pfVar10;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  float fStack_34;
  float afStack_30 [6];
  uint uStack_18;
  undefined *apuStack_14 [4];
  short sStack_2;
  
  piVar2 = i960GetRegs();
  sysMemReadS(piVar2->g + 6,piVar2->g[7] + 0x1aa);
  piVar2->g[6] = (uint)(ushort)piVar2->g[6];
  sysMemReadW(&uStack_38,piVar2->g[7] + 0xbd8);
  pfVar9 = afStack_30 + 2;
  piVar2->g[5] = uStack_38 + 0x690;
  afStack_30[2] = (float)sysReadWorkRam4(0x500068);
  if (((uint)afStack_30[2] & 0x20000) == 0) {
LAB_00190d00:
    if (((uint)afStack_30[2] & 0x100000) == 0) {
      sysMemReadW(pfVar9,piVar2->g[7] + 0x854);
      if (afStack_30[2] == 0.0) goto LAB_00190fb8;
      do {
        fStack_3c = fStack_40;
        sysMemReadB(&fStack_40,(uint)afStack_30[2]);
        fStack_40 = (float)((uint)fStack_40 & 0xff);
        if (fStack_40 == (float)piVar2->g[6]) {
          piVar2->g[6] = (uint)fStack_40;
          goto LAB_00190fb8;
        }
        afStack_30[0] = fStack_34;
        sysMemReadB(&fStack_34,(int)afStack_30[2] + 1);
        fStack_34 = (float)((uint)fStack_34 & 0xff);
        afStack_30[2] = (float)((int)afStack_30[2] + 2);
      } while ((uint)fStack_40 < piVar2->g[6]);
      uStack_18 = (int)afStack_30[0] * ((int)fStack_40 - (int)fStack_3c);
      afStack_30[4] =
           (float)((piVar2->g[6] - (int)fStack_3c) * ((int)fStack_34 - (int)afStack_30[0]) +
                  uStack_18);
      afStack_30[5] = (float)(uint)((int)fStack_40 - (int)fStack_3c);
      piVar2->g[6] = (uint)(afStack_30[4] / afStack_30[5]);
      getFcurveValueF();
    }
    else if (piVar2->g[6] == 1) {
LAB_00190fb8:
      if (piVar2->g[6] == 1) {
        sysMemReadB(apuStack_14,piVar2->g[7] + 0xbdd);
        puVar4 = (undefined *)((uint)apuStack_14[0] & 0xff);
        uVar7 = (uint)apuStack_14[0] & 1;
        apuStack_14[0] = puVar4;
        if (uVar7 == 0) {
          getStartValue();
        }
      }
      else {
        piVar2->g[6] = (uint)(float)piVar2->g[6];
        getFcurveValueF();
      }
    }
    else {
      sysMemReadS(afStack_30 + 4,piVar2->g[7] + 0x800);
      afStack_30[5] = (float)((((uint)afStack_30[4] & 0xffff) >> 1) - 1);
      piVar2->g[6] = piVar2->g[6] - 1;
      piVar2->g[6] = piVar2->g[6] * (int)afStack_30[5];
      piVar2->g[6] = (uint)(float)piVar2->g[6];
      afStack_30[4] = (float)(((uint)afStack_30[4] & 0xffff) - 1);
      piVar2->g[6] = (uint)((float)piVar2->g[6] / afStack_30[4]);
      uStack_18 = 0x3f800000;
      piVar2->g[6] = (uint)((float)piVar2->g[6] + 1.0);
      getFcurveValueF();
    }
  }
  else {
    sysMemReadS(&uStack_18,0x500092);
    uVar7 = uStack_18 & 0xffff;
    uVar3 = uStack_18 & 1;
    uStack_18 = uVar7;
    if (uVar3 == 0) goto LAB_00190d00;
    sysMemReadS(afStack_30 + 5,piVar2->g[7] + 0x800);
    afStack_30[5] = (float)((uint)afStack_30[5] & 0xffff);
    if ((float)piVar2->g[6] == afStack_30[5]) goto LAB_00190d00;
    piVar2->g[6] = (uint)(float)piVar2->g[6];
    afStack_30[5] = 0.5;
    piVar2->g[6] = (uint)((float)piVar2->g[6] + 0.5);
    getFcurveValueF();
  }
  sysMemReadS(piVar2->g + 6,piVar2->g[7] + 0x1aa);
  piVar2->g[6] = (uint)(ushort)piVar2->g[6];
  sysMemReadW(apuStack_14,piVar2->g[7] + 0x804);
  uStack_18 = 0x20010;
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0x20010);
  if (apuStack_14[0] != (undefined *)0x0) {
    sysMemReadS(piVar2->g + 6,piVar2->g[7] + 0xbe2);
    piVar2->g[6] = (uint)(ushort)piVar2->g[6];
    piVar2->g[6] = piVar2->g[6] + 1;
    sysMemWriteS(piVar2->g[7] + 0xbe2,piVar2->g + 6);
  }
  sysMemReadB(apuStack_14,piVar2->g[7] + 0xbdd);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  if (apuStack_14[0] == (undefined *)0x0) {
LAB_00191630:
    afStack_30[2] = (float)(piVar2->g[7] + 0xbe8);
    afStack_30[3] = 5.60519e-45;
    afStack_30[4] = 0.0;
    afStack_30[5] = 0.0;
    uStack_18 = 0;
    apuStack_14[0] = (undefined *)0x0;
    do {
      sysMemWriteQ((uint)afStack_30[2],afStack_30 + 4);
      afStack_30[2] = (float)((int)afStack_30[2] + 0x10);
      fVar5 = (float)((int)afStack_30[3] + -1);
      bVar1 = 1 < (uint)afStack_30[3];
      afStack_30[3] = fVar5;
    } while (bVar1);
    sysMemWriteL((uint)afStack_30[2],afStack_30 + 4);
  }
  else {
    if (apuStack_14[0] == (undefined *)0x2) {
LAB_00191330:
      sysMemReadS(&fStack_40,piVar2->g[7] + 0x1aa);
      fStack_40 = (float)((uint)fStack_40 & 0xffff);
      if (apuStack_14[0] != (undefined *)0x1) {
        sysMemReadS(&fStack_34,piVar2->g[7] + 0xbe0);
        fStack_34 = (float)((uint)fStack_34 & 0xffff);
        if ((uint)fStack_34 < (uint)fStack_40) {
          sysMemReadB(afStack_30 + 5,piVar2->g[7] + 0xbe5);
          uVar7 = (uint)afStack_30[5] & 0xff;
          uVar3 = (uint)afStack_30[5] & 1;
          afStack_30[5] = (float)uVar7;
          if (uVar3 == 0) {
            rearSmoothInt();
            afStack_30[5] = (float)((uint)afStack_30[5] | 1);
          }
          piVar2->g[6] = (int)fStack_40 - (int)fStack_34;
          sysMemReadS(apuStack_14,piVar2->g[7] + 0xbde);
          apuStack_14[0] = (undefined *)(((uint)apuStack_14[0] & 0xffff) - 1);
          if (apuStack_14[0] == (undefined *)piVar2->g[6]) {
            afStack_30[5] = (float)((uint)afStack_30[5] | 2);
          }
          sysMemWriteB(piVar2->g[7] + 0xbe5,afStack_30 + 5);
          pfVar10 = afStack_30 + 3;
          uStack_18 = uStack_38 + 0xf0;
          afStack_30[5] = (float)(piVar2->g[7] + 0xbe8);
          afStack_30[4] = 5.04467e-44;
          do {
            sysMemReadS(&sStack_2,uStack_18);
            afStack_30[3] = (float)((int)sStack_2 * piVar2->g[6]);
            sysMemWriteS((uint)afStack_30[5],pfVar10);
            afStack_30[5] = (float)((int)afStack_30[5] + 2);
            uStack_18 = uStack_18 + 4;
            bVar1 = 1 < (uint)afStack_30[4];
            afStack_30[4] = (float)((int)afStack_30[4] - 1);
          } while (bVar1);
          afStack_30[5] = (float)(uStack_38 + 0x720);
          afStack_30[4] = 3.36312e-44;
          apuStack_14[0] = (undefined *)0xb801717;
          if (((g_copCtrlReg & 0x80000000) == 0) && (lVar8 = copExec(0xb801717), 0 < lVar8)) {
            DAT_01689640 = (uint)lVar8 >> 2;
            DAT_00255c9c = 0;
          }
          if (((g_copCtrlReg & 0x80000000) == 0) && (lVar8 = copExec(piVar2->g[6]), 0 < lVar8)) {
            DAT_01689640 = (uint)lVar8 >> 2;
            DAT_00255c9c = 0;
          }
          afStack_30[1] = *(float *)(&g_fifoOut + DAT_01689644 * 4);
          DAT_01689644 = DAT_01689644 + 1;
          if (DAT_01689640 <= DAT_01689644) {
            DAT_01689640 = 0;
            DAT_00255c9c = 1;
            DAT_01689644 = 0;
          }
          do {
            sysMemReadW(pfVar10,uStack_18);
            sysMemReadW(pfVar9,(uint)afStack_30[5]);
            afStack_30[3] = afStack_30[3] * afStack_30[1] + afStack_30[2];
            sysMemWriteW((uint)afStack_30[5],pfVar10);
            afStack_30[5] = (float)((int)afStack_30[5] + 4);
            uStack_18 = uStack_18 + 4;
            fVar5 = (float)((int)afStack_30[4] - 1);
            bVar1 = 1 < (uint)afStack_30[4];
            afStack_30[4] = fVar5;
          } while (bVar1);
          goto LAB_001916a8;
        }
      }
      goto LAB_00191630;
    }
    sysMemReadS(&fStack_44,piVar2->g[7] + 0xbde);
    fStack_44 = (float)((uint)fStack_44 & 0xffff);
    if ((uint)fStack_44 <= piVar2->g[6]) goto LAB_00191330;
    piVar2->g[6] = (int)fStack_44 - piVar2->g[6];
    pfVar10 = afStack_30 + 3;
    uStack_18 = uStack_38;
    afStack_30[5] = (float)(piVar2->g[7] + 0xbe8);
    afStack_30[4] = 5.04467e-44;
    do {
      sysMemReadS(&sStack_2,uStack_18);
      afStack_30[3] = (float)((int)sStack_2 * piVar2->g[6]);
      sysMemWriteS((uint)afStack_30[5],pfVar10);
      afStack_30[5] = (float)((int)afStack_30[5] + 2);
      uStack_18 = uStack_18 + 4;
      bVar1 = 1 < (uint)afStack_30[4];
      afStack_30[4] = (float)((int)afStack_30[4] - 1);
    } while (bVar1);
    afStack_30[5] = (float)(uStack_38 + 0x720);
    afStack_30[4] = 3.36312e-44;
    apuStack_14[0] = (undefined *)0xb801717;
    if (((g_copCtrlReg & 0x80000000) == 0) && (lVar8 = copExec(0xb801717), 0 < lVar8)) {
      DAT_01689640 = (uint)lVar8 >> 2;
      DAT_00255c9c = 0;
    }
    if (((g_copCtrlReg & 0x80000000) == 0) && (lVar8 = copExec(piVar2->g[6]), 0 < lVar8)) {
      DAT_01689640 = (uint)lVar8 >> 2;
      DAT_00255c9c = 0;
    }
    afStack_30[1] = *(float *)(&g_fifoOut + DAT_01689644 * 4);
    DAT_01689644 = DAT_01689644 + 1;
    if (DAT_01689640 <= DAT_01689644) {
      DAT_01689640 = 0;
      DAT_00255c9c = 1;
      DAT_01689644 = 0;
    }
    do {
      sysMemReadW(pfVar10,uStack_18);
      sysMemReadW(pfVar9,(uint)afStack_30[5]);
      afStack_30[3] = afStack_30[3] * afStack_30[1] + afStack_30[2];
      sysMemWriteW((uint)afStack_30[5],pfVar10);
      afStack_30[5] = (float)((int)afStack_30[5] + 4);
      uStack_18 = uStack_18 + 4;
      fVar5 = (float)((int)afStack_30[4] - 1);
      bVar1 = 1 < (uint)afStack_30[4];
      afStack_30[4] = fVar5;
    } while (bVar1);
  }
LAB_001916a8:
  dst_00 = afStack_30 + 3;
  dst = afStack_30 + 4;
  pfVar10 = afStack_30 + 5;
  sysMemReadS(dst_00,piVar2->g[7] + 0x1aa);
  afStack_30[3] = (float)((uint)afStack_30[3] & 0xffff);
  if ((uint)afStack_30[3] < 2) goto LAB_00191b10;
  if (afStack_30[3] != 2.8026e-45) {
    sysMemReadW(&fStack_34,piVar2->g[7] + 0xc34);
    if (fStack_34 != 0.0) {
      afStack_30[1] = (float)(uStack_38 + (int)fStack_34);
      sysMemReadS(pfVar9,piVar2->g[7] + 0x808);
      afStack_30[2] = (float)((uint)afStack_30[2] & 0xffff);
      sysMemReadS(afStack_30,piVar2->g[7] + 0x800);
      afStack_30[0] = (float)((uint)afStack_30[0] & 0xffff);
      if ((uint)afStack_30[2] < (uint)afStack_30[3]) {
        afStack_30[3] = (float)((int)afStack_30[0] - (int)afStack_30[3]);
        sysMemReadW(dst,piVar2->g[7] + 0xc3c);
      }
      else {
        afStack_30[3] = (float)((int)afStack_30[3] - 2);
        sysMemReadW(dst,piVar2->g[7] + 0xc38);
      }
      afStack_30[3] = (float)(uint)afStack_30[3];
      afStack_30[4] = afStack_30[4] * afStack_30[3];
      sysMemReadW(pfVar10,(int)afStack_30[1] + 0x690);
      afStack_30[5] = afStack_30[5] + afStack_30[4];
      uStack_18 = 0x3e0f5c29;
      if (afStack_30[5] <= 0.14) {
        afStack_30[5] = 0.14;
      }
      sysMemWriteW((int)afStack_30[1] + 0x690,pfVar10);
    }
    goto LAB_00191b10;
  }
  sysMemReadB(apuStack_14,piVar2->g[8] + 0x1b1);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  if ((((apuStack_14[0] == (undefined *)0xa) || (apuStack_14[0] == (undefined *)0x6)) ||
      (apuStack_14[0] == (undefined *)0x8)) &&
     (sysMemReadW(&uStack_18,piVar2->g[7] + 0x804), (uStack_18 & 0x100) != 0)) {
    sysMemReadB(dst,piVar2->g[7] + 0x821);
    afStack_30[4] = (float)((uint)afStack_30[4] & 0xff);
    if ((uint)afStack_30[4] < 4) {
      sysMemReadB(pfVar10,piVar2->g[7] + 0x820);
      afStack_30[5] = (float)((uint)afStack_30[5] & 0xff);
      if ((afStack_30[5] == 7.00649e-45) || (afStack_30[5] == 3.64338e-44)) {
        uStack_18 = 0xb8;
        sysMemWriteW(piVar2->g[7] + 0xc34,&uStack_18);
        afStack_30[5] = -0.1;
      }
      else {
        if ((afStack_30[5] != 8.40779e-45) && (afStack_30[5] != 3.78351e-44)) {
          if ((afStack_30[5] == 1.26117e-44) || (afStack_30[5] == 1.96182e-44)) {
            if (afStack_30[4] != 2.8026e-45) {
              uStack_18 = 0xdc;
              sysMemWriteW(piVar2->g[7] + 0xc34,&uStack_18);
              afStack_30[5] = -0.2;
              goto LAB_00191890;
            }
          }
          else if (((afStack_30[5] == 1.4013e-44) || (afStack_30[5] == 2.10195e-44)) &&
                  (afStack_30[4] != 2.8026e-45)) {
            uStack_18 = 0xe8;
            sysMemWriteW(piVar2->g[7] + 0xc34,&uStack_18);
            afStack_30[5] = -0.2;
            goto LAB_00191890;
          }
          goto LAB_00191990;
        }
        uStack_18 = 0xc4;
        sysMemWriteW(piVar2->g[7] + 0xc34,&uStack_18);
        afStack_30[5] = -0.1;
      }
LAB_00191890:
      sysMemReadS(pfVar9,piVar2->g[7] + 0x808);
      afStack_30[2] = (float)((uint)afStack_30[2] & 0xffff);
      sysMemReadS(&fStack_44,piVar2->g[7] + 0x800);
      fStack_44 = (float)(((uint)fStack_44 & 0xffff) - (int)afStack_30[2]);
      afStack_30[2] = afStack_30[5] / (float)((int)afStack_30[2] - 2);
      sysMemWriteW(piVar2->g[7] + 0xc38,pfVar9);
      fStack_44 = afStack_30[5] / (float)(uint)fStack_44;
      sysMemWriteW(piVar2->g[7] + 0xc3c,&fStack_44);
      goto LAB_00191b10;
    }
  }
LAB_00191990:
  uStack_18 = 0;
  sysMemWriteW(piVar2->g[7] + 0xc34,&uStack_18);
LAB_00191b10:
  sysMemReadW(apuStack_14,piVar2->g[7]);
  if (((uint)apuStack_14[0] & 4) != 0) {
    sysMemReadW(dst_00,piVar2->g[7] + 0x1c);
    sysMemReadW(dst,uStack_38 + 0x724);
    afStack_30[2] = afStack_30[3] - afStack_30[4];
    sysMemReadW(dst,piVar2->g[7] + 0x18);
    sysMemReadW(dst_00,piVar2->g[7] + 0x20);
    afStack_30[0] = (float)sysReadWorkRam4(0x50a010);
    iVar6 = sysReadWorkRam4(0x50a00c);
    afStack_30[5] = (float)((ulong)((long)(int)afStack_30[4] << 0x21) >> 0x21);
    if (((int)afStack_30[5] < iVar6) &&
       (afStack_30[5] = (float)((ulong)((long)(int)afStack_30[3] << 0x21) >> 0x21),
       (int)afStack_30[5] < iVar6)) {
      afStack_30[0] = 0.0;
    }
    uStack_18 = 0x3dcccccd;
    afStack_30[0] = afStack_30[0] + 0.1;
    afStack_30[1] = 9.80909e-45;
    fStack_34 = (float)(uStack_38 + 0x730);
    do {
      sysMemReadW(&fStack_44,(uint)fStack_34);
      fStack_40 = afStack_30[2] + fStack_44;
      if (fStack_40 < afStack_30[0]) {
        fStack_3c = afStack_30[0] - fStack_40;
        fStack_40 = fStack_3c + fStack_44;
        sysMemWriteW((uint)fStack_34,&fStack_40);
      }
      fStack_34 = (float)((int)fStack_34 + 0xc);
      bVar1 = 1 < (uint)afStack_30[1];
      afStack_30[1] = (float)((int)afStack_30[1] - 1);
    } while (bVar1);
  }
  afStack_30[2] = (float)(uStack_38 + 0x690);
  afStack_30[1] = 0.0;
  do {
    sysMemReadW(&fStack_40,(int)afStack_30[1] * 4 + 0x29714);
    fStack_40 = (float)((int)fStack_40 + piVar2->g[7]);
    sysMemReadT(dst,(uint)afStack_30[2]);
    afStack_30[2] = (float)((int)afStack_30[2] + 0xc);
    sysMemWriteS((uint)fStack_40,dst);
    sysMemWriteS((int)fStack_40 + 2,pfVar10);
    sysMemWriteS((int)fStack_40 + 4,&uStack_18);
    afStack_30[1] = (float)((int)afStack_30[1] + 1);
  } while ((uint)afStack_30[1] < 4);
  sysMemReadT(dst,(uint)afStack_30[2]);
  afStack_30[2] = (float)((int)afStack_30[2] + 0xc);
  sysMemWriteS(piVar2->g[7] + 0x140,dst);
  sysMemWriteS(piVar2->g[7] + 0x142,pfVar10);
  sysMemWriteS(piVar2->g[7] + 0x144,&uStack_18);
  afStack_30[1] = 9.80909e-45;
  piVar2->g[5] = piVar2->g[7] + 0xba8;
  do {
    sysMemReadT(dst,(uint)afStack_30[2]);
    afStack_30[2] = (float)((int)afStack_30[2] + 0xc);
    sysMemWriteS(piVar2->g[5],dst);
    sysMemWriteS(piVar2->g[5] + 2,pfVar10);
    sysMemWriteS(piVar2->g[5] + 4,&uStack_18);
    piVar2->g[5] = piVar2->g[5] + 6;
    uVar7 = (int)afStack_30[1] - 1;
    bVar1 = 1 < (uint)afStack_30[1];
    afStack_30[1] = (float)uVar7;
  } while (bVar1);
  sysMemReadT(dst,(uint)afStack_30[2]);
  afStack_30[2] = (float)((int)afStack_30[2] + 0xc);
  sysMemWriteT(piVar2->g[7] + 0x80,dst);
  afStack_30[1] = 9.80909e-45;
  piVar2->g[5] = piVar2->g[7] + 0xb00;
  do {
    sysMemReadT(dst,(uint)afStack_30[2]);
    afStack_30[2] = (float)((int)afStack_30[2] + 0xc);
    sysMemWriteT(piVar2->g[5],dst);
    piVar2->g[5] = piVar2->g[5] + 0xc;
    uVar7 = (int)afStack_30[1] - 1;
    bVar1 = 1 < (uint)afStack_30[1];
    afStack_30[1] = (float)uVar7;
  } while (bVar1);
  afStack_30[4] = (float)sysReadWorkRam4(0x500034);
  uStack_18 = 6;
  if ((6 < (uint)afStack_30[4]) &&
     (afStack_30[5] = (float)((uint)afStack_30[4] & 0x3f0000), afStack_30[5] == 0.0)) {
    sysMemReadW(apuStack_14,piVar2->g[7]);
    uStack_18 = (uint)apuStack_14[0] & 0xa00000;
    if (uStack_18 == 0) {
      sysMemReadW(apuStack_14,piVar2->g[7] + 0x1a4);
      uStack_18 = 0x6c111;
      apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0x6c111);
      if (apuStack_14[0] == (undefined *)0x0) {
        apuStack_14[0] = &DAT_31806363;
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar8 = copExec(&DAT_31806363), 0 < lVar8)) {
          DAT_01689640 = (uint)lVar8 >> 2;
          DAT_00255c9c = 0;
        }
        sysMemReadT(dst,piVar2->g[7] + 0x18);
        sysMemReadS(&sStack_2,piVar2->g[7] + 0x26);
        apuStack_14[0] = (undefined *)(int)sStack_2;
        iVar6 = 4;
        pfVar9 = dst;
        if ((g_copCtrlReg & 0x80000000) == 0) {
          do {
            lVar8 = copExec(*pfVar9);
            if (0 < lVar8) {
              DAT_01689640 = (uint)lVar8 >> 2;
              DAT_00255c9c = 0;
            }
            iVar6 = iVar6 + -1;
            pfVar9 = pfVar9 + 1;
          } while (0 < iVar6);
        }
        sysMemReadT(dst,piVar2->g[8] + 0x20c);
        iVar6 = 3;
        pfVar9 = dst;
        if ((g_copCtrlReg & 0x80000000) == 0) {
          do {
            lVar8 = copExec(*pfVar9);
            if (0 < lVar8) {
              DAT_01689640 = (uint)lVar8 >> 2;
              DAT_00255c9c = 0;
            }
            iVar6 = iVar6 + -1;
            pfVar9 = pfVar9 + 1;
          } while (0 < iVar6);
        }
        iVar6 = DAT_01689644 * 4;
        afStack_30[4] = *(float *)(&g_fifoOut + iVar6);
        afStack_30[5] = *(float *)(&DAT_01689244 + iVar6);
        uStack_18 = *(uint *)(&DAT_01689248 + iVar6);
        DAT_01689644 = DAT_01689644 + 3;
        if (DAT_01689640 <= DAT_01689644) {
          DAT_01689640 = 0;
          DAT_00255c9c = 1;
          DAT_01689644 = 0;
        }
        sysMemWriteT(piVar2->g[7] + 0xb0c,dst);
      }
    }
  }
  sysMemReadS(pfVar10,piVar2->g[7] + 0x1a8);
  afStack_30[5] = (float)((uint)afStack_30[5] & 0xffff);
  afStack_30[4] = 3.0268e-43;
  if ((afStack_30[5] == 3.0268e-43) || (afStack_30[4] = 1.82869e-42, afStack_30[5] == 1.82869e-42))
  {
    sysMemReadS(dst_00,piVar2->g[7] + 0x1aa);
    afStack_30[3] = (float)((uint)afStack_30[3] & 0xffff);
    if ((0xc < (uint)afStack_30[3]) && (afStack_30[2] = 2.20004e-43, (uint)afStack_30[3] < 0x9e)) {
      apuStack_14[0] = &DAT_00800101;
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar8 = copExec(&DAT_00800101), 0 < lVar8)) {
        DAT_01689640 = (uint)lVar8 >> 2;
        DAT_00255c9c = 0;
      }
      apuStack_14[0] = (undefined *)0x1b003636;
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar8 = copExec(0x1b003636), 0 < lVar8)) {
        DAT_01689640 = (uint)lVar8 >> 2;
        DAT_00255c9c = 0;
      }
      sysMemReadB(apuStack_14,piVar2->g[8] + 4);
      apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar8 = copExec(apuStack_14[0]), 0 < lVar8)) {
        DAT_01689640 = (uint)lVar8 >> 2;
        DAT_00255c9c = 0;
      }
      apuStack_14[0] = (undefined *)0x18;
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar8 = copExec(0x18), 0 < lVar8)) {
        DAT_01689640 = (uint)lVar8 >> 2;
        DAT_00255c9c = 0;
      }
      afStack_30[4] = 0.15;
      afStack_30[5] = 0.0;
      uStack_18 = 0xbd4ccccd;
      apuStack_14[0] = (undefined *)0x14802929;
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar8 = copExec(0x14802929), 0 < lVar8)) {
        DAT_01689640 = (uint)lVar8 >> 2;
        DAT_00255c9c = 0;
      }
      iVar6 = 3;
      pfVar9 = dst;
      if ((g_copCtrlReg & 0x80000000) == 0) {
        do {
          lVar8 = copExec(*pfVar9);
          if (0 < lVar8) {
            DAT_01689640 = (uint)lVar8 >> 2;
            DAT_00255c9c = 0;
          }
          iVar6 = iVar6 + -1;
          pfVar9 = pfVar9 + 1;
        } while (0 < iVar6);
      }
      pfVar9 = afStack_30;
      iVar6 = DAT_01689644 * 4;
      afStack_30[0] = *(float *)(&g_fifoOut + iVar6);
      afStack_30[1] = *(float *)(&DAT_01689244 + iVar6);
      afStack_30[2] = *(float *)(&DAT_01689248 + iVar6);
      DAT_01689644 = DAT_01689644 + 3;
      if (DAT_01689640 <= DAT_01689644) {
        DAT_01689640 = 0;
        DAT_00255c9c = 1;
        DAT_01689644 = 0;
      }
      apuStack_14[0] = &DAT_01000202;
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar8 = copExec(&DAT_01000202), 0 < lVar8)) {
        DAT_01689640 = (uint)lVar8 >> 2;
        DAT_00255c9c = 0;
      }
      sysMemReadW(apuStack_14,piVar2->g[7]);
      if (((uint)apuStack_14[0] & 0x40) == 0) {
        apuStack_14[0] = &DAT_31806363;
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar8 = copExec(&DAT_31806363), 0 < lVar8)) {
          DAT_01689640 = (uint)lVar8 >> 2;
          DAT_00255c9c = 0;
        }
        sysMemReadT(dst,piVar2->g[7] + 0x18);
        sysMemReadS(&sStack_2,piVar2->g[7] + 0x26);
        apuStack_14[0] = (undefined *)(int)sStack_2;
        iVar6 = 4;
        pfVar10 = dst;
        if ((g_copCtrlReg & 0x80000000) == 0) {
          do {
            lVar8 = copExec(*pfVar10);
            if (0 < lVar8) {
              DAT_01689640 = (uint)lVar8 >> 2;
              DAT_00255c9c = 0;
            }
            iVar6 = iVar6 + -1;
            pfVar10 = pfVar10 + 1;
          } while (0 < iVar6);
        }
        iVar6 = 3;
        if ((g_copCtrlReg & 0x80000000) == 0) {
          do {
            lVar8 = copExec(*pfVar9);
            if (0 < lVar8) {
              DAT_01689640 = (uint)lVar8 >> 2;
              DAT_00255c9c = 0;
            }
            iVar6 = iVar6 + -1;
            pfVar9 = pfVar9 + 1;
          } while (0 < iVar6);
        }
        iVar6 = DAT_01689644 * 4;
        afStack_30[4] = *(float *)(&g_fifoOut + iVar6);
        afStack_30[5] = *(float *)(&DAT_01689244 + iVar6);
        uStack_18 = *(uint *)(&DAT_01689248 + iVar6);
        DAT_01689644 = DAT_01689644 + 3;
        if (DAT_01689640 <= DAT_01689644) {
          DAT_01689640 = 0;
          DAT_00255c9c = 1;
          DAT_01689644 = 0;
        }
        sysMemWriteT(piVar2->g[7] + 0xb18,dst);
      }
      else {
        apuStack_14[0] = &DAT_31806363;
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar8 = copExec(&DAT_31806363), 0 < lVar8)) {
          DAT_01689640 = (uint)lVar8 >> 2;
          DAT_00255c9c = 0;
        }
        sysMemReadT(dst,piVar2->g[7] + 0x18);
        sysMemReadS(&sStack_2,piVar2->g[7] + 0x26);
        apuStack_14[0] = (undefined *)(int)sStack_2;
        iVar6 = 4;
        pfVar10 = dst;
        if ((g_copCtrlReg & 0x80000000) == 0) {
          do {
            lVar8 = copExec(*pfVar10);
            if (0 < lVar8) {
              DAT_01689640 = (uint)lVar8 >> 2;
              DAT_00255c9c = 0;
            }
            iVar6 = iVar6 + -1;
            pfVar10 = pfVar10 + 1;
          } while (0 < iVar6);
        }
        iVar6 = 3;
        if ((g_copCtrlReg & 0x80000000) == 0) {
          do {
            lVar8 = copExec(*pfVar9);
            if (0 < lVar8) {
              DAT_01689640 = (uint)lVar8 >> 2;
              DAT_00255c9c = 0;
            }
            iVar6 = iVar6 + -1;
            pfVar9 = pfVar9 + 1;
          } while (0 < iVar6);
        }
        iVar6 = DAT_01689644 * 4;
        afStack_30[4] = *(float *)(&g_fifoOut + iVar6);
        afStack_30[5] = *(float *)(&DAT_01689244 + iVar6);
        uStack_18 = *(uint *)(&DAT_01689248 + iVar6);
        DAT_01689644 = DAT_01689644 + 3;
        if (DAT_01689640 <= DAT_01689644) {
          DAT_01689640 = 0;
          DAT_00255c9c = 1;
          DAT_01689644 = 0;
        }
        sysMemWriteT(piVar2->g[7] + 0xb24,dst);
      }
    }
  }
  return 0x17e;
}

