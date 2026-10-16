/* EXT 5d: calc_rob_angle_int @ 001e2a00; patched over i960 029d08 (arcade calc_rob_angle_int) */

/* WARNING: Removing unreachable block (ram,0x001e2a70) */
/* WARNING: Removing unreachable block (ram,0x001e2b70) */

undefined8 calc_rob_angle_int(int param_1)

{
  i960_regs *piVar1;
  uint uStack_44;
  uint uStack_40;
  float fStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  uint uStack_10;
  ushort uStack_a;
  byte bStack_7;
  byte bStack_6;
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadS(&uStack_a,piVar1->g[7] + 0x1a8);
  fStack_3c = (float)(uint)uStack_a;
  if (uStack_a == 0) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 2) == 0) {
    sysMemReadW(&uStack_2c,(int)fStack_3c * 4 + 0x6c00004);
    uStack_30 = uStack_2c + 0x16;
    uStack_2c = uStack_2c + 2;
    sysMemReadW(piVar1->g + 6,piVar1->g[7] + 0xbd8);
    iStack_24 = 0;
    fStack_20 = 0.0;
    piVar1->g[5] = piVar1->g[6] + 0x78c;
    uStack_44 = 0;
    do {
      uStack_38 = 0;
      do {
        sysMemReadB(&bStack_1,uStack_2c);
        uStack_28 = (uint)(bStack_1 >> 6);
        if (bStack_1 >> 6 == 0) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 4;
        }
        if ((uStack_10 & 2) == 0) {
          fStack_3c = (float)(uStack_28 - 1);
        }
        else {
          fStack_3c = (float)((bStack_1 >> (uStack_38 & 0x1f) & 3) + 3);
        }
        sysMemWriteB(piVar1->g[5],&fStack_3c);
        piVar1->g[5] = piVar1->g[5] + 1;
        if ((uint)fStack_3c < 5) {
          if (fStack_3c == 5.60519e-45) {
            uStack_10 = 2;
          }
          else {
            uStack_10 = 1;
          }
        }
        else {
          uStack_10 = 4;
        }
        if ((uStack_10 & 3) == 0) {
          sysMemReadB(&bStack_2,uStack_30);
          fStack_3c = (float)(uint)bStack_2;
          iStack_24 = iStack_24 + (int)fStack_3c;
          uStack_30 = uStack_30 + 1;
          fStack_20 = (float)((int)fStack_20 + 1);
        }
        uStack_38 = uStack_38 + 2;
        if (uStack_38 < 7) {
          if (uStack_38 == 6) {
            uStack_10 = 2;
          }
          else {
            uStack_10 = 1;
          }
        }
        else {
          uStack_10 = 4;
        }
      } while ((uStack_10 & 1) != 0);
      uStack_44 = uStack_44 + 1;
      uStack_2c = uStack_2c + 1;
      if (uStack_44 < 0x15) {
        if (uStack_44 == 0x14) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
      }
      else {
        uStack_10 = 4;
      }
    } while ((uStack_10 & 1) != 0);
    sysMemWriteW(piVar1->g[6] + 0x784,&uStack_2c);
    fStack_18 = (float)(4 - ((int)fStack_20 + 0x16U & 3) & 3);
    uStack_30 = uStack_30 + (int)fStack_18;
    sysMemWriteW(piVar1->g[6] + 0x788,&uStack_30);
    iStack_14 = iStack_24 * 4;
    uStack_34 = iStack_14 + uStack_30;
    sysMemWriteW(piVar1->g[6] + 0x780,&uStack_34);
    piVar1->g[2] = uStack_2c;
    piVar1->g[5] = piVar1->g[6] + 0x78c;
    uStack_44 = 0;
    sysMemWriteB(piVar1->g[7] + 0xbdc,&uStack_44);
    uStack_28 = uStack_44;
    do {
      uStack_2c = uStack_28;
      do {
        sysMemReadB(&bStack_3,piVar1->g[5]);
        fStack_3c = (float)(uint)bStack_3;
        if (bStack_3 < 6) {
          if (bStack_3 == 5) {
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
          if ((uStack_10 & 2) == 0) {
            if ((uint)fStack_3c < 4) {
              if (fStack_3c == 4.2039e-45) {
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
              if ((uStack_10 & 2) == 0) {
                if ((uint)fStack_3c < 2) {
                  if (fStack_3c == 1.4013e-45) {
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
                  if ((uStack_10 & 2) == 0) {
                    sysMemReadT(&fStack_20,uStack_34);
                    sysMemWriteT(piVar1->g[7] + 0x80,&fStack_20);
                    uStack_34 = uStack_34 + 0xc;
                  }
                  else {
                    uStack_40 = uStack_44 - 0xc;
                    sysMemReadB(&bStack_4,piVar1->g[7] + 0xbdc);
                    fStack_1c = (float)((uint)bStack_4 | 1 << (uStack_40 & 0x1f));
                    sysMemWriteB(piVar1->g[7] + 0xbdc,&fStack_1c);
                    sysMemReadW(&uStack_40,uStack_40 * 4 + 0x2c218);
                    uStack_40 = uStack_40 + piVar1->g[7];
                    sysMemReadT(&fStack_20,uStack_34);
                    fStack_20 = (float)(int)fStack_20;
                    sysMemWriteS(uStack_40,&fStack_20);
                    fStack_1c = (float)(int)fStack_1c;
                    sysMemWriteS(uStack_40 + 2,&fStack_1c);
                    fStack_18 = (float)(int)fStack_18;
                    sysMemWriteS(uStack_40 + 4,&fStack_18);
                    uStack_34 = uStack_34 + 0xc;
                  }
                }
                else {
                  sysMemReadW(&fStack_3c,uStack_34);
                  uStack_34 = uStack_34 + 4;
                  uStack_40 = uStack_44 - 0xc;
                  sysMemReadB(&bStack_5,piVar1->g[7] + 0xbdc);
                  fStack_1c = (float)((uint)bStack_5 | 1 << (uStack_40 & 0x1f));
                  sysMemWriteB(piVar1->g[7] + 0xbdc,&fStack_1c);
                  sysMemReadW(&uStack_40,uStack_40 * 4 + 0x2c218);
                  fStack_3c = (float)(int)fStack_3c;
                  uStack_40 = uStack_40 + piVar1->g[7];
                  sysMemWriteS(uStack_40,&fStack_3c);
                  sysMemReadW(&fStack_3c,uStack_34 + 4);
                  fStack_3c = (float)(int)fStack_3c;
                  sysMemWriteS(uStack_40 + 2,&fStack_3c);
                  sysMemReadW(&fStack_3c,uStack_34 + 8);
                  fStack_3c = (float)(int)fStack_3c;
                  sysMemWriteS(uStack_40 + 4,&fStack_3c);
                  sysMemReadW(&fStack_3c,uStack_34 + 0xc);
                  fStack_3c = (float)(int)fStack_3c;
                  sysMemWriteS(uStack_40 + 6,&fStack_3c);
                  uStack_34 = uStack_34 + 0x10;
                }
                piVar1->g[5] = piVar1->g[5] + 3;
                break;
              }
            }
            else {
              sysMemReadW(&fStack_3c,uStack_34);
              uStack_34 = uStack_34 + 4;
            }
          }
          else {
            sysMemReadB(&bStack_7,piVar1->g[2]);
            piVar1->g[2] = piVar1->g[2] + 1;
            uStack_40 = (uint)bStack_7 * 4;
            uStack_34 = uStack_34 + uStack_40;
          }
        }
        else {
          sysMemReadB(&bStack_6,piVar1->g[2]);
          piVar1->g[2] = piVar1->g[2] + 1;
          iStack_14 = (uint)bStack_6 * 2;
          uStack_40 = (uint)bStack_6 * 0xc;
          uStack_34 = uStack_34 + uStack_40;
        }
        piVar1->g[5] = piVar1->g[5] + 1;
        uStack_2c = uStack_2c + 1;
        if (uStack_2c < 4) {
          if (uStack_2c == 3) {
            uStack_10 = 2;
          }
          else {
            uStack_10 = 1;
          }
        }
        else {
          uStack_10 = 4;
        }
      } while ((uStack_10 & 1) != 0);
      uStack_44 = uStack_44 + 1;
      if (uStack_44 < 0x15) {
        if (uStack_44 == 0x14) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
      }
      else {
        uStack_10 = 4;
      }
    } while ((uStack_10 & 1) != 0);
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

