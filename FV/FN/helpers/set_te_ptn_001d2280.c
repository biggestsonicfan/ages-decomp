/* helper set_te_ptn @ 001d2280, called (depth 1) from rob_disp */

undefined8 set_te_ptn(long param_1)

{
  uint uVar1;
  i960_regs *piVar2;
  int iStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  uint uStack_10;
  byte bStack_2;
  byte bStack_1;
  
  piVar2 = i960GetRegs();
  sysMemReadW(&iStack_44,piVar2->g[7] + 0x6ac);
  sysMemReadW(&uStack_40,piVar2->g[7]);
  uStack_3c = 5;
  if ((uStack_40 & 0x40) != 0) {
    uStack_3c = 8;
  }
  iStack_38 = iStack_44;
  uVar1 = piVar2->g[0];
  if ((int)uVar1 < 6) {
    if (uVar1 == 5) {
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
    iStack_38 = iStack_44 + 0x180;
  }
  sysMemReadB(&bStack_1,piVar2->g[7] + 0x6fd);
  uStack_40 = (uint)bStack_1;
  uVar1 = piVar2->g[0];
  if ((int)uStack_3c < (int)uVar1) {
    uStack_10 = 4;
  }
  else if (uStack_3c == uVar1) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 1;
  }
  if ((uStack_10 & 2) == 0) {
    sysMemReadB(&bStack_2,piVar2->g[7] + 0x6f7);
    uStack_40 = (uint)bStack_2;
  }
  uStack_40 = uStack_40 & 0x1f;
  sysMemReadW(piVar2->g + 1,iStack_38 + uStack_40 * 4);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

