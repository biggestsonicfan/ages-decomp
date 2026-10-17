/* helper os_set_osage @ 001fc380, called (depth 1) from osage_dsp */

/* WARNING: Removing unreachable block (ram,0x001fc45c) */

undefined8 os_set_osage(long param_1)

{
  i960_regs *piVar1;
  uint uVar2;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_20 [12];
  uint uStack_14;
  uint uStack_10;
  
  piVar1 = i960GetRegs();
  sysMemReadW(&uStack_14,piVar1->g[0xd]);
  if ((uStack_14 & 1) == 0) {
    sysMemReadW(&uStack_14,piVar1->g[0xd]);
    sysMemReadW(&iStack_44,piVar1->g[0xd] + 0x144);
    if ((uStack_14 & 0x80) == 0) {
      if ((uStack_14 & 2) == 0) {
        sysMemReadT(&uStack_40,piVar1->g[9] + 0x28);
      }
      else {
        sysMemReadT(&uStack_40,piVar1->g[9] + 0x34);
      }
      if (iStack_44 == 0) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 4;
      }
      if ((uStack_10 & 2) == 0) {
        uStack_14 = 0x2f005e5e;
        FUN_0018df40();
        FUN_0018df40(iStack_44);
        FUN_0018df40(uStack_40);
        FUN_0018df40(uStack_3c);
        FUN_0018df40(uStack_38);
        uStack_40 = FUN_0018e100();
        uStack_3c = FUN_0018e100();
        uStack_38 = FUN_0018e100();
      }
    }
    else {
      uStack_3c = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    sysMemWriteT(piVar1->g[8] + 0x20,&uStack_40);
  }
  else {
    sysMemReadT(piVar1->g,piVar1->g[0xd] + 0x114);
    sysMemReadT(&uStack_40,piVar1->g[9] + 0x28);
    uStack_14 = 0x2e005c5c;
    FUN_0018df40();
    FUN_0018df40(uStack_40);
    FUN_0018df40(piVar1->g[0]);
    FUN_0018df40(uStack_3c);
    FUN_0018df40(piVar1->g[1]);
    FUN_0018df40(uStack_38);
    FUN_0018df40(piVar1->g[2]);
    uVar2 = FUN_0018e100();
    piVar1->g[0] = uVar2;
    uVar2 = FUN_0018e100();
    piVar1->g[1] = uVar2;
    uVar2 = FUN_0018e100();
    piVar1->g[2] = uVar2;
    uStack_14 = 0x18003030;
    FUN_0018df40();
    FUN_0018df40(piVar1->g[0]);
    FUN_0018df40(piVar1->g[1]);
    FUN_0018df40(piVar1->g[2]);
    uVar2 = FUN_0018e100();
    piVar1->g[0] = uVar2;
    uVar2 = FUN_0018e100();
    piVar1->g[1] = uVar2;
    uVar2 = FUN_0018e100();
    piVar1->g[2] = uVar2;
    sysMemReadW(&uStack_40,piVar1->g[9] + 0x24);
    uStack_14 = 0x2f005e5e;
    FUN_0018df40();
    FUN_0018df40(uStack_40);
    FUN_0018df40(piVar1->g[0]);
    FUN_0018df40(piVar1->g[1]);
    FUN_0018df40(piVar1->g[2]);
    uVar2 = FUN_0018e100();
    piVar1->g[0] = uVar2;
    uVar2 = FUN_0018e100();
    piVar1->g[1] = uVar2;
    uVar2 = FUN_0018e100();
    piVar1->g[2] = uVar2;
    sysMemReadT(&uStack_40,piVar1->g[0xd] + 0x108);
    uStack_14 = 0x2e005c5c;
    FUN_0018df40();
    FUN_0018df40(piVar1->g[0]);
    FUN_0018df40(uStack_40);
    FUN_0018df40(piVar1->g[1]);
    FUN_0018df40(uStack_3c);
    FUN_0018df40(piVar1->g[2]);
    FUN_0018df40(uStack_38);
    uStack_40 = FUN_0018e100();
    uStack_3c = FUN_0018e100();
    uStack_38 = FUN_0018e100();
    sysMemWriteT(piVar1->g[0xd] + 0x108,&uStack_40);
    sysMemWriteT(piVar1->g[8],&uStack_40);
    sysMemReadT(auStack_20,piVar1->g[9] + 0xc);
    sysMemWriteT(piVar1->g[8] + 0xc,auStack_20);
    sysMemReadW(&uStack_14,piVar1->g[9] + 0x18);
    sysMemWriteW(piVar1->g[8] + 0x18,&uStack_14);
    sysMemReadW(&uStack_14,piVar1->g[9] + 0x24);
    sysMemWriteW(piVar1->g[8] + 0x1c,&uStack_14);
    sysMemReadT(auStack_20,piVar1->g[9] + 0x28);
    sysMemWriteT(piVar1->g[8] + 0x20,auStack_20);
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

