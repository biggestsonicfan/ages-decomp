/* EXT 88: ScrollCG_Initialize @ 001eb280; patched over i960 001638 (arcade ScrollCG_Initialize) */

/* WARNING: Removing unreachable block (ram,0x001eb398) */

undefined8 ScrollCG_Initialize(long param_1)

{
  i960_regs *piVar1;
  undefined8 uVar2;
  int iStack_44;
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  uint uStack_28;
  int iStack_24;
  uint uStack_10;
  
  piVar1 = i960GetRegs();
  piVar1->g[2] = 0;
  iStack_44 = 0x80;
  sysMemReadW(&uStack_40,piVar1->g[0]);
  iStack_24 = piVar1->g[3] * 0x20;
  uStack_34 = 2;
  iStack_3c = piVar1->g[1] + iStack_24;
  iStack_38 = piVar1->g[0] + 4 + iStack_24;
  uStack_28 = piVar1->g[3] + 0x80;
  if (uStack_28 < uStack_40) {
    uStack_10 = 4;
  }
  else if (uStack_28 == uStack_40) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 1;
  }
  if ((uStack_10 & 4) == 0) {
    iStack_44 = uStack_40 - piVar1->g[3];
    piVar1->g[2] = 1;
    if (iStack_44 == 0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 2) != 0) goto LAB_001eb3e4;
  }
  piVar1->g[3] = piVar1->g[3] + iStack_44;
  uVar2 = FUN_001b8fc0(iStack_38,2);
  FUN_00184a40(iStack_3c,uVar2,iStack_44 << 4);
LAB_001eb3e4:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

