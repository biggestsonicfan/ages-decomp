/* EXT 51: sysCopPatchSmoothInt @ 0018c040; patched over i960 027130 (arcade smooth_int) */

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x0018c32c */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 sysCopPatchSmoothInt(void)

{
  bool bVar1;
  undefined **dst;
  i960_regs *piVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  uint *src;
  int iVar7;
  uint *puVar8;
  undefined **dst_00;
  float *pfStack_60;
  uint uStack_44;
  undefined *puStack_40;
  uint uStack_3c;
  undefined *puStack_38;
  undefined *puStack_34;
  float fStack_30;
  float fStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  undefined *apuStack_20 [2];
  uint uStack_18;
  undefined *apuStack_14 [3];
  uint uStack_8;
  short sStack_2;
  
  piVar2 = i960GetRegs();
  src = piVar2->g;
  uStack_44 = 0;
  sysMemWriteS(piVar2->g[7] + 0xbe2,&uStack_44);
  sysMemReadB(apuStack_14,0x508008);
  apuStack_14[0] = (undefined *)(uint)(byte)apuStack_14[0];
  if ((apuStack_14[0] != (undefined *)0x0) ||
     (sysMemReadW(apuStack_14,piVar2->g[7]), ((uint)apuStack_14[0] & 0x4000000) == 0))
  goto LAB_0018c268;
  sysMemReadB(&uStack_3c,piVar2->g[7] + 0xbe4);
  uStack_3c = uStack_3c & 0xff;
  if (uStack_3c == 1) goto LAB_0018c268;
  sysMemReadS(&puStack_38,piVar2->g[7] + 0x800);
  puStack_38 = (undefined *)((uint)puStack_38 & 0xffff);
  sysMemReadW(&uStack_3c,piVar2->g[7] + 0x1a4);
  if ((uStack_3c & 0x20000) == 0) {
    sysMemReadW(apuStack_14,piVar2->g[7] + 0x804);
    uStack_18 = 0xc0000;
    apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xc0000);
    if (apuStack_14[0] == (undefined *)0x0) {
      sysMemReadW(apuStack_20 + 1,piVar2->g[7] + 0xc30);
      if (((uint)apuStack_20[1] & 0x800000) != 0) goto LAB_0018c268;
      apuStack_20[0] = (undefined *)0x8040;
      apuStack_20[1] = (undefined *)((uint)apuStack_20[1] & 0x8040);
      if (apuStack_20[1] == (undefined *)0x8040) goto LAB_0018c268;
      sysMemReadB(&puStack_40,piVar2->g[7] + 0x814);
      puStack_40 = (undefined *)((uint)puStack_40 & 0xff);
      uStack_18 = 4;
      if (puStack_40 == (undefined *)0x4) goto LAB_0018c268;
      apuStack_20[0] = (undefined *)0x7f;
      if (puStack_40 != (undefined *)0x7f) {
        apuStack_14[0] = (undefined *)0x6600;
        uStack_18 = uStack_3c & 0x6600;
        if (uStack_18 == 0) {
          uStack_44 = 3;
          goto LAB_0018c2a8;
        }
      }
    }
    uStack_44 = 1;
  }
  else {
    uStack_44 = 2;
  }
LAB_0018c2a8:
  puStack_34 = puStack_38;
  if (puStack_38 < (undefined *)0x3) {
LAB_0018c268:
    uStack_8 = uStack_44;
    uVar3 = piVar2->g[7];
    sysMemWriteB(uVar3 + 0xbe5,&uStack_8);
    uStack_8 = 0;
    sysMemWriteB(uVar3 + 0xbdd,&uStack_8);
    sysMemWriteB(uVar3 + 0xbe4,&uStack_8);
    return 0x29;
  }
  if ((puStack_38 < (undefined *)0x5) || (puStack_38 < (undefined *)0x9)) {
    fStack_30 = 2.8026e-45;
  }
  pfStack_60 = &fStack_30;
  puStack_34 = puStack_38 + -(int)fStack_30;
  sysMemReadB(apuStack_14,piVar2->g[7] + 0xa00);
  apuStack_14[0] = (undefined *)((uint)apuStack_14[0] & 0xff);
  if (apuStack_14[0] != (undefined *)0x0) {
    sysMemReadS(apuStack_20 + 1,piVar2->g[7] + 0x808);
    apuStack_20[1] = (undefined *)((uint)apuStack_20[1] & 0xffff);
    if (puStack_34 < apuStack_20[1]) {
      uStack_44 = uStack_44 & 0xfffffffd;
    }
  }
  sysMemReadB(&uStack_18,piVar2->g[7] + 0xbe5);
  uVar3 = uStack_18 & 0xff;
  uVar5 = uStack_18 & 2;
  uStack_18 = uVar3;
  if (uVar5 != 0) {
    sysMemReadB(apuStack_20 + 1,piVar2->g[7] + 0xbdd);
    puVar4 = (undefined *)((uint)apuStack_20[1] & 0xff);
    uVar3 = (uint)apuStack_20[1] & 2;
    apuStack_20[1] = puVar4;
    if (uVar3 != 0) {
      uStack_44 = uStack_44 & 0xfffffffe;
    }
  }
  apuStack_14[0] = (undefined *)0x0;
  sysMemWriteB(piVar2->g[7] + 0xbdd,&uStack_44);
  sysMemWriteS(piVar2->g[7] + 0xbde,pfStack_60);
  sysMemWriteS(piVar2->g[7] + 0xbe0,&puStack_34);
  sysMemWriteB(piVar2->g[7] + 0xbe5,apuStack_14);
  if (uStack_44 == 2) {
    return 0x18e;
  }
  sysMemReadW(&puStack_38,piVar2->g[7] + 0xbd8);
  piVar2->g[5] = (uint)&DAT_0050e000;
  getStartValue();
  dst_00 = apuStack_20;
  puStack_24 = puStack_38 + 0x690;
  puStack_28 = &DAT_0050e0f0;
  apuStack_14[0] = (undefined *)0x14;
  do {
    sysMemReadT(dst_00,(uint)puStack_24);
    sysMemWriteT((uint)puStack_28,dst_00);
    puStack_24 = puStack_24 + 0xc;
    puStack_28 = puStack_28 + 0xc;
    bVar1 = (undefined *)0x1 < apuStack_14[0];
    apuStack_14[0] = apuStack_14[0] + -1;
  } while (bVar1);
  puStack_24 = &DAT_0050e000;
  puStack_28 = puStack_38 + 0x690;
  apuStack_14[0] = (undefined *)0x14;
  do {
    sysMemReadT(dst_00,(uint)puStack_24);
    sysMemWriteT((uint)puStack_28,dst_00);
    puStack_24 = puStack_24 + 0xc;
    puStack_28 = puStack_28 + 0xc;
    puVar4 = apuStack_14[0] + -1;
    bVar1 = (undefined *)0x1 < apuStack_14[0];
    apuStack_14[0] = puVar4;
  } while (bVar1);
  puStack_28 = (undefined *)0x8;
  sysMemReadW(&uStack_18,0x50e090);
  dst = apuStack_20 + 1;
  sysMemReadW(dst,0x50e098);
  apuStack_14[0] = (undefined *)((uint)apuStack_20[1] | uStack_18);
  if (apuStack_14[0] != (undefined *)0x0) {
    apuStack_20[0] = &DAT_0050e090;
    do {
      sysMemReadW(&puStack_24,(uint)apuStack_20[0]);
      apuStack_14[0] = (undefined *)0xa001414;
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(0xa001414), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(puStack_24), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(uStack_18), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
      puStack_24 = *(undefined **)(&g_fifoOut + DAT_01689644 * 4);
      DAT_01689644 = DAT_01689644 + 1;
      if (DAT_01689640 <= DAT_01689644) {
        DAT_01689640 = 0;
        DAT_00255c9c = 1;
        DAT_01689644 = 0;
      }
      sysMemWriteW((uint)apuStack_20[0],&puStack_24);
      sysMemReadW(&puStack_24,(uint)(apuStack_20[0] + 8));
      apuStack_14[0] = (undefined *)0xa001414;
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(0xa001414), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(puStack_24), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(apuStack_20[1]), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
      puStack_24 = *(undefined **)(&g_fifoOut + DAT_01689644 * 4);
      DAT_01689644 = DAT_01689644 + 1;
      if (DAT_01689640 <= DAT_01689644) {
        DAT_01689640 = 0;
        DAT_00255c9c = 1;
        DAT_01689644 = 0;
      }
      sysMemWriteW((uint)(apuStack_20[0] + 8),&puStack_24);
      apuStack_20[0] = apuStack_20[0] + 0xc;
      bVar1 = (undefined *)0x1 < puStack_28;
      puStack_28 = puStack_28 + -1;
    } while (bVar1);
  }
  puStack_28 = (undefined *)0x8;
  sysMemReadW(&uStack_18,0x50e180);
  sysMemReadW(dst,0x50e188);
  apuStack_14[0] = (undefined *)((uint)apuStack_20[1] | uStack_18);
  if (apuStack_14[0] != (undefined *)0x0) {
    apuStack_20[0] = &DAT_0050e180;
    do {
      sysMemReadW(&puStack_24,(uint)apuStack_20[0]);
      apuStack_14[0] = (undefined *)0xa001414;
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(0xa001414), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(puStack_24), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(uStack_18), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
      puStack_24 = *(undefined **)(&g_fifoOut + DAT_01689644 * 4);
      DAT_01689644 = DAT_01689644 + 1;
      if (DAT_01689640 <= DAT_01689644) {
        DAT_01689640 = 0;
        DAT_00255c9c = 1;
        DAT_01689644 = 0;
      }
      sysMemWriteW((uint)apuStack_20[0],&puStack_24);
      sysMemReadW(&puStack_24,(uint)(apuStack_20[0] + 8));
      apuStack_14[0] = (undefined *)0xa001414;
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(0xa001414), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(puStack_24), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(apuStack_20[1]), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
      puStack_24 = *(undefined **)(&g_fifoOut + DAT_01689644 * 4);
      DAT_01689644 = DAT_01689644 + 1;
      if (DAT_01689640 <= DAT_01689644) {
        DAT_01689640 = 0;
        DAT_00255c9c = 1;
        DAT_01689644 = 0;
      }
      sysMemWriteW((uint)(apuStack_20[0] + 8),&puStack_24);
      apuStack_20[0] = apuStack_20[0] + 0xc;
      puVar4 = puStack_28 + -1;
      bVar1 = (undefined *)0x1 < puStack_28;
      puStack_28 = puVar4;
    } while (bVar1);
  }
  sysMemReadW(apuStack_14,piVar2->g[7] + 0xc30);
  if (((uStack_3c & 0x100000) != 0) || (((uint)apuStack_14[0] & 0x40) != 0)) {
    apuStack_14[0] = &DAT_00800101;
    if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(&DAT_00800101), 0 < lVar6)) {
      DAT_01689640 = (uint)lVar6 >> 2;
      DAT_00255c9c = 0;
    }
    apuStack_14[0] = &DAT_01800303;
    if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(&DAT_01800303), 0 < lVar6)) {
      DAT_01689640 = (uint)lVar6 >> 2;
      DAT_00255c9c = 0;
    }
    apuStack_14[0] = (undefined *)0x1f803f3f;
    if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(0x1f803f3f), 0 < lVar6)) {
      DAT_01689640 = (uint)lVar6 >> 2;
      DAT_00255c9c = 0;
    }
    sysMemReadS(&sStack_2,0x50e038);
    apuStack_20[0] = (undefined *)(int)sStack_2;
    sysMemReadS(&sStack_2,0x50e034);
    apuStack_20[1] = (undefined *)(int)sStack_2;
    sysMemReadS(&sStack_2,0x50e030);
    uStack_18 = (int)sStack_2;
    iVar7 = 3;
    if ((g_copCtrlReg & 0x80000000) == 0) {
      do {
        lVar6 = copExec(*dst_00);
        if (0 < lVar6) {
          DAT_01689640 = (uint)lVar6 >> 2;
          DAT_00255c9c = 0;
        }
        iVar7 = iVar7 + -1;
        dst_00 = dst_00 + 1;
      } while (0 < iVar7);
    }
    uVar5 = sysReadWorkRam4(0x5001e4);
    sysMemReadS(&sStack_2,piVar2->g[7] + 0xc04);
    uVar3 = (uint)sStack_2;
    uStack_18 = -uVar3;
    if (uVar3 != 0) {
      sysMemWriteW(uVar5 + 0x90e000,&uStack_18);
      uVar5 = uVar5 + 4 & 0xff;
      apuStack_14[0] = (undefined *)0x37006e6e;
      uVar3 = uStack_18;
      if (((g_copCtrlReg & 0x80000000) == 0) &&
         (lVar6 = copExec(0x37006e6e), uVar3 = uStack_18, 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
    }
    uStack_18 = uVar3;
    sysMemReadS(&sStack_2,piVar2->g[7] + 0xc00);
    uVar3 = (uint)sStack_2;
    uStack_18 = -uVar3;
    if (uVar3 != 0) {
      sysMemWriteW(uVar5 + 0x90e000,&uStack_18);
      uVar5 = uVar5 + 4 & 0xff;
      apuStack_14[0] = (undefined *)0x36006c6c;
      uVar3 = uStack_18;
      if (((g_copCtrlReg & 0x80000000) == 0) &&
         (lVar6 = copExec(0x36006c6c), uVar3 = uStack_18, 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
    }
    uStack_18 = uVar3;
    sysMemReadS(&sStack_2,piVar2->g[7] + 0xc02);
    uVar3 = (uint)sStack_2;
    uStack_18 = -uVar3;
    if (uVar3 != 0) {
      sysMemWriteW(uVar5 + 0x90e000,&uStack_18);
      uVar5 = uVar5 + 4 & 0xff;
      apuStack_14[0] = (undefined *)0x36806d6d;
      uVar3 = uStack_18;
      if (((g_copCtrlReg & 0x80000000) == 0) &&
         (lVar6 = copExec(0x36806d6d), uVar3 = uStack_18, 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
    }
    uStack_18 = uVar3;
    sysMemReadS(&sStack_2,piVar2->g[7] + 0x140);
    uVar3 = (uint)sStack_2;
    uStack_18 = -uVar3;
    if (uVar3 != 0) {
      sysMemWriteW(uVar5 + 0x90e000,&uStack_18);
      uVar5 = uVar5 + 4 & 0xff;
      apuStack_14[0] = (undefined *)0x36006c6c;
      uVar3 = uStack_18;
      if (((g_copCtrlReg & 0x80000000) == 0) &&
         (lVar6 = copExec(0x36006c6c), uVar3 = uStack_18, 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
    }
    uStack_18 = uVar3;
    sysMemReadS(&sStack_2,piVar2->g[7] + 0x142);
    uVar3 = (uint)sStack_2;
    uStack_18 = -uVar3;
    if (uVar3 != 0) {
      sysMemWriteW(uVar5 + 0x90e000,&uStack_18);
      uVar5 = uVar5 + 4 & 0xff;
      apuStack_14[0] = (undefined *)0x36806d6d;
      uVar3 = uStack_18;
      if (((g_copCtrlReg & 0x80000000) == 0) &&
         (lVar6 = copExec(0x36806d6d), uVar3 = uStack_18, 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
    }
    uStack_18 = uVar3;
    sysMemReadS(&sStack_2,piVar2->g[7] + 0x144);
    uVar3 = (uint)sStack_2;
    uStack_18 = -uVar3;
    if (uVar3 != 0) {
      sysMemWriteW(uVar5 + 0x90e000,&uStack_18);
      uVar5 = uVar5 + 4 & 0xff;
      apuStack_14[0] = (undefined *)0x37006e6e;
      uVar3 = uStack_18;
      if (((g_copCtrlReg & 0x80000000) == 0) &&
         (lVar6 = copExec(0x37006e6e), uVar3 = uStack_18, 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
    }
    uStack_18 = uVar3;
    sysWriteWorkRam1(0x5001e4,uVar5 & 0xff);
    *src = 8;
    puStack_28 = &DAT_0050e180;
    do {
      sysMemReadW(dst,(uint)puStack_28);
      apuStack_20[0] = (undefined *)0x0;
      sysMemReadW(&puStack_24,(uint)(puStack_28 + 8));
      apuStack_14[0] = (undefined *)0x14802929;
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(0x14802929), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(apuStack_20[1]), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(apuStack_20[0]), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(puStack_24), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
      }
      apuStack_20[1] = *(undefined **)(&g_fifoOut + DAT_01689644 * 4);
      DAT_01689644 = DAT_01689644 + 1;
      if (DAT_01689640 <= DAT_01689644) {
        DAT_01689640 = 0;
        DAT_00255c9c = 1;
        DAT_01689644 = 0;
      }
      apuStack_20[0] = *(undefined **)(&g_fifoOut + DAT_01689644 * 4);
      DAT_01689644 = DAT_01689644 + 1;
      if (DAT_01689640 <= DAT_01689644) {
        DAT_01689640 = 0;
        DAT_00255c9c = 1;
        DAT_01689644 = 0;
      }
      puStack_24 = *(undefined **)(&g_fifoOut + DAT_01689644 * 4);
      DAT_01689644 = DAT_01689644 + 1;
      if (DAT_01689640 <= DAT_01689644) {
        DAT_01689640 = 0;
        DAT_00255c9c = 1;
        DAT_01689644 = 0;
      }
      sysMemWriteW((uint)puStack_28,dst);
      sysMemWriteW((uint)(puStack_28 + 8),&puStack_24);
      puStack_28 = puStack_28 + 0xc;
      uVar3 = *src;
      *src = uVar3 - 1;
    } while (1 < uVar3);
    apuStack_14[0] = &DAT_01000202;
    if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(&DAT_01000202), 0 < lVar6)) {
      DAT_01689640 = (uint)lVar6 >> 2;
      DAT_00255c9c = 0;
    }
  }
  sysMemReadW(apuStack_14,piVar2->g[7] + 0xc30);
  if (((uint)apuStack_14[0] & 0x400) == 0) goto LAB_0018d678;
  if ((uStack_3c & 0x400) != 0) goto LAB_0018c268;
  if ((uStack_3c & 0x200) == 0) goto LAB_0018d678;
  sysMemReadW(&uStack_18,piVar2->g[7]);
  if ((uStack_18 & 0x40) == 0) {
    if (((uint)apuStack_14[0] & 0x800) == 0) goto LAB_0018d388;
LAB_0018d3d0:
    uStack_18 = sysReadWorkRam4(0x50e1dc);
    apuStack_20[1] = (undefined *)sysReadWorkRam4(0x50e0ec);
  }
  else {
    if (((uint)apuStack_14[0] & 0x800) == 0) goto LAB_0018d3d0;
LAB_0018d388:
    uStack_18 = sysReadWorkRam4(0x50e1d0);
    apuStack_20[1] = (undefined *)sysReadWorkRam4(0x50e0e0);
    apuStack_14[0] = (undefined *)0x3e0f5c29;
    sysWriteWorkRam4(0x50e1cc,0x3e0f5c29);
  }
  apuStack_14[0] = (undefined *)0xa001414;
  if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(0xa001414), 0 < lVar6)) {
    DAT_01689640 = (uint)lVar6 >> 2;
    DAT_00255c9c = 0;
  }
  if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(uStack_18), 0 < lVar6)) {
    DAT_01689640 = (uint)lVar6 >> 2;
    DAT_00255c9c = 0;
  }
  if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(apuStack_20[1]), 0 < lVar6)) {
    DAT_01689640 = (uint)lVar6 >> 2;
    DAT_00255c9c = 0;
  }
  puStack_24 = *(undefined **)(&g_fifoOut + DAT_01689644 * 4);
  DAT_01689644 = DAT_01689644 + 1;
  if (DAT_01689640 <= DAT_01689644) {
    DAT_01689640 = 0;
    DAT_00255c9c = 1;
    DAT_01689644 = 0;
  }
  puStack_28 = (undefined *)0x8;
  apuStack_20[0] = &DAT_0050e098;
  do {
    sysMemReadW(&uStack_18,(uint)apuStack_20[0]);
    apuStack_14[0] = (undefined *)0x9801313;
    if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(0x9801313), 0 < lVar6)) {
      DAT_01689640 = (uint)lVar6 >> 2;
      DAT_00255c9c = 0;
    }
    if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(uStack_18), 0 < lVar6)) {
      DAT_01689640 = (uint)lVar6 >> 2;
      DAT_00255c9c = 0;
    }
    if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(puStack_24), 0 < lVar6)) {
      DAT_01689640 = (uint)lVar6 >> 2;
      DAT_00255c9c = 0;
    }
    uStack_18 = *(uint *)(&g_fifoOut + DAT_01689644 * 4);
    DAT_01689644 = DAT_01689644 + 1;
    if (DAT_01689640 <= DAT_01689644) {
      DAT_01689640 = 0;
      DAT_00255c9c = 1;
      DAT_01689644 = 0;
    }
    sysMemWriteW((uint)apuStack_20[0],&uStack_18);
    apuStack_20[0] = apuStack_20[0] + 0xc;
    puVar4 = puStack_28 + -1;
    bVar1 = (undefined *)0x1 < puStack_28;
    puStack_28 = puVar4;
  } while (bVar1);
LAB_0018d678:
  apuStack_14[0] = &DAT_00800101;
  if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(&DAT_00800101), 0 < lVar6)) {
    DAT_01689640 = (uint)lVar6 >> 2;
    DAT_00255c9c = 0;
  }
  puStack_40 = &DAT_0050e000;
  uStack_3c = piVar2->g[7] + 0xbe8;
  apuStack_20[1] = &DAT_0050e0f0;
  apuStack_20[0] = puStack_38;
  puStack_24 = (undefined *)0xc;
  sysMemReadW(piVar2->g + 4,piVar2->g[7]);
  sysMemReadW(&puStack_28,piVar2->g[7] + 0x1a4);
  sysMemReadW(&fStack_2c,piVar2->g[7] + 0xc30);
  piVar2->g[3] = 0;
  do {
    if (((((uint)puStack_28 & 0x100000) == 0) && (((uint)fStack_2c & 0x40) == 0)) ||
       (puStack_24 < (undefined *)0x8)) {
      apuStack_14[0] = (undefined *)0x2a005454;
      if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(0x2a005454), 0 < lVar6)) {
        DAT_01689640 = (uint)lVar6 >> 2;
        DAT_00255c9c = 0;
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
      iVar7 = 3;
      puVar8 = src;
      if ((g_copCtrlReg & 0x80000000) == 0) {
        do {
          lVar6 = copExec(*puVar8);
          if (0 < lVar6) {
            DAT_01689640 = (uint)lVar6 >> 2;
            DAT_00255c9c = 0;
          }
          iVar7 = iVar7 + -1;
          puVar8 = puVar8 + 1;
        } while (0 < iVar7);
      }
      sysMemReadS(&sStack_2,(uint)(apuStack_20[1] + 8));
      *src = (int)sStack_2;
      sysMemReadS(&sStack_2,(uint)(apuStack_20[1] + 4));
      piVar2->g[1] = (int)sStack_2;
      sysMemReadS(&sStack_2,(uint)apuStack_20[1]);
      piVar2->g[2] = (int)sStack_2;
      iVar7 = 3;
      puVar8 = src;
      if ((g_copCtrlReg & 0x80000000) == 0) {
        do {
          lVar6 = copExec(*puVar8);
          if (0 < lVar6) {
            DAT_01689640 = (uint)lVar6 >> 2;
            DAT_00255c9c = 0;
          }
          iVar7 = iVar7 + -1;
          puVar8 = puVar8 + 1;
        } while (0 < iVar7);
      }
      sysMemReadS(&sStack_2,uStack_3c + 2);
      *src = (int)sStack_2;
      sysMemReadS(&sStack_2,uStack_3c);
      piVar2->g[1] = (int)sStack_2;
      sysMemReadS(&sStack_2,uStack_3c + 4);
      piVar2->g[2] = (int)sStack_2;
      iVar7 = 3;
      puVar8 = src;
      if ((g_copCtrlReg & 0x80000000) == 0) {
        do {
          lVar6 = copExec(*puVar8);
          if (0 < lVar6) {
            DAT_01689640 = (uint)lVar6 >> 2;
            DAT_00255c9c = 0;
          }
          iVar7 = iVar7 + -1;
          puVar8 = puVar8 + 1;
        } while (0 < iVar7);
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
        if ((int)fStack_30 < 0x20) {
          iVar7 = 1 << ((uint)fStack_30 & 0x1f);
          *src = (int)((uVar3 - iVar7) + 1) / iVar7;
        }
        else {
          *src = 0xffffffff;
        }
      }
      else if ((int)fStack_30 < 0x20) {
        *src = (int)uVar3 >> ((uint)fStack_30 & 0x1f);
      }
      else {
        *src = 0;
      }
      sysMemWriteS((uint)(apuStack_20[0] + 4),src);
      uVar3 = piVar2->g[1];
      if ((int)uVar3 < 0) {
        if ((int)fStack_30 < 0x20) {
          iVar7 = 1 << ((uint)fStack_30 & 0x1f);
          piVar2->g[1] = (int)((uVar3 - iVar7) + 1) / iVar7;
        }
        else {
          piVar2->g[1] = 0xffffffff;
        }
      }
      else if ((int)fStack_30 < 0x20) {
        piVar2->g[1] = (int)uVar3 >> ((uint)fStack_30 & 0x1f);
      }
      else {
        piVar2->g[1] = 0;
      }
      sysMemWriteS((uint)apuStack_20[0],piVar2->g + 1);
      piVar2->g[2] = -piVar2->g[2];
      uVar3 = piVar2->g[2];
      if ((int)uVar3 < 0) {
        if ((int)fStack_30 < 0x20) {
          iVar7 = 1 << ((uint)fStack_30 & 0x1f);
          piVar2->g[2] = (int)((uVar3 - iVar7) + 1) / iVar7;
        }
        else {
          piVar2->g[2] = 0xffffffff;
        }
      }
      else if ((int)fStack_30 < 0x20) {
        piVar2->g[2] = (int)uVar3 >> ((uint)fStack_30 & 0x1f);
      }
      else {
        piVar2->g[2] = 0;
      }
      sysMemWriteS((uint)(apuStack_20[0] + 8),piVar2->g + 2);
    }
    else {
      sysMemWriteS((uint)apuStack_20[0],piVar2->g + 3);
      sysMemWriteS((uint)(apuStack_20[0] + 4),piVar2->g + 3);
      sysMemWriteS((uint)(apuStack_20[0] + 8),piVar2->g + 3);
    }
    apuStack_20[0] = apuStack_20[0] + 0xc;
    apuStack_20[1] = apuStack_20[1] + 0xc;
    puStack_40 = puStack_40 + 0xc;
    uStack_3c = uStack_3c + 6;
    puVar4 = puStack_24 + -1;
    bVar1 = (undefined *)0x1 < puStack_24;
    puStack_24 = puVar4;
  } while (bVar1);
  apuStack_14[0] = (undefined *)0xb801717;
  if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(0xb801717), 0 < lVar6)) {
    DAT_01689640 = (uint)lVar6 >> 2;
    DAT_00255c9c = 0;
  }
  if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(fStack_30), 0 < lVar6)) {
    DAT_01689640 = (uint)lVar6 >> 2;
    DAT_00255c9c = 0;
  }
  DAT_01689644 = DAT_01689644 + 1;
  if (DAT_01689640 <= DAT_01689644) {
    DAT_01689640 = 0;
    DAT_00255c9c = 1;
    DAT_01689644 = 0;
  }
  uStack_18 = 0x3f800000;
  fStack_30 = 1.0 / fStack_30;
  puStack_24 = (undefined *)0x18;
  do {
    sysMemReadW(&puStack_28,(uint)puStack_40);
    sysMemReadW(&fStack_2c,(uint)apuStack_20[1]);
    puStack_28 = (undefined *)((fStack_2c - (float)puStack_28) * fStack_30);
    sysMemWriteW((uint)apuStack_20[0],&puStack_28);
    apuStack_20[0] = apuStack_20[0] + 4;
    apuStack_20[1] = apuStack_20[1] + 4;
    puStack_40 = puStack_40 + 4;
    puVar4 = puStack_24 + -1;
    bVar1 = (undefined *)0x1 < puStack_24;
    puStack_24 = puVar4;
  } while (bVar1);
  apuStack_14[0] = &DAT_01000202;
  if (((g_copCtrlReg & 0x80000000) == 0) && (lVar6 = copExec(&DAT_01000202), 0 < lVar6)) {
    DAT_01689640 = (uint)lVar6 >> 2;
    DAT_00255c9c = 0;
  }
  return 0x18e;
}

