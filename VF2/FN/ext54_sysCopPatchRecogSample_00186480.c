/* EXT 54: sysCopPatchRecogSample @ 00186480; patched over i960 052398 */

undefined4 sysCopPatchRecogSample(void)

{
  uint uVar1;
  i960_regs *piVar2;
  i960_regs *piVar3;
  undefined4 uVar4;
  
  piVar2 = i960GetRegs();
  piVar3 = i960GetRegs();
  sysMemReadB(piVar3->r + 7,piVar2->g[0xd] + 0x4c + piVar2->g[1]);
  piVar3->r[7] = (uint)(byte)piVar3->r[7];
  sysMemWriteB(piVar2->g[0xd] + 0x4e + piVar2->g[1],piVar3->r + 9);
  sysMemReadB(piVar3->r + 0xe,piVar2->g[4]);
  piVar3->r[0xe] = (uint)(byte)piVar3->r[0xe];
  piVar3->r[0xf] = 0x26;
  do {
    if (piVar3->r[0xe] <= piVar3->r[7]) {
      sysMemReadB(piVar3->r + 7,piVar2->g[0xd] + 0x5c + piVar2->g[1]);
      piVar3->r[7] = (uint)(byte)piVar3->r[7];
      if (piVar3->r[0xc] == piVar3->r[7]) {
        i960SetIPAddr(0xa4910);
        uVar4 = 0;
      }
      else {
        uVar4 = 0x29;
      }
      return uVar4;
    }
    piVar3->r[3] = piVar3->r[0xf] * piVar3->r[7];
    piVar3->r[3] = piVar3->r[3] + piVar2->g[4];
    while( true ) {
      sysMemReadS(piVar3->r + 10,piVar3->r[3] + 0x88 + piVar3->r[8] * 2);
      piVar3->r[10] = (uint)(ushort)piVar3->r[10];
      sysMemReadS(piVar3->r + 0xb,piVar3->r[6] + 0x7c + piVar3->r[4] * 2);
      piVar3->r[0xb] = (uint)(ushort)piVar3->r[0xb];
      if (piVar3->r[10] != piVar3->r[0xb]) break;
      piVar3->r[8] = piVar3->r[8] + 1;
      uVar1 = piVar3->r[4];
      piVar3->r[4] = uVar1 + 1;
      if (0x1e < uVar1) {
        piVar3->r[4] = 0;
      }
      if (4 < piVar3->r[8]) break;
      if (piVar3->r[5] == piVar3->r[4]) {
        i960SetIPAddr(0xa49b0);
        return 0;
      }
    }
    if (piVar3->r[9] < piVar3->r[8]) {
      piVar3->r[9] = piVar3->r[8];
      sysMemWriteB(piVar2->g[0xd] + 0x4e + piVar2->g[1],piVar3->r + 9);
      sysMemWriteB(piVar2->g[0xd] + 0x5c + piVar2->g[1],piVar3->r + 7);
    }
    piVar3->r[7] = piVar3->r[7] + 1;
    sysMemReadB(piVar3->r + 4,piVar2->g[0xd] + 0x50 + piVar2->g[1]);
    piVar3->r[4] = (uint)(byte)piVar3->r[4];
    piVar3->r[8] = 0;
  } while( true );
}

