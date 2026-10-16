/* EXT 7e: rob_kage_disp_test @ 001f5580; patched over i960 060640 (arcade rob_kage_disp_test) */

/* WARNING: Removing unreachable block (ram,0x001f5bb0) */
/* WARNING: Removing unreachable block (ram,0x001f5874) */
/* WARNING: Removing unreachable block (ram,0x001f594c) */
/* WARNING: Removing unreachable block (ram,0x001f5bf8) */

undefined8 rob_kage_disp_test(int param_1)

{
  i960_regs *piVar1;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  uint uStack_24;
  uint uStack_20;
  ushort uStack_14;
  ushort uStack_12;
  ushort uStack_10;
  ushort uStack_e;
  ushort uStack_c;
  ushort uStack_a;
  ushort uStack_8;
  byte bStack_6;
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  piVar1->g[0] = 2;
  set_mmode(0);
  uStack_24 = 0x800101;
  FUN_0018df40();
  uStack_24 = 0x22004444;
  FUN_0018df40();
  uStack_24 = 0;
  FUN_0018df40(0);
  uStack_3c = 0xf;
  sysMemReadB(&bStack_1,piVar1->g[7] + 0x1b0);
  uStack_54 = (uint)bStack_1;
  sysMemReadW(&uStack_38,uStack_54 * 4 + 0x60bc8);
  do {
    sysMemReadW(&uStack_50,uStack_38);
    sysMemReadW(&uStack_4c,uStack_38 + 8);
    sysMemReadT(piVar1->g,uStack_38 + 0xc);
    if (uStack_50 < 10) {
      if (uStack_50 == 9) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
    }
    else {
      uStack_20 = 4;
    }
    if (((((uStack_20 & 5) != 0) ||
         (sysMemReadW(&uStack_34,piVar1->g[7] + 0x1a4), (uStack_34 & 0x4000) == 0)) ||
        ((uStack_34 & 0x10000) == 0)) && ((piVar1->g[4] & 1 << (uStack_50 & 0x1f)) != 0)) {
      sysMemReadB(&bStack_2,piVar1->g[7] + 4);
      uStack_24 = 0x3a007474;
      uStack_34 = (uint)bStack_2;
      FUN_0018df40();
      FUN_0018df40(uStack_34);
      uStack_50 = uStack_50 * 0xc;
      FUN_0018df40();
      FUN_0018df40(uStack_4c);
      FUN_0018df40(piVar1->g[0]);
      FUN_0018df40(piVar1->g[1]);
      FUN_0018df40(piVar1->g[2]);
      FUN_0018df40(piVar1->g[5]);
      uStack_24 = 0x9801313;
      FUN_0018df40();
      FUN_0018df40(uStack_24);
      FUN_0018df40(uStack_24);
      uStack_24 = FUN_0018e100();
      sysMemReadW(&uStack_54,uStack_38 + 4);
      sysMemReadB(&bStack_3,piVar1->g[7] + 4);
      piVar1->g[1] = (uint)bStack_3;
      piVar1->g[0] = uStack_54;
      set_obj(0);
      uStack_24 = 0x1000202;
      FUN_0018df40();
    }
    uStack_38 = uStack_38 + 0x18;
    if (uStack_3c < 2) {
      if (uStack_3c == 1) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
    }
    else {
      uStack_20 = 4;
    }
    uStack_3c = uStack_3c - 1;
  } while ((uStack_20 & 4) != 0);
  uStack_24 = 0x1000202;
  FUN_0018df40();
  uStack_24 = 0x800101;
  FUN_0018df40();
  uStack_24 = 0x22004444;
  FUN_0018df40();
  uStack_24 = 0;
  FUN_0018df40(0);
  sysMemReadS(&uStack_8,uStack_38);
  uStack_48 = (uint)uStack_8;
  if (uStack_8 == 0) {
    uStack_20 = 2;
  }
  else {
    uStack_20 = 4;
  }
  if ((uStack_20 & 2) == 0) {
    sysMemReadS(&uStack_a,piVar1->g[7] + 0x78a);
    uStack_50 = (uint)uStack_a;
    if (uStack_a == 0) {
      uStack_20 = 2;
    }
    else {
      uStack_20 = 4;
    }
    if ((uStack_20 & 2) == 0) {
      sysMemReadW(&uStack_24,piVar1->g[7]);
      if ((uStack_24 & 0x8000000) == 0) {
        sysMemReadW(&uStack_54,piVar1->g[7] + 0xf00);
        uStack_28 = 0x34;
        uStack_24 = 0x9801313;
        uStack_54 = uStack_54 * 0x34 + piVar1->g[7] + 0xf34;
        FUN_0018df40();
        FUN_0018df40(uStack_24);
        FUN_0018df40(uStack_24);
        uStack_24 = FUN_0018e100();
        sysMemReadS(&uStack_c,piVar1->g[7] + 0x788);
        uStack_4c = (uint)uStack_c;
        if ((piVar1->g[4] & 1 << (uStack_4c & 0x1f)) != 0) {
          uStack_24 = 0x9801313;
          FUN_0018df40();
          FUN_0018df40(uStack_24);
          FUN_0018df40(uStack_24);
          FUN_0018e100();
          uStack_24 = 0x5800b0b;
          FUN_0018df40();
          uStack_24 = uStack_54;
          sysMemReadT(auStack_30,uStack_54);
          FUN_0018de40(auStack_30);
          sysMemReadT(auStack_30,uStack_24 + 0xc);
          FUN_0018de40(auStack_30);
          sysMemReadT(auStack_30,uStack_24 + 0x18);
          FUN_0018de40(auStack_30);
          sysMemReadT(auStack_30,uStack_24 + 0x24);
          FUN_0018de40(auStack_30);
          uStack_24 = 0x9801313;
          FUN_0018df40();
          FUN_0018df40(uStack_24);
          FUN_0018df40(uStack_24);
          FUN_0018e100();
          uStack_24 = 0x23004646;
          FUN_0018df40();
          FUN_0018df40(piVar1->g[5]);
          uStack_24 = 0x9801313;
          FUN_0018df40();
          FUN_0018df40(uStack_24);
          FUN_0018df40(uStack_24);
          uStack_24 = FUN_0018e100();
          sysMemReadB(&bStack_4,piVar1->g[7] + 4);
          piVar1->g[1] = (uint)bStack_4;
          piVar1->g[0] = uStack_48;
          set_obj(0);
        }
      }
      else {
        sysMemReadS(&uStack_e,uStack_38 + 2);
        uStack_48 = (uint)uStack_e;
        sysMemReadS(&uStack_10,uStack_38 + 4);
        uStack_44 = (uint)uStack_10;
        if (uStack_48 == 0) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 4;
        }
        if ((uStack_20 & 2) == 0) {
          sysMemReadS(&uStack_12,piVar1->g[7] + 0x7a2);
          uStack_50 = (uint)uStack_12;
          if (uStack_12 == 0) {
            uStack_20 = 2;
          }
          else {
            uStack_20 = 4;
          }
          if ((uStack_20 & 2) == 0) {
            sysMemReadS(&uStack_14,piVar1->g[7] + 0x7a0);
            uStack_4c = (uint)uStack_14;
            if ((piVar1->g[4] & 1 << (uStack_4c & 0x1f)) != 0) {
              uStack_24 = 0x1b803737;
              FUN_0018df40();
              sysMemReadB(&bStack_5,piVar1->g[7] + 4);
              uStack_24 = (uint)bStack_5;
              FUN_0018df40();
              uStack_24 = uStack_4c * 0xc;
              FUN_0018df40();
              uStack_24 = 0x9801313;
              FUN_0018df40();
              FUN_0018df40(uStack_24);
              FUN_0018df40(uStack_24);
              FUN_0018e100();
              uStack_24 = 0x23004646;
              FUN_0018df40();
              FUN_0018df40(piVar1->g[5]);
              sysMemReadW(&uStack_24,piVar1->g[7]);
              if ((uStack_24 & 0x40) != 0) {
                uStack_48 = uStack_44;
              }
              sysMemReadB(&bStack_6,piVar1->g[7] + 4);
              piVar1->g[1] = (uint)bStack_6;
              piVar1->g[0] = uStack_48;
              set_obj(0);
            }
          }
        }
      }
    }
  }
  uStack_24 = 0x1000202;
  FUN_0018df40();
  piVar1->g[0] = 1;
  set_mmode(0);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

