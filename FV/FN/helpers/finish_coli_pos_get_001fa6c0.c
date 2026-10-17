/* helper finish_coli_pos_get @ 001fa6c0, called (depth 2) from coli_cont_cop */

undefined8 finish_coli_pos_get(int param_1)

{
  uint uVar1;
  
  i960GetRegs();
  uVar1 = uRam0172add4 & 0x40000000;
  *(uint *)(param_1 + 0x3c) = uRam0172add4;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = uRam016b75d8;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = uRam016b75d4;
  }
  sysMemReadW((void *)(param_1 + 0x3c),*(int *)(param_1 + 0x1c) + 0x5b8);
  if ((*(uint *)(param_1 + 0x3c) & 1) == 0) {
    sysMemReadW((void *)(param_1 + 0x10),*(int *)(param_1 + 0x1c) + 0x20c);
    sysMemReadW((void *)(param_1 + 0x14),*(int *)(param_1 + 0x1c) + 0x214);
  }
  else {
    sysMemReadW((void *)(param_1 + 0x3c),*(uint *)(param_1 + 0x1c));
    if ((*(uint *)(param_1 + 0x3c) & 0x40) == 0) {
      sysMemReadW((void *)(param_1 + 0x10),*(int *)(param_1 + 0x1c) + 0x284);
      sysMemReadW((void *)(param_1 + 0x14),*(int *)(param_1 + 0x1c) + 0x28c);
    }
    else {
      sysMemReadW((void *)(param_1 + 0x10),*(int *)(param_1 + 0x1c) + 0x2a8);
      sysMemReadW((void *)(param_1 + 0x14),*(int *)(param_1 + 0x1c) + 0x2b0);
    }
  }
  return 0;
}

