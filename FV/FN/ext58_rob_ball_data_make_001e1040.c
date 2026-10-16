/* EXT 58: rob_ball_data_make @ 001e1040; patched over i960 024ca4 (arcade rob_ball_data_make) */

undefined8 rob_ball_data_make(int param_1)

{
  i960_regs *piVar1;
  int iStack_44;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [4];
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  uint uStack_24;
  uint uStack_14;
  uint uStack_10;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadB(&bStack_1,piVar1->g[7] + 4);
  uStack_14 = (uint)bStack_1;
  sysMemReadW(&iStack_30,uStack_14 * 4 + 0x2929c);
  sysMemReadW(&iStack_44,uStack_14 * 4 + 0x292a4);
  uStack_2c = 0;
  do {
    sysMemReadB(&bStack_2,uStack_2c + 0x292ac);
    uStack_24 = (uint)bStack_2;
    iStack_28 = uStack_2c * 0xc;
    sysMemReadT(auStack_40,iStack_30 + iStack_28);
    sysMemReadW(auStack_34,iStack_44 + uStack_24 * 4);
    sysMemWriteQ(piVar1->g[7] + 0xd00 + uStack_24 * 0x10,auStack_40);
    if (uStack_2c < 0x20) {
      if (uStack_2c == 0x1f) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    uStack_2c = uStack_2c + 1;
  } while ((uStack_10 & 5) != 0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

