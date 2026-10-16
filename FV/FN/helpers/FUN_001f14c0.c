/* helper FUN_001f14c0 @ 001f14c0, called (depth 1) from rob_disp */

/* WARNING: Removing unreachable block (ram,0x001f2448) */
/* WARNING: Removing unreachable block (ram,0x001f235c) */
/* WARNING: Removing unreachable block (ram,0x001f2248) */
/* WARNING: Removing unreachable block (ram,0x001f1de8) */
/* WARNING: Removing unreachable block (ram,0x001f2068) */
/* WARNING: Removing unreachable block (ram,0x001f1ad4) */
/* WARNING: Removing unreachable block (ram,0x001f15f8) */
/* WARNING: Removing unreachable block (ram,0x001f1578) */
/* WARNING: Removing unreachable block (ram,0x001f18f0) */
/* WARNING: Removing unreachable block (ram,0x001f20c4) */
/* WARNING: Removing unreachable block (ram,0x001f1ca0) */
/* WARNING: Removing unreachable block (ram,0x001f1d30) */
/* WARNING: Removing unreachable block (ram,0x001f2294) */
/* WARNING: Removing unreachable block (ram,0x001f2318) */
/* WARNING: Removing unreachable block (ram,0x001f1f54) */
/* WARNING: Removing unreachable block (ram,0x001f1c24) */

undefined8 FUN_001f14c0(int param_1)

{
  i960_regs *piVar1;
  undefined1 auStack_80 [12];
  uint uStack_74;
  uint auStack_70 [4];
  float fStack_60;
  uint uStack_58;
  uint uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  ushort uStack_30;
  ushort uStack_2e;
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
  ushort uStack_16;
  ushort uStack_14;
  ushort uStack_12;
  ushort uStack_10;
  ushort uStack_e;
  ushort uStack_c;
  ushort uStack_a;
  ushort uStack_8;
  ushort uStack_6;
  ushort uStack_4;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadB(&bStack_1,piVar1->g[7] + 0x1b1);
  fStack_50 = (float)(uint)bStack_1;
  if (bStack_1 < 6) {
    if (bStack_1 == 5) {
      uStack_40 = 0;
    }
    else {
      uStack_40 = 1;
    }
  }
  else {
    uStack_40 = 4;
  }
  if (uStack_40 == 0) {
    fStack_48 = (float)(uint)uRam016b6e72;
    if (uRam016b6e72 < 0x15) {
      if (uRam016b6e72 == 0x14) {
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
      fStack_4c = 5.78736e-43;
      sysMemReadS(&uStack_4,piVar1->g[7] + 0x1a8);
      fStack_48 = (float)(uint)uStack_4;
      if ((uint)fStack_4c < (uint)fStack_48) {
        uStack_40 = 4;
      }
      else if (fStack_4c == fStack_48) {
        uStack_40 = 2;
      }
      else {
        uStack_40 = 1;
      }
      if ((uStack_40 & 2) == 0) {
        fStack_4c = 5.80138e-43;
        sysMemReadS(&uStack_6,piVar1->g[7] + 0x1a8);
        fStack_48 = (float)(uint)uStack_6;
        if ((uint)fStack_4c < (uint)fStack_48) {
          uStack_40 = 4;
        }
        else if (fStack_4c == fStack_48) {
          uStack_40 = 2;
        }
        else {
          uStack_40 = 1;
        }
        if ((uStack_40 & 5) != 0) goto LAB_001f1554;
      }
      sysMemReadS(&uStack_8,piVar1->g[7] + 0x1aa);
      fStack_48 = (float)(uint)uStack_8;
      if (uStack_8 < 0x12) {
        if (uStack_8 == 0x11) {
          uStack_40 = 2;
        }
        else {
          uStack_40 = 1;
        }
      }
      else {
        uStack_40 = 4;
      }
      if (((uStack_40 & 5) == 0) &&
         (sysMemReadW(&fStack_44,piVar1->g[7] + 0x5b8), ((uint)fStack_44 & 1) == 0)) {
        sysMemReadT(auStack_70,piVar1->g[7] + 0x254);
        sysMemWriteT(0x50a420,auStack_70);
        fStack_44 = 0.01;
        fRam016c11fc = 0.01;
      }
    }
  }
LAB_001f1554:
  fStack_50 = fRam016c11fc;
  if (fRam016c11fc == 0.0) {
    uStack_40 = 2;
  }
  else {
    uStack_40 = 4;
  }
  if ((uStack_40 & 2) == 0) {
    uStack_54 = 0x41700000;
    fStack_44 = 0.16;
    fStack_50 = fRam016c11fc + 0.16;
    if (fStack_50 <= 15.0) {
      if (fStack_50 == 15.0) {
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
      fStack_50 = 0.0;
    }
  }
  fRam016c11fc = fStack_50;
  sysMemReadW(&uStack_58,piVar1->g[7] + 0xaec);
  sysMemReadB(&bStack_2,piVar1->g[7] + 0x1b0);
  uStack_54 = (uint)bStack_2;
  sysMemReadW(&uStack_54,uStack_54 * 4 + 0x6422400);
  if (uStack_54 == 0) {
    uStack_40 = 2;
  }
  else {
    uStack_40 = 4;
  }
  if ((uStack_40 & 2) == 0) {
    fStack_50 = 0.0;
    sysMemReadS(&uStack_a,piVar1->g[7] + 0x1f48);
    fStack_48 = (float)(uint)uStack_a;
    if ((uStack_a & 0x200) != 0) {
      fStack_50 = 2.8026e-45;
    }
    FUN_001f2540(0);
    sysMemReadW(&fStack_48,uStack_54 + 0x18);
    if (fStack_48 == 0.0) {
      uStack_40 = 2;
    }
    else {
      uStack_40 = 4;
    }
    if ((uStack_40 & 2) == 0) {
      fStack_4c = 1.4013e-44;
      fStack_48 = (float)(uint)uRam016b6e72;
      if ((uint)fStack_48 < 0xb) {
        if (fStack_48 == 1.4013e-44) {
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
        sysMemReadS(&uStack_c,piVar1->g[7] + 0x1f48);
        fStack_48 = (float)(uint)uStack_c;
        if ((uStack_c & 0x200) != 0) {
          sysMemReadW(&uStack_74,uStack_54 + 0x18);
          sysMemReadS(&uStack_26,uStack_74);
          piVar1->g[0] = (uint)uStack_26;
          goto LAB_001f1614;
        }
      }
    }
    fStack_4c = 6.86636e-44;
    sysMemReadS(&uStack_e,piVar1->g[7] + 0x1a8);
    fStack_48 = (float)(uint)uStack_e;
    if ((uint)fStack_4c < (uint)fStack_48) {
      uStack_40 = 4;
    }
    else if (fStack_4c == fStack_48) {
      uStack_40 = 2;
    }
    else {
      uStack_40 = 1;
    }
    if ((uStack_40 & 5) == 0) {
      sysMemReadW(&fStack_44,piVar1->g[7] + 0x1a4);
      if (((uint)fStack_44 & 0x20000000) == 0) {
        fStack_44 = 0.0;
        sysMemWriteW(piVar1->g[7] + 0xc8c,&fStack_44);
        sysMemReadW(&uStack_74,uStack_54 + 0xc);
        if (uStack_74 == 0) {
          uStack_40 = 2;
        }
        else {
          uStack_40 = 4;
        }
        if ((uStack_40 & 2) == 0) {
          sysMemReadS(&uStack_18,piVar1->g[7] + 0x1aa);
          uStack_58 = (uint)uStack_18;
          fStack_50 = 5.60519e-44;
          if (uStack_58 < 0x29) {
            if (uStack_58 == 0x28) {
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
            uStack_58 = 0x28;
          }
          sysMemReadS(&uStack_1a,uStack_74 + uStack_58 * 2);
          piVar1->g[0] = (uint)uStack_1a;
        }
        goto LAB_001f1614;
      }
    }
    fStack_4c = 5.38099e-43;
    sysMemReadS(&uStack_10,piVar1->g[7] + 0x1a8);
    fStack_48 = (float)(uint)uStack_10;
    if ((uint)fStack_4c < (uint)fStack_48) {
      uStack_40 = 4;
    }
    else if (fStack_4c == fStack_48) {
      uStack_40 = 2;
    }
    else {
      uStack_40 = 1;
    }
    if ((uStack_40 & 2) == 0) {
      fStack_60 = (float)piVar1->g[0];
      FUN_001f2780(auStack_80);
      if (piVar1->g[0] < (uint)fStack_60) {
        uStack_40 = 4;
      }
      else if ((float)piVar1->g[0] == fStack_60) {
        uStack_40 = 2;
      }
      else {
        uStack_40 = 1;
      }
      if ((uStack_40 & 5) == 0) {
        sysMemReadW(&fStack_44,piVar1->g[7] + 0x1a4);
        if (((uint)fStack_44 & 0x10) == 0) {
          sysMemReadW(&fStack_44,piVar1->g[7] + 0x1a4);
          if (((uint)fStack_44 & 0x10000) == 0) {
            sysMemReadW(&fStack_48,piVar1->g[7] + 0xc8c);
            if (fStack_48 == 0.0) {
              uStack_40 = 2;
            }
            else {
              uStack_40 = 4;
            }
            if ((uStack_40 & 5) != 0) {
              sysMemReadW(&uStack_74,uStack_54 + 0x14);
              if (uStack_74 == 0) {
                uStack_40 = 2;
              }
              else {
                uStack_40 = 4;
              }
              if ((uStack_40 & 2) == 0) {
                sysMemReadW(&fStack_50,piVar1->g[7] + 0xc8c);
                fStack_4c = 7.00649e-44;
                fStack_50 = (float)((int)fStack_50 + 1);
                if ((uint)fStack_50 < 0x33) {
                  if (fStack_50 == 7.00649e-44) {
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
                  fStack_44 = 0.0;
                  sysMemWriteW(piVar1->g[7] + 0xc8c,&fStack_44);
                }
                else {
                  sysMemWriteW(piVar1->g[7] + 0xc8c,&fStack_50);
                  sysMemReadS(&uStack_1c,uStack_74 + (int)fStack_50 * 2);
                  piVar1->g[0] = (uint)uStack_1c;
                }
              }
              goto LAB_001f1614;
            }
            sysMemReadW(&fStack_44,piVar1->g[7] + 0x1a4);
            if (((uint)fStack_44 & 0x200) != 0) {
              sysMemReadW(&uStack_74,uStack_54 + 4);
              if (uStack_74 == 0) {
                uStack_40 = 2;
              }
              else {
                uStack_40 = 4;
              }
              if ((uStack_40 & 2) == 0) {
                uStack_74 = uStack_74 + (int)fStack_50;
                sysMemReadS(&uStack_22,piVar1->g[7] + 0x1aa);
                if (uStack_22 == 0) {
                  auStack_70[0] = 0;
                }
                else {
                  auStack_70[0] = uStack_22 - 1;
                }
                fStack_48 = 1.10703e-43;
                if (auStack_70[0] < 0x50) {
                  if (auStack_70[0] == 0x4f) {
                    uStack_40 = 2;
                  }
                  else {
                    uStack_40 = 1;
                  }
                }
                else {
                  uStack_40 = 4;
                }
                if ((uStack_40 & 3) == 0) {
                  auStack_70[0] = 0x4f;
                }
                sysMemReadS(&uStack_24,uStack_74 + auStack_70[0] * 4);
                piVar1->g[0] = (uint)uStack_24;
              }
              goto LAB_001f1614;
            }
          }
          fStack_44 = 0.0;
          sysMemWriteW(piVar1->g[7] + 0xc8c,&fStack_44);
          sysMemReadW(&uStack_74,uStack_54);
          if (uStack_74 == 0) {
            uStack_40 = 2;
          }
          else {
            uStack_40 = 4;
          }
          if ((uStack_40 & 2) == 0) {
            sysMemReadS(&uStack_12,uStack_74 + (int)fStack_50);
            piVar1->g[0] = (uint)uStack_12;
            fStack_60 = 0.6;
            sysMemReadW(&fStack_44,piVar1->g[7] + 0x1a4);
            if (((uint)fStack_44 & 0x8000) == 0) {
              fStack_60 = 0.4;
            }
            sysMemReadS(&uStack_14,piVar1->g[7] + 0x624);
            fStack_48 = (float)(uint)uStack_14;
            if (uStack_14 == 0) {
              uStack_40 = 2;
            }
            else {
              uStack_40 = 4;
            }
            if ((uStack_40 & 2) == 0) {
              fStack_44 = fRam016c0de0;
              fStack_60 = fStack_60 + fRam016c0de0;
            }
            sysMemReadW(&fStack_48,piVar1->g[7] + 0x1f8);
            if (fStack_48 <= fStack_60) {
              if (fStack_60 == fStack_48) {
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
              sysMemReadS(&uStack_16,uStack_74 + 4 + (int)fStack_50);
              piVar1->g[0] = (uint)uStack_16;
            }
          }
        }
        else {
          fStack_44 = 0.0;
          sysMemWriteW(piVar1->g[7] + 0xc8c,&fStack_44);
          sysMemReadW(&fStack_48,piVar1->g[7] + 0x1c);
          sysMemReadW(&fStack_44,piVar1->g[7] + 0xc5c);
          if ((uint)fStack_48 < (uint)fStack_44) {
            uStack_40 = 4;
          }
          else if (fStack_48 == fStack_44) {
            uStack_40 = 2;
          }
          else {
            uStack_40 = 1;
          }
          if ((uStack_40 & 2) == 0) {
            sysMemReadS(&uStack_28,piVar1->g[7] + 0xa0e);
            fStack_48 = (float)(uint)uStack_28;
            if (uStack_28 == 0) {
              uStack_40 = 2;
            }
            else {
              uStack_40 = 4;
            }
            if ((uStack_40 & 5) == 0) {
              sysMemReadW(&uStack_74,uStack_54 + 8);
              if (uStack_74 == 0) {
                uStack_40 = 2;
              }
              else {
                uStack_40 = 4;
              }
              if ((uStack_40 & 2) == 0) {
                sysMemReadW(&fStack_44,piVar1->g[7] + 0x1a4);
                if (((uint)fStack_44 & 0x4000) == 0) {
                  sysMemReadW(&fStack_44,piVar1->g[7]);
                  if (((uint)fStack_44 & 8) == 0) {
                    sysMemReadS(&uStack_2c,piVar1->g[7] + 0x7fa);
                    fStack_48 = (float)(uint)uStack_2c;
                    if (uStack_2c == 0) {
                      uStack_40 = 2;
                    }
                    else {
                      uStack_40 = 4;
                    }
                    if ((uStack_40 & 2) == 0) {
                      sysMemReadW(&uStack_74,uStack_74);
                      if (uStack_74 == 0) {
                        uStack_40 = 2;
                      }
                      else {
                        uStack_40 = 4;
                      }
                      if ((uStack_40 & 2) == 0) {
                        uStack_74 = uStack_74 + (int)fStack_50;
                        sysMemReadS(&uStack_2e,piVar1->g[7] + 0x7fa);
                        fStack_60 = (float)(uint)uStack_2e;
                        fStack_48 = 4.34403e-44;
                        if ((uint)fStack_60 < 0x20) {
                          if (fStack_60 == 4.34403e-44) {
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
                          fStack_44 = 2.38221e-44;
                          fStack_60 = (float)((uint)fStack_60 % 0x11 + 0x1f);
                        }
                        sysMemReadS(&uStack_30,uStack_74 + (int)fStack_60 * 4);
                        piVar1->g[0] = (uint)uStack_30;
                      }
                    }
                  }
                }
                else {
                  sysMemReadW(&uStack_74,uStack_74 + 4);
                  if (uStack_74 == 0) {
                    uStack_40 = 2;
                  }
                  else {
                    uStack_40 = 4;
                  }
                  if ((uStack_40 & 2) == 0) {
                    uStack_74 = uStack_74 + (int)fStack_50;
                    fStack_60 = (float)((int)uStack_58 % 0xc);
                    sysMemReadS(&uStack_2a,uStack_74 + (int)fStack_60 * 4);
                    piVar1->g[0] = (uint)uStack_2a;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      fStack_48 = (float)(uint)uRam016b6e72;
      if (uRam016b6e72 < 0xb) {
        if (uRam016b6e72 == 10) {
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
        fStack_44 = 0.0;
        sysMemWriteW(piVar1->g[7] + 0xc8c,&fStack_44);
        sysMemReadW(&uStack_74,uStack_54 + 0x10);
        if (uStack_74 == 0) {
          uStack_40 = 2;
        }
        else {
          uStack_40 = 4;
        }
        if ((uStack_40 & 2) == 0) {
          sysMemReadS(&uStack_1e,piVar1->g[7] + 0x1aa);
          uStack_58 = (uint)uStack_1e;
          sysMemReadS(&uStack_20,uStack_74 + uStack_58 * 2);
          piVar1->g[0] = (uint)uStack_20;
        }
      }
    }
  }
LAB_001f1614:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

