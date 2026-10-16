/* EXT 8a: clr_pattern_s @ 001cb7c0; patched over i960 0066dc (arcade clr_pattern_s) */

undefined8 clr_pattern_s(long param_1)

{
  i960_regs *piVar1;
  undefined4 auStack_44 [3];
  uint uStack_38;
  uint uStack_34;
  uint uStack_10;
  
  piVar1 = i960GetRegs();
  auStack_44[0] = 0x20;
  do {
    uStack_38 = piVar1->g[9];
    uStack_34 = piVar1->g[0];
    do {
      sysMemWriteS(uStack_38,auStack_44);
      uStack_38 = uStack_38 + 2;
      if (uStack_34 < 2) {
        if (uStack_34 == 1) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
      }
      else {
        uStack_10 = 4;
      }
      uStack_34 = uStack_34 - 1;
    } while ((uStack_10 & 4) != 0);
    piVar1->g[9] = piVar1->g[9] + 0x80;
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
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

