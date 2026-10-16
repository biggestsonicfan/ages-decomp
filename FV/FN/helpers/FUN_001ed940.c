/* helper FUN_001ed940 @ 001ed940, called (depth 1) from tex_move_poly */

/* WARNING: Removing unreachable block (ram,0x001ed9dc) */

undefined8 FUN_001ed940(int param_1)

{
  i960_regs *piVar1;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  uint uStack_10;
  ushort uStack_6;
  ushort uStack_4;
  ushort uStack_2;
  
  piVar1 = i960GetRegs();
  iStack_24 = iRam016c4dd8;
  uStack_2c = 0x50e200;
  uStack_28 = 0x50e100;
  uStack_1c = 0x50e300;
  uStack_3c = uRam016c4dd4;
  if (uRam016c4dd4 == 0) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 2) == 0) {
    iStack_38 = 0x805000;
    sysMemWriteW(0x50e200,&iStack_38);
    uStack_2c = uStack_2c + 4;
    uRam016c5dcc = piVar1->g[0xe];
    piVar1->g[0xe] = 0x404;
    sysMemWriteW(piVar1->g[10] + 0x40,piVar1->g + 0xe);
    piVar1->g[0xe] = uRam016c5dcc;
    sysMemWriteW(piVar1->g[10] + piVar1->g[0xc],&iStack_38);
    iStack_14 = iStack_24 << 1;
    sysMemWriteW(piVar1->g[10] + piVar1->g[0xc],&iStack_14);
    do {
      sysMemReadW(&iStack_18,uStack_1c);
      sysMemReadW(&uStack_34,uStack_28);
      sysMemReadS(&uStack_2,uStack_34 + 6);
      uStack_30 = (uint)uStack_2;
      sysMemReadW(&uStack_34,uStack_34);
      uStack_44 = uStack_30 * 2;
      iStack_38 = iStack_38 + uStack_44;
      sysMemWriteW(uStack_2c,&iStack_38);
      do {
        sysMemReadS(&uStack_4,uStack_34);
        uStack_44 = (uint)uStack_4;
        sysMemReadS(&uStack_6,uStack_34 + 2);
        uStack_44 = uStack_44 + iStack_18;
        uStack_40 = (uint)uStack_6;
        sysMemWriteW(piVar1->g[10] + piVar1->g[0xc],&uStack_44);
        sysMemWriteW(piVar1->g[10] + piVar1->g[0xc],&uStack_40);
        uStack_34 = uStack_34 + 4;
        if (uStack_30 < 2) {
          if (uStack_30 == 1) {
            uStack_10 = 2;
          }
          else {
            uStack_10 = 1;
          }
        }
        else {
          uStack_10 = 4;
        }
        uStack_30 = uStack_30 - 1;
      } while ((uStack_10 & 4) != 0);
      uStack_28 = uStack_28 + 4;
      uStack_1c = uStack_1c + 4;
      uStack_2c = uStack_2c + 4;
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
      uStack_3c = uStack_3c - 1;
    } while ((uStack_10 & 4) != 0);
    uStack_44 = 0;
    uRam016c5dcc = piVar1->g[0xe];
    piVar1->g[0xe] = 0x1010;
    sysMemWriteW(piVar1->g[10] + 0x100,piVar1->g + 0xe);
    piVar1->g[0xe] = uRam016c5dcc;
    sysMemWriteW(piVar1->g[10] + piVar1->g[0xc],&uStack_44);
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

