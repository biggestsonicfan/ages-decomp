/* helper calc_unit_1 @ 001e3840, called (depth 1) from calc_rob_angle_cont */

/* WARNING: Removing unreachable block (ram,0x001e3d04) */
/* WARNING: Removing unreachable block (ram,0x001e4174) */
/* WARNING: Removing unreachable block (ram,0x001e4130) */
/* WARNING: Removing unreachable block (ram,0x001e3c3c) */
/* WARNING: Removing unreachable block (ram,0x001e3e9c) */

undefined8 calc_unit_1(int param_1)

{
  bool bVar1;
  float fVar2;
  i960_regs *piVar3;
  int iVar4;
  uint uVar5;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  int iStack_5c;
  int iStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  short sStack_20;
  short sStack_1e;
  ushort uStack_1c;
  ushort uStack_1a;
  short sStack_18;
  ushort uStack_16;
  ushort uStack_14;
  short sStack_12;
  short sStack_10;
  short sStack_e;
  short sStack_c;
  short sStack_a;
  short sStack_8;
  short sStack_6;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar3 = i960GetRegs();
  if (piVar3->g[1] < 3) {
    if (piVar3->g[1] == 2) {
      uStack_40 = 2;
    }
    else {
      uStack_40 = 1;
    }
  }
  else {
    uStack_40 = 4;
  }
  if ((uStack_40 & 5) == 0) {
    uStack_44 = 0x4000808;
    FUN_0018df40();
    sysMemReadS(&sStack_6,piVar3->g[7] + 0xbe6);
    uStack_44 = (uint)sStack_6;
    FUN_0018df40();
  }
  uStack_44 = 0x3000606;
  FUN_0018df40();
  sysMemReadT(&uStack_50,piVar3->g[6]);
  FUN_0018de40(&uStack_50);
  uStack_44 = 0x1f803f3f;
  FUN_0018df40();
  sysMemReadS(&sStack_8,piVar3->g[5] + 4);
  uStack_50 = (uint)sStack_8;
  sysMemReadS(&sStack_a,piVar3->g[5] + 2);
  uStack_4c = (uint)sStack_a;
  sysMemReadS(&sStack_c,piVar3->g[5]);
  uStack_48 = (uint)sStack_c;
  FUN_0018de40(&uStack_50);
  FUN_0018e100();
  piVar3->g[5] = piVar3->g[5] + 6;
  uStack_44 = 0x4800909;
  FUN_0018df40();
  sysMemReadS(&sStack_e,piVar3->g[3] + 2);
  uStack_44 = (uint)sStack_e;
  FUN_0018df40();
  uStack_44 = 0x4000808;
  FUN_0018df40();
  sysMemReadS(&sStack_10,piVar3->g[3]);
  uStack_44 = (uint)sStack_10;
  FUN_0018df40();
  uStack_44 = 0x5000a0a;
  FUN_0018df40();
  sysMemReadS(&sStack_12,piVar3->g[3] + 4);
  uStack_44 = (uint)sStack_12;
  FUN_0018df40();
  piVar3->g[3] = piVar3->g[3] + 6;
  sysMemReadB(&bStack_1,piVar3->g[7] + 0xbdc);
  uVar5 = piVar3->g[1];
  if (((uint)bStack_1 & 1 << (uVar5 & 0x1f)) == 0) {
    if (uVar5 < 2) {
      if (uVar5 == 1) {
        uStack_40 = 2;
      }
      else {
        uStack_40 = 1;
      }
    }
    else {
      uStack_40 = 4;
    }
    if ((uStack_40 & 5) == 0) {
      sysMemReadW(&uStack_48,piVar3->g[7] + 0x1a4);
      uStack_44 = uStack_48 & 0x16000;
      if (uStack_44 == 0) {
        uStack_40 = 2;
      }
      else {
        uStack_40 = 4;
      }
      if ((uStack_40 & 5) == 0) {
        uStack_44 = 0x20c;
        uStack_48 = uStack_48 & 0x20c;
        if (uStack_48 == 0) {
          uStack_40 = 2;
        }
        else {
          uStack_40 = 4;
        }
        if ((uStack_40 & 5) != 0) {
          uStack_44 = 0x35006a6a;
          FUN_0018df40();
          sysMemReadT(&fStack_60,piVar3->g[7] + 0xb0c);
          FUN_0018de40(&fStack_60);
          FUN_0018e080(&fStack_60);
          uStack_44 = 0x13802727;
          FUN_0018df40();
          FUN_0018df40(fStack_60);
          FUN_0018df40(iStack_58);
          uStack_24 = FUN_0018e100();
          uStack_54 = (uint)(short)uStack_24;
          sysMemReadW(&uStack_44,piVar3->g[7]);
          if ((uStack_44 & 0x40) != 0) {
            uStack_54 = -uStack_54;
          }
          uStack_68 = uStack_54;
          if ((int)uStack_54 < 1) {
            if (uStack_54 == 0) {
              uStack_40 = 2;
            }
            else {
              uStack_40 = 1;
            }
          }
          else {
            uStack_40 = 4;
          }
          if ((uStack_40 & 1) == 0) {
            uStack_50 = 0x2000;
            if ((int)uStack_54 < 0x2001) {
              if (uStack_54 == 0x2000) {
                uStack_40 = 2;
              }
              else {
                uStack_40 = 1;
              }
            }
            else {
              uStack_40 = 4;
            }
            if ((uStack_40 & 4) == 0) {
              uStack_54 = uStack_54 >> 1;
            }
            else {
              uStack_4c = 0x6000;
              if ((int)uStack_54 < 0x6001) {
                if (uStack_54 == 0x6000) {
                  uStack_40 = 2;
                }
                else {
                  uStack_40 = 1;
                }
              }
              else {
                uStack_40 = 4;
              }
              if ((uStack_40 & 4) != 0) goto LAB_001e3a5c;
              uStack_54 = 0x1000;
            }
          }
          else {
            uStack_54 = 0;
          }
          sysMemReadS(&sStack_18,piVar3->g[7] + 0xbe6);
          iStack_58 = (int)sStack_18;
          sysMemReadW(&uStack_44,piVar3->g[7]);
          if ((uStack_44 & 0x40) != 0) {
            iStack_58 = -iStack_58;
          }
          fStack_60 = 3.58732e-43;
          iStack_5c = uStack_54 - iStack_58;
          if (iStack_5c < 0x101) {
            if (iStack_5c == 0x100) {
              uStack_40 = 2;
            }
            else {
              uStack_40 = 1;
            }
          }
          else {
            uStack_40 = 0;
          }
          if (uStack_40 == 0) {
            uStack_64 = 0x1000;
            uStack_54 = iStack_58 + 0x100;
            if ((int)uStack_54 < 0x1001) {
              if (uStack_54 == 0x1000) {
                uStack_40 = 2;
              }
              else {
                uStack_40 = 1;
              }
            }
            else {
              uStack_40 = 4;
            }
            fVar2 = fStack_60;
            if ((uStack_40 & 3) == 0) {
              uStack_54 = 0x1000;
            }
          }
          else {
            fStack_60 = -NAN;
            if (iStack_5c < -0xff) {
              if (iStack_5c == -0x100) {
                uStack_40 = 2;
              }
              else {
                uStack_40 = 1;
              }
            }
            else {
              uStack_40 = 4;
            }
            fVar2 = -NAN;
            if ((uStack_40 & 6) == 0) {
              uStack_54 = iStack_58 - 0x100;
              if ((int)uStack_54 < 1) {
                if (uStack_54 == 0) {
                  uStack_40 = 2;
                }
                else {
                  uStack_40 = 1;
                }
              }
              else {
                uStack_40 = 4;
              }
              fVar2 = fStack_60;
              if ((uStack_40 & 6) == 0) {
                uStack_54 = 0;
              }
            }
          }
          fStack_60 = fVar2;
          sysMemReadW(&uStack_44,piVar3->g[7]);
          if ((uStack_44 & 0x40) != 0) {
            uStack_54 = -uStack_54;
          }
          sysMemWriteS(piVar3->g[7] + 0xbe6,&uStack_54);
          goto LAB_001e3a5c;
        }
      }
      uStack_54 = 0;
      sysMemWriteS(piVar3->g[7] + 0xbe6,&uStack_54);
    }
LAB_001e3a5c:
    uStack_44 = 0x35006a6a;
    FUN_0018df40();
    sysMemReadT(&fStack_60,piVar3->g[4]);
    FUN_0018de40(&fStack_60);
    FUN_0018e080(&fStack_60);
    if (piVar3->g[1] < 3) {
      if (piVar3->g[1] == 2) {
        uStack_40 = 2;
      }
      else {
        uStack_40 = 1;
      }
    }
    else {
      uStack_40 = 4;
    }
    if ((uStack_40 & 5) == 0) {
      sysMemReadW(&uStack_44,piVar3->g[7]);
      if ((uStack_44 & 0x200000) == 0) {
        if (iStack_5c < 1) {
          if (iStack_5c == 0) {
            uStack_40 = 2;
          }
          else {
            uStack_40 = 1;
          }
        }
        else {
          uStack_40 = 4;
        }
        if ((uStack_40 & 6) == 0) {
          iStack_5c = 0;
          if ((int)fStack_60 < 1) {
            if (fStack_60 == 0.0) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            uStack_54 = 0xbf000000;
            if (fStack_60 <= -0.5) {
              if (fStack_60 == -0.5) {
                uStack_40 = 2;
              }
              else {
                uStack_40 = 1;
              }
            }
            else {
              uStack_40 = 4;
            }
            if ((uStack_40 & 1) == 0) {
              sysMemReadS(&uStack_1c,piVar3->g[0] + 4);
              uStack_50 = (uint)uStack_1c;
              if (uStack_1c == 0) {
                uStack_40 = 2;
              }
              else {
                uStack_40 = 4;
              }
              if ((uStack_40 & 2) != 0) goto LAB_001e3dd8;
            }
            goto LAB_001e3c58;
          }
          uStack_54 = 0x3f000000;
          if (fStack_60 <= 0.5) {
            if (fStack_60 == 0.5) {
              uStack_40 = 2;
            }
            else {
              uStack_40 = 1;
            }
          }
          else {
            uStack_40 = 4;
          }
          if ((uStack_40 & 4) != 0) goto LAB_001e3c58;
          sysMemReadS(&uStack_1a,piVar3->g[0] + 4);
          uStack_4c = 0x8000;
          uStack_50 = (uint)uStack_1a;
          if (uStack_1a < 0x8000) {
            uStack_40 = 4;
          }
          else if (uStack_1a == 0x8000) {
            uStack_40 = 2;
          }
          else {
            uStack_40 = 1;
          }
          if ((uStack_40 & 2) == 0) goto LAB_001e3c58;
        }
        else {
LAB_001e3c58:
          uStack_44 = 0x13802727;
          FUN_0018df40();
          FUN_0018df40(fStack_60);
          FUN_0018df40(iStack_5c);
          iVar4 = FUN_0018e100();
          uStack_70 = -iVar4;
          sysMemReadS(&sStack_1e,piVar3->g[0] + 4);
          uStack_50 = 0x800;
          uStack_54 = (uint)sStack_1e;
          uStack_70 = uStack_70 - uStack_54;
          sysMemReadB(&bStack_2,piVar3->g[7] + 0x7d7);
          uStack_44 = (uint)bStack_2;
          if (bStack_2 == 0) {
            uStack_50 = 0x2000;
          }
          if ((int)uStack_50 < (int)uStack_70) {
            uStack_40 = 4;
          }
          else if (uStack_50 == uStack_70) {
            uStack_40 = 2;
          }
          else {
            uStack_40 = 1;
          }
          if ((uStack_40 & 1) == 0) {
            uStack_70 = uStack_50;
          }
          else {
            uStack_4c = -uStack_50;
            if ((int)uStack_4c < (int)uStack_70) {
              uStack_40 = 4;
            }
            else if (uStack_4c == uStack_70) {
              uStack_40 = 2;
            }
            else {
              uStack_40 = 1;
            }
            if ((uStack_40 & 6) == 0) {
              uStack_70 = uStack_4c;
            }
          }
          uStack_70 = uStack_70 + uStack_54;
          sysMemWriteS(piVar3->g[0] + 4,&uStack_70);
        }
LAB_001e3dd8:
        uStack_44 = 0x16802d2d;
        FUN_0018df40();
        FUN_0018df40(fStack_60);
        FUN_0018df40(iStack_5c);
        uStack_6c = FUN_0018e100();
        uStack_44 = 0x13802727;
        FUN_0018df40();
        FUN_0018df40(uStack_6c);
        FUN_0018df40(iStack_58);
        uStack_28 = FUN_0018e100();
        uStack_6c = (uint)(short)uStack_28;
        uStack_68 = uStack_6c;
        sysMemReadS(&sStack_20,piVar3->g[0] + 2);
        piVar3->g[2] = (int)sStack_20;
        uStack_50 = 0x400;
        uStack_6c = uStack_6c - piVar3->g[2];
        sysMemReadB(&bStack_3,piVar3->g[7] + 0x7d7);
        uStack_44 = (uint)bStack_3;
        if (bStack_3 == 0) {
          uStack_50 = 0x2000;
        }
        if ((int)uStack_50 < (int)uStack_6c) {
          bVar1 = false;
        }
        else if (uStack_50 == uStack_6c) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uStack_4c = -uStack_50;
          if ((int)uStack_4c < (int)uStack_6c) {
            uStack_40 = 4;
          }
          else if (uStack_4c == uStack_6c) {
            uStack_40 = 2;
          }
          else {
            uStack_40 = 0;
          }
          if (uStack_40 == 0) {
            uStack_6c = uStack_4c;
          }
        }
        else {
          uStack_6c = uStack_50;
        }
        uStack_50 = 0x2000;
        uStack_6c = uStack_6c + piVar3->g[2];
        if ((int)uStack_6c < 0x2001) {
          if (uStack_6c == 0x2000) {
            uStack_40 = 2;
          }
          else {
            uStack_40 = 1;
          }
        }
        else {
          uStack_40 = 4;
        }
        if ((uStack_40 & 1) == 0) {
          uStack_6c = 0x2000;
          uVar5 = uStack_4c;
        }
        else {
          uStack_4c = 0xffffe000;
          if ((int)uStack_6c < -0x1fff) {
            if (uStack_6c == 0xffffe000) {
              uStack_40 = 2;
            }
            else {
              uStack_40 = 1;
            }
          }
          else {
            uStack_40 = 4;
          }
          uVar5 = 0xffffe000;
          if ((uStack_40 & 6) == 0) {
            uStack_6c = 0xffffe000;
            uVar5 = uStack_4c;
          }
        }
        uStack_4c = uVar5;
        sysMemWriteS(piVar3->g[0] + 2,&uStack_6c);
        uVar5 = piVar3->g[6];
        goto LAB_001e3ff8;
      }
      uStack_44 = uStack_44 & 0xffdfffff;
      sysMemWriteW(piVar3->g[7],&uStack_44);
    }
    uStack_44 = 0x13802727;
    FUN_0018df40();
    FUN_0018df40(fStack_60);
    FUN_0018df40(iStack_5c);
    uStack_2c = FUN_0018e100();
    uStack_70 = -(int)(short)uStack_2c;
    sysMemWriteS(piVar3->g[0] + 4,&uStack_70);
    uStack_44 = 0x16802d2d;
    FUN_0018df40();
    FUN_0018df40(fStack_60);
    FUN_0018df40(iStack_5c);
    uStack_6c = FUN_0018e100();
    uStack_44 = 0x13802727;
    FUN_0018df40();
    FUN_0018df40(uStack_6c);
    FUN_0018df40(iStack_58);
    uStack_30 = FUN_0018e100();
    uStack_6c = (uint)(short)uStack_30;
    sysMemWriteS(piVar3->g[0] + 2,&uStack_6c);
  }
  else {
    sysMemReadS(&uStack_14,piVar3->g[0] + 4);
    uStack_70 = (uint)uStack_14;
    sysMemReadS(&uStack_16,piVar3->g[0] + 2);
    uStack_6c = (uint)uStack_16;
  }
  uStack_44 = 0x5000a0a;
  FUN_0018df40();
  FUN_0018df40(uStack_70);
  uStack_44 = 0x4800909;
  FUN_0018df40();
  FUN_0018df40(uStack_6c);
  uVar5 = piVar3->g[6];
LAB_001e3ff8:
  piVar3->g[6] = uVar5 + 0xc;
  piVar3->g[4] = piVar3->g[4] + 0xc;
  piVar3->g[0] = piVar3->g[0] + 6;
  piVar3->g[1] = piVar3->g[1] + 1;
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

