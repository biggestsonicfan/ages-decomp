/* helper FUN_001e8980 @ 001e8980, called (depth 2) from play_motion */

undefined8 FUN_001e8980(long param_1)

{
  i960_regs *piVar1;
  undefined4 uStack_44;
  int aiStack_40 [2];
  uint uStack_38;
  uint uStack_24;
  uint uStack_20;
  float fStack_1c;
  undefined1 auStack_18 [4];
  uint uStack_14;
  uint uStack_10;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadW(aiStack_40,piVar1->g[7] + 0xbd8);
  piVar1->g[4] = aiStack_40[0] + 0x78c;
  sysMemReadW(piVar1->g + 3,aiStack_40[0] + 0x784);
  sysMemReadW(piVar1->g + 2,aiStack_40[0] + 0x780);
  piVar1->g[1] = 0x3c;
  do {
    sysMemReadB(&bStack_1,piVar1->g[4]);
    uStack_38 = (uint)bStack_1;
    if (bStack_1 < 5) {
      if (bStack_1 == 4) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 2) == 0) {
      if ((uStack_10 & 1) == 0) {
        sysMemReadB(&bStack_2,piVar1->g[3]);
        uStack_24 = (uint)bStack_2;
        piVar1->g[3] = piVar1->g[3] + 1;
        if (uStack_38 < 6) {
          if (uStack_38 == 5) {
            uStack_10 = 2;
          }
          else {
            uStack_10 = 1;
          }
        }
        else {
          uStack_10 = 4;
        }
        if ((uStack_10 & 2) == 0) {
          sysMemReadW(auStack_18,piVar1->g[2]);
          sysMemWriteW(piVar1->g[5],auStack_18);
          aiStack_40[0] = uStack_24 * 0xc;
          piVar1->g[2] = piVar1->g[2] + aiStack_40[0];
        }
        else {
          sysMemReadW(auStack_18,piVar1->g[2]);
          sysMemWriteW(piVar1->g[5],auStack_18);
          aiStack_40[0] = uStack_24 * 4;
          piVar1->g[2] = piVar1->g[2] + aiStack_40[0];
        }
      }
      else {
        if (uStack_38 < 4) {
          if (uStack_38 == 3) {
            uStack_10 = 2;
          }
          else {
            uStack_10 = 1;
          }
        }
        else {
          uStack_10 = 4;
        }
        if ((uStack_10 & 2) == 0) {
          piVar1->g[2] = piVar1->g[2] + 4;
        }
        else {
          uStack_44 = 0;
          sysMemWriteW(piVar1->g[5],&uStack_44);
        }
      }
    }
    else {
      sysMemReadW(&uStack_44,piVar1->g[2]);
      sysMemWriteW(piVar1->g[5],&uStack_44);
      piVar1->g[2] = piVar1->g[2] + 4;
    }
    piVar1->g[4] = piVar1->g[4] + 1;
    piVar1->g[5] = piVar1->g[5] + 4;
    if (piVar1->g[1] < 2) {
      if (piVar1->g[1] == 1) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    piVar1->g[1] = piVar1->g[1] - 1;
  } while ((uStack_10 & 4) != 0);
  uStack_14 = 0xf0;
  piVar1->g[5] = piVar1->g[5] - 0xf0;
  uStack_20 = 0x24;
  do {
    sysMemReadW(&fStack_1c,piVar1->g[5]);
    fStack_1c = (float)(int)fStack_1c;
    sysMemWriteS(piVar1->g[5],&fStack_1c);
    piVar1->g[5] = piVar1->g[5] + 4;
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
  uStack_14 = 0x90;
  piVar1->g[5] = piVar1->g[5] - 0x90;
  sysMemReadW(&uStack_14,piVar1->g[7]);
  if ((uStack_14 & 0x40) == 0) {
    if (param_1 != 0) {
      i960ReturnProc();
    }
  }
  else {
    set_mirror(param_1);
  }
  return 0;
}

