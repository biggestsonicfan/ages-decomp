/* helper osage_copro @ 001fe0c0, called (depth 1) from osage_dsp */

/* WARNING: Removing unreachable block (ram,0x001fe198) */

undefined8 osage_copro(long param_1)

{
  i960_regs *piVar1;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_14;
  uint uStack_10;
  
  piVar1 = i960GetRegs();
  sysMemReadW(&iStack_44,piVar1->g[0xd] + 0x4c);
  uStack_14 = 0x25004a4a;
  FUN_0018df40();
  FUN_0018df40(iStack_44);
  sysMemReadW(piVar1->g + 9,piVar1->g[0xd] + 0x44);
  sysMemReadW(piVar1->g + 8,piVar1->g[0xd] + 0x48);
  while( true ) {
    iStack_44 = FUN_0018e100();
    sysMemReadW(&iStack_44,piVar1->g[9]);
    piVar1->g[9] = piVar1->g[9] + 4;
    piVar1->g[8] = piVar1->g[8] + 4;
    if (iStack_44 == 0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 2) != 0) break;
    switch(iStack_44) {
    case 5:
      os_set_osage_after(0);
    }
    sysMemReadL(&iStack_40,iStack_44 * 8 + 0x62734);
    piVar1->g[9] = piVar1->g[9] + iStack_40;
    piVar1->g[8] = piVar1->g[8] + iStack_3c;
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

