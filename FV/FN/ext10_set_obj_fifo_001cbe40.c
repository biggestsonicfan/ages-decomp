/* EXT 10: set_obj_fifo @ 001cbe40; patched over i960 005d38 (arcade set_obj_fifo) */

undefined8 set_obj_fifo(long param_1)

{
  i960_regs *piVar1;
  int aiStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  uint uStack_14;
  uint uStack_10;
  ushort uStack_4;
  ushort uStack_2;
  
  piVar1 = i960GetRegs();
  FUN_0018dfc0(aiStack_40);
  FUN_0018dfc0(&uStack_30);
  FUN_0018dfc0(auStack_20);
  if (piVar1->g[2] < 2) {
    if (piVar1->g[2] == 1) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 1;
    }
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 2) == 0) {
    piVar1->g[4] = (uint)((ulong)((long)aiStack_40[0] << 0x21) >> 0x21);
    if (piVar1->g[4] < 0x3f800001) {
      if (piVar1->g[4] == 0x3f800000) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 4) != 0) goto LAB_001cbed4;
    piVar1->g[4] = (uint)((ulong)((long)(int)uStack_14 << 0x21) >> 0x21);
    if (piVar1->g[4] < 0x3e4cccce) {
      if (piVar1->g[4] == 0x3e4ccccd) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 1) != 0) goto LAB_001cbed4;
    uRam016c5dcc = piVar1->g[0xe];
    piVar1->g[0xe] = 0xb0b;
    sysMemWriteW(piVar1->g[10] + 0xb0,piVar1->g + 0xe);
    piVar1->g[0xe] = uRam016c5dcc;
    sysMemWriteQ(piVar1->g[10] + piVar1->g[0xc],aiStack_40);
    sysMemWriteQ(piVar1->g[10] + piVar1->g[0xc],&uStack_30);
    sysMemWriteQ(piVar1->g[10] + piVar1->g[0xc],auStack_20);
    sysMemWriteQ(piVar1->g[3],aiStack_40);
    piVar1->g[3] = piVar1->g[3] + 0x10;
    sysMemWriteQ(piVar1->g[3],&uStack_30);
    piVar1->g[3] = piVar1->g[3] + 0x10;
    sysMemWriteQ(piVar1->g[3],auStack_20);
    piVar1->g[3] = piVar1->g[3] + 0x10;
    sysMemReadW(&uStack_14,piVar1->g[7] + 0x1a4);
    if ((uStack_14 & 0x4000000) != 0) {
      sysMemReadS(&uStack_2,piVar1->g[7] + 0x1aa);
      uStack_14 = (uint)uStack_2;
      if (uStack_2 < 5) {
        if (uStack_2 == 4) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
      }
      else {
        uStack_10 = 4;
      }
      if ((uStack_10 & 4) == 0) {
        piVar1->g[2] = 0x800000;
        goto LAB_001cc14c;
      }
    }
    sysMemReadW(&uStack_14,piVar1->g[7] + 0x720);
    if ((uStack_14 & 4) != 0) {
      sysMemReadS(&uStack_4,piVar1->g[7] + 0x1aa);
      uStack_14 = (uint)uStack_4;
      if (uStack_4 < 5) {
        if (uStack_4 == 4) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
      }
      else {
        uStack_10 = 4;
      }
      if (((uStack_10 & 4) == 0) && ((uStack_4 & 1) != 0)) {
        piVar1->g[2] = 0x802000;
LAB_001cc14c:
        FUN_001c6300(piVar1->g[0],piVar1->g[1],&uStack_30);
        uStack_2c = piVar1->g[2];
        i960GetRegs();
        FUN_00188ec0(0x800000);
        FUN_00188ec0(uStack_30);
        FUN_00188ec0(uStack_2c);
        FUN_00188ec0(uStack_28);
        FUN_00188ec0(uStack_24);
        if (param_1 == 0) {
          return 0;
        }
        i960ReturnProc();
        return 0;
      }
    }
    FUN_001c6300(piVar1->g[0],piVar1->g[1],&uStack_30);
    i960GetRegs();
    FUN_00188ec0(0x800000);
    FUN_00188ec0(uStack_30);
    FUN_00188ec0(uStack_2c);
    FUN_00188ec0(uStack_28);
    FUN_00188ec0(uStack_24);
  }
LAB_001cbed4:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

