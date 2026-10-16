/* EXT 6d: rob_kabe_kage_disp @ 001cc540; patched over i960 076944 (arcade rob_kabe_kage_disp) */

/* WARNING: Removing unreachable block (ram,0x001cc5dc) */

undefined8 rob_kabe_kage_disp(long param_1)

{
  i960_regs *piVar1;
  uint uStack_20;
  uint uStack_14;
  uint uStack_10;
  ushort uStack_4;
  ushort uStack_2;
  
  piVar1 = i960GetRegs();
  uStack_20 = (uint)bRam016b6e34 * 0xc + 0x6442ba8;
  sysMemReadW(piVar1->g + 1,uStack_20);
  if ((piVar1->g[1] & 0x80000000) != 0) {
    if ((piVar1->g[1] & 0x80) != 0) {
      uStack_20 = uRam0172add4 & 0xf;
      if (uStack_20 == 0) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 4;
      }
      if ((uStack_10 & 5) != 0) goto LAB_001cc754;
    }
    sysMemReadW(&uStack_14,uStack_20 + 4);
    if ((piVar1->g[1] & 0x20) == 0) {
      uStack_14 = uRam016c0ddc;
    }
    uRam016c11d0 = uStack_14;
    sysMemReadS(&uStack_2,uStack_20 + 8);
    uRam016c11cc = uStack_2;
    uStack_14 = (uint)(short)uStack_2;
    if ((piVar1->g[1] & 0x10) == 0) {
      sysMemReadS(&uStack_4,iRam016b75e4 + 0x26);
      uRam016c11cc = uStack_4;
      uStack_14 = (uint)(short)uStack_4;
    }
    if (uRam016c11cc < 0x4001) {
      if (uRam016c11cc == 0x4000) {
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
      if (uRam016c11cc < 0xc001) {
        if (uRam016c11cc == 0xc000) {
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
        uRam016c11cc = 0xc001;
        uStack_14 = 0xc001;
      }
    }
    else {
      uRam016c11cc = 0x4001;
      uStack_14 = 0x4001;
    }
    rob_kabe_set_matrix(0);
    piVar1->g[6] = 0;
    uStack_14 = uRam016c11c8;
    if ((uRam016c11c8 & 2) == 0) {
      piVar1->g[5] = 6;
      FUN_001cddc0(0);
    }
    uStack_14 = uRam016c11c8;
    if ((uRam016c11c8 & 1) == 0) {
      piVar1->g[6] = piVar1->g[6] | 0x80000000;
      piVar1->g[5] = 4;
      FUN_001cddc0(0);
    }
    rob_kage_disp_kabe(0);
  }
LAB_001cc754:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

