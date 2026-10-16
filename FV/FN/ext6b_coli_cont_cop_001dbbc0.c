/* EXT 6b: coli_cont_cop @ 001dbbc0; patched over i960 027e18 (arcade coli_cont_cop) */

undefined8 coli_cont_cop(long param_1)

{
  i960_regs *piVar1;
  uint uVar2;
  undefined1 auStack_50 [12];
  uint uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  uint uStack_34;
  float afStack_30 [2];
  float fStack_28;
  uint uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  undefined *puStack_14;
  uint uStack_10;
  ushort uStack_a;
  ushort uStack_8;
  ushort uStack_6;
  ushort uStack_4;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadT(&fStack_40,piVar1->g[7] + 500);
  sysMemReadT(afStack_30,piVar1->g[8] + 500);
  puStack_14 = (undefined *)0x1f003e3e;
  fStack_20 = afStack_30[0] - fStack_40;
  fStack_18 = fStack_28 - fStack_38;
  FUN_0018df40();
  FUN_0018df40(fStack_20);
  FUN_0018df40(fStack_18);
  FUN_0018df40(fStack_40);
  FUN_0018df40(uStack_3c);
  FUN_0018df40(fStack_38);
  piVar1->g[7] = uRam016b75d4;
  FUN_001dcc00(0);
  uStack_44 = piVar1->g[3];
  piVar1->g[7] = uRam016b75d8;
  FUN_001dcc00(0);
  uStack_34 = piVar1->g[3];
  piVar1->g[7] = uRam016b75d4;
  sysMemReadB(&bStack_1,piVar1->g[7] + 0x821);
  uStack_24 = (uint)bStack_1;
  piVar1->g[7] = uRam016b75d8;
  sysMemReadB(&bStack_2,piVar1->g[7] + 0x821);
  puStack_14 = &DAT_1d003a3a;
  fStack_20 = (float)(uint)bStack_2;
  FUN_0018df40();
  FUN_0018df40(uStack_44);
  FUN_0018df40(uStack_34);
  FUN_0018df40(uStack_24);
  FUN_0018df40(fStack_20);
  FUN_001dca80(0);
  piVar1->g[7] = uRam016b75d4;
  piVar1->g[8] = uRam016b75d8;
  FUN_001dcec0(0);
  piVar1->g[7] = uRam016b75d8;
  piVar1->g[8] = uRam016b75d4;
  FUN_001dcec0(0);
  FUN_001dc200(0);
  piVar1->g[7] = uRam016b75d4;
  sysMemReadW(&fStack_18,piVar1->g[7] + 0x1a4);
  if (((uint)fStack_18 & 0x20000000) == 0) {
    piVar1->g[8] = uRam016b75d8;
    sysMemReadW(&fStack_18,piVar1->g[8] + 0x1a4);
    if (((uint)fStack_18 & 0x20000000) != 0) goto LAB_001dbdc8;
    uVar2 = piVar1->g[6];
    if ((uVar2 & 1) != 0) {
LAB_001dc170:
      FUN_001e0a80(0);
      FUN_001df280(auStack_50);
      goto LAB_001dbfa4;
    }
    if ((uVar2 & 0x20) == 0) {
      if ((uVar2 & 0x80) != 0) {
        sysMemReadS(&uStack_8,piVar1->g[8] + 0x1aa);
        uStack_44 = (uint)uStack_8;
        sysMemReadS(&uStack_a,piVar1->g[8] + 0x80a);
        uStack_34 = (uint)uStack_a;
        uStack_24 = uStack_34 + 0xf;
        if (uStack_44 < uStack_34) {
          uStack_10 = 4;
        }
        else if (uStack_44 == uStack_34) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
        if ((uStack_10 & 4) == 0) {
          if (uStack_44 < uStack_24) {
            uStack_10 = 4;
          }
          else if (uStack_44 == uStack_24) {
            uStack_10 = 2;
          }
          else {
            uStack_10 = 1;
          }
          goto joined_r0x001dc164;
        }
      }
    }
    else {
      sysMemReadS(&uStack_4,piVar1->g[7] + 0x1aa);
      uStack_44 = (uint)uStack_4;
      sysMemReadS(&uStack_6,piVar1->g[7] + 0x80a);
      uStack_34 = (uint)uStack_6;
      uStack_24 = uStack_34 + 0xf;
      if (uStack_44 < uStack_34) {
        uStack_10 = 4;
      }
      else if (uStack_44 == uStack_34) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
      if ((uStack_10 & 4) == 0) {
        if (uStack_44 < uStack_24) {
          uStack_10 = 4;
        }
        else if (uStack_44 == uStack_24) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
joined_r0x001dc164:
        if ((uStack_10 & 4) != 0) goto LAB_001dc170;
      }
    }
  }
  else {
LAB_001dbdc8:
    FUN_001e0a80(0);
  }
  piVar1->g[7] = uRam016b75d4;
  sysMemReadW(&uStack_24,piVar1->g[7] + 0x77c);
  piVar1->g[8] = uRam016b75d8;
  sysMemReadW(&fStack_20,piVar1->g[8] + 0x77c);
  sysMemReadW(&uStack_44,piVar1->g[0xd] + 0x88);
  sysMemReadW(&uStack_1c,piVar1->g[0xd] + 0xc0);
  sysMemReadW(&fStack_18,piVar1->g[0xd] + 0xc4);
  puStack_14 = &DAT_1d803b3b;
  FUN_0018df40();
  FUN_0018df40(uStack_44);
  FUN_0018df40(uStack_24);
  FUN_0018df40(fStack_20);
  FUN_0018df40(uStack_1c);
  FUN_0018df40(fStack_18);
  sysMemReadW(&uStack_1c,piVar1->g[0xd] + 0x264);
  sysMemReadW(&fStack_18,piVar1->g[0xd] + 0x268);
  FUN_0018df40(uStack_1c);
  FUN_0018df40(fStack_18);
  fStack_20 = (float)FUN_0018e100();
  uStack_1c = FUN_0018e100();
  uVar2 = FUN_0018e100();
  piVar1->g[4] = uVar2;
  uVar2 = FUN_0018e100();
  piVar1->g[5] = uVar2;
  sysMemWriteW(piVar1->g[0xd] + 0x160,&fStack_20);
  sysMemWriteW(piVar1->g[0xd] + 0x164,&uStack_1c);
  sysMemReadW(&puStack_14,piVar1->g[0xd] + 0x100);
  sysMemReadW(&fStack_18,piVar1->g[0xd] + 0xfc);
  puStack_14 = (undefined *)((float)puStack_14 + fStack_18);
  sysMemWriteW(piVar1->g[0xd] + 0x100,&fStack_18);
  sysMemReadW(&fStack_18,piVar1->g[0xd] + 0xf8);
  puStack_14 = (undefined *)((float)puStack_14 + fStack_18);
  sysMemWriteW(piVar1->g[0xd] + 0xfc,&fStack_18);
  puStack_14 = (undefined *)((float)puStack_14 + (float)piVar1->g[5]);
  sysMemWriteW(piVar1->g[0xd] + 0xf8,piVar1->g + 5);
  fStack_18 = 4.0;
  piVar1->g[5] = (uint)((float)puStack_14 / 4.0);
  FUN_001df280(auStack_50);
LAB_001dbfa4:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

