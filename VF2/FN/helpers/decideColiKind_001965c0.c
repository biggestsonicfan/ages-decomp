/* helper decideColiKind @ 001965c0, called (depth 1) from sysCopPatchColiContFast */

void decideColiKind(void)

{
  uint uVar1;
  i960_regs *piVar2;
  int iVar3;
  long lVar4;
  undefined1 auStack_40 [28];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_8;
  uint uStack_4;
  
  piVar2 = i960GetRegs();
  iVar3 = sysGetWorkRamAddr();
  piVar2->g[7] = *(uint *)(iVar3 + 0x804);
  piVar2->g[8] = *(uint *)(iVar3 + 0x808);
  sysMemReadW(&uStack_24,piVar2->g[7] + 0x1a4);
  sysMemReadW(&uStack_20,piVar2->g[8] + 0x1a4);
  uStack_1c = uStack_20 | uStack_24;
  uStack_18 = uStack_20 & uStack_24;
  uStack_14 = uStack_20 ^ uStack_24;
  piVar2->g[6] = 0;
  lVar4 = dckSpecialCheck(auStack_40);
  if (lVar4 != 0) {
    if ((uStack_1c & 0x40000) == 0) {
      if ((uStack_14 & 0x100) == 0) {
        if ((uStack_18 & 0x100) != 0) {
          piVar2->g[6] = piVar2->g[6] | 4;
        }
      }
      else {
        uStack_8 = 0x29;
        sysMemReadB(&uStack_4,piVar2->g[7] + 0x820);
        uStack_4 = uStack_4 & 0xff;
        if (uStack_8 != uStack_4) {
          sysMemReadB(&uStack_4,piVar2->g[8] + 0x820);
          uStack_4 = uStack_4 & 0xff;
          if (uStack_8 != uStack_4) {
            piVar2->g[6] = piVar2->g[6] | 2;
          }
        }
      }
    }
    else {
      piVar2->g[6] = piVar2->g[6] | 1;
    }
  }
  if ((uStack_1c & 0x4000) != 0) {
    piVar2->g[6] = piVar2->g[6] | 8;
  }
  uStack_10 = 0x232c4;
  uVar1 = piVar2->g[6];
  if (((uVar1 & 1) == 0) && ((uVar1 & 4) == 0)) {
    if ((uStack_24 & 0x10000) == 0) {
      if ((uStack_20 & 0x10000) == 0) {
        if ((uVar1 & 2) != 0) {
          if ((uStack_24 & 0x100) == 0) {
            uStack_10 = 0x23324;
          }
          else {
            uStack_10 = 0x2330c;
          }
        }
        goto LAB_001968c0;
      }
      if (((uStack_20 & 0x8000) == 0) && ((uStack_24 & 0x400000) != 0)) {
        sysMemReadW(&uStack_4,piVar2->g[7] + 0x804);
        if (((uStack_4 & 0x1000) != 0) || ((uStack_4 & 0x10) != 0)) {
          uStack_10 = 0x23354;
          goto LAB_001968c0;
        }
      }
    }
    else if (((uStack_24 & 0x8000) == 0) && ((uStack_20 & 0x400000) != 0)) {
      sysMemReadW(&uStack_4,piVar2->g[8] + 0x804);
      if (((uStack_4 & 0x1000) != 0) || ((uStack_4 & 0x10) != 0)) {
        uStack_10 = 0x2333c;
        goto LAB_001968c0;
      }
    }
    if ((uStack_24 & 0x10000) == 0) {
      uStack_10 = 0x232f4;
    }
    else if ((uStack_20 & 0x10000) == 0) {
      uStack_10 = 0x232dc;
    }
  }
LAB_001968c0:
  sysMemReadW(&uStack_4,uStack_10);
  sysMemWriteW(piVar2->g[0xd] + 0xb4,&uStack_4);
  sysMemReadW(&uStack_4,uStack_10 + 4);
  sysMemWriteW(piVar2->g[0xd] + 0xb8,&uStack_4);
  sysMemReadW(&uStack_4,uStack_10 + 8);
  sysMemWriteW(piVar2->g[0xd] + 0xc0,&uStack_4);
  sysMemReadW(&uStack_4,uStack_10 + 0xc);
  sysMemWriteW(piVar2->g[0xd] + 0xc4,&uStack_4);
  sysMemReadW(&uStack_4,uStack_10 + 0x10);
  sysMemWriteW(piVar2->g[0xd] + 0xbc,&uStack_4);
  sysMemReadW(&uStack_4,uStack_10 + 0x14);
  sysMemWriteW(piVar2->g[0xd] + 0x88,&uStack_4);
  return;
}

