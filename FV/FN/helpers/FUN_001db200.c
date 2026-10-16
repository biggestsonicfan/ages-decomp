/* helper FUN_001db200 @ 001db200, called (depth 1) from play_motion */

/* WARNING: Removing unreachable block (ram,0x001db278) */

undefined8 FUN_001db200(long param_1)

{
  i960_regs *piVar1;
  uint *dst;
  uint uStack_44;
  uint auStack_40 [4];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  uint auStack_1c [6];
  ushort uStack_4;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  FUN_001db640(0);
  sysMemReadW(&uStack_44,piVar1->g[7] + 0x784);
  if (uStack_44 == 0) {
    auStack_1c[3] = 2;
  }
  else {
    auStack_1c[3] = 4;
  }
  if ((auStack_1c[3] & 2) == 0) {
    sysMemReadW(&iStack_24,piVar1->g[7] + 0x1d0c);
    sysMemReadW(&iStack_20,piVar1->g[7] + 0x1d18);
    sysMemReadW(&iStack_28,piVar1->g[7] + 0x1d1c);
    sysMemReadW(&iStack_2c,piVar1->g[7] + 0x1d20);
    sysMemReadW(&iStack_30,piVar1->g[7] + 0x1d10);
    sysMemReadW(auStack_1c,piVar1->g[7] + 0x1d08);
    dst = auStack_1c + 2;
    sysMemReadW(dst,piVar1->g[7]);
    auStack_1c[2] = auStack_1c[2] | 0x8000000;
    sysMemWriteW(piVar1->g[7],dst);
    sysMemReadQ(auStack_40,uStack_44 + 4);
    sysMemWriteQ(iStack_24 + 0x1e0,auStack_40);
    sysMemReadQ(auStack_40,uStack_44 + 0x14);
    sysMemWriteQ(iStack_24 + 0x1f0,auStack_40);
    sysMemReadS(&uStack_4,piVar1->g[7] + 0x7a0);
    uStack_44 = (uint)uStack_4;
    sysMemWriteW(iStack_20 + 0x78,&uStack_44);
    sysMemWriteW(iStack_20 + 0x7c,&uStack_44);
    sysMemWriteB(iStack_28 + 0x1e,&uStack_44);
    sysMemWriteB(iStack_28 + 0x1f,&uStack_44);
    sysMemReadB(&bStack_1,uStack_44 + 0x640e914);
    auStack_1c[1] = 2;
    auStack_40[0] = (uint)bStack_1;
    auStack_1c[2] = auStack_40[0] + 2;
    sysMemWriteB(iStack_2c + uStack_44,dst);
    sysMemReadW(dst,iStack_30 + uStack_44 * 4);
    iStack_20 = 0x78;
    sysMemWriteB(auStack_1c[2] + auStack_40[0],&iStack_20);
    iStack_20 = 0x7c;
    sysMemWriteB(auStack_1c[2] + 1 + auStack_40[0],&iStack_20);
    auStack_1c[2] = 0x20;
    sysMemWriteW(auStack_1c[0],dst);
    send_ram_coli_data(0);
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

