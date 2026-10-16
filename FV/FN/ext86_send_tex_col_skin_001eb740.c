/* EXT 86: send_tex_col_skin @ 001eb740; patched over i960 0008f4 (arcade send_tex_col_skin) */

/* WARNING: Removing unreachable block (ram,0x001eb7ac) */

undefined8 send_tex_col_skin(int param_1)

{
  int iVar1;
  i960_regs *piVar2;
  int iVar3;
  int iStack_40;
  uint uStack_3c;
  uint auStack_28 [4];
  uint uStack_18;
  uint uStack_10;
  ushort uStack_8;
  ushort uStack_6;
  ushort uStack_4;
  byte bStack_1;
  
  piVar2 = i960GetRegs();
  piVar2->g[2] = 0;
  piVar2->g[3] = uRam016b75d4;
  if (piVar2->g[0] == 0) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 2) == 0) {
    piVar2->g[0] = 0x400;
    piVar2->g[3] = uRam016b75d8;
  }
  sysMemReadB(&bStack_1,piVar2->g[3] + 0x1b0);
  uStack_18 = (uint)bStack_1;
  if (bStack_1 < 0xe) {
    if (bStack_1 == 0xd) {
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
    piVar2->g[2] = 0x2400;
    piVar2->g[1] = piVar2->g[1] - 0xd;
  }
  uStack_3c = 0;
  iStack_40 = piVar2->g[0] + 0x1803800;
  do {
    iVar3 = piVar2->g[2] + piVar2->g[1] * 0x300 + uStack_3c * 0x180;
    piVar2->g[0] = 0;
    iVar1 = iStack_40;
    do {
      iStack_40 = iVar1;
      sysMemReadS(&uStack_4,iVar3 + 0x2101000 + piVar2->g[0] * 2);
      auStack_28[0] = (uint)*(ushort *)((uint)uStack_4 * 2 + 0x16fadd0);
      sysMemWriteS(iStack_40 + 0x10000,auStack_28);
      sysMemReadS(&uStack_6,iVar3 + 0x2101080 + piVar2->g[0] * 2);
      auStack_28[0] = (uint)*(ushort *)((uint)uStack_6 * 2 + 0x16fafd0);
      sysMemWriteS(iStack_40 + 0x14000,auStack_28);
      sysMemReadS(&uStack_8,iVar3 + 0x2101100 + piVar2->g[0] * 2);
      auStack_28[0] = (uint)*(ushort *)((uint)uStack_8 * 2 + 0x16fb1d0);
      sysMemWriteS(iStack_40 + 0x18000,auStack_28);
      if (piVar2->g[0] < 0x40) {
        if (piVar2->g[0] == 0x3f) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
      }
      else {
        uStack_10 = 4;
      }
      piVar2->g[0] = piVar2->g[0] + 1;
      iVar1 = iStack_40 + 2;
    } while ((uStack_10 & 1) != 0);
    iStack_40 = iStack_40 + 0x182;
    if (uStack_3c < 2) {
      if (uStack_3c == 1) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    uStack_3c = uStack_3c + 1;
  } while ((uStack_10 & 1) != 0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

