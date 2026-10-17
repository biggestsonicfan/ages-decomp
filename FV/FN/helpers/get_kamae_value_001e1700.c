/* helper get_kamae_value @ 001e1700, called (depth 1) from set_kamae_ram */

/* WARNING: Removing unreachable block (ram,0x001e17f8) */

undefined8 get_kamae_value(int param_1)

{
  i960_regs *piVar1;
  uint uStack_44;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  uint uStack_20;
  float fStack_1c;
  uint uStack_18;
  int iStack_14;
  uint uStack_10;
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadW(&uStack_2c,piVar1->g[0] * 4 + 0x6c00004);
  uStack_30 = uStack_2c + 0x16;
  piVar1->g[6] = 0x50e2d0;
  iStack_24 = 0;
  uStack_20 = 0;
  piVar1->g[5] = piVar1->g[6] + 0x78c;
  uStack_44 = 0;
  uStack_2c = uStack_2c + 2;
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
        uStack_3c = uStack_28 - 1;
      }
      else {
        uStack_3c = (bStack_1 >> (uStack_38 & 0x1f) & 3) + 3;
      }
      sysMemWriteB(piVar1->g[5],&uStack_3c);
      piVar1->g[5] = piVar1->g[5] + 1;
      if (uStack_3c < 5) {
        if (uStack_3c == 4) {
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
        uStack_3c = (uint)bStack_2;
        iStack_24 = iStack_24 + uStack_3c;
        uStack_30 = uStack_30 + 1;
        uStack_20 = uStack_20 + 1;
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
    uStack_2c = uStack_2c + 1;
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
  uStack_18 = 4 - (uStack_20 + 0x16 & 3) & 3;
  uStack_30 = uStack_30 + uStack_18;
  uStack_34 = iStack_24 * 4 + uStack_30;
  piVar1->g[2] = uStack_2c;
  piVar1->g[5] = piVar1->g[6] + 0x78c;
  uStack_44 = 0;
  uStack_28 = 0;
  do {
    uStack_2c = uStack_28;
    do {
      sysMemReadB(&bStack_3,piVar1->g[5]);
      uStack_3c = (uint)bStack_3;
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
          if (uStack_3c < 4) {
            if (uStack_3c == 3) {
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
              if (uStack_3c < 2) {
                if (uStack_3c == 1) {
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
                sysMemReadT(&uStack_20,uStack_34);
                sysMemWriteT(piVar1->g[3],&uStack_20);
                uStack_34 = uStack_34 + 0xc;
                piVar1->g[3] = piVar1->g[3] + 0xc;
              }
              piVar1->g[5] = piVar1->g[5] + 3;
              break;
            }
            sysMemWriteW(piVar1->g[3],&uStack_28);
            piVar1->g[3] = piVar1->g[3] + 4;
          }
          else {
            sysMemReadW(&uStack_3c,uStack_34);
            uStack_34 = uStack_34 + 4;
            sysMemWriteW(piVar1->g[3],&uStack_3c);
            piVar1->g[3] = piVar1->g[3] + 4;
          }
        }
        else {
          sysMemReadW(&uStack_3c,uStack_34);
          sysMemWriteW(piVar1->g[3],&uStack_3c);
          piVar1->g[3] = piVar1->g[3] + 4;
          sysMemReadB(&bStack_5,piVar1->g[2]);
          piVar1->g[2] = piVar1->g[2] + 1;
          iStack_14 = (uint)bStack_5 * 4;
          uStack_34 = uStack_34 + iStack_14;
        }
      }
      else {
        sysMemReadW(&uStack_3c,uStack_34);
        sysMemWriteW(piVar1->g[3],&uStack_3c);
        piVar1->g[3] = piVar1->g[3] + 4;
        sysMemReadB(&bStack_4,piVar1->g[2]);
        piVar1->g[2] = piVar1->g[2] + 1;
        iStack_14 = (uint)bStack_4 * 2;
        uStack_18 = (uint)bStack_4 * 0xc;
        uStack_34 = uStack_34 + uStack_18;
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
    if ((uStack_10 & 1) == 0) {
      iStack_14 = 0xf0;
      piVar1->g[3] = piVar1->g[3] - 0xf0;
      uStack_20 = 0x24;
      do {
        sysMemReadW(&fStack_1c,piVar1->g[3]);
        fStack_1c = (float)(int)fStack_1c;
        sysMemWriteS(piVar1->g[3],&fStack_1c);
        piVar1->g[3] = piVar1->g[3] + 4;
        if (uStack_20 < 2) {
          if (uStack_20 == 1) {
            uStack_10 = 2;
          }
          else {
            uStack_10 = 1;
          }
        }
        else {
          uStack_10 = 4;
        }
        uStack_20 = uStack_20 - 1;
      } while ((uStack_10 & 4) != 0);
      if (param_1 != 0) {
        i960ReturnProc();
      }
      return 0;
    }
  } while( true );
}

