/* EXT 65: rob_disp @ 001ce900; patched over i960 019f10 (arcade rob_disp) */

/* WARNING: Removing unreachable block (ram,0x001ceff0) */
/* WARNING: Removing unreachable block (ram,0x001cebd0) */
/* WARNING: Removing unreachable block (ram,0x001cea40) */
/* WARNING: Removing unreachable block (ram,0x001ce9e4) */
/* WARNING: Removing unreachable block (ram,0x001cf418) */
/* WARNING: Removing unreachable block (ram,0x001cf900) */
/* WARNING: Removing unreachable block (ram,0x001d0ea0) */
/* WARNING: Removing unreachable block (ram,0x001ced50) */
/* WARNING: Removing unreachable block (ram,0x001ceb98) */
/* WARNING: Removing unreachable block (ram,0x001cec88) */
/* WARNING: Removing unreachable block (ram,0x001cf6a0) */
/* WARNING: Removing unreachable block (ram,0x001d0660) */

undefined8 rob_disp(int param_1)

{
  i960_regs *piVar1;
  uint uVar2;
  long lVar3;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  uint uStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int iStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  float fStack_54;
  uint uStack_50;
  short sStack_42;
  ushort uStack_40;
  ushort uStack_3e;
  ushort uStack_3c;
  ushort uStack_3a;
  ushort uStack_38;
  ushort uStack_36;
  ushort uStack_34;
  short sStack_32;
  short sStack_30;
  short sStack_2e;
  ushort uStack_2c;
  ushort uStack_2a;
  ushort uStack_28;
  ushort uStack_26;
  ushort uStack_24;
  ushort uStack_22;
  ushort uStack_20;
  ushort uStack_1e;
  ushort uStack_1c;
  ushort uStack_1a;
  ushort uStack_18;
  byte bStack_15;
  byte bStack_14;
  byte bStack_13;
  byte bStack_12;
  byte bStack_11;
  byte bStack_10;
  byte bStack_f;
  byte bStack_e;
  byte bStack_d;
  byte bStack_c;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  byte bStack_8;
  byte bStack_7;
  byte bStack_6;
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  lVar3 = FUN_001cad40();
  if (lVar3 == 0) {
    sysMemReadW(&fStack_54,piVar1->g[7]);
    if (((uint)fStack_54 & 0x80) != 0) {
      sysMemReadB(&bStack_1,piVar1->g[7] + 0x2a);
      fStack_84 = (float)(uint)bStack_1;
      if (bStack_1 == 0) {
        uStack_50 = 2;
      }
      else {
        uStack_50 = 4;
      }
      if ((uStack_50 & 5) != 0) {
        fStack_84 = fRam016b75e4;
        sysMemReadB(&bStack_12,(int)fRam016b75e4 + 0xfa);
        fStack_74 = (float)(uint)bStack_12;
        if ((bStack_12 & 1) == 0) {
          fStack_54 = 1.1755304e-38;
          FUN_0018df40();
          fStack_84 = 0.0;
          fStack_54 = 2.1211505e-22;
          FUN_0018df40();
          sysMemReadB(&bStack_13,piVar1->g[7] + 4);
          fStack_54 = (float)(uint)bStack_13;
          FUN_0018df40();
          fStack_54 = (float)((int)fStack_84 * 0xc);
          FUN_0018df40();
          fStack_84 = (float)((uint)bRam016c1ddc * 0x20);
          iStack_68 = (int)fStack_84 + 0x50b100;
          sysMemReadW(&fStack_80,(int)fStack_84 + 0x50b108);
          fStack_54 = 3.7622734e-37;
          fStack_80 = fStack_80 - 1.0;
          FUN_0018df40();
          fStack_54 = 0.0;
          FUN_0018df40(0);
          FUN_0018df40(fStack_80);
          fStack_54 = 0.0;
          FUN_0018df40(0);
          sysMemReadW(&fStack_84,iStack_68 + 0x18);
          piVar1->g[1] = 0;
          piVar1->g[0] = (uint)fStack_84;
          set_obj(0);
          sysMemReadW(&fStack_54,piVar1->g[10] + 0x2008);
          uRam016c5dcc = piVar1->g[0xe];
          piVar1->g[0xe] = 0;
          sysMemWriteW(piVar1->g[10],piVar1->g + 0xe);
          piVar1->g[0xe] = uRam016c5dcc;
          fRam016b85d0 = fStack_54;
          sysMemReadB(&bStack_14,piVar1->g[7] + 4);
          fStack_54 = (float)((uint)bStack_14 * 8 + 0x501804);
          sysMemReadW(&uStack_58,(uint)bStack_14 * 8 + 0x501808);
          sysMemReadW(&uStack_5c,piVar1->g[10] + 0x2008);
          if (uStack_58 == 0) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = 4;
          }
          if ((uStack_50 & 5) == 0) {
            sysMemWriteW((uint)fStack_54,&uStack_5c);
          }
          else {
            uStack_5c = uStack_5c | 0x80000000;
            sysMemWriteW(uStack_58 + 0x900000,&uStack_5c);
          }
          fStack_54 = fRam016b85d0;
          sysMemWriteW(piVar1->g[10] + 0x1008,&fStack_54);
          sysMemReadB(&bStack_15,piVar1->g[7] + 4);
          fStack_54 = (float)((uint)bStack_15 * 8 + 0x501804);
          sysMemReadW(&uStack_58,(uint)fStack_54);
          sysMemReadW(&uStack_5c,piVar1->g[10] + 0x2008);
          sysMemWriteW((int)fStack_54 + 4,&uStack_5c);
          uStack_58 = uStack_58 | 0x80000000;
          sysMemWriteW(piVar1->g[10],&uStack_58);
          fStack_54 = 2.3511328e-38;
          FUN_0018df40();
        }
        goto LAB_001ce954;
      }
      sysMemReadW(&fStack_84,piVar1->g[7] + 400);
      sysMemReadW(&fStack_74,(int)fStack_84 + 0x24);
      if (fStack_74 == 0.0) {
        uStack_50 = 2;
      }
      else {
        uStack_50 = 4;
      }
      fStack_54 = fRam016bedd0;
      if (((uint)fRam016bedd0 & 0x20) == 0) {
        sysMemReadW(&uStack_58,piVar1->g[7] + 0xaec);
        fStack_54 = (float)(uStack_58 + 1);
        sysMemWriteW(piVar1->g[7] + 0xaec,&fStack_54);
        uVar2 = piVar1->g[7];
      }
      else {
        uVar2 = piVar1->g[7];
      }
      sysMemReadW(&fStack_54,uVar2 + 0x1a4);
      if (((uint)fStack_54 & 0x10) == 0) {
        fStack_54 = 0.0;
        sysMemWriteS(piVar1->g[7] + 0x7fa,&fStack_54);
      }
      else {
        sysMemReadW(&fStack_54,piVar1->g[7]);
        if ((((uint)fStack_54 & 8) == 0) &&
           (fStack_54 = fRam016bedd0, ((uint)fRam016bedd0 & 0x20) == 0)) {
          sysMemReadS(&uStack_18,piVar1->g[7] + 0x7fa);
          uStack_58 = uStack_18 + 1;
          sysMemWriteS(piVar1->g[7] + 0x7fa,&uStack_58);
        }
      }
      fStack_70 = 0.0;
      fStack_6c = 2.24208e-44;
      sysMemReadW(&fStack_54,piVar1->g[7]);
      if (((uint)fStack_54 & 0x2000000) == 0) {
        uStack_64 = piVar1->g[7] + 0x40;
        fStack_84 = fRam016b75e4;
        sysMemReadB(&bStack_2,(int)fRam016b75e4 + 0xfa);
        fStack_74 = (float)(uint)bStack_2;
        do {
          sysMemReadB(&bStack_3,piVar1->g[7] + 0x6b8 + (int)fStack_70);
          fStack_84 = (float)(uint)bStack_3;
          if (((uint)fStack_74 & 1) == 0) {
            if (bStack_3 == 0) {
              uStack_50 = 2;
            }
            else {
              uStack_50 = 4;
            }
            uVar2 = uStack_50 & 5;
          }
          else {
            if (bStack_3 == 0) {
              uStack_50 = 2;
            }
            else {
              uStack_50 = 4;
            }
            uVar2 = uStack_50 & 2;
          }
          if (uVar2 == 0) {
            fStack_54 = 1.1755304e-38;
            FUN_0018df40();
            fStack_54 = 2.1211505e-22;
            FUN_0018df40();
            sysMemReadB(&bStack_4,piVar1->g[7] + 4);
            fStack_54 = (float)(uint)bStack_4;
            FUN_0018df40();
            fStack_54 = (float)((int)fStack_70 * 0xc);
            FUN_0018df40();
            sysMemReadW(&fStack_84,uStack_64 + (int)fStack_70 * 4);
            sysMemReadW(&fStack_80,piVar1->g[7] + 0x5f0);
            if (fStack_80 == 0.0) {
              uStack_50 = 2;
            }
            else {
              uStack_50 = 4;
            }
            if ((uStack_50 & 2) == 0) {
              piVar1->g[0] = (uint)fStack_70;
              piVar1->g[1] = (uint)fStack_84;
              FUN_001d2480(0);
            }
            if ((int)fStack_70 < 6) {
              if (fStack_70 == 7.00649e-45) {
                uStack_50 = 2;
              }
              else {
                uStack_50 = 1;
              }
            }
            else {
              uStack_50 = 4;
            }
            if ((uStack_50 & 2) == 0) {
              if ((int)fStack_70 < 9) {
                if (fStack_70 == 1.12104e-44) {
                  uStack_50 = 2;
                }
                else {
                  uStack_50 = 1;
                }
              }
              else {
                uStack_50 = 4;
              }
              if ((uStack_50 & 5) == 0) goto LAB_001ced20;
            }
            else {
LAB_001ced20:
              sysMemReadW(&fStack_80,piVar1->g[7] + 0x6ac);
              if (fStack_80 == 0.0) {
                uStack_50 = 2;
              }
              else {
                uStack_50 = 4;
              }
              if ((uStack_50 & 2) == 0) {
                piVar1->g[0] = (uint)fStack_70;
                FUN_001d2280(0);
                fStack_84 = (float)piVar1->g[1];
              }
            }
            if ((int)fStack_70 < 2) {
              if (fStack_70 == 1.4013e-45) {
                uStack_50 = 2;
              }
              else {
                uStack_50 = 1;
              }
            }
            else {
              uStack_50 = 4;
            }
            if ((uStack_50 & 5) == 0) {
              piVar1->g[0] = (uint)fStack_84;
              FUN_001f29c0(0);
              fStack_84 = (float)piVar1->g[0];
            }
            if ((int)fStack_70 < 10) {
              if (fStack_70 == 1.26117e-44) {
                uStack_50 = 2;
              }
              else {
                uStack_50 = 1;
              }
            }
            else {
              uStack_50 = 4;
            }
            if ((uStack_50 & 5) == 0) {
              piVar1->g[0] = (uint)fStack_84;
              FUN_001f14c0(0);
              fStack_84 = (float)piVar1->g[0];
            }
            fStack_54 = 2.21685e-42;
            if ((uint)fStack_84 < 0x62e) {
              uStack_50 = 4;
            }
            else if (fStack_84 == 2.21685e-42) {
              uStack_50 = 2;
            }
            else {
              uStack_50 = 1;
            }
            if ((uStack_50 & 4) == 0) {
              fStack_54 = 2.25889e-42;
              if ((uint)fStack_84 < 0x64c) {
                uStack_50 = 4;
              }
              else if (fStack_84 == 2.25889e-42) {
                uStack_50 = 2;
              }
              else {
                uStack_50 = 1;
              }
              if ((uStack_50 & 1) != 0) goto LAB_001cfdc8;
              sysMemReadB(&bStack_5,piVar1->g[7] + 4);
              piVar1->g[1] = (uint)bStack_5;
              piVar1->g[2] = 0x68cbc;
              piVar1->g[0] = (uint)fStack_84;
              sysMemReadW(&fStack_54,piVar1->g[7] + 0x1a4);
              if (((uint)fStack_54 & 0x4000000) == 0) {
LAB_001ceed0:
                sysMemReadW(&fStack_54,piVar1->g[7] + 0x720);
                if (((uint)fStack_54 & 4) != 0) {
                  sysMemReadS(&uStack_1c,piVar1->g[7] + 0x1aa);
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
                  if (((uStack_50 & 4) == 0) && ((uStack_1c & 1) != 0)) {
                    piVar1->g[2] = 0x802000;
                    set_obj_thd(0);
                    goto LAB_001ceef8;
                  }
                }
                set_obj_thd(0);
              }
              else {
                sysMemReadS(&uStack_1a,piVar1->g[7] + 0x1aa);
                fStack_54 = (float)(uint)uStack_1a;
                if (uStack_1a < 5) {
                  if (uStack_1a == 4) {
                    uStack_50 = 2;
                  }
                  else {
                    uStack_50 = 1;
                  }
                }
                else {
                  uStack_50 = 4;
                }
                if ((uStack_50 & 4) != 0) goto LAB_001ceed0;
                piVar1->g[2] = 0x800000;
                set_obj_thd(0);
              }
            }
            else {
LAB_001cfdc8:
              sysMemReadB(&bStack_6,piVar1->g[7] + 4);
              piVar1->g[1] = (uint)bStack_6;
              piVar1->g[0] = (uint)fStack_84;
              sysMemReadW(&fStack_54,piVar1->g[7] + 0x1a4);
              if (((uint)fStack_54 & 0x4000000) != 0) {
                sysMemReadS(&uStack_1e,piVar1->g[7] + 0x1aa);
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
                if ((uStack_50 & 4) == 0) {
                  piVar1->g[2] = 0x800000;
                  set_obj_thd(0);
                  goto LAB_001ceef8;
                }
              }
              sysMemReadW(&fStack_54,piVar1->g[7] + 0x720);
              if (((uint)fStack_54 & 4) != 0) {
                sysMemReadS(&uStack_20,piVar1->g[7] + 0x1aa);
                fStack_54 = (float)(uint)uStack_20;
                if (uStack_20 < 5) {
                  if (uStack_20 == 4) {
                    uStack_50 = 2;
                  }
                  else {
                    uStack_50 = 1;
                  }
                }
                else {
                  uStack_50 = 4;
                }
                if (((uStack_50 & 4) == 0) && ((uStack_20 & 1) != 0)) {
                  piVar1->g[2] = 0x802000;
                  set_obj_thd(0);
                  goto LAB_001ceef8;
                }
              }
              set_obj(0);
            }
LAB_001ceef8:
            sysMemReadW(&fStack_80,(int)fStack_70 * 4 + 0x1a0ec);
            switch(fStack_70) {
            case 0.0:
            case 4.2039e-45:
            case 5.60519e-45:
            case 7.00649e-45:
            case 8.40779e-45:
            case 9.80909e-45:
            case 1.12104e-44:
            case 1.4013e-44:
            case 1.54143e-44:
            case 1.68156e-44:
            case 1.82169e-44:
            case 1.96182e-44:
            case 2.10195e-44:
              break;
            case 1.4013e-45:
              piVar1->r[1] = piVar1->r[1] + 4;
              sysMemWriteW(piVar1->r[1] - 4,&fStack_84);
              piVar1->r[1] = piVar1->r[1] + 0x10;
              sysMemWriteQ(piVar1->r[1] - 0x10,&fStack_80);
              piVar1->r[1] = piVar1->r[1] + 0x10;
              sysMemWriteQ(piVar1->r[1] - 0x10,&fStack_70);
              piVar1->r[1] = piVar1->r[1] + 0x10;
              sysMemWriteQ(piVar1->r[1] - 0x10,&uStack_60);
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
              FUN_001eff40(0);
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
              sysMemReadQ(&uStack_60,piVar1->r[1] - 0x10);
              piVar1->r[1] = piVar1->r[1] - 0x10;
              sysMemReadQ(&fStack_70,piVar1->r[1] - 0x10);
              piVar1->r[1] = piVar1->r[1] - 0x10;
              sysMemReadQ(&fStack_80,piVar1->r[1] - 0x10);
              piVar1->r[1] = piVar1->r[1] - 0x10;
              sysMemReadW(&fStack_84,piVar1->r[1] - 4);
              piVar1->r[1] = piVar1->r[1] - 4;
              break;
            default:
              sysMemReadW(&fStack_54,piVar1->g[10] + 0x2008);
              uRam016c5dcc = piVar1->g[0xe];
              piVar1->g[0xe] = 0;
              sysMemWriteW(piVar1->g[10],piVar1->g + 0xe);
              piVar1->g[0xe] = uRam016c5dcc;
              fRam016b85d0 = fStack_54;
              sysMemReadB(&bStack_7,piVar1->g[7] + 4);
              fStack_54 = (float)((uint)bStack_7 * 8 + 0x501804);
              sysMemReadW(&uStack_58,(uint)bStack_7 * 8 + 0x501808);
              sysMemReadW(&uStack_5c,piVar1->g[10] + 0x2008);
              if (uStack_58 == 0) {
                uStack_50 = 2;
              }
              else {
                uStack_50 = 4;
              }
              if ((uStack_50 & 5) == 0) {
                sysMemWriteW((uint)fStack_54,&uStack_5c);
              }
              else {
                uStack_5c = uStack_5c | 0x80000000;
                sysMemWriteW(uStack_58 + 0x900000,&uStack_5c);
              }
              fStack_54 = fRam016b85d0;
              sysMemWriteW(piVar1->g[10] + 0x1008,&fStack_54);
              sysMemReadB(&bStack_8,piVar1->g[7] + 4);
              fStack_54 = (float)((uint)bStack_8 * 8 + 0x501804);
              sysMemReadW(&uStack_58,(uint)fStack_54);
              sysMemReadW(&uStack_5c,piVar1->g[10] + 0x2008);
              sysMemWriteW((int)fStack_54 + 4,&uStack_5c);
              uStack_58 = uStack_58 | 0x80000000;
              sysMemWriteW(piVar1->g[10],&uStack_58);
              sysMemReadB(&bStack_9,piVar1->g[7] + 0x1b0);
              uStack_60 = (uint)bStack_9;
              if (bStack_9 < 6) {
                if (bStack_9 == 5) {
                  uStack_50 = 2;
                }
                else {
                  uStack_50 = 1;
                }
              }
              else {
                uStack_50 = 4;
              }
              if ((uStack_50 & 2) == 0) {
                if (uStack_60 < 0x13) {
                  if (uStack_60 == 0x12) {
                    uStack_50 = 2;
                  }
                  else {
                    uStack_50 = 1;
                  }
                }
                else {
                  uStack_50 = 4;
                }
                if ((uStack_50 & 5) != 0) break;
              }
              sysMemReadS(&uStack_22,piVar1->g[7] + 0x1f48);
              fStack_84 = (float)(uint)uStack_22;
              if ((uStack_22 & 4) != 0) {
                FUN_001d1240(0);
              }
              break;
            case 1.26117e-44:
              sysMemReadW(&fStack_84,piVar1->g[7] + 400);
              sysMemReadW(&fStack_80,(int)fStack_84 + 0x24);
              sysMemReadS(&uStack_24,piVar1->g[7] + 0x1f48);
              fStack_84 = (float)(uint)uStack_24;
              if ((uStack_24 & 2) != 0) {
                sysMemReadB(&bStack_a,piVar1->g[7] + 0x1b0);
                fStack_84 = (float)(uint)bStack_a;
                sysMemReadW(&fStack_80,(int)fStack_84 * 4 + 0x642f9ec);
              }
              if (fStack_80 == 0.0) {
                uStack_50 = 2;
              }
              else {
                uStack_50 = 4;
              }
              if ((uStack_50 & 2) == 0) {
                piVar1->g[0] = 3;
                set_mmode(0);
                sysMemReadW(piVar1->g,(int)fStack_80 + 8);
                uVar2 = sysReadWorkRam1(piVar1->g[7] + 4);
                FUN_001c63c0(piVar1->g[0],uVar2 & 0xff,&uStack_60);
                uStack_58 = FUN_001bbb80((uVar2 & 0xff) << 8);
                sysMemReadW(&fStack_84,piVar1->g[7] + 0x1a4);
                if (((uint)fStack_84 & 0x4000000) == 0) {
LAB_001d0070:
                  sysMemReadW(&fStack_84,piVar1->g[7] + 0x720);
                  if (((uint)fStack_84 & 4) != 0) {
                    sysMemReadS(&uStack_28,piVar1->g[7] + 0x1aa);
                    fStack_84 = (float)(uint)uStack_28;
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
                      uStack_5c = 0x802000;
                      uStack_5c = FUN_001bcb00();
                    }
                  }
                }
                else {
                  sysMemReadS(&uStack_26,piVar1->g[7] + 0x1aa);
                  fStack_84 = (float)(uint)uStack_26;
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
                  if ((uStack_50 & 4) != 0) goto LAB_001d0070;
                  uStack_5c = 0x800000;
                  uStack_5c = FUN_001bcb00();
                }
                uRam016c5dcc = piVar1->g[0xe];
                piVar1->g[0xe] = 0x101;
                sysMemWriteW(piVar1->g[10] + 0x10,piVar1->g + 0xe);
                piVar1->g[0xe] = uRam016c5dcc;
                sysMemWriteQ(piVar1->g[10] + piVar1->g[0xc],&uStack_60);
                piVar1->g[0] = 1;
                set_mmode(0);
              }
              piVar1->r[1] = piVar1->r[1] + 4;
              sysMemWriteW(piVar1->r[1] - 4,&fStack_84);
              piVar1->r[1] = piVar1->r[1] + 0x10;
              sysMemWriteQ(piVar1->r[1] - 0x10,&fStack_80);
              piVar1->r[1] = piVar1->r[1] + 0x10;
              sysMemWriteQ(piVar1->r[1] - 0x10,&fStack_70);
              piVar1->r[1] = piVar1->r[1] + 0x10;
              sysMemWriteQ(piVar1->r[1] - 0x10,&uStack_60);
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
              FUN_001ee200(0);
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
              sysMemReadQ(&uStack_60,piVar1->r[1] - 0x10);
              piVar1->r[1] = piVar1->r[1] - 0x10;
              sysMemReadQ(&fStack_70,piVar1->r[1] - 0x10);
              piVar1->r[1] = piVar1->r[1] - 0x10;
              sysMemReadQ(&fStack_80,piVar1->r[1] - 0x10);
              piVar1->r[1] = piVar1->r[1] - 0x10;
              sysMemReadW(&fStack_84,piVar1->r[1] - 4);
              piVar1->r[1] = piVar1->r[1] - 4;
            }
            FUN_001db640(0);
            sysMemReadS(&uStack_2a,piVar1->g[7] + 0x78a);
            fStack_80 = (float)(uint)uStack_2a;
            if (uStack_2a == 0) {
              uStack_50 = 2;
            }
            else {
              uStack_50 = 4;
            }
            if ((uStack_50 & 2) == 0) {
              piVar1->g[0] = (uint)fStack_70;
              FUN_001d1000(0);
              uStack_78 = piVar1->g[7] + 0x788;
              sysMemReadW(&fStack_54,piVar1->g[7]);
              if (((uint)fStack_54 & 0x8000000) != 0) {
                uStack_78 = piVar1->g[7] + 0x7a0;
              }
              sysMemReadS(&uStack_2c,uStack_78);
              fStack_84 = (float)(uint)uStack_2c;
              if ((uint)fStack_70 < (uint)fStack_84) {
                uStack_50 = 4;
              }
              else if (fStack_70 == fStack_84) {
                uStack_50 = 2;
              }
              else {
                uStack_50 = 1;
              }
              if ((uStack_50 & 5) == 0) {
                fStack_54 = fRam016bedd0;
                if (((uint)fRam016bedd0 & 0x20) == 0) {
                  sysMemReadW(&fStack_84,piVar1->g[7] + 0xf00);
                  fStack_84 = (float)((int)fStack_84 + 1);
                  if ((uint)fStack_84 < 5) {
                    if (fStack_84 == 5.60519e-45) {
                      uStack_50 = 2;
                    }
                    else {
                      uStack_50 = 1;
                    }
                  }
                  else {
                    uStack_50 = 4;
                  }
                  if ((uStack_50 & 1) == 0) {
                    fStack_84 = 0.0;
                  }
                  sysMemWriteW(piVar1->g[7] + 0xf00,&fStack_84);
                }
                sysMemReadW(&fStack_84,piVar1->g[7] + 0xf00);
                uStack_58 = 0x34;
                uStack_5c = 0;
                fStack_84 = (float)((int)fStack_84 * 0x34 + piVar1->g[7] + 0xf34);
                sysMemReadW(&fStack_54,piVar1->g[7]);
                if ((((uint)fStack_54 & 0x8000000) != 0) &&
                   (sysMemReadW(&fStack_54,piVar1->g[7] + 0x1a4), ((uint)fStack_54 & 4) == 0)) {
                  uStack_5c = 1;
                }
                sysMemWriteS((int)fStack_84 + 0x30,&uStack_5c);
                fStack_54 = 1.1755304e-38;
                FUN_0018df40();
                fStack_54 = 1.0605428e-22;
                FUN_0018df40();
                sysMemReadB(&bStack_b,piVar1->g[7] + 4);
                fStack_54 = (float)(uint)bStack_b;
                FUN_0018df40();
                fStack_54 = (float)((int)fStack_70 * 0xc);
                FUN_0018df40();
                fStack_54 = 3.7622734e-37;
                FUN_0018df40();
                sysMemReadT(&uStack_60,uStack_78 + 4);
                FUN_0018de40(&uStack_60);
                fStack_54 = 3.0100953e-36;
                FUN_0018df40();
                sysMemReadS(&sStack_2e,uStack_78 + 0x12);
                fStack_54 = (float)(int)sStack_2e;
                FUN_0018df40();
                fStack_54 = 1.5050015e-36;
                FUN_0018df40();
                sysMemReadS(&sStack_30,uStack_78 + 0x10);
                fStack_54 = (float)(int)sStack_30;
                FUN_0018df40();
                fStack_54 = 6.020375e-36;
                FUN_0018df40();
                sysMemReadS(&sStack_32,uStack_78 + 0x14);
                fStack_54 = (float)(int)sStack_32;
                FUN_0018df40();
                fStack_54 = 1.881079e-37;
                FUN_0018df40();
                fStack_54 = fStack_84;
                FUN_0018e080(&uStack_60);
                sysMemWriteT((uint)fStack_54,&uStack_60);
                FUN_0018e080(&uStack_60);
                sysMemWriteT((int)fStack_54 + 0xc,&uStack_60);
                FUN_0018e080(&uStack_60);
                sysMemWriteT((int)fStack_54 + 0x18,&uStack_60);
                FUN_0018e080(&uStack_60);
                sysMemWriteT((int)fStack_54 + 0x24,&uStack_60);
                fStack_54 = 2.3511328e-38;
                FUN_0018df40();
                fStack_54 = 2.3511328e-38;
                FUN_0018df40();
                fStack_54 = 1.1755304e-38;
                FUN_0018df40();
                fStack_54 = 1.2041119e-35;
                FUN_0018df40();
                fStack_54 = fStack_84;
                sysMemReadT(&uStack_60,(uint)fStack_84);
                FUN_0018de40(&uStack_60);
                sysMemReadT(&uStack_60,(int)fStack_54 + 0xc);
                FUN_0018de40(&uStack_60);
                sysMemReadT(&uStack_60,(int)fStack_54 + 0x18);
                FUN_0018de40(&uStack_60);
                sysMemReadT(&uStack_60,(int)fStack_54 + 0x24);
                FUN_0018de40(&uStack_60);
                sysMemReadS(&uStack_34,uStack_78 + 2);
                uStack_60 = (uint)uStack_34;
                sysMemReadB(&bStack_c,piVar1->g[7] + 4);
                piVar1->g[1] = (uint)bStack_c;
                piVar1->g[0] = uStack_60;
                sysMemReadW(&fStack_54,piVar1->g[7] + 0x1a4);
                if (((uint)fStack_54 & 0x4000000) == 0) {
LAB_001d05d0:
                  sysMemReadW(&fStack_54,piVar1->g[7] + 0x720);
                  if (((uint)fStack_54 & 4) != 0) {
                    sysMemReadS(&uStack_38,piVar1->g[7] + 0x1aa);
                    fStack_54 = (float)(uint)uStack_38;
                    if (uStack_38 < 5) {
                      if (uStack_38 == 4) {
                        uStack_50 = 2;
                      }
                      else {
                        uStack_50 = 1;
                      }
                    }
                    else {
                      uStack_50 = 4;
                    }
                    if (((uStack_50 & 4) == 0) && ((uStack_38 & 1) != 0)) {
                      piVar1->g[2] = 0x802000;
                      set_obj_thd(0);
                      goto LAB_001d05f8;
                    }
                  }
                  set_obj(0);
                }
                else {
                  sysMemReadS(&uStack_36,piVar1->g[7] + 0x1aa);
                  fStack_54 = (float)(uint)uStack_36;
                  if (uStack_36 < 5) {
                    if (uStack_36 == 4) {
                      uStack_50 = 2;
                    }
                    else {
                      uStack_50 = 1;
                    }
                  }
                  else {
                    uStack_50 = 4;
                  }
                  if ((uStack_50 & 4) != 0) goto LAB_001d05d0;
                  piVar1->g[2] = 0x800000;
                  set_obj_thd(0);
                }
LAB_001d05f8:
                fStack_54 = 2.3511328e-38;
                FUN_0018df40();
                fStack_54 = 1.1755304e-38;
                FUN_0018df40();
                fStack_80 = 5.60519e-45;
                fStack_84 = (float)(piVar1->g[7] + 0xf34);
                do {
                  sysMemReadS(&uStack_3a,(int)fStack_84 + 0x30);
                  uStack_58 = (uint)uStack_3a;
                  if (uStack_3a == 0) {
                    uStack_50 = 2;
                  }
                  else {
                    uStack_50 = 4;
                  }
                  if ((uStack_50 & 2) == 0) {
                    fStack_54 = 1.1755304e-38;
                    FUN_0018df40();
                    fStack_54 = 1.2041119e-35;
                    FUN_0018df40();
                    fStack_54 = fStack_84;
                    sysMemReadT(&uStack_60,(uint)fStack_84);
                    FUN_0018de40(&uStack_60);
                    sysMemReadT(&uStack_60,(int)fStack_54 + 0xc);
                    FUN_0018de40(&uStack_60);
                    sysMemReadT(&uStack_60,(int)fStack_54 + 0x18);
                    FUN_0018de40(&uStack_60);
                    sysMemReadT(&uStack_60,(int)fStack_54 + 0x24);
                    FUN_0018de40(&uStack_60);
                    sysMemReadS(&uStack_3c,piVar1->g[7] + 0x7f8);
                    uStack_78 = (uint)uStack_3c;
                    sysMemReadB(&bStack_d,piVar1->g[7] + 4);
                    piVar1->g[1] = (uint)bStack_d;
                    piVar1->g[0] = uStack_78;
                    sysMemReadW(&fStack_54,piVar1->g[7] + 0x1a4);
                    if (((uint)fStack_54 & 0x4000000) == 0) {
LAB_001d0980:
                      sysMemReadW(&fStack_54,piVar1->g[7] + 0x720);
                      if (((uint)fStack_54 & 4) != 0) {
                        sysMemReadS(&uStack_40,piVar1->g[7] + 0x1aa);
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
                          piVar1->g[2] = 0x802000;
                          set_obj_thd(0);
                          goto LAB_001d09a8;
                        }
                      }
                      set_obj(0);
                    }
                    else {
                      sysMemReadS(&uStack_3e,piVar1->g[7] + 0x1aa);
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
                      if ((uStack_50 & 4) != 0) goto LAB_001d0980;
                      piVar1->g[2] = 0x800000;
                      set_obj_thd(0);
                    }
LAB_001d09a8:
                    fStack_54 = 2.3511328e-38;
                    FUN_0018df40();
                  }
                  uStack_58 = 0x34;
                  fStack_84 = (float)((int)fStack_84 + 0x34);
                  if ((uint)fStack_80 < 2) {
                    if (fStack_80 == 1.4013e-45) {
                      uStack_50 = 2;
                    }
                    else {
                      uStack_50 = 1;
                    }
                  }
                  else {
                    uStack_50 = 4;
                  }
                  fStack_80 = (float)((int)fStack_80 - 1);
                } while ((uStack_50 & 4) != 0);
              }
            }
            fStack_54 = 2.3511328e-38;
            FUN_0018df40();
          }
          fStack_70 = (float)((int)fStack_70 + 1);
          if ((uint)fStack_70 < (uint)fStack_6c) {
            uStack_50 = 4;
          }
          else if (fStack_70 == fStack_6c) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = 1;
          }
        } while ((uStack_50 & 4) != 0);
        sysMemReadW(&fStack_54,piVar1->g[7]);
        if (((uint)fStack_54 & 0x1000000) != 0) {
          fStack_54 = 1.1755304e-38;
          FUN_0018df40();
          fStack_54 = 3.7622734e-37;
          FUN_0018df40();
          sysMemReadW(&fStack_54,piVar1->g[7] + 500);
          FUN_0018df40(fStack_54);
          fStack_54 = 0.1;
          FUN_0018df40();
          sysMemReadW(&fStack_54,piVar1->g[7] + 0x1fc);
          FUN_0018df40(fStack_54);
          fStack_54 = 3.0100953e-36;
          FUN_0018df40();
          sysMemReadS(&sStack_42,piVar1->g[7] + 0x616);
          fStack_54 = (float)(int)sStack_42;
          FUN_0018df40();
          fStack_54 = 7.524777e-37;
          FUN_0018df40();
          fStack_54 = 1.0;
          FUN_0018df40();
          fStack_54 = 1.0;
          FUN_0018df40();
          fStack_54 = 3.0;
          FUN_0018df40();
          fStack_84 = 2.29589e-41;
          fStack_54 = 1.5050015e-36;
          FUN_0018df40();
          FUN_0018df40(fStack_84);
          piVar1->g[1] = 0;
          piVar1->g[0] = 0x14;
          set_obj(0);
          fStack_54 = 2.3511328e-38;
          FUN_0018df40();
        }
      }
      else {
        fStack_70 = 2.24208e-44;
        fStack_6c = 3.6279383e-35;
        uStack_60 = uRam016b75f8;
        do {
          sysMemReadB(&bStack_e,piVar1->g[7] + 4);
          fStack_54 = (float)(uint)bStack_e;
          if (bStack_e < 2) {
            if (bStack_e == 1) {
              uStack_50 = 2;
            }
            else {
              uStack_50 = 1;
            }
          }
          else {
            uStack_50 = 4;
          }
          if ((uStack_50 & 2) == 0) {
            sysMemReadW(&uStack_5c,(int)fStack_70 * 4 + 0x90f600);
            if (uStack_5c == 0) {
              uStack_50 = 2;
            }
            else {
              uStack_50 = 4;
            }
            if ((uStack_50 & 5) == 0) goto LAB_001cf918;
LAB_001cf9a0:
            sysMemReadW(&uStack_5c,(uint)fStack_6c);
          }
          else {
            fStack_80 = 2.10195e-44;
            do {
              sysMemReadW(&uStack_7c,(int)fStack_80 * 4 + 0x90f600);
              if ((uStack_7c & 1 << ((uint)fStack_70 & 0x1f)) != 0) goto LAB_001cf9a0;
              if ((int)fStack_80 < 2) {
                if (fStack_80 == 1.4013e-45) {
                  uStack_50 = 2;
                }
                else {
                  uStack_50 = 1;
                }
              }
              else {
                uStack_50 = 4;
              }
              fStack_80 = (float)((int)fStack_80 - 1);
            } while ((uStack_50 & 6) != 0);
LAB_001cf918:
            sysMemReadW(&fStack_80,uStack_60 + 0x158);
            if ((uint)fStack_70 < (uint)fStack_80) {
              uStack_50 = 4;
            }
            else if (fStack_70 == fStack_80) {
              uStack_50 = 2;
            }
            else {
              uStack_50 = 1;
            }
            if ((uStack_50 & 2) == 0) {
              sysMemReadW(&uStack_5c,(int)fStack_6c + 4);
            }
            else {
              sysMemReadW(&uStack_5c,(int)fStack_6c + 8);
            }
          }
          piVar1->g[6] = 0x3f800000;
          sysMemReadW(&fStack_84,piVar1->g[7] + 0xac8);
          if (((uint)fStack_84 & 1 << ((uint)fStack_70 & 0x1f)) != 0) {
            sysMemReadB(&bStack_f,piVar1->g[7] + 0x821);
            uStack_58 = (uint)bStack_f;
            if (bStack_f < 5) {
              if (bStack_f == 4) {
                uStack_50 = 2;
              }
              else {
                uStack_50 = 1;
              }
            }
            else {
              uStack_50 = 4;
            }
            if ((uStack_50 & 2) == 0) {
              sysMemReadW(piVar1->g + 6,piVar1->g[7] + 0x1d04);
              sysMemReadW(piVar1->g + 6,piVar1->g[6]);
            }
          }
          sysMemReadW(&iStack_68,piVar1->g[7] + 0x1d10);
          sysMemReadW(&iStack_68,iStack_68 + (int)fStack_70 * 4);
          sysMemReadW(&uStack_64,piVar1->g[7] + 0x1d20);
          sysMemReadB(&bStack_10,uStack_64 + (int)fStack_70);
          uStack_64 = (uint)bStack_10;
          while( true ) {
            if ((int)uStack_64 < 1) {
              if (uStack_64 == 0) {
                uStack_50 = 2;
              }
              else {
                uStack_50 = 1;
              }
            }
            else {
              uStack_50 = 4;
            }
            uStack_64 = uStack_64 - 1;
            if ((uStack_50 & 2) != 0) break;
            sysMemReadB(&bStack_11,iStack_68 + uStack_64);
            fStack_54 = (float)(uint)bStack_11;
            sysMemReadQ(&fStack_80,piVar1->g[7] + 0xd00 + (int)fStack_54 * 4);
            fStack_74 = fStack_74 * (float)piVar1->g[6];
            fStack_54 = 1.1755304e-38;
            FUN_0018df40();
            fStack_54 = 3.7622734e-37;
            FUN_0018df40();
            FUN_0018df40(fStack_80);
            FUN_0018df40(uStack_7c);
            FUN_0018df40(uStack_78);
            fStack_54 = 7.524777e-37;
            FUN_0018df40();
            FUN_0018df40(fStack_74);
            FUN_0018df40(fStack_74);
            FUN_0018df40(fStack_74);
            piVar1->g[1] = 0;
            piVar1->g[0] = uStack_5c;
            set_obj(0);
            fStack_54 = 2.3511328e-38;
            FUN_0018df40();
          }
          piVar1->g[0] = (uint)fStack_70;
          FUN_001d1000(0);
          if ((uint)fStack_70 < 2) {
            if (fStack_70 == 1.4013e-45) {
              uStack_50 = 2;
            }
            else {
              uStack_50 = 1;
            }
          }
          else {
            uStack_50 = 4;
          }
          fStack_70 = (float)((int)fStack_70 - 1);
        } while ((uStack_50 & 4) != 0);
      }
    }
    if (param_1 != 0) {
      i960ReturnProc();
    }
  }
  else {
LAB_001ce954:
    if (param_1 != 0) {
      i960ReturnProc();
    }
  }
  return 0;
}

