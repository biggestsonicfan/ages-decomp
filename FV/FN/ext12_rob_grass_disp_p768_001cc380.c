/* EXT 12: rob_grass_disp_p768 @ 001cc380; patched over i960 07789c (arcade rob_grass_disp+768) */

undefined4 rob_grass_disp_p768(void)

{
  i960_regs *piVar1;
  uint uVar2;
  ushort uStack_4;
  ushort uStack_2;
  
  piVar1 = i960GetRegs();
  uVar2 = sysReadWorkRam1(piVar1->g[7] + 4);
  FUN_001c63c0(piVar1->g[0],uVar2 & 0xff,piVar1->r + 0xc);
  uVar2 = FUN_001bbb80((uVar2 & 0xff) << 8);
  piVar1->r[0xe] = uVar2;
  sysMemReadW(piVar1->r + 3,piVar1->g[7] + 0x1a4);
  if ((piVar1->r[3] & 0x4000000) != 0) {
    sysMemReadS(&uStack_2,piVar1->g[7] + 0x1aa);
    piVar1->r[3] = (uint)uStack_2;
    if (piVar1->r[3] < 5) {
      if (piVar1->r[3] == 4) {
        piVar1->pad[0x94] = '\x02';
        piVar1->pad[0x95] = '\0';
        piVar1->pad[0x96] = '\0';
        piVar1->pad[0x97] = '\0';
      }
      else {
        piVar1->pad[0x94] = '\x01';
        piVar1->pad[0x95] = '\0';
        piVar1->pad[0x96] = '\0';
        piVar1->pad[0x97] = '\0';
      }
    }
    else {
      piVar1->pad[0x94] = '\x04';
      piVar1->pad[0x95] = '\0';
      piVar1->pad[0x96] = '\0';
      piVar1->pad[0x97] = '\0';
    }
    if ((*(uint *)(piVar1->pad + 0x94) & 4) == 0) {
      piVar1->r[0xd] = 0x800000;
      uVar2 = FUN_001bcb00(piVar1->r[0xd]);
      piVar1->r[0xd] = uVar2;
      return 0x120;
    }
  }
  sysMemReadW(piVar1->r + 3,piVar1->g[7] + 0x720);
  if ((piVar1->r[3] & 4) != 0) {
    sysMemReadS(&uStack_4,piVar1->g[7] + 0x1aa);
    piVar1->r[3] = (uint)uStack_4;
    if (piVar1->r[3] < 5) {
      if (piVar1->r[3] == 4) {
        piVar1->pad[0x94] = '\x02';
        piVar1->pad[0x95] = '\0';
        piVar1->pad[0x96] = '\0';
        piVar1->pad[0x97] = '\0';
      }
      else {
        piVar1->pad[0x94] = '\x01';
        piVar1->pad[0x95] = '\0';
        piVar1->pad[0x96] = '\0';
        piVar1->pad[0x97] = '\0';
      }
    }
    else {
      piVar1->pad[0x94] = '\x04';
      piVar1->pad[0x95] = '\0';
      piVar1->pad[0x96] = '\0';
      piVar1->pad[0x97] = '\0';
    }
    if (((*(uint *)(piVar1->pad + 0x94) & 4) == 0) && ((piVar1->r[3] & 1) != 0)) {
      piVar1->r[0xd] = 0x802000;
      uVar2 = FUN_001bcb00(piVar1->r[0xd]);
      piVar1->r[0xd] = uVar2;
    }
  }
  return 0x120;
}

