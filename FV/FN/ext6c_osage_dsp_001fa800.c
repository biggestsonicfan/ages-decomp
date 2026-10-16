/* EXT 6c: osage_dsp @ 001fa800; patched over i960 062854 (arcade osage_dsp) */

/* WARNING: Removing unreachable block (ram,0x001fb450) */
/* WARNING: Removing unreachable block (ram,0x001fabb4) */
/* WARNING: Removing unreachable block (ram,0x001fa9d0) */
/* WARNING: Removing unreachable block (ram,0x001fae48) */
/* WARNING: Removing unreachable block (ram,0x001fb2ac) */
/* WARNING: Removing unreachable block (ram,0x001fb7a0) */

undefined8 osage_dsp(int param_1)

{
  bool bVar1;
  i960_regs *piVar2;
  uint uVar3;
  undefined *puStack_44;
  undefined *puStack_40;
  undefined *puStack_3c;
  undefined *puStack_38;
  uint uStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  uint uStack_10;
  ushort uStack_c;
  ushort uStack_a;
  ushort uStack_8;
  byte bStack_6;
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar2 = i960GetRegs();
  sysMemReadW(&puStack_14,piVar2->g[0xd]);
  if (((uint)puStack_14 & 8) != 0) goto LAB_001fa860;
  sysMemReadW(piVar2->g + 7,piVar2->g[0xd] + 0x40);
  sysMemReadB(&bStack_1,piVar2->g[7] + 0x1b1);
  puStack_44 = (undefined *)(uint)bStack_1;
  if (bStack_1 < 2) {
    if (bStack_1 == 1) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 1;
    }
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 5) == 0) {
    puStack_14 = (undefined *)0x63fcc;
    sysMemWriteW(piVar2->g[0xd] + 0x44,&puStack_14);
    sysMemReadW(&puStack_14,piVar2->g[7] + 0x7f4);
    if (((uint)puStack_14 & 4) == 0) {
      puStack_14 = (undefined *)0x64154;
      sysMemWriteW(piVar2->g[0xd] + 0x44,&puStack_14);
    }
  }
  puStack_14 = (undefined *)(uint)bRam016b6dfb;
  sysMemReadW(&puStack_14,piVar2->g[0xd]);
  puStack_14 = (undefined *)((uint)puStack_14 & 0xffffffef);
  sysMemWriteW(piVar2->g[0xd],&puStack_14);
  puStack_18 = (undefined *)0x300;
  if ((1 << ((uint)puStack_14 & 0x1f) & 0x300U) != 0) {
    puStack_18 = (undefined *)0x3;
    puStack_14 = (undefined *)(uint)bRam016b6e01;
    if ((1 << ((uint)puStack_14 & 0x1f) & 3U) != 0) goto LAB_001fa860;
  }
  sysMemReadW(&puStack_14,piVar2->g[7]);
  if (((uint)puStack_14 & 0x80) == 0) goto LAB_001fa860;
  sysMemReadW(&puStack_14,piVar2->g[0xd]);
  puStack_14 = (undefined *)((uint)puStack_14 & 0xfffffeff);
  sysMemWriteW(piVar2->g[0xd],&puStack_14);
  puStack_44 = puRam016b75e4;
  sysMemReadB(&bStack_2,piVar2->g[7] + 4);
  puStack_40 = (undefined *)(uint)bStack_2;
  if (bStack_2 == 0) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 5) == 0) {
    sysMemReadW(&puStack_14,(uint)puStack_44);
    if (((uint)puStack_14 & 2) == 0) {
      uVar3 = piVar2->g[0xd];
      goto LAB_001faa5c;
    }
LAB_001faa28:
    sysMemReadW(&puStack_14,piVar2->g[0xd]);
    puStack_14 = (undefined *)((uint)puStack_14 & 0xffffffdf);
    sysMemWriteW(piVar2->g[0xd],&puStack_14);
    uVar3 = piVar2->g[0xd];
  }
  else {
    sysMemReadW(&puStack_14,(uint)puStack_44);
    if (((uint)puStack_14 & 4) != 0) goto LAB_001faa28;
    uVar3 = piVar2->g[0xd];
LAB_001faa5c:
    sysMemReadW(&puStack_14,uVar3);
    puStack_14 = (undefined *)((uint)puStack_14 | 0x20);
    sysMemWriteW(piVar2->g[0xd],&puStack_14);
    uVar3 = piVar2->g[0xd];
  }
  sysMemReadW(&puStack_44,uVar3);
  if ((((uint)puStack_44 & 4) == 0) && (((uint)puStack_44 & 1) == 0)) {
    sysMemReadL(&puStack_18,0xf00008);
    puStack_18 = (undefined *)0xfffff;
    puStack_14 = (undefined *)((0xfffed - ((uint)puStack_14 & 0xfffff)) / 0x19);
    sysMemWriteW(piVar2->g[0xd] + 0x120,&puStack_14);
  }
  sysMemReadW(&puStack_14,piVar2->g[10] + 0x2008);
  uRam016c5dcc = piVar2->g[0xe];
  piVar2->g[0xe] = 0;
  sysMemWriteW(piVar2->g[10],piVar2->g + 0xe);
  piVar2->g[0xe] = uRam016c5dcc;
  puRam016b85d0 = puStack_14;
  sysMemReadB(&bStack_3,piVar2->g[7] + 4);
  puStack_14 = (undefined *)((uint)bStack_3 * 8 + 0x501804);
  sysMemReadW(&puStack_18,(uint)bStack_3 * 8 + 0x501808);
  sysMemReadW(&uStack_1c,piVar2->g[10] + 0x2008);
  if (puStack_18 == (undefined *)0x0) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 5) == 0) {
    sysMemWriteW((uint)puStack_14,&uStack_1c);
  }
  else {
    uStack_1c = uStack_1c | 0x80000000;
    sysMemWriteW((uint)(puStack_18 + 0x900000),&uStack_1c);
  }
  puRam016c51d0 = (undefined *)0x50e404;
  puStack_14 = (undefined *)0x50e404;
  sysMemReadW(&puStack_14,piVar2->g[0xd]);
  if (((uint)puStack_14 & 0x10) == 0) {
    sysMemReadT(&puStack_40,piVar2->g[7] + 0x20c);
    puStack_40 = (undefined *)((ulong)((long)(int)puStack_40 << 0x21) >> 0x21);
    puStack_38 = (undefined *)((ulong)((long)(int)puStack_38 << 0x21) >> 0x21);
    if (puStack_40 < puStack_38) {
      bVar1 = false;
    }
    else if (puStack_40 == puStack_38) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      puStack_40 = puStack_38;
    }
    if ((int)puStack_40 < (int)puRam016c0ddc) {
      uStack_10 = 4;
    }
    else if (puStack_40 == puRam016c0ddc) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 1;
    }
    if ((uStack_10 & 1) == 0) {
      puStack_44 = (undefined *)0x0;
    }
    else {
      puStack_44 = (undefined *)0xbf000000;
    }
  }
  else {
    puStack_44 = (undefined *)0xc479f99a;
  }
  sysMemWriteW(piVar2->g[0xd] + 0xe4,&puStack_44);
  puStack_40 = (undefined *)0x3f000000;
  puStack_44 = (undefined *)((float)puStack_44 + 0.5);
  sysMemReadW(&puStack_40,piVar2->g[7] + 0x210);
  if ((float)puStack_44 <= (float)puStack_40) {
    if ((float)puStack_40 == (float)puStack_44) {
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
    sysMemReadW(&puStack_14,piVar2->g[0xd]);
    puStack_14 = (undefined *)((uint)puStack_14 & 0xffffffbf);
    sysMemWriteW(piVar2->g[0xd],&puStack_14);
    sysMemReadW(&puStack_14,piVar2->g[0xd]);
    puStack_14 = (undefined *)((uint)puStack_14 & 0xffffff7f);
    sysMemWriteW(piVar2->g[0xd],&puStack_14);
  }
  else {
    sysMemReadW(&puStack_14,piVar2->g[0xd]);
    puStack_14 = (undefined *)((uint)puStack_14 | 0x40);
    sysMemWriteW(piVar2->g[0xd],&puStack_14);
    sysMemReadB(&bStack_4,piVar2->g[7] + 0x1b1);
    puStack_44 = (undefined *)(uint)bStack_4;
    if (bStack_4 < 6) {
      if (bStack_4 == 5) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 5) == 0) {
      sysMemReadW(&puStack_14,piVar2->g[0xd]);
      puStack_14 = (undefined *)((uint)puStack_14 & 0xffffff7f);
      sysMemWriteW(piVar2->g[0xd],&puStack_14);
    }
    else {
      sysMemReadW(&puStack_14,piVar2->g[0xd]);
      puStack_14 = (undefined *)((uint)puStack_14 | 0x80);
      sysMemWriteW(piVar2->g[0xd],&puStack_14);
    }
  }
  FUN_001fbac0(0);
  puStack_44 = (undefined *)0x0;
  sysMemWriteW(piVar2->g[0xd] + 0x144,&puStack_44);
  puStack_14 = (undefined *)0x54;
  sysMemWriteW(piVar2->g[0xd] + 0x50,&puStack_14);
  sysMemReadW(piVar2->g + 9,piVar2->g[0xd] + 0x44);
  sysMemReadW(piVar2->g + 8,piVar2->g[0xd] + 0x48);
  while( true ) {
    sysMemReadW(&puStack_44,piVar2->g[9]);
    piVar2->g[9] = piVar2->g[9] + 4;
    sysMemWriteW(piVar2->g[8],&puStack_44);
    piVar2->g[8] = piVar2->g[8] + 4;
    if (puStack_44 == (undefined *)0x0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 2) != 0) break;
    switch(puStack_44) {
    case (undefined *)0x1:
      FUN_001fd640(0);
      break;
    case (undefined *)0x2:
      FUN_001fcc80(0);
      break;
    case (undefined *)0x3:
      FUN_001fcb80(0);
      break;
    case (undefined *)0x4:
      FUN_001fc780(0);
      break;
    case (undefined *)0x5:
      FUN_001fc380(0);
    }
    sysMemReadL(&puStack_40,(int)puStack_44 * 8 + 0x62734);
    piVar2->g[9] = (uint)(puStack_40 + piVar2->g[9]);
    piVar2->g[8] = (uint)(puStack_3c + piVar2->g[8]);
  }
  puStack_44 = (undefined *)0x200;
  sysMemReadW(&puStack_40,piVar2->g[0xd] + 0x48);
  puStack_44 = puStack_40 + (int)puStack_44 * 4;
  if ((undefined *)piVar2->g[8] < puStack_44) {
    uStack_10 = 4;
  }
  else if ((undefined *)piVar2->g[8] == puStack_44) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 1;
  }
  puStack_14 = (undefined *)0x800101;
  FUN_0018df40();
  FUN_001fe0c0(0);
  puStack_14 = (undefined *)0x1000202;
  FUN_0018df40();
  FUN_001fc1c0(0);
  sysMemReadB(&bStack_5,piVar2->g[7] + 4);
  puStack_14 = (undefined *)((uint)bStack_5 * 8 + 0x501804);
  sysMemReadW(&puStack_18,(uint)puStack_14);
  sysMemReadW(&uStack_1c,piVar2->g[10] + 0x2008);
  sysMemWriteW((uint)(puStack_14 + 4),&uStack_1c);
  puStack_18 = (undefined *)((uint)puStack_18 | 0x80000000);
  sysMemWriteW(piVar2->g[10],&puStack_18);
  sysMemReadW(&puStack_14,piVar2->g[10] + 0x2008);
  puStack_14 = (undefined *)((uint)puStack_14 | 0x80000000);
  puStack_18 = puRam016b85d0;
  sysMemWriteW((uint)(puRam016b85d0 + 0x900000),&puStack_14);
  puStack_44 = (undefined *)((uint)bRam016b6e34 * 0xc + 0x6442ba8);
  sysMemReadW(&puStack_44,(uint)puStack_44);
  if (((uint)puStack_44 & 0x100) == 0) {
    uVar3 = piVar2->g[0xd];
  }
  else {
    sysMemReadW(&puStack_14,piVar2->g[10] + 0x2008);
    uRam016c5dcc = piVar2->g[0xe];
    piVar2->g[0xe] = 0;
    sysMemWriteW(piVar2->g[10],piVar2->g + 0xe);
    piVar2->g[0xe] = uRam016c5dcc;
    puRam016b85d0 = puStack_14;
    puStack_14 = (undefined *)0x50184c;
    sysMemReadW(&puStack_18,0x501850);
    sysMemReadW(&uStack_1c,piVar2->g[10] + 0x2008);
    if (puStack_18 == (undefined *)0x0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 5) == 0) {
      sysMemWriteW((uint)puStack_14,&uStack_1c);
    }
    else {
      uStack_1c = uStack_1c | 0x80000000;
      sysMemWriteW((uint)(puStack_18 + 0x900000),&uStack_1c);
    }
    puStack_14 = (undefined *)0x800101;
    FUN_0018df40();
    puStack_14 = (undefined *)0x6000c0c;
    FUN_0018df40();
    puStack_14 = (undefined *)0x9801313;
    FUN_0018df40();
    FUN_0018df40(puStack_14);
    FUN_0018df40(puStack_14);
    FUN_0018e100();
    puStack_14 = &DAT_21804343;
    FUN_0018df40();
    puStack_14 = (undefined *)0x0;
    FUN_0018df40(0);
    puStack_14 = (undefined *)0x1000202;
    FUN_0018df40();
    puStack_14 = (undefined *)0x800101;
    FUN_0018df40();
    puStack_14 = (undefined *)0x3000606;
    puStack_40 = (undefined *)0x0;
    puStack_3c = (undefined *)0x41400000;
    FUN_0018df40();
    FUN_0018df40(puStack_40);
    FUN_0018df40(puStack_40);
    FUN_0018df40(puStack_3c);
    puStack_40 = (undefined *)0x3f800000;
    puStack_3c = (undefined *)0xbf800000;
    puStack_14 = (undefined *)0x3800707;
    FUN_0018df40();
    FUN_0018df40(puStack_40);
    FUN_0018df40(puStack_40);
    FUN_0018df40(puStack_3c);
    puStack_14 = (undefined *)0x22804545;
    FUN_0018df40();
    puStack_14 = (undefined *)0x0;
    FUN_0018df40(0);
    puStack_3c = (undefined *)0x50e404;
    puStack_38 = puRam016c51d0;
    while( true ) {
      puStack_14 = (undefined *)0x9801313;
      FUN_0018df40();
      FUN_0018df40(puStack_40);
      FUN_0018df40(puStack_40);
      puStack_40 = (undefined *)FUN_0018e100();
      if (puStack_3c < puStack_38) {
        uStack_10 = 4;
      }
      else if (puStack_3c == puStack_38) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
      if ((uStack_10 & 2) != 0) break;
      puStack_14 = (undefined *)0x800101;
      FUN_0018df40();
      puStack_14 = (undefined *)0x5800b0b;
      FUN_0018df40();
      puStack_14 = puStack_3c;
      sysMemReadW(&puStack_18,(uint)puStack_3c);
      FUN_0018df40(puStack_18);
      sysMemReadW(&puStack_18,(uint)(puStack_14 + 4));
      FUN_0018df40(puStack_18);
      sysMemReadW(&puStack_18,(uint)(puStack_14 + 8));
      FUN_0018df40(puStack_18);
      sysMemReadW(&puStack_18,(uint)(puStack_14 + 0xc));
      FUN_0018df40(puStack_18);
      sysMemReadW(&puStack_18,(uint)(puStack_14 + 0x10));
      FUN_0018df40(puStack_18);
      sysMemReadW(&puStack_18,(uint)(puStack_14 + 0x14));
      FUN_0018df40(puStack_18);
      sysMemReadW(&puStack_18,(uint)(puStack_14 + 0x18));
      FUN_0018df40(puStack_18);
      sysMemReadW(&puStack_18,(uint)(puStack_14 + 0x1c));
      FUN_0018df40(puStack_18);
      sysMemReadW(&puStack_18,(uint)(puStack_14 + 0x20));
      FUN_0018df40(puStack_18);
      sysMemReadW(&puStack_18,(uint)(puStack_14 + 0x24));
      FUN_0018df40(puStack_18);
      sysMemReadW(&puStack_18,(uint)(puStack_14 + 0x28));
      FUN_0018df40(puStack_18);
      sysMemReadW(&puStack_18,(uint)(puStack_14 + 0x2c));
      FUN_0018df40(puStack_18);
      puStack_3c = puStack_3c + 0x30;
      sysMemReadW(piVar2->g,(uint)puStack_3c);
      puStack_3c = puStack_3c + 4;
      if (piVar2->g[0] == 0) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 4;
      }
      if ((uStack_10 & 2) == 0) {
        sysMemReadB(&bStack_6,piVar2->g[7] + 4);
        piVar2->g[1] = (uint)bStack_6;
        sysMemReadW(&puStack_14,piVar2->g[7] + 0x1a4);
        if (((uint)puStack_14 & 0x4000000) != 0) {
          sysMemReadS(&uStack_8,piVar2->g[7] + 0x1aa);
          puStack_14 = (undefined *)(uint)uStack_8;
          if (uStack_8 < 5) {
            if (uStack_8 == 4) {
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
            piVar2->g[2] = 0x800000;
            set_obj_thd(0);
            goto LAB_001fb7b8;
          }
        }
        sysMemReadW(&puStack_14,piVar2->g[7] + 0x720);
        if (((uint)puStack_14 & 4) != 0) {
          sysMemReadS(&uStack_a,piVar2->g[7] + 0x1aa);
          puStack_14 = (undefined *)(uint)uStack_a;
          if (uStack_a < 5) {
            if (uStack_a == 4) {
              uStack_10 = 2;
            }
            else {
              uStack_10 = 1;
            }
          }
          else {
            uStack_10 = 4;
          }
          if (((uStack_10 & 4) == 0) && ((uStack_a & 1) != 0)) {
            piVar2->g[2] = 0x802000;
            set_obj_thd(0);
            goto LAB_001fb7b8;
          }
        }
        set_obj(0);
      }
LAB_001fb7b8:
      puStack_14 = (undefined *)0x1000202;
      FUN_0018df40();
    }
    puStack_14 = (undefined *)0x1000202;
    FUN_0018df40();
    puStack_14 = (undefined *)0x50184c;
    sysMemReadW(&puStack_18,0x50184c);
    sysMemReadW(&uStack_1c,piVar2->g[10] + 0x2008);
    sysMemWriteW((uint)(puStack_14 + 4),&uStack_1c);
    puStack_18 = (undefined *)((uint)puStack_18 | 0x80000000);
    sysMemWriteW(piVar2->g[10],&puStack_18);
    sysMemReadW(&puStack_14,piVar2->g[10] + 0x2008);
    puStack_14 = (undefined *)((uint)puStack_14 | 0x80000000);
    puStack_18 = puRam016b85d0;
    sysMemWriteW((uint)(puRam016b85d0 + 0x900000),&puStack_14);
    uVar3 = piVar2->g[0xd];
  }
  sysMemReadS(&uStack_c,uVar3 + 6);
  puStack_44 = (undefined *)(uStack_c + 1);
  sysMemWriteS(piVar2->g[0xd] + 6,&puStack_44);
  sysMemReadW(&puStack_44,piVar2->g[0xd]);
  if ((((uint)puStack_44 & 4) == 0) && (((uint)puStack_44 & 1) == 0)) {
    puStack_44 = (undefined *)(uint)bRam016b6dd0;
    if (bRam016b6dd0 == 0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 5) == 0) {
      sysMemReadL(&puStack_18,0xf00008);
      puStack_18 = (undefined *)0xfffff;
      puStack_14 = (undefined *)((0xfffed - ((uint)puStack_14 & 0xfffff)) / 0x19);
      sysMemWriteW(piVar2->g[0xd] + 0x124,&puStack_14);
      sysMemReadW(&uStack_1c,piVar2->g[0xd] + 0x120);
      sysMemReadW(&puStack_18,piVar2->g[0xd] + 0x124);
      puStack_14 = puStack_18 + -uStack_1c;
      sysMemWriteW(piVar2->g[0xd] + 0x128,&puStack_14);
      sysMemReadW(&puStack_14,piVar2->g[0xd]);
      puStack_14 = (undefined *)((uint)puStack_14 | 4);
      sysMemWriteW(piVar2->g[0xd],&puStack_14);
    }
  }
  sysMemReadW(&puStack_14,piVar2->g[0xd]);
  puStack_14 = (undefined *)((uint)puStack_14 & 0xfffffffe);
  sysMemWriteW(piVar2->g[0xd],&puStack_14);
LAB_001fa860:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

