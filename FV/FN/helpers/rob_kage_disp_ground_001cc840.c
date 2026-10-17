/* helper rob_kage_disp_ground @ 001cc840, called (depth 1) from rob_kabe_kage_disp */

/* WARNING: Removing unreachable block (ram,0x001ccd88) */
/* WARNING: Removing unreachable block (ram,0x001ccc20) */

undefined8 rob_kage_disp_ground(int param_1)

{
  i960_regs *piVar1;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  piVar1 = i960GetRegs();
  piVar1->g[0] = 2;
  set_mmode(0);
  if (((uRam016c11c8 & 1) == 0) || (uStack_14 = uRam016c11c8, (uRam016c11c8 & 2) == 0)) {
    uStack_14 = uRam016c11c8;
    piVar1->g[5] = 1;
    do {
      uStack_18 = piVar1->g[7] + 500;
      uStack_1c = piVar1->g[5] * 0xc;
      sysMemReadT(&uStack_40,uStack_18 + uStack_1c);
      uStack_18 = 0x3e75c28f;
      if (fStack_3c <= 0.24) {
        if (fStack_3c == 0.24) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
      }
      else {
        uStack_10 = 4;
      }
      if ((uStack_10 & 6) == 0) {
        fStack_3c = 0.0;
        uStack_14 = 0x800101;
        FUN_0018df40();
        uStack_14 = 0x3000606;
        FUN_0018df40();
        FUN_0018df40(uStack_40);
        FUN_0018df40(fStack_3c);
        FUN_0018df40(uStack_38);
        sysMemReadT(&uStack_30,piVar1->g[5] * 0x10 + 0x50f600);
        uStack_14 = 0x17802f2f;
        FUN_0018df40();
        FUN_0018df40(uStack_38);
        FUN_0018df40(uStack_28);
        FUN_0018df40(uStack_30);
        FUN_0018df40(uStack_40);
        fStack_3c = (float)FUN_0018e100();
        uStack_14 = 0x15802b2b;
        FUN_0018df40();
        FUN_0018df40(uStack_40);
        FUN_0018df40(uStack_30);
        FUN_0018df40(uStack_38);
        FUN_0018df40(uStack_28);
        fStack_2c = (float)FUN_0018e100();
        uStack_1c = 0x8000;
        uStack_14 = 0x4800909;
        fStack_3c = (float)((int)fStack_3c + 0x8000);
        FUN_0018df40();
        FUN_0018df40(fStack_3c);
        fStack_3c = 0.0;
        uStack_40 = 0x3ecccccd;
        uStack_1c = 0x3f933333;
        uStack_14 = 0x3800707;
        fStack_2c = fStack_2c * 1.15;
        FUN_0018df40();
        FUN_0018df40(uStack_40);
        FUN_0018df40(fStack_3c);
        FUN_0018df40(fStack_2c);
        uStack_20 = (uint)bRam016b6e34 * 0xc + 0x6442ba8;
        sysMemReadW(piVar1->g + 1,uStack_20);
        if ((piVar1->g[1] & 0x40) == 0) {
          sysMemReadW(&uStack_14,piVar1->g[10] + 0x2008);
          uRam016c5dcc = piVar1->g[0xe];
          piVar1->g[0xe] = 0;
          sysMemWriteW(piVar1->g[10],piVar1->g + 0xe);
          piVar1->g[0xe] = uRam016c5dcc;
          uRam016b85d0 = uStack_14;
          uStack_14 = 0x50185c;
          sysMemReadW(&uStack_18,0x501860);
          sysMemReadW(&uStack_1c,piVar1->g[10] + 0x2008);
          if (uStack_18 == 0) {
            uStack_10 = 2;
          }
          else {
            uStack_10 = 4;
          }
          if ((uStack_10 & 5) == 0) {
            sysMemWriteW(uStack_14,&uStack_1c);
          }
          else {
            uStack_1c = uStack_1c | 0x80000000;
            sysMemWriteW(uStack_18 + 0x900000,&uStack_1c);
          }
          piVar1->g[1] = 0;
          piVar1->g[0] = 0xab6;
          set_obj(0);
          uStack_14 = 0x50185c;
          sysMemReadW(&uStack_18,0x50185c);
          sysMemReadW(&uStack_1c,piVar1->g[10] + 0x2008);
          sysMemWriteW(uStack_14 + 4,&uStack_1c);
          uStack_18 = uStack_18 | 0x80000000;
          sysMemWriteW(piVar1->g[10],&uStack_18);
          sysMemReadW(&uStack_14,piVar1->g[10] + 0x2008);
          uStack_14 = uStack_14 | 0x80000000;
          uStack_18 = uRam016b85d0;
          sysMemWriteW(uRam016b85d0 + 0x900000,&uStack_14);
        }
        else {
          sysMemReadW(&uStack_14,piVar1->g[10] + 0x2008);
          uRam016c5dcc = piVar1->g[0xe];
          piVar1->g[0xe] = 0;
          sysMemWriteW(piVar1->g[10],piVar1->g + 0xe);
          piVar1->g[0xe] = uRam016c5dcc;
          uRam016b85d0 = uStack_14;
          uStack_14 = 0x50184c;
          sysMemReadW(&uStack_18,0x501850);
          sysMemReadW(&uStack_1c,piVar1->g[10] + 0x2008);
          if (uStack_18 == 0) {
            uStack_10 = 2;
          }
          else {
            uStack_10 = 4;
          }
          if ((uStack_10 & 5) == 0) {
            sysMemWriteW(uStack_14,&uStack_1c);
          }
          else {
            uStack_1c = uStack_1c | 0x80000000;
            sysMemWriteW(uStack_18 + 0x900000,&uStack_1c);
          }
          piVar1->g[1] = 0;
          piVar1->g[0] = 0xab6;
          set_obj(0);
          uStack_14 = 0x50184c;
          sysMemReadW(&uStack_18,0x50184c);
          sysMemReadW(&uStack_1c,piVar1->g[10] + 0x2008);
          sysMemWriteW(uStack_14 + 4,&uStack_1c);
          uStack_18 = uStack_18 | 0x80000000;
          sysMemWriteW(piVar1->g[10],&uStack_18);
          sysMemReadW(&uStack_14,piVar1->g[10] + 0x2008);
          uStack_14 = uStack_14 | 0x80000000;
          uStack_18 = uRam016b85d0;
          sysMemWriteW(uRam016b85d0 + 0x900000,&uStack_14);
        }
        uStack_14 = 0x1000202;
        FUN_0018df40();
      }
      piVar1->g[5] = piVar1->g[5] + 1;
      if (piVar1->g[5] < 0x11) {
        if (piVar1->g[5] == 0x10) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
      }
      else {
        uStack_10 = 4;
      }
    } while ((uStack_10 & 5) != 0);
  }
  piVar1->g[0] = 1;
  set_mmode(0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

