/* EXT 89: change_color_table @ 001eaa80; patched over i960 000d3c (arcade change_color_table) */

undefined8 change_color_table(int param_1)

{
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_24;
  uint uStack_20;
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
  
  i960GetRegs();
  uStack_24 = uRam01727ddc;
  if (((uRam01727ddc & 2) != 0) && (uStack_24 = uRam016bedd0, (uRam016bedd0 & 0x20) == 0)) {
    uStack_54 = uRam016b75e4;
    sysMemReadW(&uStack_24,uRam016b75e4);
    if ((uStack_24 & 0x80000000) != 0) {
      sysMemReadB(&bStack_1,uStack_54 + 0x310);
      uStack_34 = (uint)bStack_1;
      uStack_30 = uRam01727df0;
      if (uStack_34 < uRam01727df0) {
        uStack_20 = 4;
      }
      else if (uStack_34 == uRam01727df0) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
      if ((uStack_20 & 2) == 0) {
        uRam01727df0 = uStack_34;
        sysMemReadW(&uStack_38,uStack_34 * 4 + 0xf4c);
        uRam01727de0 = uStack_38;
        uRam01727dd4 = 0;
      }
      iStack_44 = 0x180;
      iStack_3c = 1;
      iStack_40 = 2;
      uStack_30 = uRam01727dd4 & 3;
      uStack_38 = uRam01727dd4;
      if (uStack_30 < 4) {
        if (uStack_30 == 3) {
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
        uStack_50 = uStack_30 * 0x4000 + 0x1810000;
        uStack_30 = uStack_30 * 0x8000;
        uStack_4c = uStack_30 + 0x200000;
        uStack_2c = uRam01727de0;
        sysMemReadB(&bStack_2,uRam01727dd4 + uRam01727de0);
        uStack_34 = 0x20;
        uStack_2c = (uint)bStack_2 * 0x800;
        uStack_4c = uStack_4c + uStack_2c;
        do {
          uStack_30 = 4;
          do {
            sysMemReadB(&bStack_3,uStack_4c);
            uStack_54 = (uint)bStack_3;
            sysMemWriteS(uStack_50,&uStack_54);
            uStack_50 = uStack_50 + iStack_40;
            uStack_4c = uStack_4c + iStack_3c;
            sysMemReadB(&bStack_4,uStack_4c);
            uStack_54 = (uint)bStack_4;
            sysMemWriteS(uStack_50,&uStack_54);
            uStack_50 = uStack_50 + iStack_40;
            uStack_4c = uStack_4c + iStack_3c;
            sysMemReadB(&bStack_5,uStack_4c);
            uStack_54 = (uint)bStack_5;
            sysMemWriteS(uStack_50,&uStack_54);
            uStack_50 = uStack_50 + iStack_40;
            uStack_4c = uStack_4c + iStack_3c;
            sysMemReadB(&bStack_6,uStack_4c);
            uStack_54 = (uint)bStack_6;
            sysMemWriteS(uStack_50,&uStack_54);
            uStack_50 = uStack_50 + iStack_40;
            uStack_4c = uStack_4c + iStack_3c;
            sysMemReadB(&bStack_7,uStack_4c);
            uStack_54 = (uint)bStack_7;
            sysMemWriteS(uStack_50,&uStack_54);
            uStack_50 = uStack_50 + iStack_40;
            uStack_4c = uStack_4c + iStack_3c;
            sysMemReadB(&bStack_8,uStack_4c);
            uStack_54 = (uint)bStack_8;
            sysMemWriteS(uStack_50,&uStack_54);
            uStack_50 = uStack_50 + iStack_40;
            uStack_4c = uStack_4c + iStack_3c;
            sysMemReadB(&bStack_9,uStack_4c);
            uStack_54 = (uint)bStack_9;
            sysMemWriteS(uStack_50,&uStack_54);
            uStack_50 = uStack_50 + iStack_40;
            uStack_4c = uStack_4c + iStack_3c;
            sysMemReadB(&bStack_a,uStack_4c);
            uStack_54 = (uint)bStack_a;
            sysMemWriteS(uStack_50,&uStack_54);
            uStack_50 = uStack_50 + iStack_40;
            uStack_4c = uStack_4c + iStack_3c;
            sysMemReadB(&bStack_b,uStack_4c);
            uStack_54 = (uint)bStack_b;
            sysMemWriteS(uStack_50,&uStack_54);
            uStack_50 = uStack_50 + iStack_40;
            uStack_4c = uStack_4c + iStack_3c;
            sysMemReadB(&bStack_c,uStack_4c);
            uStack_54 = (uint)bStack_c;
            sysMemWriteS(uStack_50,&uStack_54);
            uStack_50 = uStack_50 + iStack_40;
            uStack_4c = uStack_4c + iStack_3c;
            sysMemReadB(&bStack_d,uStack_4c);
            uStack_54 = (uint)bStack_d;
            sysMemWriteS(uStack_50,&uStack_54);
            uStack_50 = uStack_50 + iStack_40;
            uStack_4c = uStack_4c + iStack_3c;
            sysMemReadB(&bStack_e,uStack_4c);
            uStack_54 = (uint)bStack_e;
            sysMemWriteS(uStack_50,&uStack_54);
            uStack_50 = uStack_50 + iStack_40;
            uStack_4c = uStack_4c + iStack_3c;
            sysMemReadB(&bStack_f,uStack_4c);
            uStack_54 = (uint)bStack_f;
            sysMemWriteS(uStack_50,&uStack_54);
            uStack_50 = uStack_50 + iStack_40;
            uStack_4c = uStack_4c + iStack_3c;
            sysMemReadB(&bStack_10,uStack_4c);
            uStack_54 = (uint)bStack_10;
            sysMemWriteS(uStack_50,&uStack_54);
            uStack_50 = uStack_50 + iStack_40;
            uStack_4c = uStack_4c + iStack_3c;
            sysMemReadB(&bStack_11,uStack_4c);
            uStack_54 = (uint)bStack_11;
            sysMemWriteS(uStack_50,&uStack_54);
            uStack_50 = uStack_50 + iStack_40;
            uStack_4c = uStack_4c + iStack_3c;
            sysMemReadB(&bStack_12,uStack_4c);
            uStack_54 = (uint)bStack_12;
            sysMemWriteS(uStack_50,&uStack_54);
            uStack_50 = uStack_50 + iStack_40;
            uStack_4c = uStack_4c + iStack_3c;
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
          uStack_50 = uStack_50 + iStack_44;
          if (uStack_34 < 2) {
            if (uStack_34 == 1) {
              uStack_20 = 2;
            }
            else {
              uStack_20 = 1;
            }
          }
          else {
            uStack_20 = 4;
          }
          uStack_34 = uStack_34 - 1;
        } while ((uStack_20 & 4) != 0);
      }
      uStack_54 = uRam01727dd4 + 1;
      if (uStack_54 < 5) {
        if (uStack_54 == 4) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 1;
        }
      }
      else {
        uStack_20 = 4;
      }
      if ((uStack_20 & 1) == 0) {
        uStack_54 = 0;
        uStack_50 = uRam01727de0 + 4;
        sysMemReadB(&bStack_13,uStack_50);
        uStack_4c = (uint)bStack_13;
        iStack_3c = 0xff;
        if (uStack_4c < 0xff) {
          uStack_20 = 4;
        }
        else if (uStack_4c == 0xff) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 1;
        }
        if ((uStack_20 & 5) == 0) {
          uStack_50 = 0xf6c;
        }
        uRam01727de0 = uStack_50;
      }
      uRam01727dd4 = uStack_54;
    }
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

