/* EXT 79: cage_break_st04 @ 001f8d40; patched over i960 079ff0 (arcade cage_break_st04) */

/* WARNING: Removing unreachable block (ram,0x001f8df4) */

undefined4 cage_break_st04(void)

{
  i960_regs *piVar1;
  uint uVar2;
  
  piVar1 = i960GetRegs();
  piVar1->r[3] = 0;
  piVar1->r[7] = 0x57411c;
  sysMemReadW(piVar1->r + 0xf,piVar1->g[10] + 0x2008);
  uRam016c5dcc = piVar1->g[0xe];
  piVar1->g[0xe] = 0;
  sysMemWriteW(piVar1->g[10],piVar1->g + 0xe);
  piVar1->g[0xe] = uRam016c5dcc;
  uRam016b85d0 = piVar1->r[0xf];
  piVar1->r[0xf] = 0x501844;
  sysMemReadW(piVar1->r + 0xe,piVar1->r[0xf] + 4);
  sysMemReadW(piVar1->r + 0xd,piVar1->g[10] + 0x2008);
  if (piVar1->r[0xe] == 0) {
    piVar1->pad[0x94] = '\x02';
    piVar1->pad[0x95] = '\0';
    piVar1->pad[0x96] = '\0';
    piVar1->pad[0x97] = '\0';
  }
  else {
    piVar1->pad[0x94] = '\x04';
    piVar1->pad[0x95] = '\0';
    piVar1->pad[0x96] = '\0';
    piVar1->pad[0x97] = '\0';
  }
  if ((*(uint *)(piVar1->pad + 0x94) & 5) == 0) {
    sysMemWriteW(piVar1->r[0xf],piVar1->r + 0xd);
  }
  else {
    piVar1->r[0xd] = piVar1->r[0xd] | 0x80000000;
    sysMemWriteW(piVar1->r[0xe] + 0x900000,piVar1->r + 0xd);
  }
  while( true ) {
    piVar1->r[4] = 0x31;
    if (piVar1->r[4] < piVar1->r[3]) {
      piVar1->pad[0x94] = '\x04';
      piVar1->pad[0x95] = '\0';
      piVar1->pad[0x96] = '\0';
      piVar1->pad[0x97] = '\0';
    }
    else if (piVar1->r[4] == piVar1->r[3]) {
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
    if ((*(uint *)(piVar1->pad + 0x94) & 4) != 0) break;
    sysMemReadT(piVar1->r + 4,piVar1->r[7] + 0x60);
    sysMemReadT(piVar1->r + 8,piVar1->r[7] + 0x6c);
    piVar1->r[0xb] = uRam016c0dd0;
    piVar1->r[9] = (uint)((float)piVar1->r[9] - (float)piVar1->r[0xb]);
    sysMemWriteW(piVar1->r[7] + 0x70,piVar1->r + 9);
    piVar1->r[4] = (uint)((float)piVar1->r[4] + (float)piVar1->r[8]);
    piVar1->r[5] = (uint)((float)piVar1->r[5] + (float)piVar1->r[9]);
    piVar1->r[6] = (uint)((float)piVar1->r[6] + (float)piVar1->r[10]);
    sysMemWriteT(piVar1->r[7] + 0x60,piVar1->r + 4);
    piVar1->r[0xf] = 0x800101;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[0xf] = 0x3e007c7c;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[0xf] = piVar1->r[3] * 9;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[0xf] = 1;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[0xf] = 0x3f007e7e;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[0xf] = piVar1->r[3] * 9;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[0xf] = 0;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[0xf] = 0x9801313;
    FUN_0018df40(piVar1->r[0xf]);
    FUN_0018df40(piVar1->r[0xf]);
    FUN_0018df40(piVar1->r[0xf]);
    FUN_0018e100();
    piVar1->r[0xf] = 0x3e807d7d;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[0xf] = piVar1->r[3] * 9;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[0xf] = 1;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[0xf] = 0x1000202;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[8] = 0x40400000;
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
    piVar1->r[0xf] = 0x3800707;
    FUN_0018df40(piVar1->r[0xf]);
    FUN_0018df40(piVar1->r[8]);
    FUN_0018df40(piVar1->r[8]);
    FUN_0018df40(piVar1->r[8]);
    piVar1->r[0xf] = 0x9801313;
    FUN_0018df40(piVar1->r[0xf]);
    FUN_0018df40(piVar1->r[0xf]);
    FUN_0018df40(piVar1->r[0xf]);
    uVar2 = FUN_0018e100();
    piVar1->r[0xf] = uVar2;
    piVar1->g[1] = 0;
    piVar1->g[0] = 0xa97;
    set_obj(0);
    piVar1->r[0xf] = 0x1000202;
    FUN_0018df40(piVar1->r[0xf]);
    piVar1->r[4] = 0x78;
    piVar1->r[7] = piVar1->r[7] + piVar1->r[4];
    piVar1->r[3] = piVar1->r[3] + 1;
  }
  piVar1->r[0xf] = 0x501844;
  sysMemReadW(piVar1->r + 0xe,piVar1->r[0xf]);
  sysMemReadW(piVar1->r + 0xd,piVar1->g[10] + 0x2008);
  sysMemWriteW(piVar1->r[0xf] + 4,piVar1->r + 0xd);
  piVar1->r[0xe] = piVar1->r[0xe] | 0x80000000;
  sysMemWriteW(piVar1->g[10],piVar1->r + 0xe);
  sysMemReadW(piVar1->r + 0xf,piVar1->g[10] + 0x2008);
  piVar1->r[0xe] = uRam016b85d0;
  piVar1->r[0xf] = piVar1->r[0xf] | 0x80000000;
  sysMemWriteW(piVar1->r[0xe] + 0x900000,piVar1->r + 0xf);
  return 1000;
}

