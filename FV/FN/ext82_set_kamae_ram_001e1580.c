/* EXT 82: set_kamae_ram @ 001e1580; patched over i960 029eec (arcade set_kamae_ram) */

undefined8 set_kamae_ram(long param_1)

{
  i960_regs *piVar1;
  int iStack_30;
  uint auStack_2c [8];
  ushort uStack_a;
  ushort uStack_8;
  ushort uStack_6;
  ushort uStack_4;
  ushort uStack_2;
  
  piVar1 = i960GetRegs();
  sysMemReadW(auStack_2c,piVar1->g[7] + 0x1a0);
  sysMemReadW(&iStack_30,piVar1->g[7] + 0xbd8);
  sysMemReadS(&uStack_2,auStack_2c[0]);
  piVar1->g[0] = (uint)uStack_2;
  piVar1->g[3] = iStack_30 + 0x1e0;
  get_kamae_value(0);
  sysMemReadS(&uStack_4,auStack_2c[0] + 2);
  piVar1->g[0] = (uint)uStack_4;
  piVar1->g[3] = iStack_30 + 0x2d0;
  get_kamae_value(0);
  sysMemReadS(&uStack_6,auStack_2c[0] + 0x10);
  piVar1->g[0] = (uint)uStack_6;
  piVar1->g[3] = iStack_30 + 0x3c0;
  get_kamae_value(0);
  sysMemReadS(&uStack_8,auStack_2c[0] + 0x18);
  piVar1->g[0] = (uint)uStack_8;
  piVar1->g[3] = iStack_30 + 0x4b0;
  get_kamae_value(0);
  sysMemReadS(&uStack_a,auStack_2c[0] + 0x54);
  piVar1->g[0] = (uint)uStack_a;
  piVar1->g[3] = iStack_30 + 0x5a0;
  get_kamae_value(0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

