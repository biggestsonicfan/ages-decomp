/* helper FUN_001dc200 @ 001dc200, called (depth 1) from coli_cont_cop */

/* WARNING: Removing unreachable block (ram,0x001dc9b0) */

undefined8 FUN_001dc200(int param_1)

{
  uint uVar1;
  i960_regs *piVar2;
  float fVar3;
  float fStack_44;
  uint uStack_40;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  ushort uStack_6;
  ushort uStack_4;
  byte bStack_2;
  byte bStack_1;
  
  piVar2 = i960GetRegs();
  piVar2->g[7] = uRam016b75d4;
  piVar2->g[8] = uRam016b75d8;
  sysMemReadW(&uStack_34,piVar2->g[7] + 0x1a4);
  sysMemReadW(&uStack_30,piVar2->g[8] + 0x1a4);
  fStack_28 = (float)(uStack_34 & uStack_30);
  uStack_2c = uStack_34 | uStack_30;
  uStack_24 = uStack_30 ^ uStack_34;
  piVar2->g[6] = 0;
  sysMemReadS(&uStack_4,piVar2->g[7] + 0x1a8);
  fStack_44 = (float)(uint)uStack_4;
  sysMemReadS(&uStack_6,piVar2->g[8] + 0x1a8);
  uStack_40 = (uint)uStack_6;
  if ((uStack_2c & 0x40000) == 0) {
    if ((uStack_24 & 0x100) == 0) {
      if (((uint)fStack_28 & 0x100) != 0) {
        piVar2->g[6] = piVar2->g[6] | 4;
      }
    }
    else {
      uStack_18 = 0x29;
      sysMemReadB(&bStack_1,piVar2->g[7] + 0x820);
      uStack_14 = (uint)bStack_1;
      if (uStack_18 < uStack_14) {
        uStack_10 = 4;
      }
      else if (uStack_18 == uStack_14) {
        uStack_10 = 2;
      }
      else {
        uStack_10 = 1;
      }
      if ((uStack_10 & 2) == 0) {
        sysMemReadB(&bStack_2,piVar2->g[8] + 0x820);
        uStack_14 = (uint)bStack_2;
        if (uStack_18 < uStack_14) {
          uStack_10 = 4;
        }
        else if (uStack_18 == uStack_14) {
          uStack_10 = 2;
        }
        else {
          uStack_10 = 1;
        }
        if ((uStack_10 & 2) == 0) {
          piVar2->g[6] = piVar2->g[6] | 2;
        }
      }
    }
  }
  else {
    piVar2->g[6] = piVar2->g[6] | 1;
  }
  if ((uStack_2c & 0x4000) != 0) {
    piVar2->g[6] = piVar2->g[6] | 8;
  }
  uStack_20 = 0x279b8;
  uVar1 = piVar2->g[6];
  if (((uVar1 & 1) == 0) && ((uVar1 & 4) == 0)) {
    if ((uStack_34 & 0x10000) == 0) {
      if ((uStack_30 & 0x10000) == 0) {
        if ((uVar1 & 2) == 0) {
          if (((uStack_24 & 0x10) != 0) && (uStack_20 = 0x27ad8, (uStack_34 & 0x10) == 0)) {
            uStack_20 = 0x27af8;
          }
        }
        else if ((uStack_34 & 0x100) == 0) {
          uStack_20 = 0x27a38;
          sysMemReadW(&fStack_44,piVar2->g[0xd] + 0x1e0);
          uStack_40 = 7;
          fStack_44 = (float)((uint)fStack_44 >> 0xd & 7);
          sysMemReadW(&fStack_44,(int)fStack_44 * 4 + 0x290f8);
          sysMemReadW(&fStack_44,piVar2->g[7] + 0x650 + (int)fStack_44);
          uStack_40 = 0x3dcccccd;
          if (fStack_44 <= 0.1) {
            if (fStack_44 == 0.1) {
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
            uStack_20 = 0x27a78;
          }
        }
        else {
          uStack_20 = 0x27a18;
          sysMemReadW(&fStack_44,piVar2->g[0xd] + 0x1e0);
          uStack_40 = 7;
          fStack_44 = (float)((uint)fStack_44 >> 0xd & 7);
          sysMemReadW(&fStack_44,(int)fStack_44 * 4 + 0x29118);
          sysMemReadW(&fStack_44,piVar2->g[8] + 0x650 + (int)fStack_44);
          uStack_40 = 0x3dcccccd;
          if (fStack_44 <= 0.1) {
            if (fStack_44 == 0.1) {
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
            uStack_20 = 0x27a58;
          }
        }
        goto LAB_001dc7d8;
      }
      if (((uStack_30 & 0x8000) == 0) && ((uStack_34 & 0x400000) != 0)) {
        sysMemReadW(&uStack_14,piVar2->g[7] + 0x804);
        if (((uStack_14 & 0x1000) != 0) ||
           (sysMemReadW(&uStack_14,piVar2->g[7] + 0x804), (uStack_14 & 0x10) != 0)) {
          piVar2->g[6] = piVar2->g[6] | 0x10;
          uStack_20 = 0x27ab8;
          goto LAB_001dc7d8;
        }
        piVar2->g[6] = piVar2->g[6] | 0x20;
      }
    }
    else if (((uStack_34 & 0x8000) == 0) && ((uStack_30 & 0x400000) != 0)) {
      sysMemReadW(&uStack_14,piVar2->g[8] + 0x804);
      if (((uStack_14 & 0x1000) != 0) ||
         (sysMemReadW(&uStack_14,piVar2->g[8] + 0x804), (uStack_14 & 0x10) != 0)) {
        piVar2->g[6] = piVar2->g[6] | 0x40;
        uStack_20 = 0x27a98;
        goto LAB_001dc7d8;
      }
      piVar2->g[6] = piVar2->g[6] | 0x80;
    }
    if ((uStack_34 & 0x10000) == 0) {
      uStack_20 = 0x279f8;
      if ((uStack_30 & 0x8000) != 0) {
        uStack_20 = 0x27b38;
      }
    }
    else if (((uStack_30 & 0x10000) == 0) && (uStack_20 = 0x279d8, (uStack_34 & 0x8000) != 0)) {
      uStack_20 = 0x27b18;
    }
  }
LAB_001dc7d8:
  sysMemReadW(&uStack_14,uStack_20);
  sysMemWriteW(piVar2->g[0xd] + 0xc0,&uStack_14);
  sysMemReadW(&uStack_14,uStack_20 + 4);
  sysMemWriteW(piVar2->g[0xd] + 0xc4,&uStack_14);
  sysMemReadW(&fStack_28,uStack_20 + 8);
  sysMemReadW(&uStack_24,uStack_20 + 0xc);
  uStack_18 = 0x411e6666;
  if (fStack_28 <= 9.9) {
    if (fStack_28 == 9.9) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 1;
    }
  }
  else {
    uStack_10 = 4;
  }
  if ((uStack_10 & 5) == 0) {
    sysMemReadW(&fStack_28,piVar2->g[0xd] + 0x27c);
    sysMemReadW(&uStack_24,piVar2->g[0xd] + 0x280);
    fVar3 = (float)((ulong)((long)(int)fStack_28 << 0x21) >> 0x21);
    uVar1 = (uint)fStack_28 | uStack_24;
    uStack_24 = (uint)((ulong)((long)(int)uStack_24 << 0x21) >> 0x21);
    uStack_2c = (uint)((ulong)((long)(int)uVar1 << 0x21) >> 0x21);
    if (((long)(int)uVar1 & 0x7fffffffU) == 0) {
      uStack_10 = 2;
    }
    else {
      uStack_10 = 4;
    }
    fStack_28 = fVar3;
    if ((uStack_10 & 2) == 0) {
      uStack_14 = 0x2d005a5a;
      FUN_0018df40();
      FUN_0018df40(fStack_28);
      FUN_0018df40(uStack_24);
      fStack_28 = (float)FUN_0018e100();
      uStack_24 = FUN_0018e100();
    }
  }
  sysMemWriteW(piVar2->g[0xd] + 0xcc,&fStack_28);
  sysMemWriteW(piVar2->g[0xd] + 0xd0,&uStack_24);
  sysMemReadW(&uStack_14,uStack_20 + 0x10);
  sysMemWriteW(piVar2->g[0xd] + 200,&uStack_14);
  sysMemReadW(&uStack_14,uStack_20 + 0x14);
  sysMemWriteW(piVar2->g[0xd] + 0x88,&uStack_14);
  sysMemReadW(&uStack_14,uStack_20 + 0x18);
  sysMemWriteW(piVar2->g[0xd] + 0x264,&uStack_14);
  sysMemReadW(&uStack_14,uStack_20 + 0x1c);
  sysMemWriteW(piVar2->g[0xd] + 0x268,&uStack_14);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

