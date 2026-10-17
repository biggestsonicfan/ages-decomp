/* EXT 67: rob_kage_disp_inside @ 001f3c80; patched over i960 0602f0 (arcade rob_kage_disp_inside) */

/* WARNING: Removing unreachable block (ram,0x001f3de8) */
/* WARNING: Removing unreachable block (ram,0x001f4000) */
/* WARNING: Removing unreachable block (ram,0x001f3d40) */
/* WARNING: Removing unreachable block (ram,0x001f3da0) */
/* WARNING: Removing unreachable block (ram,0x001f4100) */
/* WARNING: Removing unreachable block (ram,0x001f3ea8) */

undefined8 rob_kage_disp_inside(long param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  i960_regs *piVar3;
  float afStack_40 [4];
  uint auStack_30 [2];
  int iStack_28;
  uint uStack_24;
  uint auStack_20 [2];
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  char cStack_4;
  byte bStack_3;
  char cStack_2;
  char cStack_1;
  
  piVar3 = i960GetRegs();
  auStack_20[0] = (uint)bRam016b6e34 * 0xc + 0x6442ba8;
  sysMemReadW(auStack_20,auStack_20[0]);
  if ((auStack_20[0] & 0x100) != 0) goto LAB_001f3fb0;
  if ((auStack_20[0] & 0x80000000) != 0) {
    if ((auStack_20[0] & 0x80) == 0) goto LAB_001f3fb0;
    uStack_18 = uRam0172add4;
    uStack_24 = uRam0172add4 & 0xf;
    if (uStack_24 == 0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 2) != 0) goto LAB_001f3fb0;
  }
  sysMemReadB(&cStack_1,bRam016b6e34 + 0x5fa6c);
  if (cStack_1 == '\0') {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 5) != 0) {
    calc_near_light(0);
    auStack_20[0] = piVar3->g[0];
    calc_ext_light_vec(0);
    if (piVar3->g[0] == 0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 2) == 0) {
      i960GetRegs();
      uVar2 = uRam016b877e;
      uVar1 = uRam016b877c;
      FUN_0018df40();
      FUN_0018df40(uVar1);
      FUN_0018df40(uVar2);
      piVar3->g[0] = auStack_20[0];
      rob_kage_set_flag_inout(0);
      sysMemReadB(&cStack_4,piVar3->g[7] + 0x2a);
      if (cStack_4 == '\0') {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 4;
      }
      if ((uStack_10 & 5) == 0) {
        sysMemReadW(piVar3->g + 4,piVar3->g[7] + 0xaa8 + auStack_20[0] * 4);
        piVar3->g[5] = 1;
        rob_kage_disp_test(0);
      }
    }
    if (param_1 == 0) {
      return 0;
    }
    i960ReturnProc();
    return 0;
  }
  sysMemReadB(&cStack_2,piVar3->g[7] + 0x2a);
  if (cStack_2 == '\0') {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 5) == 0) {
    sysMemReadW(piVar3->g + 4,piVar3->g[7] + 0xaa8);
    piVar3->g[5] = 1;
    rob_kage_disp_test(0);
    if ((auStack_20[0] & 0x200) == 0) {
      parts_kage_set_flag(0);
      parts_kage_disp(0);
      if (param_1 == 0) {
        return 0;
      }
      i960ReturnProc();
      return 0;
    }
  }
  else {
    iStack_28 = (uint)bRam016c1ddc * 0x20 + 0x50b100;
    sysMemReadW(auStack_30,(uint)bRam016c1ddc * 0x20 + 0x50b11c);
    if (auStack_30[0] == 0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 4;
    }
    if ((uStack_10 & 2) == 0) {
      uStack_14 = 0x800101;
      FUN_0018df40();
      uStack_14 = 0x34006868;
      FUN_0018df40();
      uStack_14 = 0x3d00;
      FUN_0018df40();
      uStack_14 = 0x1b803737;
      FUN_0018df40();
      sysMemReadB(&bStack_3,piVar3->g[7] + 4);
      uStack_14 = (uint)bStack_3;
      FUN_0018df40();
      uStack_14 = 0;
      FUN_0018df40();
      sysMemReadW(afStack_40,iStack_28 + 8);
      uStack_14 = 0x3000606;
      afStack_40[0] = afStack_40[0] - 1.0;
      FUN_0018df40();
      uStack_14 = 0;
      FUN_0018df40(0);
      FUN_0018df40(afStack_40[0]);
      uStack_14 = 0;
      FUN_0018df40(0);
      piVar3->g[1] = 0;
      piVar3->g[0] = auStack_30[0];
      set_obj(0);
      uStack_14 = 0x1000202;
      FUN_0018df40();
    }
  }
LAB_001f3fb0:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

