/* helper option_control @ 001d1000, called (depth 1) from rob_disp */

undefined8 option_control(long param_1)

{
  i960_regs *piVar1;
  i960_regs *piVar2;
  uint auStack_64 [8];
  uint uStack_44;
  undefined1 auStack_3c [4];
  uint uStack_38;
  uint uStack_14;
  uint uStack_10;
  ushort uStack_6;
  ushort uStack_4;
  ushort uStack_2;
  
  piVar1 = i960GetRegs();
  uStack_38 = piVar1->g[7] + 0x788;
  sysMemReadW(&uStack_14,piVar1->g[7]);
  if ((uStack_14 & 0x8000000) != 0) {
    uStack_38 = piVar1->g[7] + 0x7a0;
    sysMemReadS(&uStack_2,uStack_38);
    uStack_44 = (uint)uStack_2;
    if (piVar1->g[0] < (uint)uStack_2) {
      uStack_10 = 4;
    }
    else if (piVar1->g[0] == (uint)uStack_2) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 1;
    }
    if ((uStack_10 & 5) != 0) goto LAB_001d11d4;
    sysMemReadW(&uStack_14,piVar1->g[7]);
    if ((uStack_14 & 0x10) != 0) {
      piVar2 = i960GetRegs();
      sysMemReadW(auStack_64,piVar2->g[7]);
      auStack_64[0] = auStack_64[0] & 0xf7ffffff;
      sysMemWriteW(piVar2->g[7],auStack_64);
      auStack_64[0] = 0;
      sysMemWriteW(piVar2->g[7] + 0xafc,auStack_64);
      send_init_ram_coli_data(0);
      uStack_38 = piVar1->g[7] + 0x788;
    }
  }
  sysMemReadS(&uStack_4,uStack_38);
  uStack_44 = (uint)uStack_4;
  if (piVar1->g[0] < (uint)uStack_4) {
    uStack_10 = 4;
  }
  else if (piVar1->g[0] == (uint)uStack_4) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 1;
  }
  if ((uStack_10 & 5) == 0) {
    sysMemReadS(&uStack_6,uStack_38 + 0x16);
    uStack_44 = (uint)uStack_6;
    if ((uStack_6 & 0x8000) == 0) {
      sysMemReadW(auStack_3c,uStack_44 * 4 + 0x1b288);
    }
  }
LAB_001d11d4:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

