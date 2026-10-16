/* EXT 69: area_clip @ 001f7f80; patched over i960 023868 (arcade area_clip) */

/* WARNING: Removing unreachable block (ram,0x001f8110) */
/* WARNING: Removing unreachable block (ram,0x001f81d0) */

undefined8 area_clip(int param_1)

{
  ushort uVar1;
  bool bVar2;
  i960_regs *piVar3;
  ushort uVar4;
  uint uStack_48;
  ushort uStack_12;
  ushort uStack_10;
  ushort uStack_e;
  ushort uStack_c;
  ushort uStack_a;
  ushort uStack_8;
  ushort uStack_6;
  ushort uStack_4;
  byte bStack_2;
  byte bStack_1;
  
  piVar3 = i960GetRegs();
  sysMemReadS(&uStack_4,piVar3->g[2]);
  uStack_48 = 0;
  piVar3->g[2] = piVar3->g[2] + 2;
  do {
    sysMemReadS(&uStack_6,piVar3->g[2]);
    sysMemReadS(&uStack_8,uStack_6 + 0x50e000);
    uVar1 = uStack_8;
    sysMemReadS(&uStack_a,piVar3->g[2] + 2);
    sysMemReadS(&uStack_c,uStack_a + 0x50e000);
    uVar1 = uVar1 & uStack_c;
    sysMemReadS(&uStack_e,piVar3->g[2] + 4);
    sysMemReadB(&bStack_1,uStack_e + 0x50e000);
    uVar4 = (ushort)bStack_1;
    sysMemReadS(&uStack_10,piVar3->g[2] + 6);
    sysMemReadB(&bStack_2,uStack_10 + 0x50e000);
    piVar3->g[2] = piVar3->g[2] + 8;
    if ((ushort)(uVar1 & uVar4 & (ushort)bStack_2) == 0) {
      sysMemReadS(&uStack_12,piVar3->g[3] + uStack_48 * 2);
      if (uStack_12 != 0) {
        piVar3->g[1] = 0;
        piVar3->g[0] = (uint)uStack_12;
        set_obj(0);
      }
    }
    if (uStack_4 < uStack_48) {
      bVar2 = false;
    }
    else if (uStack_4 == uStack_48) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uStack_48 = uStack_48 + 1;
  } while (bVar2);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

