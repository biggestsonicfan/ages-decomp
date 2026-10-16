/* EXT 85: send_tex_col_go @ 001ea600; patched over i960 000818 (arcade send_tex_col_go) */

undefined8 send_tex_col_go(void)

{
  i960_regs *piVar1;
  ushort uStack_c;
  ushort uStack_a;
  ushort uStack_8;
  ushort uStack_6;
  ushort uStack_4;
  ushort uStack_2;
  
  piVar1 = i960GetRegs();
  piVar1->r[4] = 0x1800000;
  piVar1->r[3] = 0x200;
  piVar1->r[3] = piVar1->r[3] * piVar1->g[0];
  piVar1->r[4] = piVar1->r[4] + piVar1->r[3];
  piVar1->r[5] = 0;
  do {
    piVar1->r[4] = piVar1->r[4] + 0x60;
    piVar1->g[0] = 0;
    piVar1->r[3] = piVar1->r[0xb] * piVar1->g[1];
    piVar1->r[7] = 0x60;
    piVar1->r[7] = piVar1->r[7] * piVar1->r[5];
    piVar1->r[3] = piVar1->r[3] + piVar1->r[7];
    piVar1->r[3] = piVar1->r[3] + piVar1->g[3];
    do {
      sysMemReadS(&uStack_2,piVar1->r[3] + piVar1->g[0] * 2);
      piVar1->r[8] = (uint)uStack_2;
      if (piVar1->r[9] < 3) {
        if (piVar1->r[9] == 2) {
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
      if ((*(uint *)(piVar1->pad + 0x94) & 5) == 0) {
        sysMemReadS(&uStack_4,piVar1->r[3] + piVar1->g[0] * 4);
        piVar1->r[8] = (uint)uStack_4;
        piVar1->r[0xd] = 0x80;
        piVar1->r[8] = piVar1->r[8] + piVar1->r[0xd];
        piVar1->r[8] = piVar1->r[8] >> 1;
      }
      piVar1->r[10] = (uint)*(ushort *)(piVar1->r[8] * 2 + 0x16fadd0);
      sysMemWriteS(piVar1->r[4] + 0x10000,piVar1->r + 10);
      sysMemReadS(&uStack_6,piVar1->r[3] + 0x20 + piVar1->g[0] * 2);
      piVar1->r[8] = (uint)uStack_6;
      if (piVar1->r[9] < 3) {
        if (piVar1->r[9] == 2) {
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
      if ((*(uint *)(piVar1->pad + 0x94) & 5) == 0) {
        sysMemReadS(&uStack_8,piVar1->r[3] + 0x80 + piVar1->g[0] * 4);
        piVar1->r[8] = (uint)uStack_8;
        piVar1->r[0xd] = 0x80;
        piVar1->r[8] = piVar1->r[8] + piVar1->r[0xd];
        piVar1->r[8] = piVar1->r[8] >> 1;
      }
      piVar1->r[10] = (uint)*(ushort *)(piVar1->r[8] * 2 + 0x16fafd0);
      sysMemWriteS(piVar1->r[4] + 0x14000,piVar1->r + 10);
      sysMemReadS(&uStack_a,piVar1->r[3] + 0x40 + piVar1->g[0] * 2);
      piVar1->r[8] = (uint)uStack_a;
      if (piVar1->r[9] < 3) {
        if (piVar1->r[9] == 2) {
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
      if ((*(uint *)(piVar1->pad + 0x94) & 5) == 0) {
        sysMemReadS(&uStack_c,piVar1->r[3] + 0x100 + piVar1->g[0] * 4);
        piVar1->r[8] = (uint)uStack_c;
        piVar1->r[0xd] = 0x80;
        piVar1->r[8] = piVar1->r[8] + piVar1->r[0xd];
        piVar1->r[8] = piVar1->r[8] >> 1;
      }
      piVar1->r[10] = (uint)*(ushort *)(piVar1->r[8] * 2 + 0x16fb1d0);
      sysMemWriteS(piVar1->r[4] + 0x18000,piVar1->r + 10);
      piVar1->r[4] = piVar1->r[4] + 2;
      if (piVar1->g[0] < 0x10) {
        if (piVar1->g[0] == 0xf) {
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
      piVar1->g[0] = piVar1->g[0] + 1;
    } while ((*(uint *)(piVar1->pad + 0x94) & 1) != 0);
    piVar1->r[6] = 0x180;
    piVar1->r[4] = piVar1->r[4] + piVar1->r[6];
    if (piVar1->g[2] < piVar1->r[5]) {
      piVar1->pad[0x94] = '\x04';
      piVar1->pad[0x95] = '\0';
      piVar1->pad[0x96] = '\0';
      piVar1->pad[0x97] = '\0';
    }
    else if (piVar1->g[2] == piVar1->r[5]) {
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
    piVar1->r[5] = piVar1->r[5] + 1;
  } while ((*(uint *)(piVar1->pad + 0x94) & 1) != 0);
  i960ReturnProc();
  return 0;
}

