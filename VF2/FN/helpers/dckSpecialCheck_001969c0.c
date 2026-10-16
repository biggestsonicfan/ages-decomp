/* helper dckSpecialCheck @ 001969c0, called (depth 2) from sysCopPatchColiContFast */

undefined4 dckSpecialCheck(int param_1)

{
  i960_regs *piVar1;
  
  piVar1 = i960GetRegs();
  sysMemReadS((void *)(param_1 + 0xc),piVar1->g[7] + 0x1a8);
  *(uint *)(param_1 + 0xc) = (uint)*(ushort *)(param_1 + 0xc);
  sysMemReadS((void *)(param_1 + 0x10),piVar1->g[8] + 0x1a8);
  *(uint *)(param_1 + 0x10) = (uint)*(ushort *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x3c) = 0x242;
  if ((*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x3c)) &&
     (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c))) {
    *(undefined4 *)(param_1 + 0x3c) = 0x241;
    if ((*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x3c)) &&
       (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c))) {
      *(undefined4 *)(param_1 + 0x3c) = 0x6c;
      if ((*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x3c)) &&
         (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c))) {
        return 1;
      }
    }
  }
  piVar1->g[6] = piVar1->g[6] | 2;
  return 0;
}

