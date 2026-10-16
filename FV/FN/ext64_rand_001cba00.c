/* EXT 64: rand @ 001cba00; patched over i960 006dc8 (arcade rand) */

undefined8 rand(long param_1)

{
  i960_regs *piVar1;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  piVar1 = i960GetRegs();
  iStack_18 = 0xf00000;
  iStack_14 = uRam016b6e68;
  sysMemReadW(&iStack_1c,0xf00000);
  iStack_1c = iStack_1c * 0x10;
  iStack_14 = iStack_14 + iStack_1c;
  sysMemReadW(&iStack_1c,iStack_18 + 4);
  iStack_1c = iStack_1c * 0x100;
  iStack_14 = iStack_14 + iStack_1c;
  sysMemReadW(&iStack_1c,iStack_18 + 8);
  iStack_1c = iStack_1c * 0x1000;
  iStack_14 = iStack_14 + iStack_1c;
  sysMemReadW(&iStack_1c,iStack_18 + 0xc);
  iStack_1c = iStack_1c * 0x10000;
  uRam016b6e68 = iStack_14 + iStack_1c;
  piVar1->g[0] = uRam016b6e68 >> 4;
  iStack_14 = 0xffff;
  piVar1->g[0] = piVar1->g[0] & 0xffff;
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

