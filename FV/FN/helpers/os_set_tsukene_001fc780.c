/* helper os_set_tsukene @ 001fc780, called (depth 1) from osage_dsp */

undefined8 os_set_tsukene(long param_1)

{
  i960_regs *piVar1;
  uint uVar2;
  int aiStack_44 [12];
  undefined *puStack_14;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadW(aiStack_44,piVar1->g[9]);
  sysMemReadW(aiStack_44,aiStack_44[0] * 4 + 0x632a8);
  if (aiStack_44[0] == 3) {
    puStack_14 = (undefined *)0x800101;
    FUN_0018df40();
    sysMemReadT(piVar1->g,piVar1->g[9] + 8);
    puStack_14 = (undefined *)0x22004444;
    FUN_0018df40();
    puStack_14 = (undefined *)0x2;
    FUN_0018df40();
    puStack_14 = (undefined *)0x14802929;
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
    puStack_14 = (undefined *)0x1000202;
    FUN_0018df40();
    sysMemWriteT(piVar1->g[0xd] + 0xfc,piVar1->g);
  }
  else if (aiStack_44[0] == 2) {
    sysMemReadW(aiStack_44,piVar1->g[9] + 4);
    puStack_14 = (undefined *)0x800101;
    FUN_0018df40();
    sysMemReadT(piVar1->g,piVar1->g[9] + 8);
    puStack_14 = (undefined *)0x22004444;
    FUN_0018df40();
    puStack_14 = (undefined *)0x1;
    FUN_0018df40();
    puStack_14 = (undefined *)0x1b803737;
    FUN_0018df40();
    sysMemReadB(&bStack_2,piVar1->g[7] + 4);
    puStack_14 = (undefined *)(uint)bStack_2;
    FUN_0018df40();
    puStack_14 = (undefined *)(aiStack_44[0] * 0xc);
    FUN_0018df40();
    puStack_14 = (undefined *)0x14802929;
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
    puStack_14 = &DAT_21804343;
    FUN_0018df40();
    puStack_14 = (undefined *)0x2;
    FUN_0018df40();
    puStack_14 = (undefined *)0x1000202;
    FUN_0018df40();
    sysMemWriteT(piVar1->g[0xd] + 0xfc,piVar1->g);
  }
  else {
    if (aiStack_44[0] != 1) {
      sysMemReadW(aiStack_44,piVar1->g[9] + 4);
      puStack_14 = (undefined *)0x800101;
      FUN_0018df40();
      puStack_14 = (undefined *)0x1b003636;
      FUN_0018df40();
      sysMemReadB(&bStack_1,piVar1->g[7] + 4);
      puStack_14 = (undefined *)(uint)bStack_1;
      FUN_0018df40();
      puStack_14 = (undefined *)(aiStack_44[0] * 0xc);
      FUN_0018df40();
      sysMemReadT(piVar1->g,piVar1->g[9] + 8);
      puStack_14 = (undefined *)0x14802929;
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
      puStack_14 = (undefined *)0x22004444;
      FUN_0018df40();
      puStack_14 = (undefined *)0x1;
      FUN_0018df40();
      puStack_14 = (undefined *)0x14802929;
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
      puStack_14 = (undefined *)0x1000202;
      FUN_0018df40();
      sysMemWriteT(piVar1->g[0xd] + 0xfc,piVar1->g);
      uVar2 = piVar1->g[8];
      goto LAB_001fcb10;
    }
    sysMemReadT(piVar1->g,piVar1->g[0xd] + 0xfc);
  }
  uVar2 = piVar1->g[8];
LAB_001fcb10:
  sysMemWriteT(uVar2,piVar1->g);
  sysMemWriteT(piVar1->g[0xd] + 0x108,piVar1->g);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

