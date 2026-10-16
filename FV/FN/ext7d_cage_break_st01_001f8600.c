/* EXT 7d: cage_break_st01 @ 001f8600; patched over i960 079a10 (arcade cage_break_st01) */

undefined8 cage_break_st01(void)

{
  i960_regs *piVar1;
  
  piVar1 = i960GetRegs();
  piVar1->r[3] = 0;
  piVar1->r[0xf] = 4;
  uRam0172ae80 = piVar1->r[0xf];
  piVar1->r[7] = 0x5740bc;
  piVar1->r[4] = 0x3f400000;
  piVar1->r[5] = 0x3f000000;
  piVar1->r[6] = 0;
  sysMemWriteT(piVar1->r[7],piVar1->r + 4);
  piVar1->r[10] = 0xc;
  piVar1->r[7] = piVar1->r[7] + piVar1->r[10];
  piVar1->r[4] = 0xbf400000;
  piVar1->r[5] = 0x3f000000;
  piVar1->r[6] = 0;
  sysMemWriteT(piVar1->r[7],piVar1->r + 4);
  piVar1->r[7] = piVar1->r[7] + piVar1->r[10];
  piVar1->r[4] = 0x3f400000;
  piVar1->r[5] = 0xbf000000;
  piVar1->r[6] = 0;
  sysMemWriteT(piVar1->r[7],piVar1->r + 4);
  piVar1->r[7] = piVar1->r[7] + piVar1->r[10];
  piVar1->r[4] = 0xbf400000;
  piVar1->r[5] = 0xbf000000;
  piVar1->r[6] = 0;
  sysMemWriteT(piVar1->r[7],piVar1->r + 4);
  piVar1->r[7] = 0x57411c;
  while( true ) {
    if ((int)piVar1->r[3] < 0x19) {
      if (piVar1->r[3] == 0x18) {
        piVar1->pad[0x94] = '\x02';
        piVar1->pad[0x95] = '\0';
        piVar1->pad[0x96] = '\0';
        piVar1->pad[0x97] = '\0';
      }
      else {
        piVar1->pad[0x94] = '\x01';
        piVar1->pad[0x95] = '\0';
        piVar1->pad[0x96] = '\0';
        piVar1->pad[0x97] = '\0';
      }
    }
    else {
      piVar1->pad[0x94] = '\x04';
      piVar1->pad[0x95] = '\0';
      piVar1->pad[0x96] = '\0';
      piVar1->pad[0x97] = '\0';
    }
    if ((*(uint *)(piVar1->pad + 0x94) & 6) != 0) break;
    sysMemReadW(piVar1->r + 0xf,piVar1->r[7] + 0x84);
    if ((piVar1->r[0xf] & 1) == 0) {
      piVar1->r[1] = piVar1->r[1] + 4;
      sysMemWriteW(piVar1->r[1] - 4,piVar1->g + 4);
      piVar1->r[1] = piVar1->r[1] + 4;
      sysMemWriteW(piVar1->r[1] - 4,piVar1->g + 5);
      piVar1->g[4] = piVar1->r[7];
      piVar1->g[5] = piVar1->r[3];
      cage_break_calc(0);
      sysMemReadW(piVar1->g + 5,piVar1->r[1] - 4);
      piVar1->r[1] = piVar1->r[1] - 4;
      sysMemReadW(piVar1->g + 4,piVar1->r[1] - 4);
      piVar1->r[1] = piVar1->r[1] - 4;
    }
    sysMemReadT(piVar1->r + 4,piVar1->r[7] + 0x60);
    piVar1->r[0xf] = 0x800101;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[0xf] = 0x3000606;
    FUN_0018df40(piVar1->r[0xf]);
    FUN_0018df40(piVar1->r[4]);
    FUN_0018df40(piVar1->r[5]);
    FUN_0018df40(piVar1->r[6]);
    piVar1->r[0xf] = 0x3f007e7e;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[0xf] = piVar1->r[3] * 9;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[0xf] = 1;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->g[1] = 0;
    piVar1->g[0] = 0xa85;
    set_obj(0);
    piVar1->r[0xf] = 0x1000202;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[8] = 0x88;
    piVar1->r[7] = piVar1->r[7] + piVar1->r[8];
    piVar1->r[3] = piVar1->r[3] + 1;
  }
  piVar1->r[0xf] = 2;
  uRam0172ae80 = piVar1->r[0xf];
  piVar1->r[0xb] = 0x5740bc;
  piVar1->r[4] = 0;
  piVar1->r[5] = 0x3fc00000;
  piVar1->r[6] = 0;
  sysMemWriteT(piVar1->r[0xb],piVar1->r + 4);
  piVar1->r[10] = 0xc;
  piVar1->r[0xb] = piVar1->r[0xb] + piVar1->r[10];
  piVar1->r[4] = 0;
  piVar1->r[5] = (uint)&DAT_bfc00000;
  piVar1->r[6] = 0;
  sysMemWriteT(piVar1->r[0xb],piVar1->r + 4);
  while( true ) {
    if ((int)piVar1->r[3] < 0x1d) {
      if (piVar1->r[3] == 0x1c) {
        piVar1->pad[0x94] = '\x02';
        piVar1->pad[0x95] = '\0';
        piVar1->pad[0x96] = '\0';
        piVar1->pad[0x97] = '\0';
      }
      else {
        piVar1->pad[0x94] = '\x01';
        piVar1->pad[0x95] = '\0';
        piVar1->pad[0x96] = '\0';
        piVar1->pad[0x97] = '\0';
      }
    }
    else {
      piVar1->pad[0x94] = '\x04';
      piVar1->pad[0x95] = '\0';
      piVar1->pad[0x96] = '\0';
      piVar1->pad[0x97] = '\0';
    }
    if ((*(uint *)(piVar1->pad + 0x94) & 6) != 0) break;
    piVar1->r[1] = piVar1->r[1] + 4;
    sysMemWriteW(piVar1->r[1] - 4,piVar1->g + 4);
    piVar1->r[1] = piVar1->r[1] + 4;
    sysMemWriteW(piVar1->r[1] - 4,piVar1->g + 5);
    piVar1->g[4] = piVar1->r[7];
    piVar1->g[5] = piVar1->r[3];
    cage_break_calc(0);
    sysMemReadW(piVar1->g + 5,piVar1->r[1] - 4);
    piVar1->r[1] = piVar1->r[1] - 4;
    sysMemReadW(piVar1->g + 4,piVar1->r[1] - 4);
    piVar1->r[1] = piVar1->r[1] - 4;
    sysMemReadT(piVar1->r + 4,piVar1->r[7] + 0x60);
    piVar1->r[0xf] = 0x9801313;
    FUN_0018df40(piVar1->r[0xf]);
    FUN_0018df40(piVar1->r[0xf]);
    FUN_0018df40(piVar1->r[0xf]);
    FUN_0018e100();
    piVar1->r[0xf] = 0x800101;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[0xf] = 0x3000606;
    FUN_0018df40(piVar1->r[0xf]);
    FUN_0018df40(piVar1->r[4]);
    FUN_0018df40(piVar1->r[5]);
    FUN_0018df40(piVar1->r[6]);
    piVar1->r[0xf] = 0x3f007e7e;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[0xf] = piVar1->r[3] * 9;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[0xf] = 1;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->g[1] = 0;
    piVar1->g[0] = 0x14f4;
    set_obj(0);
    piVar1->r[0xf] = 0x1000202;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[8] = 0x88;
    piVar1->r[7] = piVar1->r[7] + piVar1->r[8];
    piVar1->r[3] = piVar1->r[3] + 1;
  }
  piVar1->r[0xf] = 2;
  uRam0172ae80 = piVar1->r[0xf];
  piVar1->r[0xb] = 0x5740bc;
  piVar1->r[4] = 0x40c00000;
  piVar1->r[5] = 0;
  piVar1->r[6] = 0;
  sysMemWriteT(piVar1->r[0xb],piVar1->r + 4);
  piVar1->r[10] = 0xc;
  piVar1->r[0xb] = piVar1->r[0xb] + piVar1->r[10];
  piVar1->r[4] = 0xc0c00000;
  piVar1->r[5] = 0;
  piVar1->r[6] = 0;
  sysMemWriteT(piVar1->r[0xb],piVar1->r + 4);
  piVar1->r[1] = piVar1->r[1] + 4;
  sysMemWriteW(piVar1->r[1] - 4,piVar1->g + 4);
  piVar1->r[1] = piVar1->r[1] + 4;
  sysMemWriteW(piVar1->r[1] - 4,piVar1->g + 5);
  piVar1->g[4] = piVar1->r[7];
  piVar1->g[5] = piVar1->r[3];
  cage_break_calc(0);
  sysMemReadW(piVar1->g + 5,piVar1->r[1] - 4);
  piVar1->r[1] = piVar1->r[1] - 4;
  sysMemReadW(piVar1->g + 4,piVar1->r[1] - 4);
  piVar1->r[1] = piVar1->r[1] - 4;
  sysMemReadT(piVar1->r + 4,piVar1->r[7] + 0x60);
  piVar1->r[0xf] = 0x9801313;
  FUN_0018df40(piVar1->r[0xf]);
  FUN_0018df40(piVar1->r[0xf]);
  FUN_0018df40(piVar1->r[0xf]);
  FUN_0018e100();
  piVar1->r[0xf] = 0x800101;
  FUN_0018df40(piVar1->r[0xf]);
  piVar1->r[0xf] = 0x3000606;
  FUN_0018df40(piVar1->r[0xf]);
  FUN_0018df40(piVar1->r[4]);
  FUN_0018df40(piVar1->r[5]);
  FUN_0018df40(piVar1->r[6]);
  piVar1->r[0xf] = 0x3f007e7e;
  FUN_0018df40(piVar1->r[0xf]);
  piVar1->r[0xf] = piVar1->r[3] * 9;
  FUN_0018df40(piVar1->r[0xf]);
  piVar1->r[0xf] = 1;
  FUN_0018df40(piVar1->r[0xf]);
  piVar1->g[1] = 0;
  piVar1->g[0] = 0x1523;
  set_obj(0);
  piVar1->r[0xf] = 0x1000202;
  FUN_0018df40(piVar1->r[0xf]);
  sysMemReadW(piVar1->g + 1,piVar1->r[1] - 4);
  piVar1->r[1] = piVar1->r[1] - 4;
  i960ReturnProc();
  return 0;
}

