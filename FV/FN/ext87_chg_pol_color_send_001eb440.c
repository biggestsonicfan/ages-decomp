/* EXT 87: chg_pol_color_send @ 001eb440; patched over i960 004060 (arcade chg_pol_color_send) */

/* WARNING: Removing unreachable block (ram,0x001eb4a0) */

undefined8 chg_pol_color_send(long param_1)

{
  int iVar1;
  uint uStack_44;
  int iStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  uint uStack_10;
  ushort uStack_6;
  ushort uStack_4;
  ushort uStack_2;
  
  i960GetRegs();
  uStack_44 = uRam016fcdd0;
  if (uRam016fcdd0 == 0) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 2) == 0) {
    uStack_3c = uRam016fcdd4;
    uStack_28 = uRam016fcdd4 * 0x120 + 0x546008;
    uStack_44 = uRam016fcdd4 * 0x200;
    iStack_40 = uStack_44 + 0x1800000;
    iStack_2c = 9;
    uStack_24 = 0x1b0;
    uStack_20 = 0x1d00;
    uStack_1c = 0xe8;
    do {
      uStack_38 = 0;
      uRam016fcdd4 = uStack_3c;
      iVar1 = iStack_40;
      do {
        iStack_40 = iVar1;
        sysMemReadS(&uStack_2,uStack_28);
        uStack_44 = (uint)uStack_2;
        uStack_28 = uStack_28 + 2;
        sysMemWriteS(iStack_40 + 0x10000,&uStack_44);
        sysMemReadS(&uStack_4,uStack_28);
        uStack_44 = (uint)uStack_4;
        uStack_28 = uStack_28 + 2;
        sysMemWriteS(iStack_40 + 0x14000,&uStack_44);
        sysMemReadS(&uStack_6,uStack_28);
        uStack_44 = (uint)uStack_6;
        uStack_28 = uStack_28 + 2;
        sysMemWriteS(iStack_40 + 0x18000,&uStack_44);
        uStack_38 = uStack_38 + iStack_2c;
        if (uStack_38 < uStack_24) {
          uStack_10 = 4;
        }
        else if (uStack_38 == uStack_24) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
        iVar1 = iStack_40 + 2;
      } while ((uStack_10 & 4) != 0);
      uStack_38 = 0x1a0;
      iStack_40 = iStack_40 + 0x1a2;
      if (uStack_3c < 0x1c) {
        if (uStack_3c == 0x1b) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
      }
      else {
        uStack_10 = 4;
      }
      uRam016fcdd4 = uStack_3c + 1;
      uStack_3c = uRam016fcdd4;
    } while ((uStack_10 & 2) == 0);
    uStack_14 = 0;
    uRam016fcdd0 = 0;
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

