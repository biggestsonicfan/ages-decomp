/* helper FUN_001dcc00 @ 001dcc00, called (depth 1) from coli_cont_cop */

undefined8 FUN_001dcc00(long param_1)

{
  i960_regs *piVar1;
  uint uVar2;
  uint auStack_44 [3];
  uint uStack_38;
  uint uStack_34;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  ushort uStack_6;
  ushort uStack_4;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  auStack_44[0] = 0;
  piVar1->g[3] = 0;
  sysMemReadW(&uStack_14,piVar1->g[7] + 0x1a4);
  if ((uStack_14 & 0x100) != 0) {
    sysMemReadS(&uStack_4,piVar1->g[7] + 0x1aa);
    uStack_1c = (uint)uStack_4;
    sysMemReadS(&uStack_6,piVar1->g[7] + 0x808);
    uStack_18 = (uint)uStack_6;
    if (uStack_1c < uStack_18) {
      uStack_10 = 4;
    }
    else if (uStack_1c == uStack_18) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 1;
    }
    if ((uStack_10 & 4) == 0) {
      sysMemReadB(&bStack_1,piVar1->g[7] + 0x820);
      auStack_44[0] = (uint)bStack_1;
      auStack_44[1] = 0x29;
      if (auStack_44[0] < 0x29) {
        uStack_10 = 4;
      }
      else if (auStack_44[0] == 0x29) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
      if ((uStack_10 & 2) == 0) {
        sysMemReadW(auStack_44,auStack_44[0] * 4 + 0x640e72e);
        sysMemReadW(auStack_44 + 2,piVar1->g[7] + 0x1d1c);
        uStack_38 = 0;
        do {
          sysMemReadB(&bStack_2,auStack_44[2] + uStack_38);
          uStack_34 = (uint)bStack_2;
          if ((auStack_44[0] & 1 << (uStack_34 & 0x1f)) != 0) {
            piVar1->g[3] = piVar1->g[3] | 1 << (uStack_38 & 0x1f);
          }
          if (uStack_38 < 0x20) {
            if (uStack_38 == 0x1f) {
              uStack_10 = 2;
            }
            else {
              uStack_10 = 1;
            }
          }
          else {
            uStack_10 = 4;
          }
          uStack_38 = uStack_38 + 1;
        } while ((uStack_10 & 5) != 0);
        uVar2 = piVar1->g[7];
        goto LAB_001dcc64;
      }
    }
  }
  uVar2 = piVar1->g[7];
LAB_001dcc64:
  sysMemWriteW(uVar2 + 0xac8,auStack_44);
  sysMemWriteW(piVar1->g[7] + 0x77c,piVar1->g + 3);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

