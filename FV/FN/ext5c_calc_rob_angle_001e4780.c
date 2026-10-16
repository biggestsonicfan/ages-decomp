/* EXT 5c: calc_rob_angle @ 001e4780; patched over i960 02aa84 (arcade calc_rob_angle) */

undefined8 calc_rob_angle(long param_1)

{
  i960_regs *piVar1;
  int iStack_10;
  ushort uStack_8;
  ushort uStack_6;
  ushort uStack_4;
  ushort uStack_2;
  
  piVar1 = i960GetRegs();
  sysMemReadS(&uStack_2,piVar1->g[7] + 0x1aa);
  if (uStack_2 < 2) {
    if (uStack_2 == 1) {
      iStack_10 = 0;
    }
    else {
      iStack_10 = 1;
    }
  }
  else {
    iStack_10 = 4;
  }
  if (iStack_10 == 0) {
    sysMemReadS(&uStack_4,piVar1->g[7] + 0xc4e);
    if (uStack_4 < 2) {
      if (uStack_4 == 1) {
        iStack_10 = 0;
      }
      else {
        iStack_10 = 1;
      }
    }
    else {
      iStack_10 = 4;
    }
    if (iStack_10 == 0) {
      sysMemReadS(&uStack_6,piVar1->g[7] + 0xc4c);
      sysMemReadS(&uStack_8,piVar1->g[7] + 0x1a8);
      if (uStack_8 < uStack_6) {
        iStack_10 = 4;
      }
      else if (uStack_8 == uStack_6) {
        iStack_10 = 0;
      }
      else {
        iStack_10 = 1;
      }
      if (iStack_10 == 0) {
        if (param_1 == 0) {
          return 0;
        }
        i960ReturnProc();
        return 0;
      }
    }
  }
  get_frame_dat(0);
  calc_rob_angle_cont(param_1);
  return 0;
}

