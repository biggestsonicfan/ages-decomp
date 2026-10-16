/* helper FUN_001f2780 @ 001f2780, called (depth 2) from rob_disp */

/* WARNING: Removing unreachable block (ram,0x001f27cc) */
/* WARNING: Removing unreachable block (ram,0x001f2828) */

undefined8 FUN_001f2780(int param_1)

{
  i960_regs *piVar1;
  int iVar2;
  uint uVar3;
  ushort uStack_6;
  ushort uStack_4;
  ushort uStack_2;
  
  piVar1 = i960GetRegs();
  sysMemReadW((void *)(param_1 + 0xc),*(int *)(param_1 + 0x2c) + 0x1c);
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0x40) = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 4;
  }
  if ((*(uint *)(param_1 + 0x40) & 2) == 0) {
    while( true ) {
      sysMemReadW((void *)(param_1 + 0x10),*(uint *)(param_1 + 0xc));
      if (*(int *)(param_1 + 0x10) == 0) {
        *(undefined4 *)(param_1 + 0x40) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x40) = 4;
      }
      if ((*(uint *)(param_1 + 0x40) & 2) != 0) {
        return 0;
      }
      sysMemReadS(&uStack_2,piVar1->g[7] + 0x1a8);
      uVar3 = (uint)uStack_2;
      *(uint *)(param_1 + 0x38) = uVar3;
      if (*(uint *)(param_1 + 0x10) < uVar3) {
        *(undefined4 *)(param_1 + 0x40) = 4;
      }
      else if (*(uint *)(param_1 + 0x10) == uVar3) {
        *(undefined4 *)(param_1 + 0x40) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x40) = 1;
      }
      if ((*(uint *)(param_1 + 0x40) & 5) == 0) break;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
    }
    sysMemReadW((void *)(param_1 + 0x14),*(int *)(param_1 + 0xc) + 4);
    sysMemReadW((void *)(param_1 + 0x18),*(uint *)(param_1 + 0x14));
    sysMemReadS(&uStack_4,piVar1->g[7] + 0x1aa);
    uVar3 = (uint)uStack_4;
    *(uint *)(param_1 + 0x1c) = uVar3;
    if (*(uint *)(param_1 + 0x18) < uVar3) {
      *(undefined4 *)(param_1 + 0x40) = 4;
    }
    else if (*(uint *)(param_1 + 0x18) == uVar3) {
      *(undefined4 *)(param_1 + 0x40) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
    if ((*(uint *)(param_1 + 0x40) & 1) == 0) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18) + -1;
    }
    iVar2 = *(int *)(param_1 + 0x14) + 4 + *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x14) = iVar2;
    sysMemReadS(&uStack_6,iVar2 + *(int *)(param_1 + 0x1c) * 4);
    piVar1->g[0] = (uint)uStack_6;
  }
  return 0;
}

