/* helper FUN_001db500 @ 001db500, called (depth 1) from play_motion */

undefined8 FUN_001db500(long param_1)

{
  i960_regs *piVar1;
  uint auStack_14 [5];
  
  piVar1 = i960GetRegs();
  sysMemReadW(auStack_14,piVar1->g[7]);
  if ((auStack_14[0] & 2) == 0) {
    if ((piVar1->g[0] & 0x100) == 0) {
      if ((piVar1->g[0] & 0x200) != 0) {
        piVar1->g[0] = piVar1->g[0] ^ 0x280;
      }
    }
    else {
      piVar1->g[0] = piVar1->g[0] ^ 0x140;
    }
  }
  else if ((piVar1->g[0] & 0x100) == 0) {
    if ((piVar1->g[0] & 0x200) != 0) {
      piVar1->g[0] = piVar1->g[0] ^ 0x240;
    }
  }
  else {
    piVar1->g[0] = piVar1->g[0] ^ 0x180;
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

