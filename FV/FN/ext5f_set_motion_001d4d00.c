/* EXT 5f: set_motion @ 001d4d00; patched over i960 01b5b0 (arcade set_motion) */

/* WARNING: Removing unreachable block (ram,0x001d503c) */
/* WARNING: Removing unreachable block (ram,0x001d4dd0) */
/* WARNING: Removing unreachable block (ram,0x001d5100) */

undefined8 set_motion(long param_1)

{
  i960_regs *piVar1;
  uint uVar2;
  i960_regs *piVar3;
  uint auStack_64 [8];
  uint uStack_44;
  uint auStack_40 [3];
  uint uStack_34;
  uint auStack_30 [2];
  uint uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [4];
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  ushort uStack_c;
  ushort uStack_a;
  ushort uStack_8;
  short sStack_6;
  short sStack_4;
  short sStack_2;
  
  piVar1 = i960GetRegs();
  uStack_28 = 0;
  uStack_14 = 0;
  sysMemWriteW(piVar1->g[7] + 0x5cc,&uStack_14);
  uStack_14 = 0;
  sysMemWriteB(piVar1->g[7] + 0x60c,&uStack_14);
  sysMemReadW(&uStack_14,piVar1->g[7]);
  uStack_14 = uStack_14 & 0xfffffdff;
  sysMemWriteW(piVar1->g[7],&uStack_14);
  sysMemReadW(&uStack_34,piVar1->g[7] + 0x1a4);
  if (piVar1->g[0] == 0) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 2) != 0) {
    uStack_1c = 0x14068;
    sysMemReadW(&uStack_18,piVar1->g[7] + 0x1a4);
    uStack_14 = uStack_1c & uStack_18;
    sysMemWriteW(piVar1->g[7] + 0x1a4,&uStack_14);
    sysMemWriteS(piVar1->g[7] + 0x1a8,piVar1->g);
    goto LAB_001d5180;
  }
  sysMemReadW(&uStack_14,piVar1->g[7]);
  uStack_14 = uStack_14 | 0x800;
  sysMemWriteW(piVar1->g[7],&uStack_14);
  if ((piVar1->g[0] & 0x4000) == 0) {
    uVar2 = piVar1->g[0];
  }
  else {
    uStack_14 = 1;
    uStack_34 = uStack_34 & 0xffdfff9f;
    sysMemWriteB(piVar1->g[7] + 0xbe4,&uStack_14);
    uVar2 = piVar1->g[0];
  }
  if ((uVar2 & 0x2000) != 0) {
    uStack_14 = 1;
    uStack_34 = uStack_34 & 0xffdfffdf;
    sysMemWriteB(piVar1->g[7] + 0xbe4,&uStack_14);
  }
  if ((uStack_34 & 0x40) != 0) {
    if (uStack_28 < 2) {
      if (uStack_28 == 1) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    if (((uStack_10 & 5) == 0) && ((uStack_34 & 0x4000) != 0)) {
      sysMemReadS(&sStack_2,piVar1->g[7] + 0x616);
      uStack_14 = (uint)sStack_2;
      sysMemWriteS(piVar1->g[7] + 0x26,&uStack_14);
    }
    else {
      sysMemReadS(&sStack_4,piVar1->g[7] + 0x812);
      uStack_1c = (uint)sStack_4;
      sysMemReadS(&sStack_6,piVar1->g[7] + 0x26);
      uStack_18 = (uint)sStack_6;
      uStack_14 = uStack_1c + uStack_18;
      sysMemWriteS(piVar1->g[7] + 0x26,&uStack_14);
    }
  }
  if ((uStack_34 & 0x20) != 0) {
    sysMemReadW(&uStack_14,piVar1->g[7] + 500);
    sysMemWriteW(piVar1->g[7] + 0x18,&uStack_14);
    sysMemReadW(&uStack_14,piVar1->g[7] + 0x1fc);
    sysMemWriteW(piVar1->g[7] + 0x20,&uStack_14);
    uStack_14 = 0;
    sysMemWriteW(piVar1->g[7] + 0x80,&uStack_14);
    uStack_14 = 0;
    sysMemWriteW(piVar1->g[7] + 0x88,&uStack_14);
  }
  if ((uStack_34 & 0x200000) == 0) {
    uVar2 = piVar1->g[0];
  }
  else {
    sysMemReadW(&uStack_14,piVar1->g[7]);
    uStack_14 = uStack_14 ^ 0x40;
    sysMemWriteW(piVar1->g[7],&uStack_14);
    uVar2 = piVar1->g[0];
  }
  if ((uVar2 & 0x8000) == 0) {
    uStack_24 = piVar1->g[0];
  }
  else {
    sysMemReadW(&uStack_14,piVar1->g[7]);
    uStack_14 = uStack_14 ^ 0x40;
    sysMemWriteW(piVar1->g[7],&uStack_14);
    uStack_24 = piVar1->g[0];
  }
  uStack_1c = 0x1fff;
  piVar1->g[0] = piVar1->g[0] & 0x1fff;
  sysMemWriteS(piVar1->g[7] + 0x1a8,piVar1->g);
  uStack_14 = 1;
  sysMemWriteS(piVar1->g[7] + 0x1aa,&uStack_14);
  sysMemReadW(&uStack_14,piVar1->g[7]);
  if ((uStack_14 & 0x8000000) != 0) {
    piVar1->r[1] = piVar1->r[1] + 4;
    sysMemWriteW(piVar1->r[1] - 4,&uStack_44);
    piVar1->r[1] = piVar1->r[1] + 0x10;
    sysMemWriteQ(piVar1->r[1] - 0x10,auStack_40);
    piVar1->r[1] = piVar1->r[1] + 0x10;
    sysMemWriteQ(piVar1->r[1] - 0x10,auStack_30);
    piVar1->r[1] = piVar1->r[1] + 0x10;
    sysMemWriteQ(piVar1->r[1] - 0x10,auStack_20);
    piVar1->r[1] = piVar1->r[1] + 0x10;
    sysMemWriteQ(piVar1->r[1] - 0x10,piVar1->g);
    piVar1->r[1] = piVar1->r[1] + 0x10;
    sysMemWriteQ(piVar1->r[1] - 0x10,piVar1->g + 4);
    piVar1->r[1] = piVar1->r[1] + 0x10;
    sysMemWriteQ(piVar1->r[1] - 0x10,piVar1->g + 8);
    piVar1->r[1] = piVar1->r[1] + 4;
    sysMemWriteW(piVar1->r[1] - 4,piVar1->g + 0xc);
    piVar1->r[1] = piVar1->r[1] + 4;
    sysMemWriteW(piVar1->r[1] - 4,piVar1->g + 0xd);
    piVar1->r[1] = piVar1->r[1] + 4;
    sysMemWriteW(piVar1->r[1] - 4,piVar1->g + 0xe);
    piVar3 = i960GetRegs();
    sysMemReadW(auStack_64,piVar3->g[7]);
    auStack_64[0] = auStack_64[0] & 0xf7ffffff;
    sysMemWriteW(piVar3->g[7],auStack_64);
    auStack_64[0] = 0;
    sysMemWriteW(piVar3->g[7] + 0xafc,auStack_64);
    send_init_ram_coli_data(0);
    sysMemReadW(piVar1->g + 0xe,piVar1->r[1] - 4);
    piVar1->r[1] = piVar1->r[1] - 4;
    sysMemReadW(piVar1->g + 0xd,piVar1->r[1] - 4);
    piVar1->r[1] = piVar1->r[1] - 4;
    sysMemReadW(piVar1->g + 0xc,piVar1->r[1] - 4);
    piVar1->r[1] = piVar1->r[1] - 4;
    sysMemReadQ(piVar1->g + 8,piVar1->r[1] - 0x10);
    piVar1->r[1] = piVar1->r[1] - 0x10;
    sysMemReadQ(piVar1->g + 4,piVar1->r[1] - 0x10);
    piVar1->r[1] = piVar1->r[1] - 0x10;
    sysMemReadQ(piVar1->g,piVar1->r[1] - 0x10);
    piVar1->r[1] = piVar1->r[1] - 0x10;
    sysMemReadQ(auStack_20,piVar1->r[1] - 0x10);
    piVar1->r[1] = piVar1->r[1] - 0x10;
    sysMemReadQ(auStack_30,piVar1->r[1] - 0x10);
    piVar1->r[1] = piVar1->r[1] - 0x10;
    sysMemReadQ(auStack_40,piVar1->r[1] - 0x10);
    piVar1->r[1] = piVar1->r[1] - 0x10;
    sysMemReadW(&uStack_44,piVar1->r[1] - 4);
    piVar1->r[1] = piVar1->r[1] - 4;
  }
  set_mot_dat(0);
  sysMemReadW(auStack_30,piVar1->g[7] + 0x1a4);
  if ((uStack_24 & 0x8000) != 0) {
    sysMemReadW(auStack_40,piVar1->g[7] + 0x804);
    if ((auStack_40[0] & 0x200000) != 0) {
      uStack_44 = auStack_40[0] | 0x200000;
      sysMemWriteW(piVar1->g[7] + 0x804,&uStack_44);
      auStack_30[0] = auStack_30[0] ^ 0x200000;
    }
  }
  if ((auStack_30[0] & 0x100) != 0) {
    sysMemReadS(&uStack_8,piVar1->g[7] + 0x6e2);
    uStack_18 = (uint)uStack_8;
    uStack_14 = uStack_18 + 1;
    sysMemWriteS(piVar1->g[7] + 0x6e2,&uStack_14);
  }
  if ((uStack_34 & 0x20) != 0) {
    auStack_30[0] = auStack_30[0] | 0x80;
  }
  sysMemWriteW(piVar1->g[7] + 0x1a4,auStack_30);
  calc_rob_angle_int(0);
  smooth_int(0);
  sysMemReadW(&uStack_14,piVar1->g[7]);
  if ((uStack_14 & 0x10) == 0) {
    if ((auStack_30[0] & 0x100) != 0) {
      sysMemReadS(&uStack_a,piVar1->g[7] + 0x1222);
      uStack_14 = 0;
      uStack_44 = (uint)uStack_a;
      sysMemWriteS(piVar1->g[7] + 0x1222,&uStack_14);
      if (uStack_44 == 0) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 4;
      }
      if ((uStack_10 & 2) != 0) goto LAB_001d567c;
      sysMemWriteS(piVar1->g[7] + 0x1224,&uStack_44);
      sysMemReadW(&uStack_14,piVar1->g[7] + 0x122c);
      sysMemWriteW(piVar1->g[7] + 0x1228,&uStack_14);
    }
    uVar2 = piVar1->g[7];
  }
  else {
LAB_001d567c:
    uStack_14 = 0;
    sysMemWriteS(piVar1->g[7] + 0x1224,&uStack_14);
    uVar2 = piVar1->g[7];
  }
  sysMemReadW(&uStack_14,uVar2);
  if ((uStack_14 & 0x10) == 0) {
    if ((auStack_30[0] & 0x100) == 0) goto LAB_001d5180;
    sysMemReadS(&uStack_c,piVar1->g[7] + 0x1246);
    uStack_14 = 0;
    uStack_44 = (uint)uStack_c;
    sysMemWriteS(piVar1->g[7] + 0x1246,&uStack_14);
    if (uStack_44 == 0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 2) == 0) {
      sysMemWriteS(piVar1->g[7] + 0x1248,&uStack_44);
      goto LAB_001d5180;
    }
  }
  uStack_14 = 0;
  sysMemWriteS(piVar1->g[7] + 0x1224,&uStack_14);
LAB_001d5180:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

