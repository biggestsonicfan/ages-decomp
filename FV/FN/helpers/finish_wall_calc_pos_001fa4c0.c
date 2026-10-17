/* helper finish_wall_calc_pos @ 001fa4c0, called (depth 2) from coli_cont_cop */

undefined8 finish_wall_calc_pos(long param_1)

{
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_14;
  uint uStack_10;
  
  i960GetRegs();
  finish_coli_pos_get(auStack_50);
  fStack_38 = (float)((ulong)((long)(int)uStack_40 << 0x21) >> 0x21);
  fStack_34 = (float)((ulong)((long)(int)uStack_3c << 0x21) >> 0x21);
  if (fStack_34 <= fStack_38) {
    if (fStack_38 == fStack_34) {
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
    if ((uStack_3c & 0x80000000) == 0) {
      uRam0172add0 = uStack_40;
      uRam0172add4 = uRam0172add4 | 1;
      if (param_1 != 0) {
        uStack_14 = uRam0172add4;
        i960ReturnProc();
      }
    }
    else {
      uRam0172add0 = uStack_40 ^ 0x80000000;
      uRam0172add4 = uRam0172add4 | 4;
      if (param_1 != 0) {
        uStack_40 = uRam0172add0;
        uStack_14 = uRam0172add4;
        i960ReturnProc();
      }
    }
  }
  else if ((uStack_40 & 0x80000000) == 0) {
    uRam0172add0 = uStack_3c ^ 0x80000000;
    uRam0172add4 = uRam0172add4 | 8;
    if (param_1 != 0) {
      uStack_3c = uRam0172add0;
      uStack_14 = uRam0172add4;
      i960ReturnProc();
    }
  }
  else {
    uRam0172add0 = uStack_3c;
    uRam0172add4 = uRam0172add4 | 2;
    if (param_1 != 0) {
      uStack_14 = uRam0172add4;
      i960ReturnProc();
    }
  }
  return 0;
}

