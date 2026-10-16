/* EXT 8b: dsp_char_2x3 @ 001cb4c0; patched over i960 006b34 (arcade dsp_char_2x3) */

/* WARNING: Removing unreachable block (ram,0x001cb58c) */

undefined8 dsp_char_2x3(long param_1)

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
  uint uStack_14;
  uint uStack_10;
  ushort uStack_8;
  ushort uStack_6;
  ushort uStack_4;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  uStack_24 = 0xd;
  sysMemReadW(&uStack_24,0x6450334);
  sysMemReadS(&uStack_4,uStack_24);
  sysMemReadS(&uStack_6,uStack_24 + 2);
  uStack_24 = uStack_24 + 0xc;
  uStack_14 = (uint)uStack_6;
  if (uStack_6 == 0) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 4;
  }
  sysMemReadB(&bStack_1,piVar1->g[0] + 0x6ce023c);
  uStack_34 = 3;
  uStack_20 = (uint)bStack_1;
  uVar2 = (uint)(bStack_1 >> 3);
  iStack_1c = uVar2 * 0x20;
  iStack_18 = ((uint)bStack_1 + uVar2 * -8) * 4;
  uStack_14 = uVar2 * 0x60 + iStack_18;
  uStack_38 = uStack_24 + uStack_14;
  do {
    uStack_30 = 2;
    uVar2 = uStack_38;
    do {
      uStack_38 = uVar2;
      sysMemReadS(&uStack_8,uStack_38);
      uStack_14 = (uint)uStack_8 + (uint)uStack_4;
      sysMemWriteS(piVar1->g[9],&uStack_14);
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

