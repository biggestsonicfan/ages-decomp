/* EXT 4b: sysCopPatchSetOsageAfter @ 00197180; patched over i960 06539c */

undefined4 sysCopPatchSetOsageAfter(void)

{
  undefined1 *puVar1;
  i960_regs *piVar2;
  i960_regs *piVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint *dst;
  undefined1 auStack_18 [16];
  uint uStack_8;
  uint uStack_4;
  
  piVar2 = i960GetRegs();
  dst = piVar2->g;
  piVar3 = i960GetRegs();
  iVar4 = sysGetWorkRamAddr();
  sysMemReadW(piVar2->g + 8,piVar2->g[0xd] + 0x48);
  while( true ) {
    sysMemReadW(piVar3->r + 3,piVar2->g[9]);
    piVar2->g[9] = piVar2->g[9] + 4;
    piVar2->g[8] = piVar2->g[8] + 4;
    if (piVar3->r[3] == 0) break;
    if (piVar3->r[3] == 5) {
      sysMemReadW(&uStack_8,piVar2->g[7] + 0x700);
      if (((uStack_8 & 0x20) == 0) && ((*(uint *)(iVar4 + 0x68) & 0x2000000) != 0)) {
        piVar2->g[3] = *(uint *)(iVar4 + 0xe400);
        sysMemReadW(piVar2->g + 2,piVar2->g[0xd]);
        piVar2->g[2] = (uint)((piVar2->g[2] & 0x20) != 0);
        sysMemReadW(dst,piVar2->g[9] + 0x20);
        uStack_8 = (uint)(*dst == 0);
        sysMemReadB(piVar2->g + 1,piVar2->g[7] + 4);
        piVar2->g[1] = (uint)(byte)piVar2->g[1];
        piVar2->g[2] = piVar2->g[2] | uStack_8;
        uStack_4 = piVar2->g[3];
        sysCopPatchSetObjFifo(dst);
        if (piVar2->g[3] != uStack_4) {
          sysMemReadW(&uStack_8,piVar2->g[9] + 0x1c);
          sysMemWriteW(piVar2->g[3],&uStack_8);
          piVar2->g[3] = piVar2->g[3] + 4;
          *(uint *)(iVar4 + 0xe400) = piVar2->g[3];
        }
      }
      else {
        sysMemReadW(&uStack_8,piVar2->g[0xd]);
        if (((uStack_8 & 0x100) != 0) && (piVar2->g[9] == 0x69524)) {
          uStack_8 = uStack_8 & 0xffffffdf;
          sysMemWriteW(piVar2->g[0xd],&uStack_8);
        }
        piVar2->g[3] = *(uint *)(iVar4 + 0xe400);
        sysMemReadW(piVar2->g + 2,piVar2->g[0xd]);
        piVar2->g[2] = (uint)((piVar2->g[2] & 0x20) != 0);
        sysMemReadW(dst,piVar2->g[9] + 0x18);
        uStack_8 = (uint)(*dst == 0);
        sysMemReadB(piVar2->g + 1,piVar2->g[7] + 4);
        piVar2->g[1] = (uint)(byte)piVar2->g[1];
        piVar2->g[2] = piVar2->g[2] | uStack_8;
        uStack_4 = piVar2->g[3];
        sysCopPatchSetObjFifo(dst);
        if (piVar2->g[3] != uStack_4) {
          sysMemReadW(&uStack_8,piVar2->g[9] + 0x1c);
          sysMemWriteW(piVar2->g[3],&uStack_8);
          piVar2->g[3] = piVar2->g[3] + 4;
          *(uint *)(iVar4 + 0xe400) = piVar2->g[3];
        }
      }
      sysMemReadW(&uStack_8,piVar2->g[8]);
      sysMemWriteW(piVar2->g[0xd] + 0xf8,&uStack_8);
      sysMemReadS(&uStack_4,piVar2->g[0xd] + 6);
      uStack_4 = uStack_4 & 0xffff;
      puVar6 = auStack_18;
      if (uStack_4 < 2) {
        puVar5 = (undefined1 *)0xc;
        puVar1 = puVar6;
        while (puVar1 != (undefined1 *)0x0) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + -1;
          puVar1 = puVar5;
        }
        sysMemWriteT(piVar2->g[8] + 0xc,auStack_18);
      }
    }
    sysMemReadL(piVar3->r + 4,piVar3->r[3] * 8 + 0x640c0);
    piVar2->g[9] = piVar2->g[9] + piVar3->r[4];
    piVar2->g[8] = piVar2->g[8] + piVar3->r[5];
  }
  return 0x14;
}

