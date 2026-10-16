/* helper calcAttackFlag @ 00195b00, called (depth 1) from sysCopPatchColiContFast */

void calcAttackFlag(void)

{
  bool bVar1;
  i960_regs *piVar2;
  uint auStack_34 [10];
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  piVar2 = i960GetRegs();
  auStack_34[0] = 0;
  piVar2->g[3] = 0;
  sysMemReadW(&uStack_4,piVar2->g[7] + 0x1a4);
  if ((uStack_4 & 0x100) != 0) {
    sysMemReadS(&uStack_c,piVar2->g[7] + 0x1aa);
    uStack_c = (uint)(ushort)uStack_c;
    sysMemReadS(&uStack_8,piVar2->g[7] + 0x808);
    uStack_8 = (uint)(ushort)uStack_8;
    if (uStack_8 <= uStack_c) {
      sysMemReadB(auStack_34,piVar2->g[7] + 0x820);
      auStack_34[0] = auStack_34[0] & 0xff;
      auStack_34[1] = 0x29;
      if (auStack_34[0] != 0x29) {
        sysMemReadW(auStack_34,auStack_34[0] * 4 + 0x2007aca);
        auStack_34[2] = 0x23284;
        auStack_34[3] = 0;
        do {
          sysMemReadB(auStack_34 + 4,auStack_34[3] + auStack_34[2]);
          if ((auStack_34[0] & 1 << (auStack_34[4] & 0x1f)) != 0) {
            piVar2->g[3] = piVar2->g[3] | 1 << (auStack_34[3] & 0x1f);
          }
          bVar1 = auStack_34[3] != 0x1d;
          auStack_34[3] = auStack_34[3] + 1;
          auStack_34[4] = auStack_34[4] & 0xff;
        } while (bVar1);
      }
    }
  }
  return;
}

