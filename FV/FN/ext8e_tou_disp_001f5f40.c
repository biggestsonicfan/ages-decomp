/* EXT 8e: tou_disp @ 001f5f40; patched over i960 023acc (arcade tou_disp) */

/* WARNING: Removing unreachable block (ram,0x001f63c0) */
/* WARNING: Removing unreachable block (ram,0x001f5fbc) */
/* WARNING: Removing unreachable block (ram,0x001f6018) */
/* WARNING: Removing unreachable block (ram,0x001f6610) */

undefined8 tou_disp(int param_1)

{
  i960_regs *piVar1;
  float fStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
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
  uStack_50 = uRam016b6dfc;
  fStack_54 = (float)(uRam016b6dfc & 0x300);
  if (fStack_54 == 0.0) {
    uStack_20 = 2;
  }
  else {
    uStack_20 = 4;
  }
  if ((uStack_20 & 2) == 0) {
    uStack_50 = uRam016b6e04;
    fStack_54 = (float)(uRam016b6e04 & 0x3f00);
    if (fStack_54 == 0.0) {
      uStack_20 = 2;
    }
    else {
      uStack_20 = 4;
    }
    if ((uStack_20 & 5) != 0) {
      fStack_24 = 1.1755304e-38;
      FUN_0018df40();
      iStack_2c = 0x40c00000;
      fStack_24 = 7.524777e-37;
      fStack_28 = fRam016c0ddc;
      fStack_54 = fRam016c0ddc / 6.0;
      FUN_0018df40();
      FUN_0018df40(fStack_54);
      fStack_24 = 1.0;
      FUN_0018df40();
      FUN_0018df40(fStack_54);
      uStack_38 = 0x1c;
      uStack_34 = (int)fRam016c0de8 / 0x1c;
      fStack_54 = 8.40779e-45;
      if (uStack_34 < 6) {
        uStack_20 = 4;
      }
      else if (uStack_34 == 6) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
      if ((uStack_20 & 4) == 0) {
        uStack_34 = 6;
      }
      fStack_24 = 3.7622734e-37;
      FUN_0018df40();
      fStack_24 = (float)(uRam016c0de4 ^ 0x80000000);
      FUN_0018df40();
      fStack_24 = -fRam016c0de8;
      FUN_0018df40();
      fStack_24 = (float)(uRam016c0dec ^ 0x80000000);
      FUN_0018df40();
      FUN_001f5d80(0x22b44);
      piVar1->g[4] = piVar1->g[0];
      FUN_001f5d80(0x22b64);
      piVar1->g[5] = piVar1->g[0];
      FUN_001f5d80(0x22b24);
      piVar1->g[3] = piVar1->g[0];
      uRam016b7059 = (undefined1)piVar1->g[3];
      iStack_2c = 0x41600000;
      fStack_28 = fRam016c0de8;
      fStack_44 = fRam016c0de8 - 14.0;
      piVar1->g[2] = 0x6ce2690;
      uStack_4c = 0x1b;
      uStack_34 = 0;
      do {
        sysMemReadW(&fStack_54,piVar1->g[2] + 0x20);
        if (fStack_44 <= fStack_54) {
          if (fStack_54 == fStack_44) {
            uStack_20 = 2;
          }
          else {
            uStack_20 = 1;
          }
        }
        else {
          uStack_20 = 4;
        }
        if ((uStack_20 & 1) != 0) break;
        iStack_2c = 0x38;
        piVar1->g[2] = piVar1->g[2] + 0x38;
        if (uStack_4c < 2) {
          if (uStack_4c == 1) {
            uStack_20 = 2;
          }
          else {
            uStack_20 = 1;
          }
        }
        else {
          uStack_20 = 4;
        }
        uStack_4c = uStack_4c - 1;
      } while ((uStack_20 & 4) != 0);
      iStack_2c = 0x38;
      piVar1->g[2] = piVar1->g[2] - 0x38;
      uStack_4c = 3;
      uStack_48 = 0;
      do {
        fStack_24 = 1.1755304e-38;
        FUN_0018df40();
        sysMemReadW(&uStack_40,piVar1->g[2] + 0x20);
        fStack_24 = 3.7622734e-37;
        FUN_0018df40();
        fStack_24 = 0.0;
        FUN_0018df40(0);
        FUN_0018df40(uStack_40);
        fStack_24 = 0.0;
        FUN_0018df40(0);
        uStack_40 = piVar1->g[2] + 0x24;
        sysMemReadW(&fStack_44,piVar1->g[2] + 0x34);
        piVar1->g[2] = piVar1->g[2] + 0x38;
        uStack_38 = 3;
        fStack_54 = 2.29589e-41;
        uStack_3c = 0;
        uStack_34 = 0;
        do {
          sysMemReadW(&uStack_30,uStack_40);
          uStack_40 = uStack_40 + 4;
          if ((piVar1->g[3] & 1 << (uStack_34 & 0x1f)) != 0) {
            if (uStack_3c < uStack_30) {
              uStack_20 = 4;
            }
            else if (uStack_3c == uStack_30) {
              uStack_20 = 2;
            }
            else {
              uStack_20 = 1;
            }
            if ((uStack_20 & 2) == 0) {
              piVar1->g[1] = 0;
              piVar1->g[0] = uStack_30;
              set_obj(0);
            }
          }
          fStack_24 = 3.0100953e-36;
          FUN_0018df40();
          FUN_0018df40(fStack_54);
          if (uStack_38 < uStack_34) {
            uStack_20 = 4;
          }
          else if (uStack_38 == uStack_34) {
            uStack_20 = 2;
          }
          else {
            uStack_20 = 1;
          }
          uStack_34 = uStack_34 + 1;
        } while ((uStack_20 & 1) != 0);
        fStack_24 = 2.3511328e-38;
        FUN_0018df40();
        if (uStack_4c < uStack_48) {
          uStack_20 = 4;
        }
        else if (uStack_4c == uStack_48) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 1;
        }
        uStack_48 = uStack_48 + 1;
      } while ((uStack_20 & 1) != 0);
      iStack_2c = 0x42280000;
      fStack_28 = fRam016c0de8;
      fStack_44 = fRam016c0de8 - 42.0;
      piVar1->g[2] = 0x6ce3218;
      uStack_4c = 7;
      uStack_34 = 0;
      do {
        sysMemReadW(&fStack_54,piVar1->g[2] + 0x28);
        if (fStack_44 <= fStack_54) {
          if (fStack_54 == fStack_44) {
            uStack_20 = 2;
          }
          else {
            uStack_20 = 1;
          }
        }
        else {
          uStack_20 = 4;
        }
        if ((uStack_20 & 1) != 0) break;
        iStack_2c = 0x2c;
        piVar1->g[2] = piVar1->g[2] + 0x2c;
        if (uStack_4c < 2) {
          if (uStack_4c == 1) {
            uStack_20 = 2;
          }
          else {
            uStack_20 = 1;
          }
        }
        else {
          uStack_20 = 4;
        }
        uStack_4c = uStack_4c - 1;
      } while ((uStack_20 & 4) != 0);
      uStack_34 = 0;
      uStack_38 = 1;
      do {
        fStack_24 = 1.1755304e-38;
        FUN_0018df40();
        sysMemReadW(&uStack_40,piVar1->g[2] + 0x20);
        sysMemReadW(&uStack_3c,piVar1->g[2] + 0x24);
        fStack_54 = 0.0;
        fStack_24 = 3.7622734e-37;
        FUN_0018df40();
        FUN_0018df40(fStack_54);
        FUN_0018df40(uStack_3c);
        FUN_0018df40(fStack_54);
        fStack_54 = 0.0;
        fStack_44 = 2.29589e-41;
        do {
          if ((piVar1->g[5] & 1 << ((uint)fStack_54 & 0x1f)) != 0) {
            piVar1->g[1] = 0;
            piVar1->g[0] = uStack_40;
            set_obj(0);
          }
          fStack_24 = 3.0100953e-36;
          FUN_0018df40();
          FUN_0018df40(fStack_44);
          if ((uint)fStack_54 < 4) {
            if (fStack_54 == 4.2039e-45) {
              uStack_20 = 2;
            }
            else {
              uStack_20 = 1;
            }
          }
          else {
            uStack_20 = 4;
          }
          fStack_54 = (float)((int)fStack_54 + 1);
        } while ((uStack_20 & 1) != 0);
        fStack_24 = 2.3511328e-38;
        FUN_0018df40();
        piVar1->g[2] = piVar1->g[2] + 0x2c;
        if (uStack_38 < uStack_34) {
          uStack_20 = 4;
        }
        else if (uStack_38 == uStack_34) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 1;
        }
        uStack_34 = uStack_34 + 1;
      } while ((uStack_20 & 1) != 0);
      fStack_24 = 2.3511328e-38;
      FUN_0018df40();
      if (param_1 == 0) {
        return 0;
      }
      i960ReturnProc();
      return 0;
    }
  }
  fStack_24 = 1.1755304e-38;
  FUN_0018df40();
  iStack_2c = 0x40c00000;
  fStack_24 = 7.524777e-37;
  fStack_28 = fRam016c0ddc;
  fStack_54 = fRam016c0ddc / 6.0;
  FUN_0018df40();
  FUN_0018df40(fStack_54);
  fStack_24 = 1.0;
  FUN_0018df40();
  FUN_0018df40(fStack_54);
  fStack_24 = 3.7622734e-37;
  FUN_0018df40();
  fStack_24 = (float)(uRam016c0de4 ^ 0x80000000);
  FUN_0018df40();
  fStack_24 = -fRam016c0de8;
  FUN_0018df40();
  fStack_24 = (float)(uRam016c0dec ^ 0x80000000);
  FUN_0018df40();
  piVar1->g[1] = 0x6ce2c40;
  clip_point_check(0);
  FUN_001f5d80(0x22b44);
  piVar1->g[4] = piVar1->g[0];
  FUN_001f5d80(0x22b64);
  piVar1->g[5] = piVar1->g[0];
  FUN_001f5d80(0x22b24);
  piVar1->g[3] = piVar1->g[0];
  uRam016b7059 = (undefined1)piVar1->g[3];
  piVar1->g[2] = 0x6ce2654;
  uStack_50 = 0x50e000;
  sysMemReadW(&uStack_4c,piVar1->g[2]);
  piVar1->g[2] = piVar1->g[2] + 4;
  uStack_48 = 0;
  do {
    sysMemReadQ(&uStack_30,piVar1->g[2]);
    sysMemReadB(&bStack_1,uStack_50 + uStack_30);
    fStack_54 = (float)(uint)bStack_1;
    sysMemReadB(&bStack_2,uStack_50 + iStack_2c);
    piVar1->g[0] = (uint)bStack_2;
    fStack_54 = (float)((uint)fStack_54 & piVar1->g[0]);
    sysMemReadB(&bStack_3,uStack_50 + (int)fStack_28);
    piVar1->g[0] = (uint)bStack_3;
    fStack_54 = (float)((uint)fStack_54 & piVar1->g[0]);
    sysMemReadB(&bStack_4,uStack_50 + (int)fStack_24);
    piVar1->g[0] = (uint)bStack_4;
    fStack_54 = (float)((uint)fStack_54 & piVar1->g[0]);
    sysMemReadQ(&uStack_30,piVar1->g[2] + 0x10);
    sysMemReadB(&bStack_5,uStack_50 + uStack_30);
    piVar1->g[0] = (uint)bStack_5;
    fStack_54 = (float)((uint)fStack_54 & piVar1->g[0]);
    sysMemReadB(&bStack_6,uStack_50 + iStack_2c);
    piVar1->g[0] = (uint)bStack_6;
    fStack_54 = (float)((uint)fStack_54 & piVar1->g[0]);
    sysMemReadB(&bStack_7,uStack_50 + (int)fStack_28);
    piVar1->g[0] = (uint)bStack_7;
    fStack_54 = (float)((uint)fStack_54 & piVar1->g[0]);
    sysMemReadB(&bStack_8,uStack_50 + (int)fStack_24);
    piVar1->g[0] = (uint)bStack_8;
    fStack_24 = 1.1755304e-38;
    fStack_54 = (float)((uint)fStack_54 & piVar1->g[0]);
    FUN_0018df40();
    sysMemReadW(&uStack_40,piVar1->g[2] + 0x20);
    fStack_24 = 3.7622734e-37;
    FUN_0018df40();
    fStack_24 = 0.0;
    FUN_0018df40(0);
    FUN_0018df40(uStack_40);
    fStack_24 = 0.0;
    FUN_0018df40(0);
    uStack_40 = piVar1->g[2] + 0x24;
    sysMemReadW(&fStack_44,piVar1->g[2] + 0x34);
    piVar1->g[2] = piVar1->g[2] + 0x38;
    fStack_54 = (float)((uint)fStack_54 & 0xf);
    if (fStack_54 == 0.0) {
      uStack_20 = 2;
    }
    else {
      uStack_20 = 4;
    }
    if ((uStack_20 & 5) == 0) {
      fStack_54 = 2.29589e-41;
      uStack_3c = 0;
      uStack_34 = 0;
      uStack_38 = 3;
      do {
        sysMemReadW(&uStack_30,uStack_40);
        uStack_40 = uStack_40 + 4;
        if ((piVar1->g[3] & 1 << (uStack_34 & 0x1f)) != 0) {
          if (uStack_3c < uStack_30) {
            uStack_20 = 4;
          }
          else if (uStack_3c == uStack_30) {
            uStack_20 = 2;
          }
          else {
            uStack_20 = 1;
          }
          if ((uStack_20 & 2) == 0) {
            piVar1->g[1] = 0;
            piVar1->g[0] = uStack_30;
            set_obj(0);
          }
        }
        fStack_24 = 3.0100953e-36;
        FUN_0018df40();
        FUN_0018df40(fStack_54);
        if (uStack_38 < uStack_34) {
          uStack_20 = 4;
        }
        else if (uStack_38 == uStack_34) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 1;
        }
        uStack_34 = uStack_34 + 1;
      } while ((uStack_20 & 1) != 0);
    }
    fStack_24 = 2.3511328e-38;
    FUN_0018df40();
    if (uStack_4c < uStack_48) {
      uStack_20 = 4;
    }
    else if (uStack_4c == uStack_48) {
      uStack_20 = 2;
    }
    else {
      uStack_20 = 1;
    }
    uStack_48 = uStack_48 + 1;
  } while ((uStack_20 & 1) != 0);
  piVar1->g[2] = 0x6ce3218;
  uStack_50 = 0x50e000;
  sysMemReadW(&uStack_38,piVar1->g[2] - 4);
  uStack_34 = 0;
  do {
    fStack_24 = 1.1755304e-38;
    FUN_0018df40();
    sysMemReadQ(&uStack_30,piVar1->g[2]);
    sysMemReadB(&bStack_9,uStack_50 + uStack_30);
    fStack_54 = (float)(uint)bStack_9;
    sysMemReadB(&bStack_a,uStack_50 + iStack_2c);
    piVar1->g[0] = (uint)bStack_a;
    fStack_54 = (float)((uint)fStack_54 & piVar1->g[0]);
    sysMemReadB(&bStack_b,uStack_50 + (int)fStack_28);
    piVar1->g[0] = (uint)bStack_b;
    fStack_54 = (float)((uint)fStack_54 & piVar1->g[0]);
    sysMemReadB(&bStack_c,uStack_50 + (int)fStack_24);
    piVar1->g[0] = (uint)bStack_c;
    fStack_54 = (float)((uint)fStack_54 & piVar1->g[0]);
    sysMemReadQ(&uStack_30,piVar1->g[2] + 0x10);
    sysMemReadB(&bStack_d,uStack_50 + uStack_30);
    piVar1->g[0] = (uint)bStack_d;
    fStack_54 = (float)((uint)fStack_54 & piVar1->g[0]);
    sysMemReadB(&bStack_e,uStack_50 + iStack_2c);
    piVar1->g[0] = (uint)bStack_e;
    fStack_54 = (float)((uint)fStack_54 & piVar1->g[0]);
    sysMemReadB(&bStack_f,uStack_50 + (int)fStack_28);
    piVar1->g[0] = (uint)bStack_f;
    fStack_54 = (float)((uint)fStack_54 & piVar1->g[0]);
    sysMemReadB(&bStack_10,uStack_50 + (int)fStack_24);
    piVar1->g[0] = (uint)bStack_10;
    fStack_54 = (float)((uint)fStack_54 & piVar1->g[0]);
    if (fStack_54 == 0.0) {
      uStack_20 = 2;
    }
    else {
      uStack_20 = 4;
    }
    if ((uStack_20 & 5) == 0) {
      sysMemReadW(&uStack_40,piVar1->g[2] + 0x20);
      sysMemReadW(&uStack_3c,piVar1->g[2] + 0x24);
      fStack_54 = 0.0;
      fStack_24 = 3.7622734e-37;
      FUN_0018df40();
      FUN_0018df40(fStack_54);
      FUN_0018df40(uStack_3c);
      FUN_0018df40(fStack_54);
      fStack_54 = 0.0;
      fStack_44 = 2.29589e-41;
      do {
        if ((piVar1->g[5] & 1 << ((uint)fStack_54 & 0x1f)) != 0) {
          piVar1->g[1] = 0;
          piVar1->g[0] = uStack_40;
          set_obj(0);
        }
        fStack_24 = 3.0100953e-36;
        FUN_0018df40();
        FUN_0018df40(fStack_44);
        if ((uint)fStack_54 < 4) {
          if (fStack_54 == 4.2039e-45) {
            uStack_20 = 2;
          }
          else {
            uStack_20 = 1;
          }
        }
        else {
          uStack_20 = 4;
        }
        fStack_54 = (float)((int)fStack_54 + 1);
      } while ((uStack_20 & 1) != 0);
    }
    fStack_24 = 2.3511328e-38;
    FUN_0018df40();
    piVar1->g[2] = piVar1->g[2] + 0x2c;
    if (uStack_38 < uStack_34) {
      uStack_20 = 4;
    }
    else if (uStack_38 == uStack_34) {
      uStack_20 = 2;
    }
    else {
      uStack_20 = 1;
    }
    uStack_34 = uStack_34 + 1;
  } while ((uStack_20 & 1) != 0);
  fStack_24 = 2.3511328e-38;
  FUN_0018df40();
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

