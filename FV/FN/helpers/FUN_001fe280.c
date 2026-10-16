/* helper FUN_001fe280 @ 001fe280, called (depth 2) from osage_dsp */

/* WARNING: Removing unreachable block (ram,0x001fe318) */

undefined8 FUN_001fe280(long param_1)

{
  uint uVar1;
  i960_regs *piVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  uint uStack_10;
  ushort uStack_4;
  byte bStack_1;
  
  piVar2 = i960GetRegs();
  piVar2->g[3] = uRam016c51d0;
  sysMemReadW(piVar2->g + 2,piVar2->g[0xd]);
  uStack_10 = 2;
  if ((piVar2->g[2] & 0x20) == 0) {
    uStack_10 = 0;
  }
  sysMemReadW(piVar2->g,piVar2->g[9] + 0x18);
  piVar2->g[2] = (uint)((uStack_10 & 2) != 0);
  if (piVar2->g[0] == 0) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 4;
  }
  sysMemReadB(&bStack_1,piVar2->g[7] + 4);
  piVar2->g[1] = (uint)bStack_1;
  uStack_14 = (uint)((uStack_10 & 2) != 0);
  piVar2->g[2] = piVar2->g[2] | uStack_14;
  uVar1 = piVar2->g[3];
  set_obj_fifo(0);
  if (piVar2->g[3] < uVar1) {
    uStack_10 = 4;
  }
  else if (piVar2->g[3] == uVar1) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 1;
  }
  if ((uStack_10 & 2) == 0) {
    sysMemReadW(&uStack_14,piVar2->g[9] + 0x1c);
    sysMemWriteW(piVar2->g[3],&uStack_14);
    piVar2->g[3] = piVar2->g[3] + 4;
    uRam016c51d0 = piVar2->g[3];
  }
  sysMemReadW(&uStack_14,piVar2->g[8]);
  sysMemWriteW(piVar2->g[0xd] + 0xf8,&uStack_14);
  sysMemReadS(&uStack_4,piVar2->g[0xd] + 6);
  if (uStack_4 < 3) {
    if (uStack_4 == 2) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 1;
    }
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 6) == 0) {
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    sysMemWriteT(piVar2->g[8] + 0xc,&uStack_20);
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

