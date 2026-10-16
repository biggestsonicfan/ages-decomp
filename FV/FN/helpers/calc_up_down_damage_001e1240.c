/* helper calc_up_down_damage @ 001e1240, called (depth 1) from kabe_parts_damage */

undefined8 calc_up_down_damage(long param_1)

{
  i960_regs *piVar1;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint auStack_20 [3];
  uint uStack_14;
  uint uStack_10;
  ushort uStack_2;
  
  piVar1 = i960GetRegs();
  sysMemReadW(&uStack_14,piVar1->g[7] + 0x1f74);
  sysMemWriteW(piVar1->g[7] + 0x1f7c,&uStack_14);
  sysMemReadW(&uStack_14,piVar1->g[7] + 0x1f78);
  sysMemWriteW(piVar1->g[7] + 0x1f80,&uStack_14);
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  do {
    sysMemReadS(&uStack_2,piVar1->g[7] + 0x1f00 + uStack_28 * 2);
    if (uStack_28 < 10) {
      if (uStack_28 == 9) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 0;
      }
    }
    else {
      uStack_10 = 4;
    }
    if (uStack_10 == 0) {
      uStack_30 = uStack_30 + uStack_2;
    }
    else {
      uStack_2c = uStack_2c + uStack_2;
    }
    uStack_28 = uStack_28 + 1;
    if (uStack_28 < 0x11) {
      if (uStack_28 == 0x10) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
  } while ((uStack_10 & 5) != 0);
  sysMemWriteW(piVar1->g[7] + 0x1f74,&uStack_30);
  sysMemWriteW(piVar1->g[7] + 0x1f78,&uStack_2c);
  sysMemReadW(&uStack_14,piVar1->g[7] + 0x7f4);
  if ((uStack_14 & 4) == 0) {
    sysMemReadW(auStack_20,piVar1->g[7] + 0xaf0);
    if (uStack_30 < auStack_20[0]) {
      uStack_10 = 4;
    }
    else if (uStack_30 == auStack_20[0]) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 1;
    }
    if ((uStack_10 & 4) == 0) {
      sysMemReadW(&uStack_14,piVar1->g[7] + 0x7f4);
      uStack_14 = uStack_14 | 1;
      sysMemWriteW(piVar1->g[7] + 0x7f4,&uStack_14);
    }
  }
  sysMemReadW(&uStack_14,piVar1->g[7] + 0x7f4);
  if ((uStack_14 & 8) == 0) {
    sysMemReadW(auStack_20,piVar1->g[7] + 0xaf4);
    if (uStack_2c < auStack_20[0]) {
      uStack_10 = 4;
    }
    else if (uStack_2c == auStack_20[0]) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 1;
    }
    if ((uStack_10 & 4) == 0) {
      sysMemReadW(&uStack_14,piVar1->g[7] + 0x7f4);
      uStack_14 = uStack_14 | 2;
      sysMemWriteW(piVar1->g[7] + 0x7f4,&uStack_14);
    }
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

