/* helper rob_kage_disp_kabe @ 001cddc0, called (depth 1) from rob_kabe_kage_disp */

/* WARNING: Removing unreachable block (ram,0x001cdf84) */

undefined8 rob_kage_disp_kabe(int param_1)

{
  i960_regs *piVar1;
  uint uVar2;
  long lVar3;
  float fStack_44;
  uint auStack_40 [2];
  float fStack_38;
  float fStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  uint uStack_10;
  ushort uStack_8;
  ushort uStack_6;
  ushort uStack_4;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  piVar1->g[0] = 2;
  set_mmode(0);
  fStack_14 = 1.1755304e-38;
  FUN_0018df40();
  fStack_14 = 1.7383374e-18;
  FUN_0018df40();
  FUN_0018df40(piVar1->g[5]);
  piVar1->g[5] = piVar1->g[5] + 1;
  uStack_2c = 0xf;
  sysMemReadB(&bStack_1,piVar1->g[7] + 0x1b0);
  fStack_44 = (float)(uint)bStack_1;
  sysMemReadW(&uStack_28,(int)fStack_44 * 4 + 0x6442c68);
  piVar1->g[2] = uStack_28;
  piVar1->g[3] = 0;
  iStack_24 = 0;
  do {
    sysMemReadW(auStack_40,uStack_28);
    if ((piVar1->g[6] & 1 << (auStack_40[0] & 0x1f)) == 0) {
      fStack_14 = 3.0832816e-33;
      FUN_0018df40();
      FUN_0018df40(fStack_14);
      FUN_0018df40(fStack_14);
      FUN_0018e100();
      fStack_14 = 1.1755304e-38;
      FUN_0018df40();
      fStack_14 = 2.1211505e-22;
      FUN_0018df40();
      sysMemReadB(&bStack_2,piVar1->g[7] + 4);
      fStack_14 = (float)(uint)bStack_2;
      FUN_0018df40();
      fStack_14 = (float)(auStack_40[0] * 0xc);
      FUN_0018df40();
      fStack_14 = 6.953775e-18;
      FUN_0018df40();
      FUN_0018df40(piVar1->g[5]);
      fStack_14 = 1.926815e-34;
      FUN_0018df40();
      fStack_20 = (float)FUN_0018e100();
      fStack_1c = (float)FUN_0018e100();
      fStack_18 = (float)FUN_0018e100();
      fStack_44 = fRam016b704c;
      sysMemReadW(&fStack_14,auStack_40[0] * 4 + 0x6443edc);
      fStack_44 = fStack_44 + fStack_14;
      if (fStack_44 <= fStack_1c) {
        if (fStack_1c == fStack_44) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
      }
      else {
        uStack_10 = 4;
      }
      if ((uStack_10 & 1) == 0) {
        if ((piVar1->g[6] & 0x80000000) == 0) {
          fStack_14 = 0.1;
          fStack_38 = (float)((ulong)((long)(int)fStack_20 << 0x21) >> 0x21);
          fStack_44 = fRam016c11d0 + 0.1;
          fStack_30 = (float)((ulong)((long)(int)fStack_18 << 0x21) >> 0x21);
          if (fStack_38 <= fStack_44) {
            if (fStack_44 == fStack_38) {
              uStack_10 = 2;
            }
            else {
              uStack_10 = 1;
            }
          }
          else {
            uStack_10 = 4;
          }
          if ((uStack_10 & 4) == 0) {
            if (fStack_30 <= fStack_44) {
              if (fStack_44 == fStack_30) {
                uStack_10 = 2;
              }
              else {
                uStack_10 = 1;
              }
            }
            else {
              uStack_10 = 4;
            }
            if ((uStack_10 & 4) == 0) {
              if ((piVar1->g[6] & 0x80000000) == 0) {
                piVar1->g[6] = piVar1->g[6] | 1 << (auStack_40[0] & 0x1f);
              }
              goto LAB_001ce670;
            }
          }
        }
        else {
LAB_001ce670:
          sysMemWriteT(auStack_40[0] * 0x10 + 0x50f600,&fStack_20);
          if ((piVar1->g[6] & 0x80000000) == 0) {
            uVar2 = uRam016c11c8 & 8;
          }
          else {
            uVar2 = uRam016c11c8 & 4;
          }
          if (uVar2 == 0) {
            piVar1->g[3] = piVar1->g[3] | 1 << (auStack_40[0] & 0x1f);
            fStack_14 = 6.953775e-18;
            FUN_0018df40();
            fStack_14 = 4.2039e-45;
            FUN_0018df40();
            sysMemReadW(&fStack_44,uStack_28 + 0x10);
            if (auStack_40[0] < 10) {
              if (auStack_40[0] == 9) {
                uStack_10 = 2;
              }
              else {
                uStack_10 = 1;
              }
            }
            else {
              uStack_10 = 4;
            }
            if ((uStack_10 & 5) == 0) {
              fStack_18 = 0.2;
              if (0.2 <= fStack_1c) {
                if (fStack_1c == 0.2) {
                  uStack_10 = 2;
                }
                else {
                  uStack_10 = 1;
                }
              }
              else {
                uStack_10 = 4;
              }
              if ((uStack_10 & 1) != 0) goto LAB_001ce6d8;
              sysMemReadW(&fStack_44,uStack_28 + 0x18);
            }
            else {
LAB_001ce6d8:
              sysMemReadW(&fStack_14,piVar1->g[7] + 0x1a4);
              if ((((uint)fStack_14 & 0x4000) == 0) &&
                 (sysMemReadW(&fStack_14,piVar1->g[7] + 0x1a4), ((uint)fStack_14 & 0x10) == 0)) {
                if (auStack_40[0] < 0x10) {
                  if (auStack_40[0] == 0xf) {
                    uStack_10 = 2;
                  }
                  else {
                    uStack_10 = 1;
                  }
                }
                else {
                  uStack_10 = 4;
                }
                if ((uStack_10 & 5) == 0) {
                  fStack_44 = 4.2039e-42;
                }
                else {
                  if (auStack_40[0] < 0xd) {
                    if (auStack_40[0] == 0xc) {
                      uStack_10 = 2;
                    }
                    else {
                      uStack_10 = 1;
                    }
                  }
                  else {
                    uStack_10 = 4;
                  }
                  if ((uStack_10 & 5) != 0) goto LAB_001ce7d0;
                  fStack_44 = 4.2053e-42;
                }
              }
              else {
LAB_001ce7d0:
                sysMemReadS(&uStack_4,piVar1->g[7] + 0x1f48);
                fStack_18 = (float)(uint)uStack_4;
                if (((uint)fStack_18 & 1 << (auStack_40[0] & 0x1f)) == 0) {
                  sysMemReadW(&fStack_44,uStack_28 + 4);
                  sysMemReadW(&fStack_14,piVar1->g[7]);
                  if (((uint)fStack_14 & 0x8000000) != 0) {
                    sysMemReadW(&fStack_44,uStack_28 + 8);
                    sysMemReadW(&fStack_14,piVar1->g[7]);
                    if (((uint)fStack_14 & 0x40) != 0) {
                      sysMemReadW(&fStack_44,uStack_28 + 0xc);
                    }
                  }
                }
              }
            }
            piVar1->g[1] = 0;
            piVar1->g[0] = (uint)fStack_44;
            set_obj(0);
          }
        }
      }
      fStack_14 = 2.3511328e-38;
      FUN_0018df40();
    }
    iStack_24 = iStack_24 + 1;
    uStack_28 = uStack_28 + 0x1c;
    if (uStack_2c < 2) {
      if (uStack_2c == 1) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    uStack_2c = uStack_2c - 1;
    if ((uStack_10 & 4) == 0) {
      sysMemReadS(&uStack_6,piVar1->g[7] + 0x78a);
      auStack_40[0] = (uint)uStack_6;
      if (uStack_6 == 0) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 4;
      }
      if ((((uStack_10 & 2) == 0) &&
          (sysMemReadW(&fStack_14,piVar1->g[7]), ((uint)fStack_14 & 0x8000000) == 0)) &&
         ((piVar1->g[6] & 0x40000000) == 0)) {
        fStack_14 = 3.0832816e-33;
        FUN_0018df40();
        FUN_0018df40(fStack_14);
        FUN_0018df40(fStack_14);
        FUN_0018e100();
        fStack_14 = 1.1755304e-38;
        FUN_0018df40();
        sysMemReadW(&fStack_44,piVar1->g[7] + 0xf00);
        fStack_18 = 7.28675e-44;
        fStack_14 = 3.0832816e-33;
        fStack_44 = (float)((int)fStack_44 * 0x34 + piVar1->g[7] + 0xf34);
        FUN_0018df40();
        FUN_0018df40(fStack_14);
        FUN_0018df40(fStack_14);
        FUN_0018e100();
        fStack_14 = 1.2041119e-35;
        FUN_0018df40();
        fStack_14 = fStack_44;
        sysMemReadT(&fStack_20,(uint)fStack_44);
        FUN_0018de40(&fStack_20);
        sysMemReadT(&fStack_20,(int)fStack_14 + 0xc);
        FUN_0018de40(&fStack_20);
        sysMemReadT(&fStack_20,(int)fStack_14 + 0x18);
        FUN_0018de40(&fStack_20);
        sysMemReadT(&fStack_20,(int)fStack_14 + 0x24);
        FUN_0018de40(&fStack_20);
        fStack_14 = 3.0832816e-33;
        FUN_0018df40();
        FUN_0018df40(fStack_14);
        FUN_0018df40(fStack_14);
        FUN_0018e100();
        fStack_14 = 6.953775e-18;
        FUN_0018df40();
        FUN_0018df40(piVar1->g[5]);
        fStack_14 = 1.926815e-34;
        FUN_0018df40();
        fStack_20 = (float)FUN_0018e100();
        fStack_1c = (float)FUN_0018e100();
        lVar3 = FUN_0018e100();
        fStack_18 = (float)((ulong)(lVar3 << 0x21) >> 0x21);
        fStack_20 = (float)((ulong)((long)(int)fStack_20 << 0x21) >> 0x21);
        fStack_44 = fRam016c11d0;
        if (fStack_20 <= fRam016c11d0) {
          if (fRam016c11d0 == fStack_20) {
            uStack_10 = 2;
          }
          else {
            uStack_10 = 1;
          }
        }
        else {
          uStack_10 = 4;
        }
        if ((uStack_10 & 4) == 0) {
          if (fStack_18 <= fRam016c11d0) {
            if (fRam016c11d0 == fStack_18) {
              uStack_10 = 2;
            }
            else {
              uStack_10 = 1;
            }
          }
          else {
            uStack_10 = 4;
          }
          if ((uStack_10 & 4) == 0) {
            piVar1->g[6] = piVar1->g[6] | 0x40000000;
            fStack_14 = 6.953775e-18;
            FUN_0018df40();
            fStack_14 = 4.2039e-45;
            FUN_0018df40();
            sysMemReadS(&uStack_8,piVar1->g[7] + 0x788);
            uStack_28 = (uint)uStack_8;
            if ((piVar1->g[3] & 1 << (uStack_28 & 0x1f)) != 0) {
              fStack_18 = 3.92364e-44;
              uStack_28 = uStack_28 * 0x1c + piVar1->g[2];
              sysMemReadW(&fStack_44,uStack_28 + 0x14);
              piVar1->g[1] = 0;
              piVar1->g[0] = (uint)fStack_44;
              set_obj(0);
            }
          }
        }
        fStack_14 = 2.3511328e-38;
        FUN_0018df40();
      }
      fStack_14 = 2.3511328e-38;
      FUN_0018df40();
      piVar1->g[0] = 1;
      set_mmode(0);
      if (param_1 != 0) {
        i960ReturnProc();
      }
      return 0;
    }
  } while( true );
}

