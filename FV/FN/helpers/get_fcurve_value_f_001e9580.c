/* helper get_fcurve_value_f @ 001e9580, called (depth 2) from calc_rob_angle */

undefined8 get_fcurve_value_f(int param_1)

{
  i960_regs *piVar1;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  ushort uStack_e;
  ushort uStack_c;
  ushort uStack_a;
  ushort uStack_8;
  short sStack_6;
  short sStack_4;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadW(&fStack_50,piVar1->g[7] + 0xbd8);
  piVar1->g[4] = (int)fStack_50 + 0x78c;
  sysMemReadW(piVar1->g + 3,(int)fStack_50 + 0x788);
  sysMemReadW(piVar1->g + 2,(int)fStack_50 + 0x780);
  piVar1->g[1] = 0x3c;
  sysMemReadW(piVar1->g,(int)fStack_50 + 0x784);
  do {
    uStack_38 = piVar1->g[3];
    sysMemReadB(&bStack_1,piVar1->g[4]);
    fStack_48 = (float)(uint)bStack_1;
    if (bStack_1 < 5) {
      if (bStack_1 == 4) {
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
      if ((uStack_20 & 1) == 0) {
        sysMemReadB(&bStack_2,piVar1->g[0]);
        uStack_34 = (uint)bStack_2;
        piVar1->g[0] = piVar1->g[0] + 1;
        uStack_3c = 0;
        if ((uint)fStack_48 < 6) {
          if (fStack_48 == 7.00649e-45) {
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
          do {
            sysMemReadW(&fStack_40,uStack_38);
            uStack_38 = uStack_38 + 4;
            if (piVar1->g[6] < (uint)fStack_40) {
              uStack_20 = 4;
            }
            else if ((float)piVar1->g[6] == fStack_40) {
              uStack_20 = 2;
            }
            else {
              uStack_20 = 0;
            }
            if (uStack_20 != 0) {
              piVar1->g[3] = piVar1->g[3] + uStack_34 * 4;
              fStack_50 = (float)(uStack_34 * 3);
              uStack_34 = uStack_34 * 0xc;
              uStack_3c = uStack_3c * 0xc + piVar1->g[2];
              piVar1->g[2] = piVar1->g[2] + uStack_34;
              if (piVar1->g[6] < (uint)fStack_40) {
                uStack_20 = 4;
              }
              else if ((float)piVar1->g[6] == fStack_40) {
                uStack_20 = 2;
              }
              else {
                uStack_20 = 1;
              }
              if ((uStack_20 & 2) != 0) goto LAB_001e9c18;
              fStack_54 = fStack_40 - fStack_44;
              fStack_50 = (float)piVar1->g[6] - fStack_44;
              sysMemReadW(&fStack_4c,uStack_3c - 0xc);
              sysMemReadW(&fStack_48,uStack_3c);
              sysMemReadW(&fStack_44,uStack_3c - 4);
              sysMemReadW(&fStack_40,uStack_3c + 4);
              uStack_24 = 0x19003232;
              FUN_0018df40();
              FUN_0018df40(fStack_54);
              FUN_0018df40(fStack_50);
              FUN_0018df40(fStack_4c);
              FUN_0018df40(fStack_48);
              FUN_0018df40(fStack_44);
              FUN_0018df40(fStack_40);
              fStack_54 = (float)FUN_0018e100();
              sysMemWriteW(piVar1->g[5],&fStack_54);
              goto LAB_001e96e0;
            }
            fStack_44 = fStack_40;
            uStack_3c = uStack_3c + 1;
            if (uStack_34 < uStack_3c) {
              uStack_20 = 4;
            }
            else if (uStack_34 == uStack_3c) {
              uStack_20 = 2;
            }
            else {
              uStack_20 = 1;
            }
          } while ((uStack_20 & 1) != 0);
          piVar1->g[3] = piVar1->g[3] + uStack_34 * 4;
          fStack_50 = (float)(uStack_34 * 0xc);
          piVar1->g[2] = piVar1->g[2] + (int)fStack_50;
        }
        else {
          do {
            sysMemReadW(&fStack_40,uStack_38);
            uStack_38 = uStack_38 + 4;
            if (piVar1->g[6] < (uint)fStack_40) {
              uStack_20 = 4;
            }
            else if ((float)piVar1->g[6] == fStack_40) {
              uStack_20 = 2;
            }
            else {
              uStack_20 = 0;
            }
            if (uStack_20 != 0) {
              fStack_50 = (float)(uStack_34 * 4);
              piVar1->g[3] = piVar1->g[3] + (int)fStack_50;
              uStack_34 = uStack_34 * 4;
              uStack_3c = uStack_3c * 4 + piVar1->g[2];
              piVar1->g[2] = piVar1->g[2] + uStack_34;
              if (piVar1->g[6] < (uint)fStack_40) {
                uStack_20 = 4;
              }
              else if ((float)piVar1->g[6] == fStack_40) {
                uStack_20 = 2;
              }
              else {
                uStack_20 = 1;
              }
              if ((uStack_20 & 2) == 0) {
                fStack_48 = fStack_40 - fStack_44;
                fStack_4c = (float)piVar1->g[6] - fStack_44;
                sysMemReadW(&fStack_50,uStack_3c);
                sysMemReadW(&fStack_54,uStack_3c - 4);
                uStack_24 = 0x18803131;
                FUN_0018df40();
                FUN_0018df40(fStack_54);
                FUN_0018df40(fStack_50);
                FUN_0018df40(fStack_4c);
                FUN_0018df40(fStack_48);
                fStack_54 = (float)FUN_0018e100();
                sysMemWriteW(piVar1->g[5],&fStack_54);
              }
              else {
LAB_001e9c18:
                sysMemReadW(&fStack_54,uStack_3c);
                sysMemWriteW(piVar1->g[5],&fStack_54);
              }
              goto LAB_001e96e0;
            }
            fStack_44 = fStack_40;
            uStack_3c = uStack_3c + 1;
            if (uStack_34 < uStack_3c) {
              uStack_20 = 4;
            }
            else if (uStack_34 == uStack_3c) {
              uStack_20 = 2;
            }
            else {
              uStack_20 = 1;
            }
          } while ((uStack_20 & 1) != 0);
          fStack_50 = (float)(uStack_34 * 4);
          piVar1->g[3] = piVar1->g[3] + (int)fStack_50;
          piVar1->g[2] = piVar1->g[2] + (int)fStack_50;
        }
      }
      else {
        if ((uint)fStack_48 < 4) {
          if (fStack_48 == 4.2039e-45) {
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
          piVar1->g[2] = piVar1->g[2] + 4;
        }
        else {
          fStack_54 = 0.0;
          sysMemWriteW(piVar1->g[5],&fStack_54);
        }
      }
    }
    else {
      sysMemReadW(&fStack_54,piVar1->g[2]);
      sysMemWriteW(piVar1->g[5],&fStack_54);
      piVar1->g[2] = piVar1->g[2] + 4;
    }
LAB_001e96e0:
    piVar1->g[4] = piVar1->g[4] + 1;
    piVar1->g[5] = piVar1->g[5] + 4;
    if (piVar1->g[1] < 2) {
      if (piVar1->g[1] == 1) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
    }
    else {
      uStack_20 = 4;
    }
    piVar1->g[1] = piVar1->g[1] - 1;
    if ((uStack_20 & 4) == 0) {
      uStack_24 = 0xf0;
      piVar1->g[5] = piVar1->g[5] - 0xf0;
      uStack_30 = 0x24;
      do {
        sysMemReadW(&fStack_2c,piVar1->g[5]);
        fStack_2c = (float)(int)fStack_2c;
        sysMemWriteS(piVar1->g[5],&fStack_2c);
        piVar1->g[5] = piVar1->g[5] + 4;
        if (uStack_30 < 2) {
          if (uStack_30 == 1) {
            uStack_20 = 2;
          }
          else {
            uStack_20 = 1;
          }
        }
        else {
          uStack_20 = 4;
        }
        uStack_30 = uStack_30 - 1;
      } while ((uStack_20 & 4) != 0);
      uStack_24 = 0x90;
      piVar1->g[5] = piVar1->g[5] - 0x90;
      sysMemReadW(&uStack_24,piVar1->g[7]);
      if ((uStack_24 & 0x40) != 0) {
        fStack_54 = 4.59177e-41;
        sysMemReadS(&sStack_4,piVar1->g[5] + 0x34);
        uStack_24 = -(int)sStack_4;
        sysMemWriteS(piVar1->g[5] + 0x34,&uStack_24);
        sysMemReadS(&sStack_6,piVar1->g[5] + 0x38);
        uStack_24 = -(int)sStack_6;
        sysMemWriteS(piVar1->g[5] + 0x38,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0x90);
        uStack_24 = uStack_24 ^ 0x80000000;
        sysMemWriteW(piVar1->g[5] + 0x90,&uStack_24);
        sysMemReadS(&uStack_8,piVar1->g[5] + 0x3c);
        uStack_24 = (int)fStack_54 - (uint)uStack_8;
        sysMemWriteS(piVar1->g[5] + 0x3c,&uStack_24);
        sysMemReadS(&uStack_a,piVar1->g[5] + 0x44);
        uStack_24 = (int)fStack_54 - (uint)uStack_a;
        sysMemWriteS(piVar1->g[5] + 0x44,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0x9c);
        uStack_24 = uStack_24 ^ 0x80000000;
        sysMemWriteW(piVar1->g[5] + 0x9c,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0xa8);
        uStack_24 = uStack_24 ^ 0x80000000;
        sysMemWriteW(piVar1->g[5] + 0xa8,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0x60);
        sysMemReadW(&uStack_28,piVar1->g[5] + 0x54);
        uStack_24 = -uStack_24;
        uStack_28 = -uStack_28;
        sysMemWriteW(piVar1->g[5] + 0x60,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 0x54,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 100);
        sysMemReadW(&uStack_28,piVar1->g[5] + 0x58);
        uStack_24 = -uStack_24;
        uStack_28 = -uStack_28;
        sysMemWriteW(piVar1->g[5] + 100,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 0x58,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0x68);
        sysMemReadW(&uStack_28,piVar1->g[5] + 0x5c);
        sysMemWriteW(piVar1->g[5] + 0x68,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 0x5c,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0xc0);
        sysMemReadW(&uStack_28,piVar1->g[5] + 0xb4);
        uStack_24 = uStack_24 ^ 0x80000000;
        uStack_28 = uStack_28 ^ 0x80000000;
        sysMemWriteW(piVar1->g[5] + 0xc0,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 0xb4,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0xc4);
        sysMemReadW(&uStack_28,piVar1->g[5] + 0xb8);
        sysMemWriteW(piVar1->g[5] + 0xc4,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 0xb8,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 200);
        sysMemReadW(&uStack_28,piVar1->g[5] + 0xbc);
        sysMemWriteW(piVar1->g[5] + 200,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 0xbc,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0xc);
        sysMemReadW(&uStack_28,piVar1->g[5]);
        uStack_24 = -uStack_24;
        uStack_28 = -uStack_28;
        sysMemWriteW(piVar1->g[5] + 0xc,&uStack_28);
        sysMemWriteW(piVar1->g[5],&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0x10);
        sysMemReadW(&uStack_28,piVar1->g[5] + 4);
        uStack_24 = -uStack_24;
        uStack_28 = -uStack_28;
        sysMemWriteW(piVar1->g[5] + 0x10,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 4,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0x14);
        sysMemReadW(&uStack_28,piVar1->g[5] + 8);
        sysMemWriteW(piVar1->g[5] + 0x14,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 8,&uStack_24);
        sysMemReadS(&uStack_c,piVar1->g[5] + 0x6c);
        uStack_24 = (int)fStack_54 - (uint)uStack_c;
        sysMemWriteS(piVar1->g[5] + 0x6c,&uStack_24);
        sysMemReadS(&uStack_e,piVar1->g[5] + 0x74);
        uStack_24 = (int)fStack_54 - (uint)uStack_e;
        sysMemWriteS(piVar1->g[5] + 0x74,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0x84);
        sysMemReadW(&uStack_28,piVar1->g[5] + 0x78);
        uStack_24 = -uStack_24;
        uStack_28 = -uStack_28;
        sysMemWriteW(piVar1->g[5] + 0x84,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 0x78,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0x88);
        sysMemReadW(&uStack_28,piVar1->g[5] + 0x7c);
        uStack_24 = -uStack_24;
        uStack_28 = -uStack_28;
        sysMemWriteW(piVar1->g[5] + 0x88,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 0x7c,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0x8c);
        sysMemReadW(&uStack_28,piVar1->g[5] + 0x80);
        sysMemWriteW(piVar1->g[5] + 0x8c,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 0x80,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0xe4);
        sysMemReadW(&uStack_28,piVar1->g[5] + 0xd8);
        uStack_24 = uStack_24 ^ 0x80000000;
        uStack_28 = uStack_28 ^ 0x80000000;
        sysMemWriteW(piVar1->g[5] + 0xe4,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 0xd8,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0xe8);
        sysMemReadW(&uStack_28,piVar1->g[5] + 0xdc);
        sysMemWriteW(piVar1->g[5] + 0xe8,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 0xdc,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0xec);
        sysMemReadW(&uStack_28,piVar1->g[5] + 0xe0);
        sysMemWriteW(piVar1->g[5] + 0xec,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 0xe0,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0x24);
        sysMemReadW(&uStack_28,piVar1->g[5] + 0x18);
        sysMemWriteW(piVar1->g[5] + 0x24,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 0x18,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0x28);
        sysMemReadW(&uStack_28,piVar1->g[5] + 0x1c);
        uStack_24 = -uStack_24;
        uStack_28 = -uStack_28;
        sysMemWriteW(piVar1->g[5] + 0x28,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 0x1c,&uStack_24);
        sysMemReadW(&uStack_24,piVar1->g[5] + 0x2c);
        sysMemReadW(&uStack_28,piVar1->g[5] + 0x20);
        uStack_24 = -uStack_24;
        uStack_28 = -uStack_28;
        sysMemWriteW(piVar1->g[5] + 0x2c,&uStack_28);
        sysMemWriteW(piVar1->g[5] + 0x20,&uStack_24);
      }
      if (param_1 != 0) {
        i960ReturnProc();
      }
      return 0;
    }
  } while( true );
}

