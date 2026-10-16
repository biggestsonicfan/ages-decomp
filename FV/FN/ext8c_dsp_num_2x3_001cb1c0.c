/* EXT 8c: dsp_num_2x3 @ 001cb1c0; patched over i960 006bd8 (arcade dsp_num_2x3) */

/* WARNING: Removing unreachable block (ram,0x001cb28c) */

undefined8 dsp_num_2x3(long param_1)

{
  i960_regs *piVar1;
  uint uVar2;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  uint uStack_10;
  ushort uStack_6;
  short sStack_4;
  ushort uStack_2;
  
  piVar1 = i960GetRegs();
  uStack_24 = 0xd;
  sysMemReadW(&uStack_24,0x6450334);
  sysMemReadS(&uStack_2,uStack_24);
  sysMemReadS(&sStack_4,uStack_24 + 2);
  uStack_24 = uStack_24 + 0xc;
  if (sStack_4 == 0) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 4;
  }
  uStack_20 = piVar1->g[0] + 0x28;
  uStack_34 = 3;
  uVar2 = uStack_20 >> 3;
  iStack_1c = uVar2 * 0x20;
  iStack_18 = (uStack_20 + uVar2 * -8) * 4;
  iStack_14 = uVar2 * 0x60 + iStack_18;
  uStack_38 = uStack_24 + iStack_14;
  do {
    uStack_30 = 2;
    uVar2 = uStack_38;
    do {
      uStack_38 = uVar2;
      sysMemReadS(&uStack_6,uStack_38);
      iStack_14 = (uint)uStack_6 + (uint)uStack_2;
      sysMemWriteS(piVar1->g[9],&iStack_14);
      piVar1->g[9] = piVar1->g[9] + 2;
      if (uStack_30 < 2) {
        if (uStack_30 == 1) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
      }
      else {
        uStack_10 = 4;
      }
      uStack_30 = uStack_30 - 1;
      uVar2 = uStack_38 + 2;
    } while ((uStack_10 & 4) != 0);
    uStack_38 = uStack_38 + 0x1e;
    piVar1->g[9] = piVar1->g[9] + 0x80;
    piVar1->g[9] = piVar1->g[9] - 4;
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
  piVar1->g[9] = piVar1->g[9] - 0x80;
  piVar1->g[9] = piVar1->g[9] - 0x80;
  piVar1->g[9] = piVar1->g[9] - 0x80;
  piVar1->g[9] = piVar1->g[9] + 4;
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

