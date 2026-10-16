/* EXT 5a: kabe_parts_damage @ 001e0ec0; patched over i960 0273f4 (arcade kabe_parts_damage) */

undefined8 kabe_parts_damage(long param_1)

{
  uint uVar1;
  i960_regs *piVar2;
  int iStack_30;
  uint uStack_2c;
  int iStack_14;
  uint uStack_10;
  ushort uStack_2;
  
  piVar2 = i960GetRegs();
  uVar1 = piVar2->g[0];
  iStack_30 = 0;
  uStack_2c = 0x10;
  do {
    sysMemReadS(&uStack_2,piVar2->g[7] + 0x1f00 + iStack_30 * 2);
    iStack_14 = (uVar1 >> 2) + (uint)uStack_2;
    sysMemWriteS(piVar2->g[7] + 0x1f00 + iStack_30 * 2,&iStack_14);
    iStack_30 = iStack_30 + 1;
    if (uStack_2c < 2) {
      if (uStack_2c == 1) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    uStack_2c = uStack_2c - 1;
  } while ((uStack_10 & 4) != 0);
  calc_up_down_damage(0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

