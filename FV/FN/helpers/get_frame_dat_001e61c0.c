/* helper get_frame_dat @ 001e61c0, called (depth 1) from calc_rob_angle */

/* WARNING: Removing unreachable block (ram,0x001e747c) */
/* WARNING: Removing unreachable block (ram,0x001e63d8) */
/* WARNING: Removing unreachable block (ram,0x001e6c34) */
/* WARNING: Removing unreachable block (ram,0x001e6390) */
/* WARNING: Removing unreachable block (ram,0x001e742c) */
/* WARNING: Removing unreachable block (ram,0x001e7510) */

undefined8 get_frame_dat(int param_1)

{
  i960_regs *piVar1;
  uint uVar2;
  i960_regs *piVar3;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint uStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  uint uStack_28;
  undefined *puStack_24;
  uint uStack_20;
  short sStack_1c;
  short sStack_1a;
  ushort uStack_18;
  ushort uStack_16;
  ushort uStack_14;
  short sStack_12;
  ushort uStack_10;
  ushort uStack_e;
  ushort uStack_c;
  ushort uStack_a;
  ushort uStack_8;
  byte bStack_6;
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadS(&uStack_8,piVar1->g[7] + 0x1aa);
  piVar1->g[6] = (uint)uStack_8;
  sysMemReadW(&uStack_48,piVar1->g[7] + 0xbd8);
  piVar1->g[5] = uStack_48 + 0x690;
  fStack_38 = fRam016b6e38;
  if ((((uint)fRam016b6e38 & 0x20000) == 0) ||
     (uStack_28 = (uint)uRam016b6e62, (uRam016b6e62 & 1) == 0)) {
LAB_001e6c00:
    sysMemReadW(&fStack_38,piVar1->g[7] + 0x854);
    if (fStack_38 == 0.0) {
      uStack_20 = 2;
    }
    else {
      uStack_20 = 4;
    }
    if ((uStack_20 & 2) == 0) {
      do {
        fStack_4c = fStack_50;
        sysMemReadB(&bStack_1,(uint)fStack_38);
        fStack_50 = (float)(uint)bStack_1;
        if ((uint)fStack_50 < piVar1->g[6]) {
          uStack_20 = 4;
        }
        else if (fStack_50 == (float)piVar1->g[6]) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 1;
        }
        if ((uStack_20 & 2) != 0) {
          piVar1->g[6] = (uint)fStack_50;
          goto LAB_001e6c4c;
        }
        fStack_40 = fStack_44;
        sysMemReadB(&bStack_2,(int)fStack_38 + 1);
        fStack_38 = (float)((int)fStack_38 + 2);
        fStack_44 = (float)(uint)bStack_2;
        if ((uint)fStack_50 < piVar1->g[6]) {
          uStack_20 = 4;
        }
        else if (fStack_50 == (float)piVar1->g[6]) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 1;
        }
      } while ((uStack_20 & 4) != 0);
      uStack_28 = ((int)fStack_50 - (int)fStack_4c) * (int)fStack_40;
      fStack_30 = (float)((piVar1->g[6] - (int)fStack_4c) * ((int)fStack_44 - (int)fStack_40) +
                         uStack_28);
      fStack_2c = (float)(uint)((int)fStack_50 - (int)fStack_4c);
      piVar1->g[6] = (uint)(fStack_30 / fStack_2c);
      FUN_001e9580(0);
      goto LAB_001e632c;
    }
LAB_001e6c4c:
    if (piVar1->g[6] < 2) {
      if (piVar1->g[6] == 1) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
    }
    else {
      uStack_20 = 4;
    }
    if ((uStack_20 & 5) != 0) {
LAB_001e6d0c:
      piVar3 = i960GetRegs();
      piVar3->g[6] = (uint)(float)piVar3->g[6];
      FUN_001e9580(0);
      goto LAB_001e632c;
    }
    sysMemReadB(&bStack_3,piVar1->g[7] + 0x19f);
    puStack_24 = (undefined *)(uint)bStack_3;
    if (bStack_3 < 0x19) {
      if (bStack_3 == 0x18) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
    }
    else {
      uStack_20 = 4;
    }
    if ((uStack_20 & 2) != 0) goto LAB_001e6d0c;
    sysMemReadB(&bStack_4,piVar1->g[7] + 0xbdd);
    puStack_24 = (undefined *)(uint)bStack_4;
    if ((bStack_4 & 1) != 0) goto LAB_001e632c;
    FUN_001e8980(0);
    uVar2 = piVar1->g[7];
  }
  else {
    sysMemReadS(&uStack_a,piVar1->g[7] + 0x800);
    fStack_2c = (float)(uint)uStack_a;
    if (piVar1->g[6] < (uint)uStack_a) {
      uStack_20 = 4;
    }
    else if (piVar1->g[6] == (uint)uStack_a) {
      uStack_20 = 2;
    }
    else {
      uStack_20 = 1;
    }
    if ((uStack_20 & 2) != 0) goto LAB_001e6c00;
    piVar1->g[6] = (uint)(float)piVar1->g[6];
    fStack_2c = 0.5;
    piVar1->g[6] = (uint)((float)piVar1->g[6] + 0.5);
    FUN_001e9580(0);
LAB_001e632c:
    uVar2 = piVar1->g[7];
  }
  sysMemReadS(&uStack_c,uVar2 + 0x1aa);
  piVar1->g[6] = (uint)uStack_c;
  sysMemReadW(&puStack_24,piVar1->g[7] + 0x804);
  uStack_28 = 0x20010;
  puStack_24 = (undefined *)((uint)puStack_24 & 0x20010);
  if (puStack_24 == (undefined *)0x0) {
    uStack_20 = 2;
  }
  else {
    uStack_20 = 4;
  }
  if ((uStack_20 & 2) == 0) {
    sysMemReadS(&uStack_e,piVar1->g[7] + 0xbe2);
    piVar1->g[6] = (uint)uStack_e;
    piVar1->g[6] = piVar1->g[6] + 1;
    sysMemWriteS(piVar1->g[7] + 0xbe2,piVar1->g + 6);
    uVar2 = piVar1->g[7];
  }
  else {
    uVar2 = piVar1->g[7];
  }
  sysMemReadB(&bStack_5,uVar2 + 0xbdd);
  puStack_24 = (undefined *)(uint)bStack_5;
  if (bStack_5 == 0) {
    uStack_20 = 2;
  }
  else {
    uStack_20 = 4;
  }
  if ((uStack_20 & 2) == 0) {
    if (puStack_24 < (undefined *)0x3) {
      if (puStack_24 == (undefined *)0x2) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
    }
    else {
      uStack_20 = 4;
    }
    if ((uStack_20 & 2) == 0) {
      sysMemReadS(&uStack_10,piVar1->g[7] + 0xbde);
      fStack_54 = (float)(uint)uStack_10;
      if ((uint)fStack_54 < piVar1->g[6]) {
        uStack_20 = 4;
      }
      else if (fStack_54 == (float)piVar1->g[6]) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
      if ((uStack_20 & 6) == 0) {
        piVar1->g[6] = (int)fStack_54 - piVar1->g[6];
        uStack_28 = uStack_48;
        fStack_2c = (float)(piVar1->g[7] + 0xbe8);
        fStack_30 = 5.04467e-44;
        do {
          sysMemReadS(&sStack_12,uStack_28);
          fStack_34 = (float)((int)sStack_12 * piVar1->g[6]);
          sysMemWriteS((uint)fStack_2c,&fStack_34);
          fStack_2c = (float)((int)fStack_2c + 2);
          uStack_28 = uStack_28 + 4;
          if ((uint)fStack_30 < 2) {
            if (fStack_30 == 1.4013e-45) {
              uStack_20 = 2;
            }
            else {
              uStack_20 = 1;
            }
          }
          else {
            uStack_20 = 4;
          }
          fStack_30 = (float)((int)fStack_30 - 1);
        } while ((uStack_20 & 4) != 0);
        fStack_30 = 3.36312e-44;
        puStack_24 = (undefined *)0xb801717;
        fStack_2c = (float)(uStack_48 + 0x720);
        FUN_0018df40();
        FUN_0018df40(piVar1->g[6]);
        fStack_3c = (float)FUN_0018e100();
        do {
          sysMemReadW(&fStack_34,uStack_28);
          sysMemReadW(&fStack_38,(uint)fStack_2c);
          fStack_34 = fStack_34 * fStack_3c + fStack_38;
          sysMemWriteW((uint)fStack_2c,&fStack_34);
          fStack_2c = (float)((int)fStack_2c + 4);
          uStack_28 = uStack_28 + 4;
          if ((uint)fStack_30 < 2) {
            if (fStack_30 == 1.4013e-45) {
              uStack_20 = 2;
            }
            else {
              uStack_20 = 1;
            }
          }
          else {
            uStack_20 = 4;
          }
          fStack_30 = (float)((int)fStack_30 - 1);
        } while ((uStack_20 & 4) != 0);
        goto LAB_001e6910;
      }
    }
    sysMemReadS(&uStack_14,piVar1->g[7] + 0x1aa);
    fStack_50 = (float)(uint)uStack_14;
    if (puStack_24 < (undefined *)0x2) {
      if (puStack_24 == (undefined *)0x1) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
    }
    else {
      uStack_20 = 4;
    }
    if ((uStack_20 & 2) == 0) {
      sysMemReadS(&uStack_16,piVar1->g[7] + 0xbe0);
      fStack_44 = (float)(uint)uStack_16;
      if ((uint)fStack_44 < (uint)fStack_50) {
        uStack_20 = 4;
      }
      else if (fStack_44 == fStack_50) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
      if ((uStack_20 & 3) == 0) {
        sysMemReadB(&bStack_6,piVar1->g[7] + 0xbe5);
        fStack_2c = (float)(uint)bStack_6;
        if ((bStack_6 & 1) == 0) {
          rear_smooth_int(0);
          fStack_2c = (float)((uint)fStack_2c | 1);
        }
        piVar1->g[6] = (int)fStack_50 - (int)fStack_44;
        sysMemReadS(&uStack_18,piVar1->g[7] + 0xbde);
        puStack_24 = (undefined *)(uStack_18 - 1);
        if (puStack_24 < (undefined *)piVar1->g[6]) {
          uStack_20 = 4;
        }
        else if (puStack_24 == (undefined *)piVar1->g[6]) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 1;
        }
        if ((uStack_20 & 5) == 0) {
          fStack_2c = (float)((uint)fStack_2c | 2);
        }
        sysMemWriteB(piVar1->g[7] + 0xbe5,&fStack_2c);
        uStack_28 = uStack_48 + 0xf0;
        fStack_30 = 5.04467e-44;
        fStack_2c = (float)(piVar1->g[7] + 0xbe8);
        do {
          sysMemReadS(&sStack_1a,uStack_28);
          fStack_34 = (float)((int)sStack_1a * piVar1->g[6]);
          sysMemWriteS((uint)fStack_2c,&fStack_34);
          fStack_2c = (float)((int)fStack_2c + 2);
          uStack_28 = uStack_28 + 4;
          if ((uint)fStack_30 < 2) {
            if (fStack_30 == 1.4013e-45) {
              uStack_20 = 2;
            }
            else {
              uStack_20 = 1;
            }
          }
          else {
            uStack_20 = 4;
          }
          fStack_30 = (float)((int)fStack_30 - 1);
        } while ((uStack_20 & 4) != 0);
        fStack_30 = 3.36312e-44;
        puStack_24 = (undefined *)0xb801717;
        fStack_2c = (float)(uStack_48 + 0x720);
        FUN_0018df40();
        FUN_0018df40(piVar1->g[6]);
        fStack_3c = (float)FUN_0018e100();
        do {
          sysMemReadW(&fStack_34,uStack_28);
          sysMemReadW(&fStack_38,(uint)fStack_2c);
          fStack_34 = fStack_34 * fStack_3c + fStack_38;
          sysMemWriteW((uint)fStack_2c,&fStack_34);
          fStack_2c = (float)((int)fStack_2c + 4);
          uStack_28 = uStack_28 + 4;
          if ((uint)fStack_30 < 2) {
            if (fStack_30 == 1.4013e-45) {
              uStack_20 = 2;
            }
            else {
              uStack_20 = 1;
            }
          }
          else {
            uStack_20 = 4;
          }
          fStack_30 = (float)((int)fStack_30 - 1);
        } while ((uStack_20 & 4) != 0);
        goto LAB_001e6910;
      }
    }
  }
  fStack_34 = 5.60519e-45;
  fStack_38 = (float)(piVar1->g[7] + 0xbe8);
  fStack_30 = 0.0;
  fStack_2c = 0.0;
  uStack_28 = 0;
  puStack_24 = (undefined *)0x0;
  do {
    sysMemWriteQ((uint)fStack_38,&fStack_30);
    fStack_38 = (float)((int)fStack_38 + 0x10);
    if ((uint)fStack_34 < 2) {
      if (fStack_34 == 1.4013e-45) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
    }
    else {
      uStack_20 = 4;
    }
    fStack_34 = (float)((int)fStack_34 + -1);
  } while ((uStack_20 & 4) != 0);
  sysMemWriteL((uint)fStack_38,&fStack_30);
LAB_001e6910:
  sysMemReadW(&puStack_24,piVar1->g[7]);
  if (((uint)puStack_24 & 4) != 0) {
    sysMemReadW(&fStack_34,piVar1->g[7] + 0x1c);
    sysMemReadW(&fStack_30,uStack_48 + 0x724);
    fStack_38 = fStack_34 - fStack_30;
    sysMemReadW(&fStack_30,piVar1->g[7] + 0x18);
    sysMemReadW(&fStack_34,piVar1->g[7] + 0x20);
    fStack_2c = (float)((ulong)((long)(int)fStack_30 << 0x21) >> 0x21);
    fStack_40 = fRam016c0de0;
    if (fRam016c0ddc <= fStack_2c) {
      if (fStack_2c == fRam016c0ddc) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
    }
    else {
      uStack_20 = 4;
    }
    if ((uStack_20 & 3) == 0) {
      fStack_2c = (float)((ulong)((long)(int)fStack_34 << 0x21) >> 0x21);
      if (fRam016c0ddc <= fStack_2c) {
        if (fStack_2c == fRam016c0ddc) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 1;
        }
      }
      else {
        uStack_20 = 4;
      }
      if ((uStack_20 & 3) == 0) {
        fStack_40 = 0.0;
      }
    }
    uStack_28 = 0x3dcccccd;
    fStack_3c = 9.80909e-45;
    fStack_40 = fStack_40 + 0.1;
    fStack_44 = (float)(uStack_48 + 0x730);
    do {
      sysMemReadW(&fStack_54,(uint)fStack_44);
      fStack_50 = fStack_54 + fStack_38;
      if (fStack_50 <= fStack_40) {
        if (fStack_40 == fStack_50) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 1;
        }
      }
      else {
        uStack_20 = 4;
      }
      if ((uStack_20 & 6) == 0) {
        fStack_4c = fStack_40 - fStack_50;
        fStack_50 = fStack_54 + fStack_4c;
        sysMemWriteW((uint)fStack_44,&fStack_50);
      }
      fStack_44 = (float)((int)fStack_44 + 0xc);
      if ((uint)fStack_3c < 2) {
        if (fStack_3c == 1.4013e-45) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 1;
        }
      }
      else {
        uStack_20 = 4;
      }
      fStack_3c = (float)((int)fStack_3c - 1);
    } while ((uStack_20 & 4) != 0);
  }
  fStack_3c = 0.0;
  fStack_38 = (float)(uStack_48 + 0x690);
  do {
    sysMemReadW(&fStack_50,(int)fStack_3c * 4 + 0x2c208);
    fStack_50 = (float)((int)fStack_50 + piVar1->g[7]);
    sysMemReadT(&fStack_30,(uint)fStack_38);
    fStack_38 = (float)((int)fStack_38 + 0xc);
    sysMemWriteS((uint)fStack_50,&fStack_30);
    sysMemWriteS((int)fStack_50 + 2,&fStack_2c);
    sysMemWriteS((int)fStack_50 + 4,&uStack_28);
    fStack_3c = (float)((int)fStack_3c + 1);
    if ((uint)fStack_3c < 5) {
      if (fStack_3c == 5.60519e-45) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
    }
    else {
      uStack_20 = 4;
    }
  } while ((uStack_20 & 1) != 0);
  sysMemReadT(&fStack_30,(uint)fStack_38);
  fStack_38 = (float)((int)fStack_38 + 0xc);
  sysMemWriteS(piVar1->g[7] + 0x140,&fStack_30);
  sysMemWriteS(piVar1->g[7] + 0x142,&fStack_2c);
  sysMemWriteS(piVar1->g[7] + 0x144,&uStack_28);
  fStack_3c = 9.80909e-45;
  piVar1->g[5] = piVar1->g[7] + 0xba8;
  do {
    sysMemReadT(&fStack_30,(uint)fStack_38);
    fStack_38 = (float)((int)fStack_38 + 0xc);
    sysMemWriteS(piVar1->g[5],&fStack_30);
    sysMemWriteS(piVar1->g[5] + 2,&fStack_2c);
    sysMemWriteS(piVar1->g[5] + 4,&uStack_28);
    piVar1->g[5] = piVar1->g[5] + 6;
    if ((uint)fStack_3c < 2) {
      if (fStack_3c == 1.4013e-45) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
    }
    else {
      uStack_20 = 4;
    }
    fStack_3c = (float)((int)fStack_3c - 1);
  } while ((uStack_20 & 4) != 0);
  sysMemReadT(&fStack_30,(uint)fStack_38);
  fStack_38 = (float)((int)fStack_38 + 0xc);
  sysMemWriteT(piVar1->g[7] + 0x80,&fStack_30);
  fStack_3c = 9.80909e-45;
  piVar1->g[5] = piVar1->g[7] + 0xb00;
  do {
    sysMemReadT(&fStack_30,(uint)fStack_38);
    fStack_38 = (float)((int)fStack_38 + 0xc);
    sysMemWriteT(piVar1->g[5],&fStack_30);
    piVar1->g[5] = piVar1->g[5] + 0xc;
    if ((uint)fStack_3c < 2) {
      if (fStack_3c == 1.4013e-45) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
    }
    else {
      uStack_20 = 4;
    }
    fStack_3c = (float)((int)fStack_3c - 1);
  } while ((uStack_20 & 4) != 0);
  puStack_24 = (undefined *)0x0;
  sysMemWriteB(piVar1->g[7] + 0x7d7,&puStack_24);
  puStack_24 = (undefined *)(uint)bRam016b6dfc;
  uStack_28 = 7;
  if ((bRam016b6dfc & 0x80) == 0) {
    uStack_28 = 0x80;
    fStack_30 = fRam016b6e04;
    if ((uint)fRam016b6e04 < 0x81) {
      if (fRam016b6e04 == 1.79366e-43) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
    }
    else {
      uStack_20 = 4;
    }
    if ((uStack_20 & 3) == 0) {
      fStack_2c = (float)((uint)fRam016b6e04 & 0x3f0000);
      if (fStack_2c == 0.0) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 4;
      }
      if ((uStack_20 & 5) == 0) {
        sysMemReadW(&puStack_24,piVar1->g[7]);
        uStack_28 = (uint)puStack_24 & 0xa00000;
        if (uStack_28 == 0) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 4;
        }
        if ((((uStack_20 & 5) == 0) && (((uint)puStack_24 & 0x800000) == 0)) &&
           (sysMemReadW(&puStack_24,piVar1->g[7]), ((uint)puStack_24 & 0x100) == 0)) {
          sysMemReadW(&puStack_24,piVar1->g[7] + 0x1a4);
          uStack_28 = 0x6c119;
          puStack_24 = (undefined *)((uint)puStack_24 & 0x6c119);
          if (puStack_24 == (undefined *)0x0) {
            uStack_20 = 2;
          }
          else {
            uStack_20 = 4;
          }
          if ((uStack_20 & 5) == 0) {
            puStack_24 = (undefined *)0x1;
            sysMemWriteB(piVar1->g[7] + 0x7d7,&puStack_24);
            puStack_24 = &DAT_31806363;
            FUN_0018df40();
            sysMemReadT(&fStack_30,piVar1->g[7] + 0x18);
            sysMemReadS(&sStack_1c,piVar1->g[7] + 0x26);
            puStack_24 = (undefined *)(int)sStack_1c;
            FUN_0018ddc0(&fStack_30);
            sysMemReadT(&fStack_30,piVar1->g[8] + 0x20c);
            FUN_0018de40(&fStack_30);
            FUN_0018e080(&fStack_30);
            sysMemWriteT(piVar1->g[7] + 0xb0c,&fStack_30);
          }
        }
      }
    }
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

