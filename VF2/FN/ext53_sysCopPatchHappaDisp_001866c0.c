/* EXT 53: sysCopPatchHappaDisp @ 001866c0; patched over i960 02f134 (arcade happa_disp+264) */

undefined4 sysCopPatchHappaDisp(void)

{
  i960_regs *piVar1;
  i960_regs *piVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  
  piVar1 = i960GetRegs();
  piVar2 = i960GetRegs();
  piVar2->r[0xb] = 0;
  do {
    sysMemReadB(piVar2->r + 0xf,piVar2->r[10] + 0x29 + piVar2->r[0xb] * 4);
    piVar2->r[0xf] = (uint)(byte)piVar2->r[0xf];
    piVar2->r[0xf] = piVar2->r[0xf] & piVar2->r[7];
    if (piVar2->r[0xf] != 0) {
      sysMemReadS(piVar2->r + 0xf,piVar2->r[10] + 0x2a + piVar2->r[0xb] * 4);
      piVar2->r[0xf] = (uint)(ushort)piVar2->r[0xf];
      if ((piVar2->r[0xf] & 1 << (piVar2->r[9] & 0x1f)) != 0) {
        piVar2->r[0xf] = (uint)&DAT_00800101;
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(piVar2->r[0xf]), 0 < lVar4)) {
          DAT_01689640 = (uint)lVar4 >> 2;
          DAT_00255c9c = 0;
        }
        sysMemReadT(piVar2->r + 4,piVar2->r[10] + 4 + piVar2->r[0xb] * 4);
        uVar3 = sysReadWorkRam4(0x5001e4);
        piVar2->r[0xf] = uVar3;
        sysMemWriteW(piVar2->r[0xf] + 0x90e000,piVar2->r + 4);
        piVar2->r[0xf] = piVar2->r[0xf] + 4;
        piVar2->r[0xf] = piVar2->r[0xf] & 0xfffffeff;
        sysMemWriteW(piVar2->r[0xf] + 0x90e000,piVar2->r + 5);
        piVar2->r[0xf] = piVar2->r[0xf] + 4;
        piVar2->r[0xf] = piVar2->r[0xf] & 0xfffffeff;
        sysMemWriteW(piVar2->r[0xf] + 0x90e000,piVar2->r + 6);
        sysWriteWorkRam1(0x5001e4,piVar2->r[0xf] + 4 & 0xff);
        piVar2->r[0xf] = 0x37806f6f;
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(piVar2->r[0xf]), 0 < lVar4)) {
          DAT_01689640 = (uint)lVar4 >> 2;
          DAT_00255c9c = 0;
        }
        sysMemReadL(piVar2->r + 4,piVar2->r[10] + 0x1c + piVar2->r[0xb] * 4);
        piVar2->r[6] = piVar2->r[4] >> 0x10;
        piVar2->r[4] = piVar2->r[4] & piVar1->g[9];
        piVar2->r[5] = piVar2->r[5] & piVar1->g[9];
        uVar3 = sysReadWorkRam4(0x5001e4);
        if (piVar2->r[6] != 0) {
          sysMemWriteW(uVar3 + 0x90e000,piVar2->r + 6);
          uVar3 = uVar3 + 4 & 0xff;
          piVar2->r[0xf] = 0x36806d6d;
          if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(piVar2->r[0xf]), 0 < lVar4)) {
            DAT_01689640 = (uint)lVar4 >> 2;
            DAT_00255c9c = 0;
          }
        }
        if (piVar2->r[5] != 0) {
          sysMemWriteW(uVar3 + 0x90e000,piVar2->r + 5);
          uVar3 = uVar3 + 4 & 0xff;
          piVar2->r[0xf] = 0x37006e6e;
          if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(piVar2->r[0xf]), 0 < lVar4)) {
            DAT_01689640 = (uint)lVar4 >> 2;
            DAT_00255c9c = 0;
          }
        }
        if (piVar2->r[4] != 0) {
          sysMemWriteW(uVar3 + 0x90e000,piVar2->r + 4);
          uVar3 = uVar3 + 4 & 0xff;
          piVar2->r[0xf] = 0x36006c6c;
          if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(piVar2->r[0xf]), 0 < lVar4)) {
            DAT_01689640 = (uint)lVar4 >> 2;
            DAT_00255c9c = 0;
          }
        }
        sysWriteWorkRam1(0x5001e4,uVar3 & 0xff);
        sysMemReadT(piVar2->r + 4,piVar2->r[10] + 0x10 + piVar2->r[0xb] * 4);
        piVar2->r[0xf] = 0x3800707;
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(piVar2->r[0xf]), 0 < lVar4)) {
          DAT_01689640 = (uint)lVar4 >> 2;
          DAT_00255c9c = 0;
        }
        iVar5 = 3;
        if ((g_copCtrlReg & 0x80000000) == 0) {
          puVar6 = piVar2->r + 4;
          do {
            lVar4 = copExec(*puVar6);
            if (0 < lVar4) {
              DAT_01689640 = (uint)lVar4 >> 2;
              DAT_00255c9c = 0;
            }
            iVar5 = iVar5 + -1;
            puVar6 = puVar6 + 1;
          } while (0 < iVar5);
        }
        sysMemReadB(piVar2->r + 4,piVar2->r[10] + 0x28 + piVar2->r[0xb] * 4);
        piVar2->r[4] = (uint)(byte)piVar2->r[4];
        piVar2->r[5] = piVar2->r[3] >> (piVar2->r[4] & 0x1f);
        sysMemReadB(piVar2->r + 4,piVar2->r[10] + 0x23 + piVar2->r[0xb] * 4);
        piVar2->r[4] = (uint)(byte)piVar2->r[4];
        piVar2->r[5] = piVar2->r[5] + piVar2->r[4];
        sysMemReadB(piVar2->r + 4,piVar2->r[10] + 0x22 + piVar2->r[0xb] * 4);
        piVar2->r[4] = (uint)(byte)piVar2->r[4];
        piVar2->r[5] = piVar2->r[5] & piVar2->r[4];
        sysMemReadW(piVar2->r + 4,piVar2->r[10] + 0x24 + piVar2->r[0xb] * 4);
        sysMemReadB(piVar2->r + 5,piVar2->r[4] + piVar2->r[5]);
        piVar2->r[5] = (uint)(byte)piVar2->r[5];
        sysMemReadW(piVar2->r + 4,piVar2->r[10] + piVar2->r[0xb] * 4);
        sysMemReadS(piVar2->r + 4,piVar2->r[4] + piVar2->r[5] * 2);
        piVar2->r[4] = (uint)(ushort)piVar2->r[4];
        piVar2->r[0xf] = 0xffff;
        if (piVar2->r[0xf] != piVar2->r[4]) {
          piVar1->g[1] = 0;
          piVar1->g[0] = piVar2->r[4];
          sysCopPatchSetObj();
        }
        piVar2->r[0xf] = (uint)&DAT_01000202;
        if (((g_copCtrlReg & 0x80000000) == 0) && (lVar4 = copExec(piVar2->r[0xf]), 0 < lVar4)) {
          DAT_01689640 = (uint)lVar4 >> 2;
          DAT_00255c9c = 0;
        }
      }
    }
    piVar2->r[0xb] = piVar2->r[0xb] + 0xb;
    uVar3 = piVar2->r[8];
    piVar2->r[8] = uVar3 - 1;
  } while (1 < (int)uVar3);
  return 0x6e;
}

