/* helper rearSmoothInt @ 0018f640, called (depth 1) from sysCopPatchGetFrameDat */

void rearSmoothInt(void)

{
  bool bVar1;
  i960_regs *piVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  uint *src;
  uint *puVar7;
  undefined *puStack_40;
  uint uStack_3c;
  int iStack_38;
  float afStack_34 [2];
  float fStack_2c;
  undefined *puStack_28;
  uint uStack_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  uint uStack_18;
  undefined *apuStack_14 [3];
  undefined4 uStack_8;
  short sStack_2;
  
  piVar2 = i960GetRegs();
  src = piVar2->g;
  sysMemReadB(&uStack_3c,piVar2->g[7] + 0xbe4);
  uStack_3c = (uint)(byte)uStack_3c;
  if (uStack_3c == 1) {
    uVar3 = piVar2->g[7];
    sysMemWriteB(uVar3 + 0xbe5,&uStack_8);
    uStack_8 = 0;
    sysMemWriteB(uVar3 + 0xbdd,&uStack_8);
    sysMemWriteB(uVar3 + 0xbe4,&uStack_8);
  }
  else {
    sysMemReadW(&uStack_3c,piVar2->g[7] + 0x1a4);
    sysMemReadW(&iStack_38,piVar2->g[7] + 0xbd8);
    sysMemReadS(afStack_34,piVar2->g[7] + 0xbe0);
    afStack_34[0] = (float)(uint)afStack_34[0]._0_2_;
    apuStack_14[0] = (undefined *)sysReadWorkRam4(0x500068);
    if (((uint)apuStack_14[0] & 0x100000) != 0) {
      piVar2->g[6] = piVar2->g[6] >> 1;
    }
    piVar2->g[5] = (uint)&DAT_0050e0f0;
    getEndValue();
    sysMemReadB(&uStack_24,piVar2->g[7] + 0x814);
    uStack_24 = (uint)(byte)uStack_24;
    apuStack_14[0] = (undefined *)0x0;
    if (uStack_24 == 0) {
      *src = iStack_38 + 0x1e0;
    }
    else {
      apuStack_14[0] = (undefined *)0x80;
      if (uStack_24 == 0x80) {
        *src = iStack_38 + 0x2d0;
      }
      else {
        apuStack_14[0] = (undefined *)0x3;
        if (uStack_24 == 3) {
          *src = iStack_38 + 0x3c0;
        }
        else {
          apuStack_14[0] = (undefined *)0x4;
          if (uStack_24 == 4) {
            *src = iStack_38 + 0x5a0;
          }
          else {
            apuStack_14[0] = (undefined *)0x83;
            if (uStack_24 != 0x83) {
              sysMemReadB(&uStack_18,piVar2->g[7] + 0xbdd);
              uStack_18 = uStack_18 & 0xfd;
              sysMemWriteB(piVar2->g[7] + 0xbdd,&uStack_18);
              return;
            }
            *src = iStack_38 + 0x4b0;
          }
        }
      }
    }
    puStack_28 = &DAT_0050e000;
    uStack_24 = 0x14;
    do {
      sysMemReadT(&puStack_20,*src);
      sysMemWriteT((uint)puStack_28,&puStack_20);
      *src = *src + 0xc;
      puStack_28 = puStack_28 + 0xc;
      uVar3 = uStack_24 - 1;
      bVar1 = 1 < uStack_24;
      uStack_24 = uVar3;
    } while (bVar1);
    puStack_28 = (undefined *)0x8;
    sysMemReadW(&uStack_18,0x50e180);
    sysMemReadW(&puStack_1c,0x50e188);
    apuStack_14[0] = (undefined *)((uint)puStack_1c | uStack_18);
    if (apuStack_14[0] != (undefined *)0x0) {
      puStack_20 = &DAT_0050e180;
      do {
        sysMemReadW(&uStack_24,(uint)puStack_20);
        apuStack_14[0] = (undefined *)0xa001414;
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(0xa001414), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(uStack_24), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(uStack_18), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        uStack_24 = *(uint *)(&g_fifoOut + DAT_01689644 * 4);
        DAT_01689644 = DAT_01689644 + 1;
        if (DAT_01689640 <= DAT_01689644) {
          DAT_01689640 = 0;
          DAT_00255c9c = 1;
          DAT_01689644 = 0;
        }
        sysMemWriteW((uint)puStack_20,&uStack_24);
        sysMemReadW(&uStack_24,(uint)(puStack_20 + 8));
        apuStack_14[0] = (undefined *)0xa001414;
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(0xa001414), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(uStack_24), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(puStack_1c), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        uStack_24 = *(uint *)(&g_fifoOut + DAT_01689644 * 4);
        DAT_01689644 = DAT_01689644 + 1;
        if (DAT_01689640 <= DAT_01689644) {
          DAT_01689640 = 0;
          DAT_00255c9c = 1;
          DAT_01689644 = 0;
        }
        sysMemWriteW((uint)(puStack_20 + 8),&uStack_24);
        puStack_20 = puStack_20 + 0xc;
        bVar1 = (undefined *)0x1 < puStack_28;
        puStack_28 = puStack_28 + -1;
      } while (bVar1);
    }
    puStack_28 = (undefined *)0x8;
    sysMemReadW(&uStack_18,0x50e090);
    sysMemReadW(&puStack_1c,0x50e098);
    apuStack_14[0] = (undefined *)((uint)puStack_1c | uStack_18);
    if (apuStack_14[0] != (undefined *)0x0) {
      puStack_20 = &DAT_0050e090;
      do {
        sysMemReadW(&uStack_24,(uint)puStack_20);
        apuStack_14[0] = (undefined *)0xa001414;
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(0xa001414), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(uStack_24), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(uStack_18), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        uStack_24 = *(uint *)(&g_fifoOut + DAT_01689644 * 4);
        DAT_01689644 = DAT_01689644 + 1;
        if (DAT_01689640 <= DAT_01689644) {
          DAT_01689640 = 0;
          DAT_00255c9c = 1;
          DAT_01689644 = 0;
        }
        sysMemWriteW((uint)puStack_20,&uStack_24);
        sysMemReadW(&uStack_24,(uint)(puStack_20 + 8));
        apuStack_14[0] = (undefined *)0xa001414;
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(0xa001414), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(uStack_24), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(puStack_1c), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        uStack_24 = *(uint *)(&g_fifoOut + DAT_01689644 * 4);
        DAT_01689644 = DAT_01689644 + 1;
        if (DAT_01689640 <= DAT_01689644) {
          DAT_01689640 = 0;
          DAT_00255c9c = 1;
          DAT_01689644 = 0;
        }
        sysMemWriteW((uint)(puStack_20 + 8),&uStack_24);
        puStack_20 = puStack_20 + 0xc;
        puVar4 = puStack_28 + -1;
        bVar1 = (undefined *)0x1 < puStack_28;
        puStack_28 = puVar4;
      } while (bVar1);
    }
    uStack_18 = 0;
    sysMemReadW(apuStack_14,piVar2->g[7] + 0x804);
    if (((uint)apuStack_14[0] & 0x200000) != 0) {
      uStack_18 = uStack_18 ^ 1;
    }
    sysMemReadW(&puStack_1c,piVar2->g[7]);
    if (((uint)puStack_1c & 0x40) != 0) {
      uStack_18 = uStack_18 ^ 1;
    }
    if ((uStack_18 & 1) != 0) {
      piVar2->g[5] = (uint)&DAT_0050e000;
      setMirror();
    }
    if ((uStack_3c & 0x40) != 0) {
      sysMemReadS(&sStack_2,piVar2->g[7] + 0x812);
      fStack_2c = (float)(int)sStack_2;
      apuStack_14[0] = &DAT_00800101;
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(&DAT_00800101), 0 < lVar5)) {
        DAT_01689640 = (uint)lVar5 >> 2;
        DAT_00255c9c = 0;
      }
      apuStack_14[0] = &DAT_01800303;
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(&DAT_01800303), 0 < lVar5)) {
        DAT_01689640 = (uint)lVar5 >> 2;
        DAT_00255c9c = 0;
      }
      uVar3 = sysReadWorkRam4(0x5001e4);
      if (fStack_2c != 0.0) {
        sysMemWriteW(uVar3 + 0x90e000,&fStack_2c);
        uVar3 = uVar3 + 4 & 0xff;
        apuStack_14[0] = (undefined *)0x36806d6d;
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(0x36806d6d), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
      }
      sysWriteWorkRam1(0x5001e4,uVar3 & 0xff);
      *src = 8;
      puStack_28 = &DAT_0050e090;
      do {
        sysMemReadW(&puStack_1c,(uint)puStack_28);
        puStack_20 = (undefined *)0x0;
        sysMemReadW(&uStack_24,(uint)(puStack_28 + 8));
        apuStack_14[0] = (undefined *)0x14802929;
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(0x14802929), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(puStack_1c), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(puStack_20), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(uStack_24), 0 < lVar5)) {
          DAT_01689640 = (uint)lVar5 >> 2;
          DAT_00255c9c = 0;
        }
        puStack_1c = *(undefined **)(&g_fifoOut + DAT_01689644 * 4);
        DAT_01689644 = DAT_01689644 + 1;
        if (DAT_01689640 <= DAT_01689644) {
          DAT_01689640 = 0;
          DAT_00255c9c = 1;
          DAT_01689644 = 0;
        }
        puStack_20 = *(undefined **)(&g_fifoOut + DAT_01689644 * 4);
        DAT_01689644 = DAT_01689644 + 1;
        if (DAT_01689640 <= DAT_01689644) {
          DAT_01689640 = 0;
          DAT_00255c9c = 1;
          DAT_01689644 = 0;
        }
        uStack_24 = *(uint *)(&g_fifoOut + DAT_01689644 * 4);
        DAT_01689644 = DAT_01689644 + 1;
        if (DAT_01689640 <= DAT_01689644) {
          DAT_01689640 = 0;
          DAT_00255c9c = 1;
          DAT_01689644 = 0;
        }
        sysMemWriteW((uint)puStack_28,&puStack_1c);
        sysMemWriteW((uint)(puStack_28 + 8),&uStack_24);
        puStack_28 = puStack_28 + 0xc;
        uVar3 = *src;
        *src = uVar3 - 1;
      } while (1 < uVar3);
      apuStack_14[0] = &DAT_01000202;
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(&DAT_01000202), 0 < lVar5)) {
        DAT_01689640 = (uint)lVar5 >> 2;
        DAT_00255c9c = 0;
      }
      sysMemReadS(&sStack_2,0x50e034);
      apuStack_14[0] = (undefined *)((int)sStack_2 + (int)fStack_2c);
      sysMemWriteS(0x50e034,apuStack_14);
      sysMemReadS(&sStack_2,0x50e028);
      apuStack_14[0] = (undefined *)((int)sStack_2 + (int)fStack_2c);
      sysMemWriteS(0x50e028,apuStack_14);
      sysMemReadS(&sStack_2,0x50e01c);
      apuStack_14[0] = (undefined *)((int)sStack_2 + (int)fStack_2c);
      sysMemWriteS(0x50e01c,apuStack_14);
    }
    sysMemReadS(piVar2->g + 6,piVar2->g[7] + 0x800);
    piVar2->g[6] = (uint)(ushort)piVar2->g[6];
    iVar6 = piVar2->g[6] - (int)afStack_34[0];
    if (iVar6 == 8) {
      afStack_34[0] = 4.2039e-45;
    }
    else if (iVar6 == 4) {
      afStack_34[0] = 2.8026e-45;
    }
    else {
      afStack_34[0] = 1.4013e-45;
    }
    apuStack_14[0] = &DAT_00800101;
    if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(&DAT_00800101), 0 < lVar5)) {
      DAT_01689640 = (uint)lVar5 >> 2;
      DAT_00255c9c = 0;
    }
    puStack_40 = &DAT_0050e0f0;
    uStack_3c = piVar2->g[7] + 0xbe8;
    puStack_1c = &DAT_0050e000;
    puStack_20 = (undefined *)(iStack_38 + 0xf0);
    uStack_24 = 0xc;
    sysMemReadW(piVar2->g + 4,piVar2->g[7]);
    sysMemReadW(&puStack_28,piVar2->g[7] + 0x1a4);
    sysMemReadW(&fStack_2c,piVar2->g[7] + 0xc30);
    piVar2->g[3] = 0;
    do {
      apuStack_14[0] = (undefined *)0x2a805555;
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(0x2a805555), 0 < lVar5)) {
        DAT_01689640 = (uint)lVar5 >> 2;
        DAT_00255c9c = 0;
      }
      sysMemReadS(&sStack_2,uStack_3c + 4);
      *src = (int)sStack_2;
      sysMemReadS(&sStack_2,uStack_3c);
      piVar2->g[1] = (int)sStack_2;
      sysMemReadS(&sStack_2,uStack_3c + 2);
      piVar2->g[2] = (int)sStack_2;
      iVar6 = 3;
      puVar7 = src;
      if ((g_copCtrlReg & 0x80000000) == 0) {
        do {
          lVar5 = copExec(*puVar7);
          if (0 < lVar5) {
            DAT_01689640 = (uint)lVar5 >> 2;
            DAT_00255c9c = 0;
          }
          iVar6 = iVar6 + -1;
          puVar7 = puVar7 + 1;
        } while (0 < iVar6);
      }
      sysMemReadS(&sStack_2,(uint)puStack_40);
      *src = (int)sStack_2;
      *src = -*src;
      sysMemReadS(&sStack_2,(uint)(puStack_40 + 4));
      piVar2->g[1] = (int)sStack_2;
      piVar2->g[1] = -piVar2->g[1];
      sysMemReadS(&sStack_2,(uint)(puStack_40 + 8));
      piVar2->g[2] = (int)sStack_2;
      piVar2->g[2] = -piVar2->g[2];
      iVar6 = 3;
      puVar7 = src;
      if ((g_copCtrlReg & 0x80000000) == 0) {
        do {
          lVar5 = copExec(*puVar7);
          if (0 < lVar5) {
            DAT_01689640 = (uint)lVar5 >> 2;
            DAT_00255c9c = 0;
          }
          iVar6 = iVar6 + -1;
          puVar7 = puVar7 + 1;
        } while (0 < iVar6);
      }
      sysMemReadS(&sStack_2,(uint)(puStack_1c + 8));
      *src = (int)sStack_2;
      sysMemReadS(&sStack_2,(uint)(puStack_1c + 4));
      piVar2->g[1] = (int)sStack_2;
      sysMemReadS(&sStack_2,(uint)puStack_1c);
      piVar2->g[2] = (int)sStack_2;
      iVar6 = 3;
      puVar7 = src;
      if ((g_copCtrlReg & 0x80000000) == 0) {
        do {
          lVar5 = copExec(*puVar7);
          if (0 < lVar5) {
            DAT_01689640 = (uint)lVar5 >> 2;
            DAT_00255c9c = 0;
          }
          iVar6 = iVar6 + -1;
          puVar7 = puVar7 + 1;
        } while (0 < iVar6);
      }
      sysMemReadS(&sStack_2,piVar2->g[0xb] + piVar2->g[0xc]);
      *src = (int)sStack_2;
      sysMemReadS(&sStack_2,piVar2->g[0xb] + piVar2->g[0xc]);
      piVar2->g[1] = (int)sStack_2;
      sysMemReadS(&sStack_2,piVar2->g[0xb] + piVar2->g[0xc]);
      piVar2->g[2] = (int)sStack_2;
      *src = -*src;
      uVar3 = *src;
      if ((int)uVar3 < 0) {
        if ((int)afStack_34[0] < 0x20) {
          iVar6 = 1 << ((uint)afStack_34[0] & 0x1f);
          *src = (int)((uVar3 - iVar6) + 1) / iVar6;
        }
        else {
          *src = 0xffffffff;
        }
      }
      else if ((int)afStack_34[0] < 0x20) {
        *src = (int)uVar3 >> ((uint)afStack_34[0] & 0x1f);
      }
      else {
        *src = 0;
      }
      sysMemWriteS((uint)(puStack_20 + 4),src);
      uVar3 = piVar2->g[1];
      if ((int)uVar3 < 0) {
        if ((int)afStack_34[0] < 0x20) {
          iVar6 = 1 << ((uint)afStack_34[0] & 0x1f);
          piVar2->g[1] = (int)((uVar3 - iVar6) + 1) / iVar6;
        }
        else {
          piVar2->g[1] = 0xffffffff;
        }
      }
      else if ((int)afStack_34[0] < 0x20) {
        piVar2->g[1] = (int)uVar3 >> ((uint)afStack_34[0] & 0x1f);
      }
      else {
        piVar2->g[1] = 0;
      }
      sysMemWriteS((uint)puStack_20,piVar2->g + 1);
      piVar2->g[2] = -piVar2->g[2];
      uVar3 = piVar2->g[2];
      if ((int)uVar3 < 0) {
        if ((int)afStack_34[0] < 0x20) {
          iVar6 = 1 << ((uint)afStack_34[0] & 0x1f);
          piVar2->g[2] = (int)((uVar3 - iVar6) + 1) / iVar6;
        }
        else {
          piVar2->g[2] = 0xffffffff;
        }
      }
      else if ((int)afStack_34[0] < 0x20) {
        piVar2->g[2] = (int)uVar3 >> ((uint)afStack_34[0] & 0x1f);
      }
      else {
        piVar2->g[2] = 0;
      }
      sysMemWriteS((uint)(puStack_20 + 8),piVar2->g + 2);
      puStack_20 = puStack_20 + 0xc;
      puStack_1c = puStack_1c + 0xc;
      puStack_40 = puStack_40 + 0xc;
      uStack_3c = uStack_3c + 6;
      uVar3 = uStack_24 - 1;
      bVar1 = 1 < uStack_24;
      uStack_24 = uVar3;
    } while (bVar1);
    afStack_34[0] = (float)(1 << ((uint)afStack_34[0] & 0x1f));
    apuStack_14[0] = (undefined *)0xb801717;
    if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(0xb801717), 0 < lVar5)) {
      DAT_01689640 = (uint)lVar5 >> 2;
      DAT_00255c9c = 0;
    }
    if (((g_copCtrlReg & 0x80000000) == 0) && (lVar5 = copExec(afStack_34[0]), 0 < lVar5)) {
      DAT_01689640 = (uint)lVar5 >> 2;
      DAT_00255c9c = 0;
    }
    iVar6 = DAT_01689644 * 4;
    DAT_01689644 = DAT_01689644 + 1;
    if (DAT_01689640 <= DAT_01689644) {
      DAT_01689640 = 0;
      DAT_00255c9c = 1;
      DAT_01689644 = 0;
    }
    uStack_18 = 0x3f800000;
    afStack_34[0] = 1.0 / *(float *)(&g_fifoOut + iVar6);
    uStack_24 = 0x18;
    do {
      sysMemReadW(&puStack_28,(uint)puStack_40);
      sysMemReadW(&fStack_2c,(uint)puStack_1c);
      puStack_28 = (undefined *)((fStack_2c - (float)puStack_28) * afStack_34[0]);
      sysMemWriteW((uint)puStack_20,&puStack_28);
      puStack_20 = puStack_20 + 4;
      puStack_1c = puStack_1c + 4;
      puStack_40 = puStack_40 + 4;
      uVar3 = uStack_24 - 1;
      bVar1 = 1 < uStack_24;
      uStack_24 = uVar3;
    } while (bVar1);
    apuStack_14[0] = &DAT_01000202;
    if ((g_copCtrlReg & 0x80000000) == 0) {
      lVar5 = copExec(&DAT_01000202);
      if (0 < lVar5) {
        DAT_00255c9c = 0;
        DAT_01689640 = (uint)lVar5 >> 2;
      }
    }
  }
  return;
}

