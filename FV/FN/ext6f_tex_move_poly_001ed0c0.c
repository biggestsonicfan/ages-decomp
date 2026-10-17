/* EXT 6f: tex_move_poly @ 001ed0c0; patched over i960 0331b4 (arcade tex_move_poly) */

/* WARNING: Removing unreachable block (ram,0x001ed1b8) */
/* WARNING: Removing unreachable block (ram,0x001ed2a0) */
/* WARNING: Removing unreachable block (ram,0x001ed260) */

undefined8 tex_move_poly(long param_1)

{
  i960_regs *piVar1;
  i960_regs *piVar2;
  uint auStack_44 [4];
  uint uStack_34;
  uint uStack_30;
  int iStack_28;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  ushort uStack_2;
  
  piVar1 = i960GetRegs();
  auStack_44[0] = (int)cRam016b6e34 & 0xf;
  sysMemReadW(piVar1->g + 6,auStack_44[0] * 4 + 0x642065c);
  piVar1->g[5] = 0;
  uRam016c4dd0 = piVar1->g[5];
  uRam016c4dd4 = piVar1->g[5];
  uRam016c4dd8 = piVar1->g[5];
  sysMemReadW(auStack_44,piVar1->g[6]);
  uStack_1c = 0xffffffff;
  if (auStack_44[0] == 0xffffffff) {
    uStack_10 = 2;
  }
  else {
    uStack_10 = 1;
  }
  if ((uStack_10 & 2) == 0) {
    while( true ) {
      sysMemReadW(auStack_44,piVar1->g[6]);
      uStack_1c = 0xffffffff;
      if (auStack_44[0] == 0xffffffff) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
      if ((uStack_10 & 2) != 0) break;
      piVar2 = i960GetRegs();
      piVar2->g[0] = 0;
      piVar2->g[9] = uRam016c0de8;
      tpd_clip_stage(0);
      piVar2->g[9] = 0;
      tpd_clip_stage(0);
      if (piVar1->g[0] == 0) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 4;
      }
      if ((uStack_10 & 2) == 0) {
        set_tpd_data(0);
      }
      uStack_1c = 0x24;
      piVar1->g[6] = piVar1->g[6] + 0x24;
      piVar1->g[5] = piVar1->g[5] + 1;
    }
    send_tpd(0);
    piVar1->g[5] = 0;
    while( true ) {
      uStack_18 = uRam016c4dd4;
      if (piVar1->g[5] < uRam016c4dd4) {
        uStack_10 = 4;
      }
      else if (piVar1->g[5] == uRam016c4dd4) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
      if ((uStack_10 & 2) != 0) break;
      uStack_14 = 0x800101;
      FUN_0018df40();
      iStack_28 = *(int *)(piVar1->g[5] * 4 + 0x16c4ed0);
      sysMemReadS(&uStack_2,iStack_28 + 4);
      uStack_34 = (uint)uStack_2;
      uStack_14 = 0x3000606;
      uStack_30 = *(uint *)(piVar1->g[5] * 4 + 0x16c4fd0);
      FUN_0018df40();
      uStack_14 = uRam016c0de4 ^ 0x80000000;
      FUN_0018df40();
      uStack_14 = uRam016c0de8 ^ 0x80000000;
      FUN_0018df40();
      uStack_14 = uRam016c0dec ^ 0x80000000;
      FUN_0018df40();
      uStack_14 = 0x4800909;
      FUN_0018df40();
      uStack_14 = -(int)sRam016c0df2;
      FUN_0018df40(uStack_14);
      piVar1->g[2] = uStack_30;
      piVar1->g[1] = 0;
      piVar1->g[0] = uStack_34;
      set_obj_tpd(0);
      uStack_14 = 0x1000202;
      FUN_0018df40();
      piVar1->g[5] = piVar1->g[5] + 1;
    }
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

