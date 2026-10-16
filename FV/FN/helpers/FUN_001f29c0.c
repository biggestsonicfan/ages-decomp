/* helper FUN_001f29c0 @ 001f29c0, called (depth 1) from rob_disp */

/* WARNING: Removing unreachable block (ram,0x001f31a4) */
/* WARNING: Removing unreachable block (ram,0x001f2bbc) */
/* WARNING: Removing unreachable block (ram,0x001f2a64) */
/* WARNING: Removing unreachable block (ram,0x001f2b74) */
/* WARNING: Removing unreachable block (ram,0x001f2fc8) */
/* WARNING: Removing unreachable block (ram,0x001f2d8c) */

undefined8 FUN_001f29c0(int param_1)

{
  i960_regs *piVar1;
  uint uVar2;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  float fStack_38;
  uint uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_20;
  ushort uStack_10;
  ushort uStack_e;
  ushort uStack_c;
  ushort uStack_a;
  ushort uStack_8;
  ushort uStack_6;
  ushort uStack_4;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadW(&fStack_38,piVar1->g[7] + 0xaec);
  sysMemReadB(&bStack_1,piVar1->g[7] + 0x1b0);
  uStack_34 = (uint)bStack_1;
  sysMemReadW(&uStack_34,uStack_34 * 4 + 0x6421f80);
  if (uStack_34 == 0) {
    uStack_20 = 2;
  }
  else {
    uStack_20 = 4;
  }
  if ((uStack_20 & 2) != 0) goto LAB_001f2a80;
  sysMemReadS(&uStack_4,piVar1->g[7] + 0x1f48);
  uStack_3c = (uint)uStack_4;
  if ((uStack_4 & 2) == 0) goto LAB_001f2a80;
  uStack_24 = uRam016bedd0;
  if ((uRam016bedd0 & 0x20) == 0) {
    sysMemReadW(&uStack_24,piVar1->g[7] + 0x1a4);
    if ((((uStack_24 & 0x200) != 0) &&
        (sysMemReadW(&uStack_24,piVar1->g[7] + 0x1a4), (uStack_24 & 0x4000) == 0)) &&
       (sysMemReadW(&uStack_24,piVar1->g[7] + 0x1a4), (uStack_24 & 0x10000) == 0)) {
      sysMemReadW(&fStack_28,piVar1->g[7] + 0xc90);
      if (fStack_28 == 0.0) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 4;
      }
      if ((uStack_20 & 5) != 0) {
LAB_001f2d08:
        fStack_2c = 7.17465e-43;
        sysMemReadW(&fStack_28,piVar1->g[7] + 0x1a4);
        if ((uint)fStack_2c < (uint)fStack_28) {
          uStack_20 = 4;
        }
        else if (fStack_2c == fStack_28) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 1;
        }
        if ((uStack_20 & 5) == 0) {
          sysMemReadW(&fStack_54,uStack_34);
          if (fStack_54 == 0.0) {
            uStack_20 = 2;
          }
          else {
            uStack_20 = 4;
          }
          if ((uStack_20 & 2) == 0) {
            sysMemReadW(&fStack_44,(uint)fStack_54);
            fStack_54 = (float)((int)fStack_54 + 4);
            sysMemReadS(&uStack_e,piVar1->g[7] + 0x1aa);
            fStack_48 = (float)(uint)uStack_e;
            fStack_44 = (float)((int)fStack_48 % (int)fStack_44);
            sysMemReadS(&uStack_10,(int)fStack_54 + (int)fStack_44 * 2);
            piVar1->g[0] = (uint)uStack_10;
          }
        }
        goto LAB_001f2a80;
      }
      sysMemReadW(&fStack_54,uStack_34);
      if (fStack_54 == 0.0) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 4;
      }
      if ((uStack_20 & 2) == 0) {
        sysMemReadW(&fStack_44,(uint)fStack_54);
        fStack_54 = (float)((int)fStack_54 + 4);
        sysMemReadS(&uStack_6,piVar1->g[7] + 0x1aa);
        fStack_48 = (float)(uint)uStack_6;
        fStack_44 = (float)((int)fStack_48 % (int)fStack_44);
        sysMemReadS(&uStack_8,(int)fStack_54 + (int)fStack_44 * 2);
        fStack_50 = (float)(uint)uStack_8;
        sysMemReadS(&uStack_a,piVar1->g[7] + 0xc94);
        fStack_28 = (float)(uint)uStack_a;
        if ((uint)fStack_50 < (uint)fStack_28) {
          uStack_20 = 4;
        }
        else if (fStack_50 == fStack_28) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 1;
        }
        if ((uStack_20 & 5) == 0) {
          sysMemReadW(&fStack_30,piVar1->g[7] + 0xc68);
          fStack_2c = 0.8;
          fStack_30 = (float)((ulong)((long)(int)fStack_30 << 0x21) >> 0x21);
          if (0.8 <= fStack_30) {
            if (fStack_30 == 0.8) {
              uStack_20 = 2;
            }
            else {
              uStack_20 = 1;
            }
          }
          else {
            uStack_20 = 4;
          }
          if ((uStack_20 & 1) == 0) {
            uStack_24 = 1;
            sysMemWriteW(piVar1->g[7] + 0xc90,&uStack_24);
            goto LAB_001f2d08;
          }
        }
      }
    }
    uStack_24 = 0;
    sysMemWriteW(piVar1->g[7] + 0xc90,&uStack_24);
    sysMemReadT(&fStack_50,piVar1->g[7] + 0x20c);
    sysMemReadT(&fStack_40,piVar1->g[7] + 0xc7c);
    sysMemReadW(&fStack_44,piVar1->g[7] + 0xc64);
    uStack_24 = 0x16002c2c;
    FUN_0018df40();
    FUN_0018df40(fStack_50);
    FUN_0018df40(fStack_40);
    FUN_0018df40(fStack_4c);
    FUN_0018df40(uStack_3c);
    FUN_0018df40(fStack_48);
    FUN_0018df40(fStack_38);
    fStack_40 = (float)FUN_0018e100();
    sysMemWriteW(piVar1->g[7] + 0xc64,&fStack_40);
    fStack_40 = (float)((ulong)((long)(int)(fStack_44 - fStack_40) << 0x21) >> 0x21);
    sysMemReadW(&fStack_28,piVar1->g[7] + 0xc74);
    fStack_40 = fStack_40 * fStack_28;
    fStack_28 = 4.2;
    if (fStack_40 <= 4.2) {
      if (fStack_40 == 4.2) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
    }
    else {
      uStack_20 = 4;
    }
    if ((uStack_20 & 1) == 0) {
      fStack_40 = 4.2;
    }
    sysMemWriteW(piVar1->g[7] + 0xc88,&fStack_40);
    sysMemReadW(&fStack_38,piVar1->g[7] + 0xc68);
    fStack_54 = (float)((ulong)((long)(int)fStack_38 << 0x21) >> 0x21);
    if (((long)(int)fStack_38 & 0x7fffffffU) == 0) {
      uStack_20 = 2;
    }
    else {
      uStack_20 = 4;
    }
    if ((uStack_20 & 5) == 0) {
      sysMemWriteW(piVar1->g[7] + 0xc68,&fStack_40);
      uVar2 = piVar1->g[7];
    }
    else {
      if (fStack_54 <= fStack_40) {
        if (fStack_40 == fStack_54) {
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
        fStack_54 = fStack_54 / fStack_38;
        fStack_40 = fStack_40 * fStack_54;
        sysMemWriteW(piVar1->g[7] + 0xc68,&fStack_40);
      }
      uVar2 = piVar1->g[7];
    }
    sysMemReadW(&fStack_50,uVar2 + 0xc68);
    sysMemReadW(&fStack_4c,piVar1->g[7] + 0xc6c);
    fStack_4c = fStack_4c + fStack_50;
    fStack_28 = 15.0;
    fStack_50 = fStack_50 * 0.935;
    if (((uint)fStack_4c & 0x80000000) == 0) {
      if (fStack_4c <= 15.0) {
        if (fStack_4c == 15.0) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 1;
        }
      }
      else {
        uStack_20 = 4;
      }
      if ((uStack_20 & 1) == 0) {
        fStack_28 = 0.78;
        fStack_4c = 0.78;
        fStack_50 = -fStack_50 * 0.78;
      }
    }
    else {
      fStack_28 = -15.0;
      if (fStack_4c <= -15.0) {
        if (fStack_4c == -15.0) {
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
        fStack_28 = 0.78;
        fStack_4c = -15.0;
        fStack_50 = -fStack_50 * 0.78;
      }
    }
    sysMemWriteW(piVar1->g[7] + 0xc6c,&fStack_4c);
    sysMemReadW(&fStack_48,piVar1->g[7] + 0xc70);
    if (((uint)fStack_4c & 0x80000000) == 0) {
      sysMemReadW(&fStack_48,piVar1->g[7] + 0xc78);
    }
    fStack_50 = fStack_50 + fStack_48;
    sysMemWriteW(piVar1->g[7] + 0xc68,&fStack_50);
  }
  sysMemReadW(&fStack_54,uStack_34 + 4);
  if (fStack_54 == 0.0) {
    uStack_20 = 2;
  }
  else {
    uStack_20 = 4;
  }
  if ((uStack_20 & 2) == 0) {
    fStack_40 = 2.10195e-44;
    sysMemReadW(&fStack_4c,piVar1->g[7] + 0xc6c);
    fStack_30 = 0.5;
    uStack_24 = 0xc001818;
    fStack_4c = fStack_4c + 0.5;
    FUN_0018df40();
    FUN_0018df40(fStack_4c);
    fStack_4c = (float)FUN_0018e100();
    fStack_44 = (float)(uint)bRam016b6dfb;
    uStack_24 = 9;
    fStack_40 = (float)((int)fStack_40 + (int)fStack_4c);
    fStack_50 = (float)(uint)bRam016b6e01;
    if ((uint)fStack_44 < 10) {
      if (fStack_44 == 1.26117e-44) {
        uStack_20 = 2;
      }
      else {
        uStack_20 = 1;
      }
    }
    else {
      uStack_20 = 4;
    }
    if ((uStack_20 & 5) == 0) {
      uStack_24 = 0x11;
      if ((uint)fStack_50 < 0x12) {
        if (fStack_50 == 2.38221e-44) {
          uStack_20 = 2;
        }
        else {
          uStack_20 = 1;
        }
      }
      else {
        uStack_20 = 4;
      }
      if (((uStack_20 & 5) == 0) &&
         (sysMemReadW(&uStack_24,piVar1->g[7] + 0x1a4), (uStack_24 & 0x10000) != 0)) {
        uStack_24 = 0;
        sysMemWriteW(piVar1->g[7] + 0xc68,&uStack_24);
        uStack_24 = 0;
        sysMemWriteW(piVar1->g[7] + 0xc6c,&uStack_24);
        goto LAB_001f2a80;
      }
    }
    sysMemReadS(&uStack_c,(int)fStack_54 + (int)fStack_40 * 2);
    piVar1->g[0] = (uint)uStack_c;
    sysMemWriteS(piVar1->g[7] + 0xc94,piVar1->g);
  }
LAB_001f2a80:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

