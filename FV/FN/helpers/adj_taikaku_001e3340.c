/* helper adj_taikaku @ 001e3340, called (depth 1) from calc_rob_angle_cont */

undefined8 adj_taikaku(long param_1)

{
  i960_regs *piVar1;
  uint uVar2;
  float fVar3;
  uint uStack_48;
  int iStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  uint uStack_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_20;
  short sStack_e;
  short sStack_c;
  ushort uStack_a;
  short sStack_8;
  short sStack_6;
  ushort uStack_4;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadB(&bStack_1,piVar1->g[7] + 0x1b1);
  uStack_24 = (uint)bStack_1;
  if (bStack_1 < 10) {
    if (bStack_1 == 9) {
      uStack_20 = 2;
    }
    else {
      uStack_20 = 1;
    }
  }
  else {
    uStack_20 = 4;
  }
  if ((uStack_20 & 2) == 0) {
    if (uStack_24 < 0xb) {
      if (uStack_24 == 10) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
    }
    else {
      uStack_20 = 4;
    }
    if ((uStack_20 & 2) == 0) {
      fStack_28 = 0.0;
      sysMemWriteW(piVar1->g[7] + 0xc50,&fStack_28);
      goto LAB_001e3494;
    }
    fStack_3c = 0.56;
  }
  else {
    fStack_3c = 1.1;
  }
  fStack_2c = -NAN;
  fStack_38 = 0.0025;
  iStack_40 = -0x800;
  sysMemReadW(&fStack_28,piVar1->g[7] + 0x1a4);
  if (((uint)fStack_28 & 0x80000) == 0) goto LAB_001e3460;
  sysMemReadS(&uStack_4,piVar1->g[7] + 0x1aa);
  uStack_30 = (uint)uStack_4;
  if (uStack_4 < 0x15) {
    if (uStack_4 == 0x14) {
      uStack_20 = 2;
    }
    else {
      uStack_20 = 1;
    }
  }
  else {
    uStack_20 = 4;
  }
  if ((uStack_20 & 4) != 0) {
    uStack_24 = uRam016bedd0;
    if ((uRam016bedd0 & 0x20) == 0) {
      sysMemReadS(&uStack_a,piVar1->g[7] + 0x614);
      uStack_48 = uStack_a & 0x9000;
      if ((uStack_a & 0x9000) == 0) {
        if ((uStack_a & 0x9000) == 0) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 1;
        }
      }
      else {
        uStack_20 = 4;
      }
      if ((uStack_20 & 2) == 0) {
        uStack_24 = 0x32;
        if (uStack_30 < 0x33) {
          if (uStack_30 == 0x32) {
            uStack_20 = 2;
          }
          else {
            uStack_20 = 1;
          }
        }
        else {
          uStack_20 = 4;
        }
        if ((uStack_20 & 4) == 0) {
          sysMemReadS(&sStack_c,piVar1->g[7] + 0x18a);
          iStack_44 = (int)sStack_c;
          uStack_48 = iStack_40 + iStack_44;
          sysMemWriteS(piVar1->g[7] + 0x18a,&uStack_48);
          sysMemReadS(&sStack_e,piVar1->g[7] + 0x17c);
          iStack_44 = (int)sStack_e;
          uStack_48 = iStack_40 + iStack_44;
          sysMemWriteS(piVar1->g[7] + 0x17c,&uStack_48);
        }
      }
    }
    goto LAB_001e3494;
  }
  if (uStack_30 < 0xb) {
    if (uStack_30 == 10) {
      uStack_20 = 2;
    }
    else {
      uStack_20 = 1;
    }
  }
  else {
    uStack_20 = 4;
  }
  if ((uStack_20 & 3) == 0) {
    uStack_24 = 0xb801717;
    iStack_34 = uStack_30 - 10;
    FUN_0018df40();
    FUN_0018df40(iStack_34);
    fVar3 = (float)FUN_0018e100();
    fStack_3c = fStack_3c + fVar3 * fStack_38;
    uStack_24 = uRam016bedd0;
    if ((uRam016bedd0 & 0x20) != 0) goto LAB_001e3460;
    iStack_40 = iStack_34 * (int)fStack_2c;
    sysMemReadS(&sStack_6,piVar1->g[7] + 0x18a);
    iStack_44 = (int)sStack_6;
    uStack_48 = iStack_40 + iStack_44;
    sysMemWriteS(piVar1->g[7] + 0x18a,&uStack_48);
    sysMemReadS(&sStack_8,piVar1->g[7] + 0x17c);
    iStack_44 = (int)sStack_8;
    uStack_48 = iStack_40 + iStack_44;
    sysMemWriteS(piVar1->g[7] + 0x17c,&uStack_48);
    uVar2 = piVar1->g[7];
  }
  else {
LAB_001e3460:
    uVar2 = piVar1->g[7];
  }
  sysMemReadW(&fStack_2c,uVar2 + 0x84);
  fStack_28 = fStack_3c * fStack_2c - fStack_2c;
  sysMemWriteW(piVar1->g[7] + 0xc50,&fStack_28);
LAB_001e3494:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

