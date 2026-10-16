/* helper FUN_001dcec0 @ 001dcec0, called (depth 1) from coli_cont_cop */

/* WARNING: Removing unreachable block (ram,0x001decd8) */
/* WARNING: Removing unreachable block (ram,0x001dd628) */
/* WARNING: Removing unreachable block (ram,0x001deaa0) */
/* WARNING: Removing unreachable block (ram,0x001de488) */
/* WARNING: Removing unreachable block (ram,0x001de710) */
/* WARNING: Removing unreachable block (ram,0x001dd420) */
/* WARNING: Removing unreachable block (ram,0x001dd058) */
/* WARNING: Removing unreachable block (ram,0x001dd1f0) */
/* WARNING: Removing unreachable block (ram,0x001de6c4) */
/* WARNING: Removing unreachable block (ram,0x001de420) */
/* WARNING: Removing unreachable block (ram,0x001dea68) */
/* WARNING: Removing unreachable block (ram,0x001dd5f4) */
/* WARNING: Removing unreachable block (ram,0x001dd6b4) */
/* WARNING: Removing unreachable block (ram,0x001ddc64) */

undefined8 FUN_001dcec0(int param_1)

{
  bool bVar1;
  int iVar2;
  i960_regs *piVar3;
  ulong uVar4;
  float fVar5;
  uint uVar6;
  undefined1 auStack_70 [12];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  uint uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_30;
  ushort uStack_26;
  ushort uStack_24;
  ushort uStack_22;
  ushort uStack_20;
  ushort uStack_1e;
  short sStack_1c;
  short sStack_1a;
  ushort uStack_18;
  ushort uStack_16;
  ushort uStack_14;
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
  
  piVar3 = i960GetRegs();
  fStack_34 = 3.0832816e-33;
  FUN_0018df40();
  FUN_0018df40(fStack_34);
  FUN_0018df40(fStack_34);
  FUN_0018e100();
  fStack_34 = 3.0622294e-05;
  FUN_0018df40();
  sysMemReadW(&fStack_34,piVar3->g[7] + 0x1c);
  FUN_0018df40(fStack_34);
  fStack_34 = fRam016c0de0;
  FUN_0018df40();
  fStack_34 = fRam016c0ddc;
  FUN_0018df40();
  fStack_38 = 0.19;
  fStack_34 = fRam016b704c - 0.19;
  sysMemReadB(&bStack_1,piVar3->g[8] + 0x7d6);
  fStack_38 = (float)(uint)bStack_1;
  if (((bStack_1 & 1) == 0) &&
     (sysMemReadW(&fStack_3c,piVar3->g[7] + 0x720), ((uint)fStack_3c & 0x200) == 0)) {
    fStack_38 = 10.0;
    fStack_34 = fStack_34 + 10.0;
  }
  FUN_0018df40(fStack_34);
  sysMemReadB(&bStack_2,piVar3->g[7] + 4);
  fStack_34 = (float)(uint)bStack_2;
  sysMemReadB(&bStack_3,piVar3->g[8] + 0x7d6);
  fStack_38 = (float)(uint)bStack_3;
  if (bStack_3 == 0) {
    uStack_30 = 2;
  }
  else {
    uStack_30 = 4;
  }
  if ((uStack_30 & 2) == 0) {
    fStack_34 = (float)((uint)fStack_34 | 0x80000000);
  }
  FUN_0018df40(fStack_34);
  fStack_34 = (float)FUN_0018e100();
  sysMemWriteW(piVar3->g[0xd] + 0x118,&fStack_34);
  fStack_34 = (float)FUN_0018e100();
  sysMemWriteW(piVar3->g[0xd] + 0x11c,&fStack_34);
  fStack_34 = (float)FUN_0018e100();
  sysMemWriteW(piVar3->g[0xd] + 0x120,&fStack_34);
  fStack_34 = (float)FUN_0018e100();
  sysMemWriteW(piVar3->g[0xd] + 0x124,&fStack_34);
  fStack_34 = (float)FUN_0018e100();
  sysMemWriteW(piVar3->g[7] + 0x670,&fStack_34);
  fStack_34 = (float)FUN_0018e100();
  sysMemWriteW(piVar3->g[7] + 0x724,&fStack_34);
  FUN_0018dfc0(&fStack_60);
  sysMemWriteQ(piVar3->g[7] + 0x660,&fStack_60);
  FUN_0018dfc0(&fStack_60);
  sysMemWriteQ(piVar3->g[7] + 0xa58,&fStack_60);
  FUN_0018dfc0(&fStack_60);
  sysMemWriteQ(piVar3->g[7] + 0x650,&fStack_60);
  FUN_0018dfc0(&fStack_60);
  sysMemWriteW(piVar3->g[7] + 0x614,&fStack_60);
  sysMemWriteW(piVar3->g[7] + 0x674,&fStack_5c);
  sysMemWriteW(piVar3->g[7] + 0x624,&fStack_58);
  sysMemWriteW(piVar3->g[7] + 0x618,&uStack_54);
  sysMemReadB(&bStack_4,piVar3->g[7] + 0xa29);
  fStack_38 = (float)(uint)bStack_4;
  if (bStack_4 == 0) {
    uStack_30 = 2;
  }
  else {
    uStack_30 = 4;
  }
  if ((uStack_30 & 5) == 0) {
    fStack_34 = 0.0;
    sysMemWriteW(piVar3->g[7] + 0x624,&fStack_34);
    uVar6 = piVar3->g[8];
  }
  else {
    uVar6 = piVar3->g[8];
  }
  sysMemReadB(&bStack_5,uVar6 + 0x7d6);
  fStack_38 = (float)(uint)bStack_5;
  if ((bStack_5 & 1) == 0) {
LAB_001dd31c:
    fStack_3c = -1.0;
    sysMemReadW(&fStack_38,piVar3->g[7] + 0x664);
    fStack_34 = fStack_3c * fStack_38;
    sysMemWriteW(piVar3->g[7] + 0x664,&fStack_34);
    fStack_3c = -1.0;
    sysMemReadW(&fStack_38,piVar3->g[7] + 0x66c);
    fStack_34 = fStack_3c * fStack_38;
    sysMemWriteW(piVar3->g[7] + 0x66c,&fStack_34);
    uVar6 = piVar3->g[7];
  }
  else {
    sysMemReadB(&bStack_6,piVar3->g[7] + 0xa29);
    fStack_38 = (float)(uint)bStack_6;
    if (bStack_6 < 0x11) {
      if (bStack_6 == 0x10) {
        uStack_30 = 2;
      }
      else {
        uStack_30 = 1;
      }
    }
    else {
      uStack_30 = 4;
    }
    if ((uStack_30 & 1) != 0) goto LAB_001dd31c;
    sysMemReadQ(&fStack_60,piVar3->g[7] + 0xa58);
    sysMemWriteQ(piVar3->g[7] + 0x660,&fStack_60);
    fStack_3c = -1.0;
    sysMemReadW(&fStack_38,piVar3->g[7] + 0x660);
    fStack_34 = fStack_3c * fStack_38;
    sysMemWriteW(piVar3->g[7] + 0x660,&fStack_34);
    fStack_3c = -1.0;
    sysMemReadW(&fStack_38,piVar3->g[7] + 0x668);
    fStack_34 = fStack_3c * fStack_38;
    sysMemWriteW(piVar3->g[7] + 0x668,&fStack_34);
    uVar6 = piVar3->g[7];
  }
  sysMemReadL(&fStack_60,uVar6 + 0x660);
  fStack_60 = fStack_60 + fStack_5c;
  sysMemWriteW(piVar3->g[7] + 0x644,&fStack_60);
  sysMemReadL(&fStack_60,piVar3->g[7] + 0x668);
  fStack_60 = fStack_60 + fStack_5c;
  sysMemWriteW(piVar3->g[7] + 0x64c,&fStack_60);
  sysMemReadS(&uStack_14,piVar3->g[7] + 0xa0e);
  fStack_38 = (float)(uint)uStack_14;
  if (uStack_14 == 0) {
    uStack_30 = 2;
  }
  else {
    uStack_30 = 4;
  }
  if ((uStack_30 & 5) == 0) {
    fStack_34 = fRam0172add4;
    if (((uint)fRam0172add4 & 0x10000000) == 0) {
      sysMemReadB(&bStack_7,piVar3->g[8] + 0x7d6);
      fStack_38 = (float)(uint)bStack_7;
      if ((bStack_7 & 1) != 0) {
        sysMemReadB(&bStack_8,piVar3->g[8] + 0x874);
        fStack_38 = (float)(uint)bStack_8;
        if (bStack_8 < 2) {
          if (bStack_8 == 1) {
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
          sysMemReadB(&bStack_9,piVar3->g[8] + 0x874);
          fStack_38 = (float)(uint)bStack_9;
          if (bStack_9 < 4) {
            if (bStack_9 == 3) {
              uStack_30 = 2;
            }
            else {
              uStack_30 = 1;
            }
          }
          else {
            uStack_30 = 4;
          }
          if ((((uStack_30 & 5) == 0) &&
              (sysMemReadW(&fStack_34,piVar3->g[7] + 0x1a4), ((uint)fStack_34 & 0x10) != 0)) &&
             (sysMemReadW(&fStack_34,piVar3->g[7] + 0x1a4), ((uint)fStack_34 & 0x10000) == 0)) {
            fStack_3c = 1.11824e-42;
            sysMemReadS(&uStack_16,piVar3->g[7] + 0x1a8);
            fStack_38 = (float)(uint)uStack_16;
            if ((uint)fStack_3c < (uint)fStack_38) {
              uStack_30 = 4;
            }
            else if (fStack_3c == fStack_38) {
              uStack_30 = 2;
            }
            else {
              uStack_30 = 1;
            }
            if ((uStack_30 & 2) == 0) {
              sysMemReadW(&fStack_38,piVar3->g[7] + 0x644);
              if (fStack_38 == 0.0) {
                uStack_30 = 2;
              }
              else {
                uStack_30 = 4;
              }
              if ((uStack_30 & 5) == 0) {
                sysMemReadW(&fStack_38,piVar3->g[7] + 0x64c);
                if (fStack_38 == 0.0) {
                  uStack_30 = 2;
                }
                else {
                  uStack_30 = 4;
                }
                if ((uStack_30 & 5) != 0) {
                  sysMemReadW(&fStack_60,piVar3->g[7] + 0x2c);
                  sysMemReadW(&fStack_5c,piVar3->g[7] + 0x34);
                  fStack_34 = 3.235035e-27;
                  fStack_58 = (float)((ulong)((long)(int)fStack_60 << 0x21) >> 0x21);
                  uStack_54 = (uint)((ulong)((long)(int)fStack_5c << 0x21) >> 0x21);
                  FUN_0018df40();
                  FUN_0018df40(fStack_58);
                  FUN_0018df40(uStack_54);
                  uVar4 = FUN_0018e100();
                  uStack_54 = 0x1000;
                  fStack_58 = (float)uVar4;
                  if (uVar4 < 0x1001) {
                    if (uVar4 == 0x1000) {
                      uStack_30 = 2;
                    }
                    else {
                      uStack_30 = 1;
                    }
                  }
                  else {
                    uStack_30 = 4;
                  }
                  if ((uStack_30 & 4) != 0) goto LAB_001de804;
                  fStack_5c = -fStack_5c;
                  sysMemWriteW(piVar3->g[7] + 0x34,&fStack_5c);
                }
              }
              else {
                sysMemReadW(&fStack_60,piVar3->g[7] + 0x2c);
                sysMemReadW(&fStack_5c,piVar3->g[7] + 0x34);
                fStack_34 = 3.235035e-27;
                fStack_58 = (float)((ulong)((long)(int)fStack_60 << 0x21) >> 0x21);
                uStack_54 = (uint)((ulong)((long)(int)fStack_5c << 0x21) >> 0x21);
                FUN_0018df40();
                FUN_0018df40(uStack_54);
                FUN_0018df40(fStack_58);
                uVar4 = FUN_0018e100();
                uStack_54 = 0x1000;
                fStack_58 = (float)uVar4;
                if (uVar4 < 0x1001) {
                  if (uVar4 == 0x1000) {
                    uStack_30 = 2;
                  }
                  else {
                    uStack_30 = 1;
                  }
                }
                else {
                  uStack_30 = 4;
                }
                if ((uStack_30 & 4) == 0) {
                  fStack_60 = -fStack_60;
                  sysMemWriteW(piVar3->g[7] + 0x2c,&fStack_60);
                }
                else {
LAB_001de804:
                  uStack_54 = 0x1000;
                  fStack_34 = 0.0;
                  sysMemWriteW(piVar3->g[7] + 0x644,&fStack_34);
                  fStack_34 = 0.0;
                  sysMemWriteW(piVar3->g[7] + 0x64c,&fStack_34);
                  fStack_34 = fRam0172add4;
                  if (((uint)fRam0172add4 & 0x10000000) == 0) {
                    fRam0172add4 = 3.0517578e-05;
                    fStack_34 = 3.0517578e-05;
                    sysMemReadW(&fStack_60,piVar3->g[7] + 4);
                    fStack_60 = (float)((int)fStack_60 + 0x1e);
                    fRam0172add4 = (float)((uint)fRam0172add4 | 1 << ((uint)fStack_60 & 0x1f));
                    fStack_34 = fRam0172add4;
                    FUN_001fa4c0(0);
                    fRam0172add4 = (float)((uint)fRam0172add4 | 0x1000000);
                    fStack_34 = fRam0172add4;
                    FUN_001fa6c0(auStack_70);
                    fRam0172addc = fStack_60;
                    fRam0172ade0 = fStack_5c;
                  }
                }
              }
            }
          }
        }
        else {
          fRam0172add4 = (float)((uint)fRam0172add4 | 0x4000000);
          fStack_34 = fRam0172add4;
        }
      }
    }
    else {
      sysMemReadB(&bStack_a,piVar3->g[7] + 0x7d6);
      fStack_38 = (float)(uint)bStack_a;
      if ((((bStack_a & 1) == 0) &&
          (sysMemReadW(&fStack_34,piVar3->g[7] + 0x1a4), ((uint)fStack_34 & 0x10) != 0)) &&
         (sysMemReadW(&fStack_34,piVar3->g[7] + 0x1a4), ((uint)fStack_34 & 0x10000) == 0)) {
        fStack_3c = 1.11824e-42;
        sysMemReadS(&uStack_18,piVar3->g[7] + 0x1a8);
        fStack_38 = (float)(uint)uStack_18;
        if ((uint)fStack_3c < (uint)fStack_38) {
          uStack_30 = 4;
        }
        else if (fStack_3c == fStack_38) {
          uStack_30 = 2;
        }
        else {
          uStack_30 = 1;
        }
        if ((uStack_30 & 2) == 0) {
          fStack_34 = 0.0;
          sysMemWriteW(piVar3->g[7] + 0x644,&fStack_34);
          fStack_34 = 0.0;
          sysMemWriteW(piVar3->g[7] + 0x64c,&fStack_34);
        }
      }
    }
    fStack_64 = (float)(uint)bRam016b6e34;
    sysMemReadW(&fStack_38,(int)fStack_64 * 4 + 0x28f80);
    if (fStack_38 == 0.0) {
      uStack_30 = 2;
    }
    else {
      uStack_30 = 4;
    }
    if ((uStack_30 & 2) == 0) {
      sysMemReadB(&bStack_b,piVar3->g[7] + 0x7d6);
      fStack_38 = (float)(uint)bStack_b;
      if ((bStack_b & 1) != 0) {
        fStack_60 = (float)((uint)fRam0172add4 & 0xf);
        if (fStack_60 == 0.0) {
          uStack_30 = 2;
        }
        else {
          uStack_30 = 4;
        }
        if ((uStack_30 & 2) == 0) {
          fStack_48 = 5.60519e-45;
          fStack_4c = 2.35328e-40;
          sysMemReadW(&uStack_54,piVar3->g[7] + 0x644);
          sysMemReadW(&fStack_50,piVar3->g[7] + 0x64c);
          do {
            sysMemReadW(&fStack_34,(uint)fStack_4c);
            if (((uint)fStack_60 & 1 << ((uint)fStack_34 & 0x1f)) != 0) {
              sysMemReadL(&fStack_40,(int)fStack_4c + 4);
              if (fStack_40 == 0.0) {
                if ((fStack_3c != 0.0) &&
                   (fStack_34 = (float)((uint)fStack_50 ^ (uint)fStack_3c),
                   ((uint)fStack_34 & 0x80000000) == 0)) {
                  fStack_50 = 0.0;
                }
              }
              else {
                fStack_34 = (float)(uStack_54 ^ (uint)fStack_40);
                if (((uint)fStack_34 & 0x80000000) == 0) {
                  uStack_54 = 0;
                }
              }
            }
            fStack_4c = (float)((int)fStack_4c + 0x10);
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
          sysMemWriteW(piVar3->g[7] + 0x644,&uStack_54);
          sysMemWriteW(piVar3->g[7] + 0x64c,&fStack_50);
        }
      }
    }
  }
  fStack_64 = (float)(uint)bRam016b6dfb;
  fStack_34 = 4.2039e-45;
  fStack_60 = (float)(uint)bRam016b6e01;
  if ((uint)fStack_64 < 4) {
    if (fStack_64 == 4.2039e-45) {
      uStack_30 = 2;
    }
    else {
      uStack_30 = 1;
    }
  }
  else {
    uStack_30 = 4;
  }
  if ((uStack_30 & 5) == 0) {
    fStack_5c = 7.00649e-45;
    if ((uint)fStack_60 < 5) {
      uStack_30 = 4;
    }
    else if (fStack_60 == 7.00649e-45) {
      uStack_30 = 2;
    }
    else {
      uStack_30 = 1;
    }
    if ((uStack_30 & 5) != 0) goto LAB_001dd488;
    fStack_34 = 0.0;
    sysMemWriteW(piVar3->g[7] + 0x644,&fStack_34);
    fStack_34 = 0.0;
    sysMemWriteW(piVar3->g[7] + 0x64c,&fStack_34);
    uVar6 = piVar3->g[7];
  }
  else {
LAB_001dd488:
    uVar6 = piVar3->g[7];
  }
  sysMemReadW(&fStack_48,uVar6 + 0x644);
  sysMemReadW(&fStack_44,piVar3->g[7] + 0x64c);
  fStack_64 = 0.0;
  if ((int)fStack_48 < 1) {
    if (fStack_48 == 0.0) {
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
    iVar2 = (int)fStack_48 >> 0x1f;
    fStack_48 = (float)-iVar2;
    sysMemWriteW(piVar3->g[7] + 0x650 + iVar2 * -4,&fStack_64);
  }
  if ((int)fStack_44 < 1) {
    if (fStack_44 == 0.0) {
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
    iVar2 = (int)fStack_44 >> 0x1f;
    fStack_44 = (float)-iVar2;
    sysMemWriteW(piVar3->g[7] + 0x658 + iVar2 * -4,&fStack_64);
    uVar6 = piVar3->g[7];
  }
  else {
    uVar6 = piVar3->g[7];
  }
  sysMemReadT(&fStack_60,uVar6 + 500);
  fStack_34 = 5.1766895e-26;
  fStack_50 = 0.0;
  fStack_4c = 0.0;
  fStack_48 = 0.0;
  FUN_0018df40();
  FUN_0018df40(fStack_60);
  FUN_0018df40(fStack_50);
  FUN_0018df40(fStack_58);
  FUN_0018df40(fStack_48);
  fStack_60 = (float)FUN_0018e100();
  sysMemWriteW(piVar3->g[7] + 0x680,&fStack_60);
  sysMemReadB(&bStack_c,piVar3->g[7] + 4);
  fStack_50 = (float)(uint)bStack_c;
  sysMemReadW(&fStack_44,piVar3->g[7] + 0x644);
  sysMemReadW(&fStack_40,piVar3->g[7] + 0x64c);
  uVar4 = (ulong)(int)fStack_44;
  fStack_44 = (float)((uVar4 << 0x21) >> 0x21);
  fStack_40 = (float)((ulong)((long)(int)fStack_40 << 0x21) >> 0x21);
  if ((uVar4 & 0x7fffffff) == 0) {
    uStack_30 = 2;
  }
  else {
    uStack_30 = 4;
  }
  if ((uStack_30 & 2) == 0) {
    if (fStack_40 == 0.0) {
      uStack_30 = 2;
    }
    else {
      uStack_30 = 4;
    }
    if ((uStack_30 & 2) == 0) {
      if (fStack_40 <= fStack_44) {
        if (fStack_44 == fStack_40) {
          uStack_30 = 2;
        }
        else {
          uStack_30 = 1;
        }
      }
      else {
        uStack_30 = 4;
      }
      if ((uStack_30 & 4) != 0) goto LAB_001dec9c;
    }
    sysMemReadW(&fStack_48,piVar3->g[7] + 0x644);
    fStack_44 = (float)((ulong)((long)(int)fStack_48 << 0x21) >> 0x21);
    if (((long)(int)fStack_48 & 0x7fffffffU) == 0) {
      uStack_30 = 2;
    }
    else {
      uStack_30 = 4;
    }
    if ((uStack_30 & 2) != 0) goto LAB_001dec9c;
    sysMemReadS(&sStack_1a,piVar3->g[7] + 0x26);
    fStack_60 = (float)(int)sStack_1a;
    sysMemWriteS(piVar3->g[0xd] + 0x1f0 + (int)fStack_50 * 2,&fStack_60);
    uVar6 = (uint)fStack_48 ^ (uint)fStack_60;
    fStack_3c = 4.0178e-41;
    fStack_60 = (float)((uint)fStack_60 & 0x7000);
    fStack_40 = (float)(uVar6 >> 0x1c & 8);
    fStack_64 = (float)((int)fStack_40 << 8);
    sysMemReadW(&fStack_38,piVar3->g[7] + 0xa08);
    fStack_34 = (float)((uint)fStack_64 | (uint)fStack_38);
    sysMemWriteW(piVar3->g[7] + 0xa08,&fStack_34);
    fStack_60 = (float)((uint)fStack_60 >> 0xc | (uint)fStack_40);
    sysMemReadB(&bStack_d,(int)fStack_60 + 0x290e8);
    fStack_44 = (float)(uint)bStack_d;
    fStack_34 = 2.8026e-45;
    fStack_40 = (float)((uint)fStack_40 | (uint)fStack_44);
    sysMemWriteS(piVar3->g[0xd] + 0x23c + (int)fStack_50 * 2,&fStack_34);
    sysMemWriteS(piVar3->g[0xd] + 500 + (int)fStack_50 * 2,&fStack_40);
    fStack_40 = (float)((uint)fStack_40 & 0xfffffff7);
    sysMemWriteS(piVar3->g[7] + 0xae2,&fStack_40);
LAB_001dd830:
    uVar6 = piVar3->g[7];
  }
  else {
LAB_001dec9c:
    sysMemReadW(&fStack_48,piVar3->g[7] + 0x64c);
    fStack_44 = (float)((ulong)((long)(int)fStack_48 << 0x21) >> 0x21);
    if (((long)(int)fStack_48 & 0x7fffffffU) == 0) {
      uStack_30 = 2;
    }
    else {
      uStack_30 = 4;
    }
    if ((uStack_30 & 2) != 0) goto LAB_001dd830;
    sysMemReadW(&fStack_38,piVar3->g[7] + 0x644);
    fStack_38 = (float)((ulong)((long)(int)fStack_38 << 0x21) >> 0x21);
    if (fStack_38 <= fStack_44) {
      if (fStack_44 == fStack_38) {
        uStack_30 = 2;
      }
      else {
        uStack_30 = 1;
      }
    }
    else {
      uStack_30 = 4;
    }
    if ((uStack_30 & 4) != 0) goto LAB_001dd830;
    sysMemReadS(&sStack_1c,piVar3->g[7] + 0x26);
    fStack_60 = (float)(int)sStack_1c;
    sysMemWriteS(piVar3->g[0xd] + 0x1f0 + (int)fStack_50 * 2,&fStack_60);
    fStack_5c = 2.29589e-41;
    uVar6 = (int)fStack_60 - 0x4000;
    fStack_3c = 4.0178e-41;
    fStack_48 = (float)((uint)fStack_48 >> 0x10);
    fStack_60 = (float)((uVar6 & 0x7000) >> 0xc);
    fStack_4c = (float)(((uint)fStack_48 ^ uVar6) >> 0xc & 8);
    fStack_64 = (float)((int)fStack_4c << 8);
    sysMemReadW(&fStack_38,piVar3->g[7] + 0xa08);
    fStack_34 = (float)((uint)fStack_64 | (uint)fStack_38);
    sysMemWriteW(piVar3->g[7] + 0xa08,&fStack_34);
    fStack_60 = (float)((uint)fStack_60 | (uint)fStack_4c);
    sysMemReadB(&bStack_e,(int)fStack_60 + 0x290e8);
    fStack_44 = (float)(uint)bStack_e;
    fStack_34 = 2.8026e-45;
    fStack_4c = (float)((uint)fStack_4c | (uint)fStack_44);
    sysMemWriteS(piVar3->g[0xd] + 0x23c + (int)fStack_50 * 2,&fStack_34);
    sysMemWriteS(piVar3->g[0xd] + 500 + (int)fStack_50 * 2,&fStack_4c);
    fStack_4c = (float)((uint)fStack_4c & 0xfffffff7);
    sysMemWriteS(piVar3->g[7] + 0xae2,&fStack_4c);
    uVar6 = piVar3->g[7];
  }
  sysMemReadW(&fStack_60,uVar6 + 0x650);
  fStack_44 = 4.2039e-45;
  fStack_5c = (float)(piVar3->g[7] + 0x654);
  fStack_48 = 0.0;
  do {
    sysMemReadW(&fStack_58,(uint)fStack_5c);
    if (fStack_58 <= fStack_60) {
      if (fStack_60 == fStack_58) {
        bVar1 = false;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      fStack_34 = fStack_60;
      fStack_60 = fStack_58;
      fStack_48 = (float)(4 - (int)fStack_44);
      fStack_58 = fStack_34;
    }
    fStack_5c = (float)((int)fStack_5c + 4);
    if ((uint)fStack_44 < 2) {
      if (fStack_44 == 1.4013e-45) {
        uStack_30 = 2;
      }
      else {
        uStack_30 = 1;
      }
    }
    else {
      uStack_30 = 4;
    }
    fStack_44 = (float)((int)fStack_44 - 1);
  } while ((uStack_30 & 4) != 0);
  if (((uint)fStack_48 & 2) == 0) {
    fStack_4c = fStack_40;
  }
  fStack_48 = (float)((int)fStack_48 << 4);
  fStack_4c = (float)((uint)fStack_4c & 7 | (uint)fStack_48);
  sysMemWriteS(piVar3->g[0xd] + 0x1f8 + (int)fStack_50 * 2,&fStack_4c);
  sysMemReadB(&bStack_f,piVar3->g[7] + 4);
  uStack_54 = (uint)bStack_f;
  fStack_48 = (float)(~(uint)bStack_f & 1);
  fStack_64 = *(float *)((int)fStack_48 * 4 + 0x16b75d4);
  sysMemReadW(&fStack_60,(int)fStack_64 + 0x650);
  fStack_48 = 0.0;
  fStack_44 = 4.2039e-45;
  fStack_5c = (float)((int)fStack_64 + 0x654);
  do {
    sysMemReadW(&fStack_58,(uint)fStack_5c);
    if (fStack_58 <= fStack_60) {
      if (fStack_60 == fStack_58) {
        bVar1 = false;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      fStack_34 = fStack_60;
      fStack_60 = fStack_58;
      fStack_48 = (float)(4 - (int)fStack_44);
      fStack_58 = fStack_34;
    }
    fStack_5c = (float)((int)fStack_5c + 4);
    if ((uint)fStack_44 < 2) {
      if (fStack_44 == 1.4013e-45) {
        uStack_30 = 2;
      }
      else {
        uStack_30 = 1;
      }
    }
    else {
      uStack_30 = 4;
    }
    fStack_44 = (float)((int)fStack_44 - 1);
  } while ((uStack_30 & 4) != 0);
  sysMemWriteW(piVar3->g[0xd] + 0x204 + (int)fStack_50 * 4,&fStack_60);
  if ((uStack_54 & 1) != 0) {
    fStack_44 = (float)(~(uint)fStack_48 & 1);
    fStack_48 = (float)((uint)fStack_48 & 2 | (uint)fStack_44);
  }
  sysMemReadW(&fStack_40,piVar3->g[0xd] + 0x1e0);
  fVar5 = (float)((uint)fStack_40 >> 0xd);
  fStack_44 = (float)(((int)fStack_40 << 1 ^ (uint)fStack_40) >> 0xc & 4);
  fStack_48 = (float)((uint)fStack_48 | (uint)fStack_44);
  fStack_40 = fVar5;
  sysMemReadS(&uStack_1e,(int)fVar5 * 2 + 0x290d8);
  fStack_40 = (float)(uint)uStack_1e;
  fStack_48 = (float)((uint)fStack_48 | (uint)fStack_40);
  sysMemReadS(&uStack_20,(int)fStack_48 * 2 + 0x290b8);
  fStack_44 = (float)(uint)uStack_20;
  sysMemWriteS(piVar3->g[0xd] + 0x1fc + (int)fStack_50 * 2,&fStack_48);
  sysMemWriteS(piVar3->g[0xd] + 0x200 + (int)fStack_50 * 2,&fStack_44);
  sysMemReadW(&fStack_34,piVar3->g[7] + 0x1a4);
  if (((uint)fStack_34 & 0x80000) != 0) {
    fStack_3c = 1.4013e-42;
    sysMemReadS(&uStack_26,piVar3->g[7] + 0xa0e);
    fStack_38 = (float)(uint)uStack_26;
    if ((uint)fStack_3c < (uint)fStack_38) {
      uStack_30 = 4;
    }
    else if (fStack_3c == fStack_38) {
      uStack_30 = 2;
    }
    else {
      uStack_30 = 1;
    }
    if ((uStack_30 & 1) == 0) {
      piVar3->g[9] = 3000;
      FUN_001df100(0);
      fStack_34 = 0.0;
      sysMemWriteS(piVar3->g[7] + 0xa0e,&fStack_34);
    }
    goto LAB_001de1c8;
  }
  fStack_3c = 1.4013e-42;
  sysMemReadS(&uStack_22,piVar3->g[7] + 0xa0e);
  fStack_38 = (float)(uint)uStack_22;
  if ((uint)fStack_3c < (uint)fStack_38) {
    uStack_30 = 4;
  }
  else if (fStack_3c == fStack_38) {
    uStack_30 = 2;
  }
  else {
    uStack_30 = 1;
  }
  if ((uStack_30 & 4) != 0) {
    sysMemReadW(&fStack_34,piVar3->g[7] + 0xae4);
    sysMemWriteW(piVar3->g[7] + 0x18,&fStack_34);
    sysMemReadW(&fStack_34,piVar3->g[7] + 0xae8);
    sysMemWriteW(piVar3->g[7] + 0x20,&fStack_34);
    fStack_34 = 0.0;
    sysMemWriteW(piVar3->g[7] + 0x644,&fStack_34);
    fStack_34 = 0.0;
    sysMemWriteW(piVar3->g[7] + 0x64c,&fStack_34);
    goto LAB_001de1c8;
  }
  sysMemReadW(&fStack_64,piVar3->g[7] + 0x644);
  sysMemReadW(&fStack_60,piVar3->g[7] + 0x64c);
  uVar6 = (uint)fStack_60 | (uint)fStack_64;
  fStack_60 = (float)((ulong)((long)(int)uVar6 << 0x21) >> 0x21);
  if (((long)(int)uVar6 & 0x7fffffffU) == 0) {
    uStack_30 = 2;
  }
  else {
    uStack_30 = 4;
  }
  if ((uStack_30 & 2) != 0) goto LAB_001de1c8;
  sysMemReadB(&bStack_10,piVar3->g[8] + 0x7d6);
  fStack_38 = (float)(uint)bStack_10;
  if (((bStack_10 & 1) == 0) || (sysMemReadW(&fStack_34,piVar3->g[7]), ((uint)fStack_34 & 8) != 0))
  goto LAB_001de1c8;
  sysMemReadB(&bStack_11,piVar3->g[7] + 4);
  fStack_50 = (float)(uint)bStack_11;
  sysMemReadS(&uStack_24,piVar3->g[0xd] + 500 + (int)fStack_50 * 2);
  fStack_50 = (float)(uStack_24 & 0xfffffff7);
  if ((uint)fStack_50 < 2) {
    if (fStack_50 == 1.4013e-45) {
      uStack_30 = 2;
    }
    else {
      uStack_30 = 1;
    }
  }
  else {
    uStack_30 = 4;
  }
  if ((uStack_30 & 4) != 0) goto LAB_001de1c8;
  fStack_64 = -0.08;
  sysMemReadW(&fStack_60,piVar3->g[7] + 0x30);
  if (fStack_60 <= fStack_64) {
    if (fStack_64 == fStack_60) {
      uStack_30 = 2;
    }
    else {
      uStack_30 = 1;
    }
  }
  else {
    uStack_30 = 4;
  }
  if ((uStack_30 & 6) != 0) goto LAB_001de1c8;
  sysMemReadT(&fStack_60,piVar3->g[7] + 0xa4c);
  fStack_4c = 0.4;
  fStack_50 = fRam016b704c - 0.4;
  if (fStack_5c <= fStack_50) {
    if (fStack_50 == fStack_5c) {
      uStack_30 = 2;
    }
    else {
      uStack_30 = 1;
    }
  }
  else {
    uStack_30 = 4;
  }
  if ((uStack_30 & 1) != 0) goto LAB_001de1c8;
  fStack_4c = 0.15;
  fStack_3c = 0.1;
  fStack_60 = (float)((ulong)((long)(int)fStack_60 << 0x21) >> 0x21);
  fStack_58 = (float)((ulong)((long)(int)fStack_58 << 0x21) >> 0x21);
  fStack_48 = fRam016c0ddc + 0.1;
  fStack_44 = fRam016c0ddc - 0.15;
  fStack_40 = fRam016c0ddc + 0.15;
  if (fStack_44 <= fStack_60) {
    if (fStack_60 == fStack_44) {
      bVar1 = false;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
LAB_001ddf14:
    if (fStack_44 <= fStack_58) {
      if (fStack_58 == fStack_44) {
        uStack_30 = 2;
      }
      else {
        uStack_30 = 1;
      }
    }
    else {
      uStack_30 = 4;
    }
    if ((uStack_30 & 4) != 0) goto LAB_001de1c8;
    if (fStack_40 <= fStack_58) {
      if (fStack_58 == fStack_40) {
        uStack_30 = 2;
      }
      else {
        uStack_30 = 1;
      }
    }
    else {
      uStack_30 = 4;
    }
    if ((uStack_30 & 1) != 0) goto LAB_001de1c8;
    sysMemReadW(&fStack_34,piVar3->g[7] + 0x20);
    if (((uint)fStack_34 & 0x80000000) != 0) {
      fStack_48 = (float)((uint)fStack_48 | 0x80000000);
    }
    sysMemWriteW(piVar3->g[7] + 0x20,&fStack_48);
  }
  else {
    if (fStack_40 <= fStack_60) {
      if (fStack_60 == fStack_40) {
        uStack_30 = 2;
      }
      else {
        uStack_30 = 1;
      }
    }
    else {
      uStack_30 = 4;
    }
    if ((uStack_30 & 1) != 0) goto LAB_001ddf14;
    sysMemReadW(&fStack_34,piVar3->g[7] + 0x18);
    if (((uint)fStack_34 & 0x80000000) != 0) {
      fStack_48 = (float)((uint)fStack_48 | 0x80000000);
    }
    sysMemWriteW(piVar3->g[7] + 0x18,&fStack_48);
  }
  piVar3->g[9] = 2000;
  FUN_001df100(0);
  fStack_64 = fRam016b704c;
  sysMemWriteW(piVar3->g[7] + 0x1c,&fStack_64);
  fStack_34 = 1.54143e-41;
  sysMemWriteS(piVar3->g[7] + 0xa0e,&fStack_34);
  fStack_64 = (float)(uint)bRam016b6e34;
  sysMemReadW(&fStack_64,(int)fStack_64 * 4 + 0x28fc0);
  sysMemWriteS(piVar3->g[7] + 0x852,&fStack_64);
  fStack_34 = 4.34403e-44;
  sysMemWriteB(piVar3->g[7] + 0x60c,&fStack_34);
  sysMemReadW(&fStack_34,piVar3->g[7] + 0x18);
  sysMemWriteW(piVar3->g[7] + 0xae4,&fStack_34);
  sysMemReadW(&fStack_34,piVar3->g[7] + 0x20);
  sysMemWriteW(piVar3->g[7] + 0xae8,&fStack_34);
  fStack_34 = 0.0;
  sysMemWriteW(piVar3->g[7] + 0x644,&fStack_34);
  fStack_34 = 0.0;
  sysMemWriteW(piVar3->g[7] + 0x64c,&fStack_34);
  piVar3->g[0] = 0xae116b;
  FUN_001f3940(0);
  sound_request_u(0);
LAB_001de1c8:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

