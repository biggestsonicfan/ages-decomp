/* helper parts_kage_disp @ 001f4ac0, called (depth 1) from rob_kage_disp_inside */

/* WARNING: Removing unreachable block (ram,0x001f4bd8) */
/* WARNING: Removing unreachable block (ram,0x001f4eb8) */

undefined8 parts_kage_disp(int param_1)

{
  i960_regs *piVar1;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  uint uStack_28;
  uint auStack_24 [2];
  uint uStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  uint uStack_10;
  short sStack_c;
  short sStack_a;
  short sStack_8;
  ushort uStack_6;
  ushort uStack_4;
  ushort uStack_2;
  
  piVar1 = i960GetRegs();
  piVar1->g[0] = 2;
  set_mmode(0);
  puStack_14 = (undefined *)0x800101;
  FUN_0018df40();
  puStack_14 = (undefined *)0x22004444;
  FUN_0018df40();
  puStack_14 = (undefined *)0x0;
  FUN_0018df40(0);
  uStack_34 = 8;
  uStack_44 = iRam016b7614 + 0x88;
  do {
    sysMemReadS(&uStack_2,uStack_44 + 0x32);
    uStack_28 = (uint)uStack_2;
    sysMemReadS(&uStack_4,uStack_28 * 2 + 0x60ba8);
    auStack_24[0] = (uint)uStack_4;
    sysMemReadS(&uStack_6,uStack_44 + 0x22);
    uStack_28 = (uint)uStack_6;
    if (uStack_6 == 0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 2) == 0) {
      piVar1->g[5] = 1;
      sysMemReadW(piVar1->g + 1,uStack_44 + 0x24);
      if ((piVar1->g[1] & 0x100) == 0) {
        piVar1->g[5] = 2;
      }
      piVar1->g[1] = piVar1->g[1] & 1;
      uStack_30 = *(undefined4 *)(piVar1->g[1] * 4 + 0x16b75d4);
      sysMemReadT(&uStack_40,uStack_44);
      puStack_14 = (undefined *)0x800101;
      FUN_0018df40();
      puStack_14 = (undefined *)0x3000606;
      FUN_0018df40();
      FUN_0018df40(uStack_40);
      FUN_0018df40(uStack_3c);
      FUN_0018df40(uStack_38);
      puStack_14 = (undefined *)0x4800909;
      FUN_0018df40();
      sysMemReadS(&sStack_8,uStack_44 + 0x1e);
      puStack_14 = (undefined *)(int)sStack_8;
      FUN_0018df40();
      puStack_14 = (undefined *)0x4000808;
      FUN_0018df40();
      sysMemReadS(&sStack_a,uStack_44 + 0x1c);
      puStack_14 = (undefined *)(int)sStack_a;
      FUN_0018df40();
      puStack_14 = (undefined *)0x5000a0a;
      FUN_0018df40();
      sysMemReadS(&sStack_c,uStack_44 + 0x20);
      puStack_14 = (undefined *)(int)sStack_c;
      FUN_0018df40();
      puStack_14 = (undefined *)0x9801313;
      FUN_0018df40();
      FUN_0018df40(puStack_14);
      FUN_0018df40(puStack_14);
      FUN_0018e100();
      puStack_14 = &DAT_20804141;
      FUN_0018df40();
      puStack_14 = (undefined *)0x23004646;
      FUN_0018df40();
      FUN_0018df40(piVar1->g[5]);
      sysMemReadW(auStack_24,uStack_44 + 0x44);
      sysMemReadW(&puStack_14,uStack_44 + 0x24);
      if (((uint)puStack_14 & 0x80000) == 0) {
        piVar1->g[1] = 0;
        piVar1->g[0] = auStack_24[0];
        set_obj(0);
      }
      else {
        sysMemReadW(&puStack_14,piVar1->g[10] + 0x2008);
        uRam016c5dcc = piVar1->g[0xe];
        piVar1->g[0xe] = 0;
        sysMemWriteW(piVar1->g[10],piVar1->g + 0xe);
        piVar1->g[0xe] = uRam016c5dcc;
        puRam016b85d0 = puStack_14;
        puStack_14 = (undefined *)0x501844;
        sysMemReadW(&puStack_18,0x501848);
        sysMemReadW(&uStack_1c,piVar1->g[10] + 0x2008);
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
        piVar1->g[1] = 0;
        piVar1->g[0] = auStack_24[0];
        set_obj(0);
        puStack_14 = (undefined *)0x501844;
        sysMemReadW(&puStack_18,0x501844);
        sysMemReadW(&uStack_1c,piVar1->g[10] + 0x2008);
        sysMemWriteW((uint)(puStack_14 + 4),&uStack_1c);
        puStack_18 = (undefined *)((uint)puStack_18 | 0x80000000);
        sysMemWriteW(piVar1->g[10],&puStack_18);
        sysMemReadW(&puStack_14,piVar1->g[10] + 0x2008);
        puStack_14 = (undefined *)((uint)puStack_14 | 0x80000000);
        puStack_18 = puRam016b85d0;
        sysMemWriteW((uint)(puRam016b85d0 + 0x900000),&puStack_14);
      }
      puStack_14 = (undefined *)0x1000202;
      FUN_0018df40();
    }
    uStack_44 = uStack_44 + 0x48;
    if (uStack_34 < 2) {
      if (uStack_34 == 1) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    uStack_34 = uStack_34 - 1;
  } while ((uStack_10 & 4) != 0);
  puStack_14 = (undefined *)0x1000202;
  FUN_0018df40();
  piVar1->g[0] = 1;
  set_mmode(0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

