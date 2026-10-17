/* helper pky_kami_disp @ 001d1240, called (depth 1) from rob_disp */

undefined8 pky_kami_disp(long param_1)

{
  bool bVar1;
  i960_regs *piVar2;
  uint uStack_84;
  float fStack_80;
  int iStack_7c;
  uint uStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_50;
  short sStack_48;
  short sStack_46;
  short sStack_44;
  short sStack_42;
  ushort uStack_40;
  ushort uStack_3e;
  ushort uStack_3c;
  short sStack_3a;
  short sStack_38;
  short sStack_36;
  ushort uStack_34;
  ushort uStack_32;
  ushort uStack_30;
  short sStack_2e;
  short sStack_2c;
  short sStack_2a;
  ushort uStack_28;
  ushort uStack_26;
  ushort uStack_24;
  short sStack_22;
  short sStack_20;
  ushort uStack_1e;
  ushort uStack_1c;
  ushort uStack_1a;
  short sStack_18;
  short sStack_16;
  ushort uStack_14;
  ushort uStack_12;
  ushort uStack_10;
  short sStack_e;
  ushort uStack_c;
  ushort uStack_a;
  ushort uStack_8;
  short sStack_6;
  short sStack_4;
  short sStack_2;
  
  piVar2 = i960GetRegs();
  fStack_54 = 1.1755304e-38;
  FUN_0018df40();
  fStack_54 = 3.7622734e-37;
  FUN_0018df40();
  sysMemReadT(&fStack_60,piVar2->g[7] + 0xa70);
  FUN_0018de40(&fStack_60);
  fStack_54 = 1.1755304e-38;
  FUN_0018df40();
  fStack_54 = 3.0100953e-36;
  FUN_0018df40();
  sysMemReadS(&sStack_2,piVar2->g[7] + 0xa92);
  fStack_54 = (float)(int)sStack_2;
  FUN_0018df40();
  fStack_54 = 1.5050015e-36;
  FUN_0018df40();
  sysMemReadS(&sStack_4,piVar2->g[7] + 0xa90);
  fStack_54 = (float)(int)sStack_4;
  FUN_0018df40();
  fStack_54 = 1.1755304e-38;
  FUN_0018df40();
  fStack_54 = 6.020375e-36;
  FUN_0018df40();
  sysMemReadS(&sStack_6,piVar2->g[7] + 0xa98);
  fStack_54 = (float)-(int)sStack_6;
  FUN_0018df40(fStack_54);
  sysMemReadS(&uStack_8,piVar2->g[7] + 0xaa2);
  uStack_68 = (uint)uStack_8;
  piVar2->g[0] = uStack_68;
  sysMemReadW(&fStack_54,piVar2->g[7] + 0x1a4);
  if (((uint)fStack_54 & 0x4000000) == 0) {
LAB_001d13b4:
    sysMemReadW(&fStack_54,piVar2->g[7] + 0x720);
    if (((uint)fStack_54 & 4) != 0) {
      sysMemReadS(&uStack_c,piVar2->g[7] + 0x1aa);
      fStack_54 = (float)(uint)uStack_c;
      if (uStack_c < 5) {
        if (uStack_c == 4) {
          uStack_50 = 2;
        }
        else {
          uStack_50 = 1;
        }
      }
      else {
        uStack_50 = 4;
      }
      if (((uStack_50 & 4) == 0) && ((uStack_c & 1) != 0)) {
        piVar2->g[2] = 0x802000;
        set_obj_thd(0);
        goto LAB_001d13e0;
      }
    }
    set_obj(0);
  }
  else {
    sysMemReadS(&uStack_a,piVar2->g[7] + 0x1aa);
    fStack_54 = (float)(uint)uStack_a;
    if (uStack_a < 5) {
      if (uStack_a == 4) {
        uStack_50 = 2;
      }
      else {
        uStack_50 = 1;
      }
    }
    else {
      uStack_50 = 4;
    }
    if ((uStack_50 & 4) != 0) goto LAB_001d13b4;
    piVar2->g[2] = 0x800000;
    set_obj_thd(0);
  }
LAB_001d13e0:
  fStack_54 = 2.3511328e-38;
  FUN_0018df40();
  fStack_54 = 1.1755304e-38;
  FUN_0018df40();
  sysMemReadS(&sStack_e,piVar2->g[7] + 0xa98);
  fStack_54 = 6.020375e-36;
  uStack_84 = (uint)(int)sStack_e >> 1;
  FUN_0018df40();
  fStack_54 = (float)-uStack_84;
  FUN_0018df40(fStack_54);
  sysMemReadS(&uStack_10,piVar2->g[7] + 0xaa2);
  uStack_68 = (uint)uStack_10;
  piVar2->g[0] = uStack_68;
  sysMemReadW(&fStack_54,piVar2->g[7] + 0x1a4);
  if (((uint)fStack_54 & 0x4000000) == 0) {
LAB_001d1480:
    sysMemReadW(&fStack_54,piVar2->g[7] + 0x720);
    if (((uint)fStack_54 & 4) != 0) {
      sysMemReadS(&uStack_14,piVar2->g[7] + 0x1aa);
      fStack_54 = (float)(uint)uStack_14;
      if (uStack_14 < 5) {
        if (uStack_14 == 4) {
          uStack_50 = 2;
        }
        else {
          uStack_50 = 1;
        }
      }
      else {
        uStack_50 = 4;
      }
      if (((uStack_50 & 4) == 0) && ((uStack_14 & 1) != 0)) {
        piVar2->g[2] = 0x802000;
        set_obj_thd(0);
        goto LAB_001d14ac;
      }
    }
    set_obj(0);
  }
  else {
    sysMemReadS(&uStack_12,piVar2->g[7] + 0x1aa);
    fStack_54 = (float)(uint)uStack_12;
    if (uStack_12 < 5) {
      if (uStack_12 == 4) {
        uStack_50 = 2;
      }
      else {
        uStack_50 = 1;
      }
    }
    else {
      uStack_50 = 4;
    }
    if ((uStack_50 & 4) != 0) goto LAB_001d1480;
    piVar2->g[2] = 0x800000;
    set_obj_thd(0);
  }
LAB_001d14ac:
  fStack_54 = 2.3511328e-38;
  FUN_0018df40();
  fStack_54 = 2.3511328e-38;
  FUN_0018df40();
  fStack_54 = 1.1755304e-38;
  FUN_0018df40();
  fStack_54 = 3.0100953e-36;
  FUN_0018df40();
  sysMemReadS(&sStack_16,piVar2->g[7] + 0xa8e);
  fStack_54 = (float)(int)sStack_16;
  FUN_0018df40();
  fStack_54 = 6.020375e-36;
  FUN_0018df40();
  sysMemReadS(&sStack_18,piVar2->g[7] + 0xa98);
  fStack_54 = (float)(int)sStack_18;
  FUN_0018df40();
  sysMemReadS(&uStack_1a,piVar2->g[7] + 0xaa0);
  uStack_68 = (uint)uStack_1a;
  piVar2->g[0] = uStack_68;
  sysMemReadW(&fStack_54,piVar2->g[7] + 0x1a4);
  if (((uint)fStack_54 & 0x4000000) == 0) {
LAB_001d1570:
    sysMemReadW(&fStack_54,piVar2->g[7] + 0x720);
    if (((uint)fStack_54 & 4) != 0) {
      sysMemReadS(&uStack_1e,piVar2->g[7] + 0x1aa);
      fStack_54 = (float)(uint)uStack_1e;
      if (uStack_1e < 5) {
        if (uStack_1e == 4) {
          uStack_50 = 2;
        }
        else {
          uStack_50 = 1;
        }
      }
      else {
        uStack_50 = 4;
      }
      if (((uStack_50 & 4) == 0) && ((uStack_1e & 1) != 0)) {
        piVar2->g[2] = 0x802000;
        set_obj_thd(0);
        goto LAB_001d159c;
      }
    }
    set_obj(0);
  }
  else {
    sysMemReadS(&uStack_1c,piVar2->g[7] + 0x1aa);
    fStack_54 = (float)(uint)uStack_1c;
    if (uStack_1c < 5) {
      if (uStack_1c == 4) {
        uStack_50 = 2;
      }
      else {
        uStack_50 = 1;
      }
    }
    else {
      uStack_50 = 4;
    }
    if ((uStack_50 & 4) != 0) goto LAB_001d1570;
    piVar2->g[2] = 0x800000;
    set_obj_thd(0);
  }
LAB_001d159c:
  fStack_54 = 2.3511328e-38;
  FUN_0018df40();
  fStack_54 = 1.1755304e-38;
  FUN_0018df40();
  fStack_54 = 3.0100953e-36;
  FUN_0018df40();
  sysMemReadS(&sStack_20,piVar2->g[7] + 0xa8e);
  fStack_54 = (float)(int)sStack_20;
  FUN_0018df40();
  sysMemReadS(&sStack_22,piVar2->g[7] + 0xa98);
  fStack_54 = 6.020375e-36;
  uStack_84 = (uint)(int)sStack_22 >> 1;
  FUN_0018df40();
  FUN_0018df40(uStack_84);
  sysMemReadS(&uStack_24,piVar2->g[7] + 0xaa0);
  uStack_68 = (uint)uStack_24;
  piVar2->g[0] = uStack_68;
  sysMemReadW(&fStack_54,piVar2->g[7] + 0x1a4);
  if (((uint)fStack_54 & 0x4000000) == 0) {
LAB_001d1658:
    sysMemReadW(&fStack_54,piVar2->g[7] + 0x720);
    if (((uint)fStack_54 & 4) != 0) {
      sysMemReadS(&uStack_28,piVar2->g[7] + 0x1aa);
      fStack_54 = (float)(uint)uStack_28;
      if (uStack_28 < 5) {
        if (uStack_28 == 4) {
          uStack_50 = 2;
        }
        else {
          uStack_50 = 1;
        }
      }
      else {
        uStack_50 = 4;
      }
      if (((uStack_50 & 4) == 0) && ((uStack_28 & 1) != 0)) {
        piVar2->g[2] = 0x802000;
        set_obj_thd(0);
        goto LAB_001d1684;
      }
    }
    set_obj(0);
  }
  else {
    sysMemReadS(&uStack_26,piVar2->g[7] + 0x1aa);
    fStack_54 = (float)(uint)uStack_26;
    if (uStack_26 < 5) {
      if (uStack_26 == 4) {
        uStack_50 = 2;
      }
      else {
        uStack_50 = 1;
      }
    }
    else {
      uStack_50 = 4;
    }
    if ((uStack_50 & 4) != 0) goto LAB_001d1658;
    piVar2->g[2] = 0x800000;
    set_obj_thd(0);
  }
LAB_001d1684:
  fStack_54 = 2.3511328e-38;
  FUN_0018df40();
  fStack_54 = 1.1755304e-38;
  FUN_0018df40();
  sysMemReadS(&sStack_2a,piVar2->g[7] + 0xa98);
  uStack_84 = (uint)sStack_2a;
  sysMemReadS(&sStack_2c,piVar2->g[7] + 0xa96);
  fStack_54 = 3.0100953e-36;
  fStack_80 = (float)(int)sStack_2c;
  uStack_84 = uStack_84 + (int)fStack_80;
  FUN_0018df40();
  FUN_0018df40(uStack_84);
  fStack_54 = 6.020375e-36;
  FUN_0018df40();
  sysMemReadS(&sStack_2e,piVar2->g[7] + 0xa94);
  fStack_54 = (float)(int)sStack_2e;
  FUN_0018df40();
  sysMemReadS(&uStack_30,piVar2->g[7] + 0xaa4);
  uStack_68 = (uint)uStack_30;
  piVar2->g[0] = uStack_68;
  sysMemReadW(&fStack_54,piVar2->g[7] + 0x1a4);
  if (((uint)fStack_54 & 0x4000000) == 0) {
LAB_001d1768:
    sysMemReadW(&fStack_54,piVar2->g[7] + 0x720);
    if (((uint)fStack_54 & 4) != 0) {
      sysMemReadS(&uStack_34,piVar2->g[7] + 0x1aa);
      fStack_54 = (float)(uint)uStack_34;
      if (uStack_34 < 5) {
        if (uStack_34 == 4) {
          uStack_50 = 2;
        }
        else {
          uStack_50 = 1;
        }
      }
      else {
        uStack_50 = 4;
      }
      if (((uStack_50 & 4) == 0) && ((uStack_34 & 1) != 0)) {
        piVar2->g[2] = 0x802000;
        set_obj_thd(0);
        goto LAB_001d1794;
      }
    }
    set_obj(0);
  }
  else {
    sysMemReadS(&uStack_32,piVar2->g[7] + 0x1aa);
    fStack_54 = (float)(uint)uStack_32;
    if (uStack_32 < 5) {
      if (uStack_32 == 4) {
        uStack_50 = 2;
      }
      else {
        uStack_50 = 1;
      }
    }
    else {
      uStack_50 = 4;
    }
    if ((uStack_50 & 4) != 0) goto LAB_001d1768;
    piVar2->g[2] = 0x800000;
    set_obj_thd(0);
  }
LAB_001d1794:
  fStack_54 = 2.3511328e-38;
  FUN_0018df40();
  fStack_54 = 1.1755304e-38;
  FUN_0018df40();
  sysMemReadS(&sStack_36,piVar2->g[7] + 0xa98);
  uStack_84 = (uint)(int)sStack_36 >> 1;
  sysMemReadS(&sStack_38,piVar2->g[7] + 0xa96);
  fStack_54 = 3.0100953e-36;
  fStack_80 = (float)(int)sStack_38;
  uStack_84 = uStack_84 + (int)fStack_80;
  FUN_0018df40();
  FUN_0018df40(uStack_84);
  fStack_54 = 6.020375e-36;
  FUN_0018df40();
  sysMemReadS(&sStack_3a,piVar2->g[7] + 0xa94);
  fStack_54 = (float)(int)sStack_3a;
  FUN_0018df40();
  sysMemReadS(&uStack_3c,piVar2->g[7] + 0xaa4);
  uStack_68 = (uint)uStack_3c;
  piVar2->g[0] = uStack_68;
  sysMemReadW(&fStack_54,piVar2->g[7] + 0x1a4);
  if (((uint)fStack_54 & 0x4000000) != 0) {
    sysMemReadS(&uStack_3e,piVar2->g[7] + 0x1aa);
    fStack_54 = (float)(uint)uStack_3e;
    if (uStack_3e < 5) {
      if (uStack_3e == 4) {
        uStack_50 = 2;
      }
      else {
        uStack_50 = 1;
      }
    }
    else {
      uStack_50 = 4;
    }
    if ((uStack_50 & 4) == 0) {
      piVar2->g[2] = 0x800000;
      set_obj_thd(0);
      goto LAB_001d18a4;
    }
  }
  sysMemReadW(&fStack_54,piVar2->g[7] + 0x720);
  if (((uint)fStack_54 & 4) != 0) {
    sysMemReadS(&uStack_40,piVar2->g[7] + 0x1aa);
    fStack_54 = (float)(uint)uStack_40;
    if (uStack_40 < 5) {
      if (uStack_40 == 4) {
        uStack_50 = 2;
      }
      else {
        uStack_50 = 1;
      }
    }
    else {
      uStack_50 = 4;
    }
    if (((uStack_50 & 4) == 0) && ((uStack_40 & 1) != 0)) {
      piVar2->g[2] = 0x802000;
      set_obj_thd(0);
      goto LAB_001d18a4;
    }
  }
  set_obj(0);
LAB_001d18a4:
  fStack_54 = 2.3511328e-38;
  FUN_0018df40();
  fStack_54 = 2.3511328e-38;
  FUN_0018df40();
  sysMemReadW(&fStack_60,piVar2->g[7] + 0x210);
  sysMemReadW(&fStack_5c,piVar2->g[7] + 0xa7c);
  fStack_60 = fStack_5c - fStack_60;
  sysMemWriteW(piVar2->g[7] + 0xa80,&fStack_60);
  sysMemReadW(&fStack_5c,piVar2->g[7] + 0xa84);
  sysMemReadS(&sStack_42,piVar2->g[7] + 0xa98);
  uStack_84 = (uint)sStack_42;
  sysMemReadS(&sStack_44,piVar2->g[7] + 0xa9a);
  fStack_80 = (float)(int)sStack_44;
  sysMemReadS(&sStack_46,piVar2->g[7] + 0xa9c);
  fStack_60 = fStack_5c - fStack_60;
  iStack_7c = (int)sStack_46;
  if (((uint)fStack_5c & 0x80000000) == 0) {
    fStack_60 = -fStack_60;
  }
  fStack_58 = 1000.0;
  sysMemReadW(&fStack_54,piVar2->g[7] + 0xa88);
  fStack_58 = fStack_58 * fStack_54;
  fStack_54 = 9.868012e-32;
  fStack_60 = fStack_60 * fStack_58;
  FUN_0018df40();
  FUN_0018df40(fStack_60);
  fStack_60 = (float)FUN_0018e100();
  fStack_80 = (float)((int)fStack_80 + (int)fStack_60);
  sysMemReadW(&fStack_54,piVar2->g[7] + 0x1a4);
  if ((((uint)fStack_54 & 0x8000) == 0) && (((uint)fStack_54 & 0x10000) != 0)) {
    iStack_7c = iStack_7c * 3;
  }
  fStack_80 = (float)((int)fStack_80 - iStack_7c);
  sysMemReadS(&sStack_48,piVar2->g[7] + 0xa9e);
  fStack_54 = (float)(int)sStack_48;
  if ((int)fStack_54 < (int)fStack_80) {
    bVar1 = false;
  }
  else if (fStack_54 == fStack_80) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    fStack_80 = fStack_54;
  }
  fStack_5c = 1.72192e-41;
  uStack_84 = uStack_84 + (int)fStack_80;
  if ((int)uStack_84 < 0x3001) {
    if (uStack_84 == 0x3000) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    fStack_80 = 0.0;
    uStack_84 = 0x3000;
  }
  if ((int)uStack_84 < 1) {
    if (uStack_84 == 0) {
      uStack_50 = 2;
    }
    else {
      uStack_50 = 1;
    }
  }
  else {
    uStack_50 = 4;
  }
  if ((uStack_50 & 4) == 0) {
    uStack_84 = 0;
    fStack_80 = 0.0;
  }
  sysMemWriteS(piVar2->g[7] + 0xa98,&uStack_84);
  sysMemWriteS(piVar2->g[7] + 0xa9a,&fStack_80);
  sysMemReadW(&fStack_60,piVar2->g[7] + 0x210);
  sysMemWriteW(piVar2->g[7] + 0xa7c,&fStack_60);
  sysMemReadW(&fStack_60,piVar2->g[7] + 0xa80);
  sysMemWriteW(piVar2->g[7] + 0xa84,&fStack_60);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

