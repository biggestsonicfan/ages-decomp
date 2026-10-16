/* helper FUN_001f5d80 @ 001f5d80, called (depth 1) from tou_disp */

void FUN_001f5d80(uint param_1)

{
  i960_regs *piVar1;
  float afStack_40 [2];
  float fStack_38;
  uint uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint uStack_10;
  
  piVar1 = i960GetRegs();
  piVar1->g[2] = param_1;
  fStack_1c = 6.0;
  fStack_18 = fRam016c0ddc;
  fStack_24 = fRam016c0ddc / 6.0;
  piVar1->g[0] = 0;
  uStack_34 = 0;
  do {
    sysMemReadL(&fStack_30,piVar1->g[2] + uStack_34 * 8);
    sysMemReadT(afStack_40,piVar1->g[0xd] + 0x18);
    fStack_20 = fStack_24 * fStack_30;
    fStack_1c = fStack_24 * fStack_2c;
    afStack_40[0] = afStack_40[0] - fStack_20;
    fStack_38 = fStack_38 - fStack_1c;
    fStack_30 = fStack_2c * fStack_38 + fStack_30 * afStack_40[0];
    if (((uint)fStack_30 & 0x80000000) != 0) {
      piVar1->g[0] = piVar1->g[0] | 1 << (uStack_34 & 0x1f);
    }
    if (uStack_34 < 4) {
      if (uStack_34 == 3) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    uStack_34 = uStack_34 + 1;
    fStack_2c = fStack_2c * fStack_38;
  } while ((uStack_10 & 1) != 0);
  return;
}

