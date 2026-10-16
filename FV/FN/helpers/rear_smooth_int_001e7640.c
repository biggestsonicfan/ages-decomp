/* helper rear_smooth_int @ 001e7640, called (depth 2) from calc_rob_angle */

/* WARNING: Removing unreachable block (ram,0x001e7990) */
/* WARNING: Removing unreachable block (ram,0x001e79ec) */
/* WARNING: Removing unreachable block (ram,0x001e7768) */

undefined8 rear_smooth_int(int param_1)

{
  i960_regs *piVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uStack_64;
  uint uStack_60;
  uint uStack_5c;
  int iStack_58;
  float fStack_54;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  short sStack_1c;
  short sStack_1a;
  short sStack_18;
  short sStack_16;
  short sStack_14;
  short sStack_12;
  short sStack_10;
  short sStack_e;
  short sStack_c;
  ushort uStack_a;
  short sStack_8;
  ushort uStack_6;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  puVar3 = piVar1->g;
  sysMemReadB(&bStack_1,piVar1->g[7] + 0xbe4);
  uStack_5c = (uint)bStack_1;
  if (bStack_1 < 2) {
    if (bStack_1 == 1) {
      uStack_30 = 2;
    }
    else {
      uStack_30 = 1;
    }
  }
  else {
    uStack_30 = 4;
  }
  if ((uStack_30 & 2) != 0) {
    sysMemWriteB(piVar1->g[7] + 0xbe5,&uStack_64);
    uStack_64 = 0;
    sysMemWriteB(piVar1->g[7] + 0xbdd,&uStack_64);
    sysMemWriteB(piVar1->g[7] + 0xbe4,&uStack_64);
    if (param_1 == 0) {
      return 0;
    }
    i960ReturnProc();
    return 0;
  }
  sysMemReadW(&uStack_5c,piVar1->g[7] + 0x1a4);
  sysMemReadW(&iStack_58,piVar1->g[7] + 0xbd8);
  sysMemReadS(&uStack_6,piVar1->g[7] + 0xbe0);
  fStack_54 = (float)(uint)uStack_6;
  piVar1->g[5] = 0x50e0f0;
  get_end_value(0);
  sysMemReadB(&bStack_2,piVar1->g[7] + 0x814);
  uStack_44 = (uint)bStack_2;
  uStack_34 = 0;
  if (uStack_44 == 0) {
    uStack_30 = 2;
  }
  else {
    uStack_30 = 4;
  }
  if ((uStack_30 & 2) == 0) {
    uStack_34 = 0x80;
    if (uStack_44 < 0x81) {
      if (uStack_44 == 0x80) {
        uStack_30 = 2;
      }
      else {
        uStack_30 = 1;
      }
    }
    else {
      uStack_30 = 4;
    }
    if ((uStack_30 & 2) == 0) {
      uStack_34 = 3;
      if (uStack_44 < 4) {
        if (uStack_44 == 3) {
          uStack_30 = 2;
        }
        else {
          uStack_30 = 1;
        }
      }
      else {
        uStack_30 = 4;
      }
      if ((uStack_30 & 2) == 0) {
        uStack_34 = 4;
        if (uStack_44 < 5) {
          if (uStack_44 == 4) {
            uStack_30 = 2;
          }
          else {
            uStack_30 = 1;
          }
        }
        else {
          uStack_30 = 4;
        }
        if ((uStack_30 & 2) == 0) {
          uStack_34 = 0x83;
          if (uStack_44 < 0x84) {
            if (uStack_44 == 0x83) {
              uStack_30 = 2;
            }
            else {
              uStack_30 = 1;
            }
          }
          else {
            uStack_30 = 4;
          }
          if ((uStack_30 & 2) == 0) {
            sysMemReadB(&bStack_3,piVar1->g[7] + 0xbdd);
            uStack_38 = bStack_3 & 0xfffffffd;
            sysMemWriteB(piVar1->g[7] + 0xbdd,&uStack_38);
            goto LAB_001e7f2c;
          }
          piVar1->g[0] = iStack_58 + 0x4b0;
        }
        else {
          piVar1->g[0] = iStack_58 + 0x5a0;
        }
      }
      else {
        piVar1->g[0] = iStack_58 + 0x3c0;
      }
    }
    else {
      piVar1->g[0] = iStack_58 + 0x2d0;
    }
  }
  else {
    piVar1->g[0] = iStack_58 + 0x1e0;
  }
  fStack_48 = 7.427196e-39;
  uStack_44 = 0x14;
  do {
    sysMemReadT(&uStack_40,piVar1->g[0]);
    sysMemWriteT((uint)fStack_48,&uStack_40);
    piVar1->g[0] = piVar1->g[0] + 0xc;
    fStack_48 = (float)((int)fStack_48 + 0xc);
    if (uStack_44 < 2) {
      if (uStack_44 == 1) {
        uStack_30 = 2;
      }
      else {
        uStack_30 = 1;
      }
    }
    else {
      uStack_30 = 4;
    }
    uStack_44 = uStack_44 - 1;
  } while ((uStack_30 & 4) != 0);
  fStack_48 = 1.12104e-44;
  uStack_3c = uRam016c4f58;
  uStack_38 = uRam016c4f50;
  uStack_34 = uRam016c4f50 | uRam016c4f58;
  if (uStack_34 == 0) {
    uStack_30 = 2;
  }
  else {
    uStack_30 = 4;
  }
  if ((uStack_30 & 2) == 0) {
    uStack_40 = 0x50e180;
    do {
      sysMemReadW(&uStack_44,uStack_40);
      uStack_34 = 0xa001414;
      FUN_0018df40();
      FUN_0018df40(uStack_44);
      FUN_0018df40(uStack_38);
      uStack_44 = FUN_0018e100();
      sysMemWriteW(uStack_40,&uStack_44);
      sysMemReadW(&uStack_44,uStack_40 + 8);
      uStack_34 = 0xa001414;
      FUN_0018df40();
      FUN_0018df40(uStack_44);
      FUN_0018df40(uStack_3c);
      uStack_44 = FUN_0018e100();
      sysMemWriteW(uStack_40 + 8,&uStack_44);
      uStack_40 = uStack_40 + 0xc;
      if ((uint)fStack_48 < 2) {
        if (fStack_48 == 1.4013e-45) {
          uStack_30 = 2;
        }
        else {
          uStack_30 = 1;
        }
      }
      else {
        uStack_30 = 4;
      }
      fStack_48 = (float)((int)fStack_48 - 1);
    } while ((uStack_30 & 4) != 0);
  }
  fStack_48 = 1.12104e-44;
  uStack_3c = uRam016c4e68;
  uStack_38 = uRam016c4e60;
  uStack_34 = uRam016c4e60 | uRam016c4e68;
  if (uStack_34 == 0) {
    uStack_30 = 2;
  }
  else {
    uStack_30 = 4;
  }
  if ((uStack_30 & 2) == 0) {
    uStack_40 = 0x50e090;
    do {
      sysMemReadW(&uStack_44,uStack_40);
      uStack_34 = 0xa001414;
      FUN_0018df40();
      FUN_0018df40(uStack_44);
      FUN_0018df40(uStack_38);
      uStack_44 = FUN_0018e100();
      sysMemWriteW(uStack_40,&uStack_44);
      sysMemReadW(&uStack_44,uStack_40 + 8);
      uStack_34 = 0xa001414;
      FUN_0018df40();
      FUN_0018df40(uStack_44);
      FUN_0018df40(uStack_3c);
      uStack_44 = FUN_0018e100();
      sysMemWriteW(uStack_40 + 8,&uStack_44);
      uStack_40 = uStack_40 + 0xc;
      if ((uint)fStack_48 < 2) {
        if (fStack_48 == 1.4013e-45) {
          uStack_30 = 2;
        }
        else {
          uStack_30 = 1;
        }
      }
      else {
        uStack_30 = 4;
      }
      fStack_48 = (float)((int)fStack_48 + -1);
    } while ((uStack_30 & 4) != 0);
  }
  uStack_38 = 0;
  sysMemReadW(&uStack_34,piVar1->g[7] + 0x804);
  if ((uStack_34 & 0x200000) != 0) {
    uStack_38 = uStack_38 ^ 1;
  }
  sysMemReadW(&uStack_3c,piVar1->g[7]);
  if ((uStack_3c & 0x40) != 0) {
    uStack_38 = uStack_38 ^ 1;
  }
  if ((uStack_38 & 1) != 0) {
    piVar1->g[5] = 0x50e000;
    set_mirror(0);
  }
  if ((uStack_5c & 0x40) != 0) {
    sysMemReadS(&sStack_8,piVar1->g[7] + 0x812);
    uStack_34 = 0x800101;
    fStack_4c = (float)(int)sStack_8;
    FUN_0018df40();
    uStack_34 = 0x1800303;
    FUN_0018df40();
    uStack_34 = 0x4800909;
    FUN_0018df40();
    FUN_0018df40(fStack_4c);
    piVar1->g[0] = 8;
    fStack_48 = 7.427398e-39;
    do {
      sysMemReadW(&uStack_3c,(uint)fStack_48);
      uStack_40 = 0;
      sysMemReadW(&uStack_44,(int)fStack_48 + 8);
      uStack_34 = 0x14802929;
      FUN_0018df40();
      FUN_0018df40(uStack_3c);
      FUN_0018df40(uStack_40);
      FUN_0018df40(uStack_44);
      uStack_3c = FUN_0018e100();
      uStack_40 = FUN_0018e100();
      uStack_44 = FUN_0018e100();
      sysMemWriteW((uint)fStack_48,&uStack_3c);
      sysMemWriteW((int)fStack_48 + 8,&uStack_44);
      fStack_48 = (float)((int)fStack_48 + 0xc);
      if (piVar1->g[0] < 2) {
        if (piVar1->g[0] == 1) {
          uStack_30 = 2;
        }
        else {
          uStack_30 = 1;
        }
      }
      else {
        uStack_30 = 4;
      }
      piVar1->g[0] = piVar1->g[0] - 1;
    } while ((uStack_30 & 4) != 0);
    uStack_34 = 0x1000202;
    FUN_0018df40();
    sRam016c4e04 = sRam016c4e04 + SUB42(fStack_4c,0);
    sRam016c4df8 = sRam016c4df8 + SUB42(fStack_4c,0);
    uStack_34 = (int)sRam016c4dec + (int)fStack_4c;
    sRam016c4dec = (short)uStack_34;
  }
  sysMemReadS(&uStack_a,piVar1->g[7] + 0x800);
  piVar1->g[6] = (uint)uStack_a;
  uVar2 = piVar1->g[6] - (int)fStack_54;
  if (uVar2 < 9) {
    if (uVar2 == 8) {
      uStack_30 = 2;
    }
    else {
      uStack_30 = 1;
    }
  }
  else {
    uStack_30 = 4;
  }
  if ((uStack_30 & 2) == 0) {
    if (uVar2 < 5) {
      if (uVar2 == 4) {
        uStack_30 = 2;
      }
      else {
        uStack_30 = 1;
      }
    }
    else {
      uStack_30 = 4;
    }
    if ((uStack_30 & 2) == 0) {
      fStack_54 = 1.4013e-45;
    }
    else {
      fStack_54 = 2.8026e-45;
    }
  }
  else {
    fStack_54 = 4.2039e-45;
  }
  uStack_34 = 0x800101;
  FUN_0018df40();
  uStack_60 = 0x50e0f0;
  uStack_40 = iStack_58 + 0xf0;
  uStack_3c = 0x50e000;
  uStack_5c = piVar1->g[7] + 0xbe8;
  uStack_44 = 0xc;
  sysMemReadW(piVar1->g + 4,piVar1->g[7]);
  sysMemReadW(&fStack_48,piVar1->g[7] + 0x1a4);
  sysMemReadW(&fStack_4c,piVar1->g[7] + 0xc30);
  piVar1->g[3] = 0;
  do {
    uStack_34 = 0x2a805555;
    FUN_0018df40();
    sysMemReadS(&sStack_c,uStack_5c + 4);
    piVar1->g[0] = (int)sStack_c;
    sysMemReadS(&sStack_e,uStack_5c);
    piVar1->g[1] = (int)sStack_e;
    sysMemReadS(&sStack_10,uStack_5c + 2);
    piVar1->g[2] = (int)sStack_10;
    FUN_0018de40(piVar1->g);
    sysMemReadS(&sStack_12,uStack_60);
    piVar1->g[0] = (int)sStack_12;
    piVar1->g[0] = -piVar1->g[0];
    sysMemReadS(&sStack_14,uStack_60 + 4);
    piVar1->g[1] = (int)sStack_14;
    piVar1->g[1] = -piVar1->g[1];
    sysMemReadS(&sStack_16,uStack_60 + 8);
    piVar1->g[2] = (int)sStack_16;
    piVar1->g[2] = -piVar1->g[2];
    FUN_0018de40(piVar1->g);
    sysMemReadS(&sStack_18,uStack_3c + 8);
    piVar1->g[0] = (int)sStack_18;
    sysMemReadS(&sStack_1a,uStack_3c + 4);
    piVar1->g[1] = (int)sStack_1a;
    sysMemReadS(&sStack_1c,uStack_3c);
    piVar1->g[2] = (int)sStack_1c;
    FUN_0018de40(piVar1->g);
    uStack_20 = FUN_0018e100();
    *puVar3 = (int)(short)uStack_20;
    uStack_24 = FUN_0018e100();
    piVar1->g[1] = (int)(short)uStack_24;
    uStack_28 = FUN_0018e100();
    piVar1->g[2] = (int)(short)uStack_28;
    *puVar3 = -*puVar3;
    piVar1->g[0] = piVar1->g[0] >> ((uint)fStack_54 & 0x1f);
    sysMemWriteS(uStack_40 + 4,piVar1->g);
    piVar1->g[1] = piVar1->g[1] >> ((uint)fStack_54 & 0x1f);
    sysMemWriteS(uStack_40,piVar1->g + 1);
    piVar1->g[2] = -piVar1->g[2];
    piVar1->g[2] = piVar1->g[2] >> ((uint)fStack_54 & 0x1f);
    sysMemWriteS(uStack_40 + 8,piVar1->g + 2);
    uStack_60 = uStack_60 + 0xc;
    uStack_40 = uStack_40 + 0xc;
    uStack_5c = uStack_5c + 6;
    uStack_3c = uStack_3c + 0xc;
    if (uStack_44 < 2) {
      if (uStack_44 == 1) {
        uStack_30 = 2;
      }
      else {
        uStack_30 = 1;
      }
    }
    else {
      uStack_30 = 4;
    }
    uStack_44 = uStack_44 - 1;
  } while ((uStack_30 & 4) != 0);
  fStack_54 = (float)(1 << ((uint)fStack_54 & 0x1f));
  uStack_34 = 0xb801717;
  FUN_0018df40();
  FUN_0018df40(fStack_54);
  fStack_54 = (float)FUN_0018e100();
  uStack_38 = 0x3f800000;
  fStack_54 = 1.0 / fStack_54;
  uStack_44 = 0x18;
  do {
    sysMemReadW(&fStack_48,uStack_60);
    sysMemReadW(&fStack_4c,uStack_3c);
    fStack_48 = (fStack_4c - fStack_48) * fStack_54;
    sysMemWriteW(uStack_40,&fStack_48);
    uStack_40 = uStack_40 + 4;
    uStack_3c = uStack_3c + 4;
    uStack_60 = uStack_60 + 4;
    if (uStack_44 < 2) {
      if (uStack_44 == 1) {
        uStack_30 = 2;
      }
      else {
        uStack_30 = 1;
      }
    }
    else {
      uStack_30 = 4;
    }
    uStack_44 = uStack_44 - 1;
  } while ((uStack_30 & 4) != 0);
  uStack_34 = 0x1000202;
  FUN_0018df40();
LAB_001e7f2c:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

