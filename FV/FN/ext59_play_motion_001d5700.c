/* EXT 59: play_motion @ 001d5700; patched over i960 01c0fc (arcade play_motion) */

/* WARNING: Removing unreachable block (ram,0x001d7a00) */
/* WARNING: Removing unreachable block (ram,0x001d6750) */
/* WARNING: Removing unreachable block (ram,0x001d7f40) */
/* WARNING: Removing unreachable block (ram,0x001d6d20) */
/* WARNING: Removing unreachable block (ram,0x001d5c94) */
/* WARNING: Removing unreachable block (ram,0x001d7358) */
/* WARNING: Removing unreachable block (ram,0x001d5774) */
/* WARNING: Removing unreachable block (ram,0x001d57e0) */
/* WARNING: Removing unreachable block (ram,0x001d7390) */
/* WARNING: Removing unreachable block (ram,0x001d5df0) */
/* WARNING: Removing unreachable block (ram,0x001d6b30) */
/* WARNING: Removing unreachable block (ram,0x001d6878) */
/* WARNING: Removing unreachable block (ram,0x001d65c8) */
/* WARNING: Removing unreachable block (ram,0x001d82b0) */
/* WARNING: Removing unreachable block (ram,0x001d7a70) */
/* WARNING: Removing unreachable block (ram,0x001d7c30) */
/* WARNING: Removing unreachable block (ram,0x001d7ae0) */
/* WARNING: Removing unreachable block (ram,0x001d7b30) */

undefined8 play_motion(int param_1)

{
  bool bVar1;
  float fVar2;
  i960_regs *piVar3;
  i960_regs *piVar4;
  uint uVar5;
  uint auStack_f4 [8];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  uint auStack_c0 [2];
  uint uStack_b8;
  uint uStack_b4;
  int iStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_a0;
  short sStack_8e;
  ushort uStack_8c;
  ushort uStack_8a;
  ushort uStack_88;
  ushort uStack_86;
  ushort uStack_84;
  ushort uStack_82;
  short sStack_80;
  ushort uStack_7e;
  ushort uStack_7c;
  ushort uStack_7a;
  ushort uStack_78;
  short sStack_76;
  short sStack_74;
  ushort uStack_72;
  ushort uStack_70;
  ushort uStack_6e;
  ushort uStack_6c;
  ushort uStack_6a;
  ushort uStack_68;
  ushort uStack_66;
  ushort uStack_64;
  short sStack_62;
  ushort uStack_60;
  ushort uStack_5e;
  ushort uStack_5c;
  ushort uStack_5a;
  ushort uStack_58;
  ushort uStack_56;
  ushort uStack_54;
  byte bStack_51;
  byte bStack_50;
  byte bStack_4f;
  char cStack_4e;
  byte bStack_4d;
  byte bStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  char cStack_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  byte bStack_40;
  char cStack_3f;
  char cStack_3e;
  byte bStack_3d;
  byte bStack_3c;
  byte bStack_3b;
  char cStack_3a;
  byte bStack_39;
  byte bStack_38;
  byte bStack_37;
  byte bStack_36;
  byte bStack_35;
  byte bStack_34;
  byte bStack_33;
  byte bStack_32;
  byte bStack_31;
  char cStack_30;
  char cStack_2f;
  char cStack_2e;
  char cStack_2d;
  byte bStack_2c;
  byte bStack_2b;
  char cStack_2a;
  char cStack_29;
  byte bStack_28;
  byte bStack_27;
  char cStack_26;
  char cStack_25;
  byte bStack_24;
  byte bStack_23;
  byte bStack_22;
  byte bStack_21;
  byte bStack_20;
  byte bStack_1f;
  byte bStack_1e;
  byte bStack_1d;
  byte bStack_1c;
  byte bStack_1b;
  byte bStack_1a;
  char cStack_19;
  byte bStack_18;
  byte bStack_17;
  byte bStack_16;
  byte bStack_15;
  byte bStack_14;
  byte bStack_13;
  byte bStack_12;
  byte bStack_11;
  byte bStack_10;
  byte bStack_f;
  byte bStack_e;
  byte bStack_d;
  byte bStack_c;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  byte bStack_8;
  byte bStack_7;
  byte bStack_6;
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar3 = i960GetRegs();
  sysMemReadS(&uStack_54,piVar3->g[7] + 0x1a8);
  fStack_a8 = (float)(uint)uStack_54;
  if (uStack_54 == 0) {
    uStack_a0 = 2;
  }
  else {
    uStack_a0 = 4;
  }
  if ((uStack_a0 & 2) == 0) {
    sysMemReadS(&uStack_56,piVar3->g[7] + 0x1aa);
    fStack_d4 = (float)(uint)uStack_56;
    sysMemReadS(&uStack_58,piVar3->g[7] + 0x800);
    fStack_d0 = (float)(uint)uStack_58;
    if (fStack_d4 == 0.0) {
      uStack_a0 = 2;
    }
    else {
      uStack_a0 = 4;
    }
    if ((uStack_a0 & 2) != 0) goto LAB_001d5908;
    if ((uint)fStack_d4 < (uint)fStack_d0) {
      uStack_a0 = 4;
    }
    else if (fStack_d4 == fStack_d0) {
      uStack_a0 = 2;
    }
    else {
      uStack_a0 = 1;
    }
    if ((uStack_a0 & 6) == 0) {
      sysMemReadS(&uStack_5a,piVar3->g[7] + 0x802);
      piVar3->g[0] = (uint)uStack_5a;
      fStack_ac = 9.18341e-41;
      if (piVar3->g[0] < 0x10000) {
        if (piVar3->g[0] == 0xffff) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 1;
        }
      }
      else {
        uStack_a0 = 4;
      }
      if ((uStack_a0 & 2) != 0) {
        sysMemReadW(&fStack_a4,piVar3->g[7] + 0x700);
        sysMemWriteW(piVar3->g[7] + 0x82c,&fStack_a4);
        sysMemReadW(&fStack_a4,piVar3->g[7] + 0x1a4);
        sysMemWriteW(piVar3->g[7] + 0xbd4,&fStack_a4);
        smooth_int(0);
        goto LAB_001d5908;
      }
      sysMemReadS(&uStack_5c,piVar3->g[7] + 0x86c);
      fStack_a8 = (float)(uint)uStack_5c;
      if (uStack_5c == 0) {
        uStack_a0 = 2;
      }
      else {
        uStack_a0 = 4;
      }
      if ((uStack_a0 & 2) == 0) {
        sysMemReadS(&uStack_5e,piVar3->g[7] + 0xa1c);
        fStack_ac = (float)(uint)uStack_5e;
        sysMemReadS(&uStack_60,piVar3->g[7] + 0x86e);
        fStack_a8 = (float)(uint)uStack_60;
        if ((uint)fStack_ac < (uint)fStack_a8) {
          uStack_a0 = 4;
        }
        else if (fStack_ac == fStack_a8) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 1;
        }
        if ((uStack_a0 & 6) == 0) {
          sysMemReadS(&sStack_62,piVar3->g[7] + 0x86c);
          fStack_a4 = (float)(int)sStack_62;
          sysMemWriteS(piVar3->g[7] + 0x802,&fStack_a4);
          sysMemReadS(&uStack_64,piVar3->g[7] + 0x802);
          piVar3->g[0] = (uint)uStack_64;
        }
      }
      if (piVar3->g[0] == 0) {
        uStack_a0 = 2;
      }
      else {
        uStack_a0 = 4;
      }
      if ((uStack_a0 & 5) != 0) goto LAB_001d58fc;
      sysMemWriteS(piVar3->g[7] + 0x1aa,&fStack_d0);
    }
  }
  else {
    sysMemReadS(&uStack_66,piVar3->g[6]);
    piVar3->g[0] = (uint)uStack_66;
LAB_001d58fc:
    set_motion(0);
LAB_001d5908:
    fStack_a4 = 1.4013e-45;
    sysMemWriteS(piVar3->g[7] + 0x1aa,&fStack_a4);
  }
  calc_rob_angle(0);
  sysMemReadB(&bStack_1,piVar3->g[7] + 0xa00);
  fStack_d4 = (float)(uint)bStack_1;
  sysMemReadS(&uStack_68,piVar3->g[7] + 0x1aa);
  fStack_d0 = (float)(uint)uStack_68;
  sysMemReadW(&fStack_cc,piVar3->g[7] + 0x1a4);
  if ((int)fStack_d4 < 1) {
    if (fStack_d4 == 0.0) {
      uStack_a0 = 2;
    }
    else {
      uStack_a0 = 1;
    }
  }
  else {
    uStack_a0 = 4;
  }
  if ((uStack_a0 & 2) == 0) {
    if ((int)fStack_d4 < 2) {
      if (fStack_d4 == 1.4013e-45) {
        uStack_a0 = 2;
      }
      else {
        uStack_a0 = 1;
      }
    }
    else {
      uStack_a0 = 4;
    }
    if ((uStack_a0 & 2) == 0) {
      if ((int)fStack_d4 < 3) {
        if (fStack_d4 == 2.8026e-45) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 1;
        }
      }
      else {
        uStack_a0 = 4;
      }
      if ((uStack_a0 & 2) != 0) goto LAB_001d5b64;
      if ((int)fStack_d4 < 4) {
        if (fStack_d4 == 4.2039e-45) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 1;
        }
      }
      else {
        uStack_a0 = 4;
      }
      if ((uStack_a0 & 2) == 0) goto LAB_001d5a50;
LAB_001d5c4c:
      if ((((uint)fStack_cc & 0x1000) != 0) && (((uint)fStack_cc & 0x10) != 0)) {
        sysMemReadS(&uStack_6e,piVar3->g[7] + 0x850);
        fStack_d4 = (float)(uint)uStack_6e;
        if (uStack_6e == 0) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 4;
        }
        if ((uStack_a0 & 2) == 0) {
          if ((int)fStack_d0 < (int)fStack_d4) {
            uStack_a0 = 4;
          }
          else if (fStack_d0 == fStack_d4) {
            uStack_a0 = 2;
          }
          else {
            uStack_a0 = 1;
          }
          if ((uStack_a0 & 4) == 0) {
            fStack_cc = (float)((uint)fStack_cc & 0xfffffffe);
          }
        }
      }
      sysMemReadS(&uStack_70,piVar3->g[7] + 0x80c);
      fStack_a8 = (float)(uint)uStack_70;
      if ((int)fStack_d0 < (int)fStack_a8) {
        uStack_a0 = 4;
      }
      else if (fStack_d0 == fStack_a8) {
        uStack_a0 = 2;
      }
      else {
        uStack_a0 = 1;
      }
      if ((uStack_a0 & 4) == 0) {
        fStack_ac = 5.74112e-42;
        fStack_cc = (float)((uint)fStack_cc & 0xffffeffe);
        sysMemReadB(&bStack_4,piVar3->g[7] + 0xa00);
        fStack_a8 = (float)(uint)bStack_4;
        fStack_a4 = (float)((int)fStack_a8 + 1);
        sysMemWriteB(piVar3->g[7] + 0xa00,&fStack_a4);
      }
    }
    else {
LAB_001d5a50:
      sysMemReadS(&uStack_6a,piVar3->g[7] + 0x808);
      fStack_d4 = (float)(uint)uStack_6a;
      sysMemReadW(&fStack_a4,piVar3->g[7] + 0x804);
      if ((((uint)fStack_a4 & 0x100) != 0) && (((uint)fStack_a4 & 0x8000) != 0)) {
        if ((int)fStack_d0 < (int)fStack_d4) {
          bVar1 = true;
        }
        else if (fStack_d0 == fStack_d4) {
          bVar1 = false;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          fStack_cc = (float)((uint)fStack_cc & 0xfffeffff);
        }
      }
      if ((int)fStack_d0 < (int)fStack_d4) {
        uStack_a0 = 4;
      }
      else if (fStack_d0 == fStack_d4) {
        uStack_a0 = 2;
      }
      else {
        uStack_a0 = 1;
      }
      if ((uStack_a0 & 4) == 0) {
        fStack_cc = (float)((uint)fStack_cc & 0xfffffffd);
        sysMemReadB(&bStack_2,piVar3->g[7] + 0xa00);
        fStack_a8 = (float)(uint)bStack_2;
        fStack_a4 = (float)((int)fStack_a8 + 1);
        sysMemWriteB(piVar3->g[7] + 0xa00,&fStack_a4);
LAB_001d5b64:
        sysMemReadS(&uStack_6c,piVar3->g[7] + 0x80a);
        fStack_a8 = (float)(uint)uStack_6c;
        if ((int)fStack_d0 < (int)fStack_a8) {
          uStack_a0 = 4;
        }
        else if (fStack_d0 == fStack_a8) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 1;
        }
        if ((uStack_a0 & 4) == 0) {
          if (((uint)fStack_cc & 0x100) != 0) {
            fStack_cc = (float)((uint)fStack_cc & 0xffff7fff);
          }
          fStack_ac = 1.5164336e-36;
          fStack_a4 = 0.0;
          fStack_cc = (float)((uint)fStack_cc & 0xfbfefeff | 4);
          sysMemWriteS(piVar3->g[7] + 0x1224,&fStack_a4);
          fStack_a4 = 0.0;
          sysMemWriteS(piVar3->g[7] + 0x1248,&fStack_a4);
          sysMemReadB(&bStack_3,piVar3->g[7] + 0xa00);
          fStack_a8 = (float)(uint)bStack_3;
          fStack_a4 = (float)((int)fStack_a8 + 1);
          sysMemWriteB(piVar3->g[7] + 0xa00,&fStack_a4);
          goto LAB_001d5c4c;
        }
      }
    }
    sysMemWriteW(piVar3->g[7] + 0x1a4,&fStack_cc);
  }
  sysMemReadW(piVar3->g + 4,piVar3->g[7] + 0x82c);
LAB_001d5dc0:
  sysMemReadB(&bStack_5,piVar3->g[4]);
  fStack_d4 = (float)(uint)bStack_5;
  if (bStack_5 == 0) {
    uStack_a0 = 2;
  }
  else {
    uStack_a0 = 4;
  }
  if ((uStack_a0 & 2) == 0) {
    sysMemReadB(&bStack_6,piVar3->g[4] + 1);
    fStack_d0 = (float)(uint)bStack_6;
    sysMemReadB(&bStack_7,piVar3->g[4] + 2);
    fStack_a4 = (float)((uint)bStack_7 * 0x100);
    fStack_d0 = (float)((int)fStack_d0 + (int)fStack_a4);
    sysMemReadS(&uStack_72,piVar3->g[7] + 0x1aa);
    fStack_c8 = (float)(uint)uStack_72;
    if ((uint)fStack_c8 < (uint)fStack_d0) {
      uStack_a0 = 4;
    }
    else if (fStack_c8 == fStack_d0) {
      uStack_a0 = 2;
    }
    else {
      uStack_a0 = 1;
    }
    if ((uStack_a0 & 4) != 0) goto switchD_001d5ed4_caseD_0;
    sysMemReadW(&fStack_cc,(int)fStack_d4 * 4 + 0x1d028);
    switch(fStack_d4) {
    case 0.0:
      goto switchD_001d5ed4_caseD_0;
    default:
      sysMemReadW(&fStack_a4,piVar3->g[7] + 0x1a4);
      fStack_a4 = (float)((uint)fStack_a4 ^ 0x200000);
      sysMemWriteW(piVar3->g[7] + 0x1a4,&fStack_a4);
      piVar3->g[4] = piVar3->g[4] + 3;
      break;
    case 2.8026e-45:
      fStack_a4 = 3.9443045e-31;
      sysMemWriteW(piVar3->g[7] + 0x198,&fStack_a4);
      fStack_a4 = 0.0;
      sysMemWriteS(piVar3->g[7] + 0x5de,&fStack_a4);
      piVar3->g[4] = piVar3->g[4] + 3;
      break;
    case 4.2039e-45:
      sysMemReadB(&bStack_8,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_8;
      sysMemReadB(&bStack_9,piVar3->g[4] + 4);
      fStack_a4 = (float)((uint)bStack_9 * 0x100);
      fStack_d4 = (float)((int)fStack_d4 + (int)fStack_a4);
      sysMemReadW(&fStack_a4,piVar3->g[7]);
      if (((uint)fStack_a4 & 0x40) != 0) {
        fStack_d4 = (float)-(int)fStack_d4;
      }
      sysMemReadS(&sStack_74,piVar3->g[7] + 0x26);
      fStack_a4 = 5.053814e-29;
      fStack_ac = (float)(int)sStack_74;
      fStack_d4 = (float)((int)fStack_d4 + (int)fStack_ac);
      iStack_b0 = -(int)fStack_d4;
      FUN_0018df40();
      FUN_0018df40(iStack_b0);
      fStack_d0 = (float)FUN_0018e100();
      fStack_a4 = 1.0107938e-28;
      FUN_0018df40();
      FUN_0018df40(iStack_b0);
      fStack_cc = (float)FUN_0018e100();
      sysMemReadB(&bStack_a,piVar3->g[4] + 5);
      fStack_d4 = (float)(uint)bStack_a;
      sysMemReadB(&bStack_b,piVar3->g[4] + 6);
      fStack_a4 = (float)((uint)bStack_b * 0x100);
      fStack_d4 = (float)((int)fStack_d4 + (int)fStack_a4);
      sysMemReadB(&bStack_c,piVar3->g[4] + 7);
      fStack_a4 = (float)((uint)bStack_c * 0x10000);
      fStack_d4 = (float)((int)fStack_d4 + (int)fStack_a4);
      sysMemReadB(&bStack_d,piVar3->g[4] + 8);
      fStack_a4 = (float)((uint)bStack_d * 0x1000000);
      fStack_d4 = (float)((int)fStack_d4 + (int)fStack_a4);
      sysMemReadB(&bStack_e,piVar3->g[4] + 9);
      fStack_c8 = (float)(uint)bStack_e;
      sysMemReadB(&bStack_f,piVar3->g[4] + 10);
      fStack_a4 = (float)((uint)bStack_f * 0x100);
      fStack_c8 = (float)((int)fStack_c8 + (int)fStack_a4);
      sysMemReadB(&bStack_10,piVar3->g[4] + 0xb);
      fStack_a4 = (float)((uint)bStack_10 * 0x10000);
      fStack_c8 = (float)((int)fStack_c8 + (int)fStack_a4);
      sysMemReadB(&bStack_11,piVar3->g[4] + 0xc);
      fStack_a4 = fStack_d4 * fStack_d0;
      fStack_c8 = (float)((int)fStack_c8 + (uint)bStack_11 * 0x1000000);
      sysMemWriteW(piVar3->g[7] + 0x2c,&fStack_a4);
      fStack_a4 = 1.2333882e-32;
      FUN_0018df40();
      FUN_0018df40(fStack_d4);
      FUN_0018df40(fStack_cc);
      fStack_a4 = (float)FUN_0018e100();
      sysMemWriteW(piVar3->g[7] + 0x34,&fStack_a4);
      fStack_a4 = 1.2333882e-32;
      FUN_0018df40();
      FUN_0018df40(fStack_c8);
      fStack_a4 = fRam016c0dd0;
      FUN_0018df40();
      fStack_d4 = (float)FUN_0018e100();
      sysMemWriteW(piVar3->g[7] + 0x30,&fStack_d4);
      fix_hara(0);
      piVar3->g[4] = piVar3->g[4] + 0xd;
      break;
    case 5.60519e-45:
      if ((uint)fStack_c8 < (uint)fStack_d0) {
        uStack_a0 = 4;
      }
      else if (fStack_c8 == fStack_d0) {
        uStack_a0 = 2;
      }
      else {
        uStack_a0 = 1;
      }
      if ((uStack_a0 & 5) == 0) {
        fStack_d0 = 1.79366e-43;
        fStack_d4 = fRam016b6dfc;
        if ((uint)fRam016b6dfc < 0x80) {
          uStack_a0 = 4;
        }
        else if (fRam016b6dfc == 1.79366e-43) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 1;
        }
        if ((uStack_a0 & 2) == 0) {
          sysMemReadB(&bStack_12,piVar3->g[4] + 3);
          fStack_d4 = (float)(uint)bStack_12;
          sysMemReadB(&bStack_13,piVar3->g[4] + 4);
          fStack_a4 = (float)((uint)bStack_13 * 0x100);
          fStack_d4 = (float)((int)fStack_d4 + (int)fStack_a4);
          sysMemReadB(&bStack_14,piVar3->g[4] + 5);
          fStack_a4 = (float)((uint)bStack_14 * 0x10000);
          fStack_d4 = (float)((int)fStack_d4 + (int)fStack_a4);
          sysMemReadB(&bStack_15,piVar3->g[4] + 6);
          fStack_d0 = 1.5985591e-38;
          fStack_a4 = (float)((uint)bStack_15 * 0x1000000);
          fStack_d4 = (float)((int)fStack_d4 + (int)fStack_a4);
          if ((uint)fStack_d4 < 0xae1153) {
            uStack_a0 = 4;
          }
          else if (fStack_d4 == 1.5985591e-38) {
            uStack_a0 = 2;
          }
          else {
            uStack_a0 = 1;
          }
          if ((uStack_a0 & 2) == 0) {
            fStack_d0 = 1.598556e-38;
            if ((uint)fStack_d4 < 0xae113d) {
              uStack_a0 = 4;
            }
            else if (fStack_d4 == 1.598556e-38) {
              uStack_a0 = 2;
            }
            else {
              uStack_a0 = 1;
            }
            if ((uStack_a0 & 5) == 0) {
              piVar3->g[0] = 0;
              stage_contact_sound(0);
            }
            else {
              fStack_d0 = 1.598556e-38;
              if ((uint)fStack_d4 < 0xae113d) {
                uStack_a0 = 4;
              }
              else if (fStack_d4 == 1.598556e-38) {
                uStack_a0 = 2;
              }
              else {
                uStack_a0 = 1;
              }
              if ((uStack_a0 & 5) == 0) {
                piVar3->g[0] = 1;
                stage_contact_sound(0);
              }
              else {
                piVar3->g[0] = (uint)fStack_d4;
                check_same_sound(0);
                sound_request_u(0);
              }
            }
          }
          else {
            piVar3->g[0] = 3;
            sound_chainlink_hit(0);
          }
        }
      }
      piVar3->g[4] = piVar3->g[4] + 7;
      break;
    case 7.00649e-45:
      sysMemReadB(&bStack_16,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_16;
      sysMemReadW(&fStack_a4,piVar3->g[7] + 0x1a4);
      fStack_a4 = (float)((uint)fStack_a4 | 1 << ((uint)fStack_d4 & 0x1f));
      sysMemWriteW(piVar3->g[7] + 0x1a4,&fStack_a4);
      piVar3->g[4] = piVar3->g[4] + 4;
      break;
    case 8.40779e-45:
      sysMemReadB(&bStack_17,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_17;
      sysMemReadW(&fStack_a4,piVar3->g[7] + 0x1a4);
      fStack_a4 = (float)((uint)fStack_a4 & ~(1 << ((uint)fStack_d4 & 0x1f)));
      sysMemWriteW(piVar3->g[7] + 0x1a4,&fStack_a4);
      piVar3->g[4] = piVar3->g[4] + 4;
      break;
    case 9.80909e-45:
      sysMemReadB(&bStack_18,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_18;
      sysMemReadW(&fStack_a4,piVar3->g[7] + 0x1a4);
      fStack_a4 = (float)((uint)fStack_a4 ^ 1 << ((uint)fStack_d4 & 0x1f));
      sysMemWriteW(piVar3->g[7] + 0x1a4,&fStack_a4);
      piVar3->g[4] = piVar3->g[4] + 4;
      break;
    case 1.12104e-44:
      fStack_a8 = (float)(int)sRam016b6df8;
      if (sRam016b6df8 < 1) {
        if (sRam016b6df8 == 0) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 1;
        }
      }
      else {
        uStack_a0 = 4;
      }
      if ((uStack_a0 & 3) == 0) {
        sysMemReadB(&cStack_19,piVar3->g[4] + 3);
        fStack_d4 = (float)(int)cStack_19;
        sysMemReadS(&sStack_76,piVar3->g[7] + 0x1ac);
        fStack_d0 = (float)(int)sStack_76;
        sysMemReadB(&bStack_1a,piVar3->g[7] + 0xa28);
        fStack_cc = (float)(uint)bStack_1a;
        if ((bStack_1a & 1) == 0) {
          sysMemWriteS(piVar3->g[7] + 0x5de,&fStack_d4);
        }
        else {
          sysMemReadS(&uStack_78,piVar3->g[7] + 0x5de);
          fStack_cc = (float)((uint)uStack_78 + (int)fStack_d4);
          sysMemWriteS(piVar3->g[7] + 0x5de,&fStack_cc);
        }
        fStack_a4 = 1.4013e-45;
        sysMemWriteB(piVar3->g[7] + 0xa28,&fStack_a4);
        fStack_d0 = (float)((int)fStack_d0 - (int)fStack_d4);
        sysMemWriteS(piVar3->g[8] + 0x1f70,&fStack_d4);
        if ((int)fStack_d0 < 1) {
          if (fStack_d0 == 0.0) {
            uStack_a0 = 2;
          }
          else {
            uStack_a0 = 1;
          }
        }
        else {
          uStack_a0 = 4;
        }
        if ((uStack_a0 & 4) == 0) {
          sysMemReadW(&fStack_a4,piVar3->g[7]);
          fStack_a4 = (float)((uint)fStack_a4 | 0x20);
          sysMemWriteW(piVar3->g[7],&fStack_a4);
          fStack_d0 = 0.0;
        }
        sysMemWriteS(piVar3->g[7] + 0x1ac,&fStack_d0);
      }
      piVar3->g[4] = piVar3->g[4] + 4;
      break;
    case 1.26117e-44:
      if ((uint)fStack_c8 < (uint)fStack_d0) {
        uStack_a0 = 4;
      }
      else if (fStack_c8 == fStack_d0) {
        uStack_a0 = 2;
      }
      else {
        uStack_a0 = 1;
      }
      if ((uStack_a0 & 5) == 0) {
        fStack_d0 = 1.79366e-43;
        fStack_d4 = fRam016b6dfc;
        if ((uint)fRam016b6dfc < 0x80) {
          uStack_a0 = 4;
        }
        else if (fRam016b6dfc == 1.79366e-43) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 1;
        }
        if ((uStack_a0 & 2) == 0) {
          sysMemReadB(&bStack_1b,piVar3->g[4] + 3);
          fStack_d4 = (float)(uint)bStack_1b;
          sysMemReadB(&bStack_1c,piVar3->g[7] + 0x1b1);
          fStack_d0 = (float)(uint)bStack_1c;
          if ((uint)fStack_d4 < 10) {
            if (fStack_d4 == 1.26117e-44) {
              uStack_a0 = 2;
            }
            else {
              uStack_a0 = 1;
            }
          }
          else {
            uStack_a0 = 4;
          }
          if ((uStack_a0 & 2) == 0) {
            fStack_a8 = (float)(uint)uRam016bae40;
            if (uRam016bae40 == 0) {
              uStack_a0 = 2;
            }
            else {
              uStack_a0 = 4;
            }
            if ((uStack_a0 & 4) != 0) goto LAB_001d6418;
          }
          sysMemReadW(&fStack_a4,(int)fStack_d4 * 4 + 0x642592c);
          sysMemReadW(&fStack_cc,(int)fStack_a4 + (int)fStack_d0 * 4);
          if (fStack_cc == 0.0) {
            uStack_a0 = 2;
          }
          else {
            uStack_a0 = 4;
          }
          if ((uStack_a0 & 2) == 0) {
            piVar3->g[0] = (uint)fStack_cc;
            check_same_sound(0);
            sound_request_u(0);
            sysMemReadW(&fStack_a4,(int)fStack_d4 * 4 + 0x6425978);
            if (fStack_a4 == 0.0) {
              uStack_a0 = 2;
            }
            else {
              uStack_a0 = 4;
            }
            if ((uStack_a0 & 2) == 0) {
              sysMemReadS(&uStack_7a,(int)fStack_a4 + (int)fStack_d0 * 2);
              fStack_c8 = (float)(uint)uStack_7a;
              if (uStack_7a == 0) {
                uStack_a0 = 2;
              }
              else {
                uStack_a0 = 4;
              }
              if ((uStack_a0 & 2) == 0) {
                sysMemWriteS(piVar3->g[7] + 0x7d4,&fStack_c8);
              }
            }
          }
        }
      }
LAB_001d6418:
      piVar3->g[4] = piVar3->g[4] + 4;
      break;
    case 1.4013e-44:
      sysMemReadB(&bStack_1d,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_1d;
      sysMemReadB(&bStack_1e,piVar3->g[4] + 4);
      fStack_a4 = (float)((uint)bStack_1e * 0x100);
      fStack_d4 = (float)((int)fStack_d4 + (int)fStack_a4);
      sysMemReadB(&bStack_1f,piVar3->g[4] + 7);
      fStack_c8 = (float)(uint)bStack_1f;
      sysMemReadB(&bStack_20,piVar3->g[4] + 8);
      uStack_b8 = (uint)bStack_20;
      if ((uint)fStack_c8 < 2) {
        if (fStack_c8 == 1.4013e-45) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 1;
        }
      }
      else {
        uStack_a0 = 4;
      }
      if ((uStack_a0 & 5) == 0) {
        sysMemReadS(&uStack_7c,piVar3->g[7] + 0x1ac);
        fStack_a8 = (float)(uint)uStack_7c;
        if (fStack_a8 == 0.0) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 4;
        }
        if ((uStack_a0 & 4) == 0) {
LAB_001d6688:
          fStack_a4 = 4.34403e-44;
          sysMemWriteB(piVar3->g[7] + 0x60c,&fStack_a4);
          sysMemReadB(&cStack_25,piVar3->g[4] + 5);
          fStack_a4 = (float)(int)cStack_25;
          sysMemWriteB(piVar3->g[7] + 0x852,&fStack_a4);
          sysMemReadB(&cStack_26,piVar3->g[4] + 6);
          fStack_a4 = (float)(int)cStack_26;
          sysMemWriteB(piVar3->g[7] + 0x853,&fStack_a4);
          goto LAB_001d72e8;
        }
      }
      else {
        fStack_c4 = (float)(piVar3->g[7] + 0x1282);
        fStack_ac = 3.46121e-43;
        if ((uint)fStack_c8 < 0xf8) {
          if (fStack_c8 == 3.46121e-43) {
            uStack_a0 = 2;
          }
          else {
            uStack_a0 = 1;
          }
        }
        else {
          uStack_a0 = 4;
        }
        if ((uStack_a0 & 5) == 0) {
          fStack_c4 = (float)(piVar3->g[7] + 0x1280);
        }
        piVar3->g[0] = (uint)fStack_d4;
        check_front_back(0);
        fStack_d4 = (float)piVar3->g[0];
        sysMemReadB(&bStack_21,piVar3->g[7] + 0x1202);
        fStack_cc = (float)(uint)bStack_21;
        do {
          fStack_ac = 8.82818e-44;
          fStack_cc = (float)((int)fStack_cc - 1U & 0x3f);
          sysMemReadB(&bStack_22,(int)fStack_c4 + (int)fStack_cc * 4);
          fStack_d0 = (float)(uint)bStack_22;
          if (uStack_b8 == 0) {
            uStack_a0 = 2;
          }
          else {
            uStack_a0 = 4;
          }
          if ((uStack_a0 & 2) == 0) {
            sysMemReadB(&bStack_23,piVar3->g[7] + 0x1280 + (int)fStack_cc * 4);
            uStack_b4 = (uint)bStack_23;
            if ((bStack_23 & 0x10) != 0) goto LAB_001d65e0;
          }
          else {
LAB_001d65e0:
            fStack_d0 = (float)((uint)fStack_d0 & (uint)fStack_c8);
            if ((uint)fStack_d4 < (uint)fStack_d0) {
              uStack_a0 = 4;
            }
            else if (fStack_d4 == fStack_d0) {
              uStack_a0 = 2;
            }
            else {
              uStack_a0 = 1;
            }
            if ((uStack_a0 & 2) != 0) goto LAB_001d6688;
          }
          sysMemReadB(&bStack_24,piVar3->g[7] + 0x1204);
          fStack_a8 = (float)(uint)bStack_24;
          if ((uint)fStack_cc < (uint)fStack_a8) {
            uStack_a0 = 4;
          }
          else if (fStack_cc == fStack_a8) {
            uStack_a0 = 2;
          }
          else {
            uStack_a0 = 1;
          }
        } while ((uStack_a0 & 5) != 0);
      }
      piVar3->g[4] = piVar3->g[4] + 9;
      break;
    case 1.54143e-44:
      sysMemReadB(&bStack_27,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_27;
      sysMemReadB(&bStack_28,piVar3->g[4] + 4);
      fStack_a4 = (float)((uint)bStack_28 * 0x100);
      fStack_d4 = (float)((int)fStack_d4 + (int)fStack_a4);
      if (fStack_d4 == 0.0) {
        uStack_a0 = 2;
      }
      else {
        uStack_a0 = 4;
      }
      if ((uStack_a0 & 2) == 0) {
        rand(0);
        if (piVar3->g[0] < (uint)fStack_d4) {
          uStack_a0 = 4;
        }
        else if ((float)piVar3->g[0] == fStack_d4) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 1;
        }
        if ((uStack_a0 & 4) == 0) {
          piVar3->g[4] = piVar3->g[4] + 7;
          break;
        }
      }
      fStack_a4 = 4.34403e-44;
      sysMemWriteB(piVar3->g[7] + 0x60c,&fStack_a4);
      sysMemReadB(&cStack_29,piVar3->g[4] + 5);
      fStack_a4 = (float)(int)cStack_29;
      sysMemWriteB(piVar3->g[7] + 0x852,&fStack_a4);
      sysMemReadB(&cStack_2a,piVar3->g[4] + 6);
      fStack_a4 = (float)(int)cStack_2a;
      sysMemWriteB(piVar3->g[7] + 0x853,&fStack_a4);
      goto LAB_001d72e8;
    case 1.68156e-44:
      sysMemReadB(&bStack_2b,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_2b;
      sysMemReadW(&fStack_a4,piVar3->g[8] + 0x1a4);
      fStack_a4 = (float)((uint)fStack_a4 & ~(1 << ((uint)fStack_d4 & 0x1f)));
      sysMemWriteW(piVar3->g[8] + 0x1a4,&fStack_a4);
      piVar3->g[4] = piVar3->g[4] + 4;
      break;
    case 1.82169e-44:
      sysMemReadW(&fStack_d0,piVar3->g[7] + 0x1a4);
      sysMemReadB(&bStack_2c,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_2c;
      if (bStack_2c == 0) {
        uStack_a0 = 2;
      }
      else {
        uStack_a0 = 4;
      }
      fVar2 = (float)((uint)fStack_d0 | 0x2000000);
      if ((uStack_a0 & 2) == 0) {
        fVar2 = (float)((uint)fStack_d0 & 0xfdffffff);
      }
      fStack_d0 = fVar2;
      sysMemWriteW(piVar3->g[7] + 0x1a4,&fStack_d0);
      piVar3->g[4] = piVar3->g[4] + 4;
      break;
    case 1.96182e-44:
      if ((uint)fStack_c8 < (uint)fStack_d0) {
        uStack_a0 = 4;
      }
      else if (fStack_c8 == fStack_d0) {
        uStack_a0 = 2;
      }
      else {
        uStack_a0 = 1;
      }
      if ((uStack_a0 & 5) == 0) {
        fStack_d4 = fRam016b75e4;
        sysMemReadB(&cStack_2d,piVar3->g[4] + 3);
        fStack_a4 = (float)(int)cStack_2d;
        sysMemWriteB((int)fStack_d4 + 0xfc,&fStack_a4);
        sysMemReadB(&cStack_2e,piVar3->g[4] + 4);
        fStack_a4 = (float)(int)cStack_2e;
        sysMemWriteB((int)fStack_d4 + 0xfd,&fStack_a4);
        sysMemReadB(&cStack_2f,piVar3->g[4] + 5);
        fStack_a4 = (float)(int)cStack_2f;
        sysMemWriteB((int)fStack_d4 + 0xfe,&fStack_a4);
        sysMemReadB(&cStack_30,piVar3->g[4] + 6);
        fStack_a4 = (float)(int)cStack_30;
        sysMemWriteB((int)fStack_d4 + 0xff,&fStack_a4);
      }
      piVar3->g[4] = piVar3->g[4] + 7;
      break;
    case 2.10195e-44:
      if ((uint)fStack_c8 < (uint)fStack_d0) {
        uStack_a0 = 4;
      }
      else if (fStack_c8 == fStack_d0) {
        uStack_a0 = 2;
      }
      else {
        uStack_a0 = 1;
      }
      if ((uStack_a0 & 5) == 0) {
        sysMemReadB(&bStack_31,piVar3->g[7] + 0x6cc);
        fStack_d4 = (float)(bStack_31 + 1);
        if ((uint)fStack_d4 < 9) {
          if (fStack_d4 == 1.12104e-44) {
            uStack_a0 = 2;
          }
          else {
            uStack_a0 = 1;
          }
        }
        else {
          uStack_a0 = 4;
        }
        if ((uStack_a0 & 3) == 0) {
          fStack_d4 = 1.12104e-44;
        }
        sysMemWriteB(piVar3->g[7] + 0x6cc,&fStack_d4);
      }
      piVar3->g[4] = piVar3->g[4] + 3;
      break;
    case 2.24208e-44:
      sysMemReadB(&bStack_32,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_32;
      sysMemReadB(&bStack_33,piVar3->g[7] + 0x1b0);
      fStack_d0 = (float)(uint)bStack_33;
      sysMemReadW(&fStack_d4,(int)fStack_d4 * 4 + 0x640d31c);
      sysMemReadW(piVar3->g,(int)fStack_d4 + (int)fStack_d0 * 4);
      efc_face_change_cont(0);
      piVar3->g[4] = piVar3->g[4] + 4;
      break;
    case 2.38221e-44:
      if ((uint)fStack_c8 < (uint)fStack_d0) {
        uStack_a0 = 4;
      }
      else if (fStack_c8 == fStack_d0) {
        uStack_a0 = 2;
      }
      else {
        uStack_a0 = 1;
      }
      if ((uStack_a0 & 5) == 0) {
        sysMemReadW(&fStack_d0,piVar3->g[7]);
        sysMemReadB(&bStack_34,piVar3->g[4] + 3);
        fStack_d4 = (float)(uint)bStack_34;
        if (bStack_34 == 0) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 4;
        }
        if ((uStack_a0 & 5) == 0) {
          if (((uint)fStack_d0 & 0x8000000) != 0) {
            piVar4 = i960GetRegs();
            sysMemReadW(auStack_f4,piVar4->g[7]);
            auStack_f4[0] = auStack_f4[0] & 0xf7ffffff;
            sysMemWriteW(piVar4->g[7],auStack_f4);
            auStack_f4[0] = 0;
            sysMemWriteW(piVar4->g[7] + 0xafc,auStack_f4);
            send_init_ram_coli_data(0);
            piVar3->g[4] = piVar3->g[4] + 4;
            break;
          }
        }
        else if (((uint)fStack_d0 & 0x8000000) == 0) {
          sysMemWriteW(piVar3->g[7] + 0xafc,&fStack_d4);
          set_option(0);
        }
      }
      piVar3->g[4] = piVar3->g[4] + 4;
      break;
    case 2.52234e-44:
      sysMemReadB(&bStack_35,piVar3->g[7] + 0x1b0);
      fStack_d4 = (float)(uint)bStack_35;
      sysMemReadW(piVar3->g,(int)fStack_d4 * 4 + 0x640ebf4);
      sysMemReadB(&bStack_36,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_36;
      sysMemReadW(&fStack_d0,piVar3->g[7]);
      if (((uint)fStack_d0 & 0x40) != 0) {
        if ((uint)fStack_d4 < 2) {
          if (fStack_d4 == 1.4013e-45) {
            uStack_a0 = 2;
          }
          else {
            uStack_a0 = 1;
          }
        }
        else {
          uStack_a0 = 4;
        }
        if ((uStack_a0 & 2) == 0) {
          fStack_d4 = 1.4013e-45;
        }
        else {
          fStack_d4 = 0.0;
        }
      }
      fStack_cc = (float)((int)fStack_d4 << 2);
      sysMemReadB(&bStack_37,piVar3->g[4] + 4);
      fStack_d0 = (float)((uint)bStack_37 + (int)fStack_cc);
      sysMemReadS(&uStack_7e,piVar3->g[0] + (int)fStack_d0 * 2);
      fStack_cc = (float)(uint)uStack_7e;
      if (uStack_7e == 0) {
        uStack_a0 = 2;
      }
      else {
        uStack_a0 = 4;
      }
      if ((uStack_a0 & 2) == 0) {
        fStack_d4 = (float)((int)fStack_d4 * 3 + 5);
        sysMemReadS(&sStack_80,piVar3->g[0] + (int)fStack_d0 * 2);
        fStack_a4 = (float)(int)sStack_80;
        sysMemWriteW(piVar3->g[7] + 0x40 + (int)fStack_d4 * 4,&fStack_a4);
      }
      piVar3->g[4] = piVar3->g[4] + 7;
      break;
    case 2.66247e-44:
      sysMemReadB(&bStack_38,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_38;
      sysMemReadB(&bStack_39,piVar3->g[4] + 4);
      fStack_a4 = (float)((uint)bStack_39 * 0x100);
      fStack_d4 = (float)((int)fStack_d4 + (int)fStack_a4);
      sysMemWriteS(piVar3->g[7] + 0x5de,&fStack_d4);
      piVar3->g[4] = piVar3->g[4] + 5;
      break;
    case 2.8026e-44:
      if ((uint)fStack_c8 < (uint)fStack_d0) {
        uStack_a0 = 4;
      }
      else if (fStack_c8 == fStack_d0) {
        uStack_a0 = 2;
      }
      else {
        uStack_a0 = 1;
      }
      piVar3->g[4] = piVar3->g[4] + 4;
      break;
    case 2.94273e-44:
      if ((uint)fStack_c8 < (uint)fStack_d0) {
        uStack_a0 = 4;
      }
      else if (fStack_c8 == fStack_d0) {
        uStack_a0 = 2;
      }
      else {
        uStack_a0 = 1;
      }
      if ((uStack_a0 & 5) == 0) {
        sysMemReadB(&cStack_3a,piVar3->g[4] + 3);
        fStack_a4 = (float)(int)cStack_3a;
        sysMemWriteB(piVar3->g[7] + 0x6ce,&fStack_a4);
      }
      piVar3->g[4] = piVar3->g[4] + 4;
      break;
    case 3.08286e-44:
      sysMemReadB(&bStack_3b,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_3b;
      sysMemReadB(&bStack_3c,piVar3->g[4] + 4);
      fStack_a4 = (float)((uint)bStack_3c * 0x100);
      fStack_d4 = (float)((int)fStack_d4 + (int)fStack_a4);
      sysMemWriteS(piVar3->g[7] + 0x812,&fStack_d4);
      sysMemReadW(&fStack_a4,piVar3->g[7] + 0x1a4);
      fStack_a4 = (float)((uint)fStack_a4 | 0x40);
      sysMemWriteW(piVar3->g[7] + 0x1a4,&fStack_a4);
      piVar3->g[4] = piVar3->g[4] + 5;
      break;
    case 3.22299e-44:
      sysMemReadB(&bStack_3d,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_3d;
      sysMemReadW(&fStack_d0,piVar3->g[7] + 0x5b8);
      if (fStack_d4 == 0.0) {
        uStack_a0 = 2;
      }
      else {
        uStack_a0 = 4;
      }
      if ((uStack_a0 & 2) == 0) {
        if (((uint)fStack_d0 & 1) == 0) {
LAB_001d6d60:
          piVar3->g[4] = piVar3->g[4] + 6;
          break;
        }
      }
      else if (((uint)fStack_d0 & 1) != 0) goto LAB_001d6d60;
      fStack_a4 = 4.34403e-44;
      sysMemWriteB(piVar3->g[7] + 0x60c,&fStack_a4);
      sysMemReadB(&cStack_3e,piVar3->g[4] + 4);
      fStack_a4 = (float)(int)cStack_3e;
      sysMemWriteB(piVar3->g[7] + 0x852,&fStack_a4);
      sysMemReadB(&cStack_3f,piVar3->g[4] + 5);
      fStack_a4 = (float)(int)cStack_3f;
      sysMemWriteB(piVar3->g[7] + 0x853,&fStack_a4);
      goto LAB_001d72e8;
    case 3.36312e-44:
      sysMemReadW(&fStack_d0,piVar3->g[7] + 0x720);
      sysMemReadB(&bStack_40,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_40;
      if (bStack_40 < 2) {
        if (bStack_40 == 1) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 1;
        }
      }
      else {
        uStack_a0 = 4;
      }
      fVar2 = (float)((uint)fStack_d0 | 1);
      if ((uStack_a0 & 2) == 0) {
        fVar2 = (float)((uint)fStack_d0 & 0xfffffffe);
      }
      fStack_d0 = fVar2;
      sysMemWriteW(piVar3->g[7] + 0x720,&fStack_d0);
      sysMemReadB(&cStack_41,piVar3->g[4] + 4);
      fStack_a4 = (float)(int)cStack_41;
      sysMemWriteB(piVar3->g[7] + 0xa02,&fStack_a4);
      sysMemReadB(&cStack_42,piVar3->g[4] + 5);
      fStack_a4 = (float)(int)cStack_42;
      sysMemWriteB(piVar3->g[7] + 0xa03,&fStack_a4);
      sysMemReadB(&cStack_43,piVar3->g[4] + 6);
      fStack_a4 = (float)(int)cStack_43;
      sysMemWriteB(piVar3->g[7] + 0xa04,&fStack_a4);
      sysMemReadB(&cStack_44,piVar3->g[4] + 7);
      fStack_a4 = (float)(int)cStack_44;
      sysMemWriteB(piVar3->g[7] + 0xa05,&fStack_a4);
      sysMemReadB(&cStack_45,piVar3->g[4] + 8);
      fStack_a4 = (float)(int)cStack_45;
      sysMemWriteB(piVar3->g[7] + 0xacc,&fStack_a4);
      sysMemReadB(&cStack_46,piVar3->g[4] + 9);
      fStack_a4 = (float)(int)cStack_46;
      sysMemWriteB(piVar3->g[7] + 0xacd,&fStack_a4);
      sysMemReadB(&cStack_47,piVar3->g[4] + 10);
      fStack_a4 = (float)(int)cStack_47;
      sysMemWriteB(piVar3->g[7] + 0xace,&fStack_a4);
      sysMemReadB(&cStack_48,piVar3->g[4] + 0xb);
      fStack_a4 = (float)(int)cStack_48;
      sysMemWriteB(piVar3->g[7] + 0xacf,&fStack_a4);
      piVar3->g[4] = piVar3->g[4] + 0xc;
      break;
    case 3.50325e-44:
      sysMemReadB(&bStack_49,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_49;
      sysMemReadW(&fStack_a4,piVar3->g[7] + 0x720);
      fStack_a4 = (float)((uint)fStack_a4 | 1 << ((uint)fStack_d4 & 0x1f));
      sysMemWriteW(piVar3->g[7] + 0x720,&fStack_a4);
      piVar3->g[4] = piVar3->g[4] + 4;
      break;
    case 3.64338e-44:
      sysMemReadB(&bStack_4a,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_4a;
      sysMemReadW(&fStack_a4,piVar3->g[7] + 0x720);
      fStack_a4 = (float)((uint)fStack_a4 & ~(1 << ((uint)fStack_d4 & 0x1f)));
      sysMemWriteW(piVar3->g[7] + 0x720,&fStack_a4);
      piVar3->g[4] = piVar3->g[4] + 4;
      break;
    case 3.78351e-44:
      sysMemReadW(&fStack_d0,piVar3->g[7] + 0x720);
      sysMemReadB(&bStack_4b,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_4b;
      if (bStack_4b < 2) {
        if (bStack_4b == 1) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 1;
        }
      }
      else {
        uStack_a0 = 4;
      }
      if ((uStack_a0 & 2) == 0) {
        fStack_d0 = (float)((uint)fStack_d0 & 0xfffffff7);
        sysMemWriteW(piVar3->g[7] + 0x720,&fStack_d0);
        piVar3->g[4] = piVar3->g[4] + 4;
      }
      else {
        fStack_d0 = (float)((uint)fStack_d0 | 8);
        sysMemWriteW(piVar3->g[7] + 0x720,&fStack_d0);
        piVar3->g[4] = piVar3->g[4] + 4;
      }
      break;
    case 3.92364e-44:
      sysMemReadB(&bStack_4c,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_4c;
      sysMemReadB(&bStack_4d,piVar3->g[4] + 4);
      fStack_d0 = (float)((uint)bStack_4d << 4 | (uint)fStack_d4);
      sysMemWriteB(piVar3->g[7] + 0xa25,&fStack_d0);
      sysMemReadB(&cStack_4e,piVar3->g[4] + 5);
      fStack_a4 = (float)(int)cStack_4e;
      sysMemWriteB(piVar3->g[7] + 0xa24,&fStack_a4);
      piVar3->g[4] = piVar3->g[4] + 6;
      break;
    case 4.06377e-44:
      fStack_d4 = (float)(uint)bRam016b6dfb;
      fStack_cc = 1.26117e-44;
      fStack_d0 = (float)(uint)bRam016b6e01;
      if ((uint)fStack_d4 < 10) {
        if (fStack_d4 == 1.26117e-44) {
          uStack_a0 = 2;
        }
        else {
          uStack_a0 = 1;
        }
      }
      else {
        uStack_a0 = 4;
      }
      if ((uStack_a0 & 5) == 0) {
        fStack_cc = 2.10195e-44;
        if ((uint)fStack_d0 < 0x10) {
          if (fStack_d0 == 2.10195e-44) {
            uStack_a0 = 2;
          }
          else {
            uStack_a0 = 1;
          }
        }
        else {
          uStack_a0 = 4;
        }
        if ((uStack_a0 & 2) == 0) goto LAB_001d7250;
      }
      else {
LAB_001d7250:
        sysMemReadB(&bStack_4f,piVar3->g[7] + 4);
        fRam016c10e0 = (float)((uint)bStack_4f << 7 | 1);
        fStack_ac = fRam016c10e0;
        sysMemReadB(&bStack_50,piVar3->g[7] + 0x822);
        piVar3->g[0] = (uint)bStack_50;
        kabe_parts_damage(0);
      }
      piVar3->g[4] = piVar3->g[4] + 3;
      break;
    case 4.2039e-44:
      sysMemReadB(&bStack_51,piVar3->g[4] + 3);
      fStack_d4 = (float)(uint)bStack_51;
      sysMemWriteS(piVar3->g[7] + 0xc56,&fStack_d4);
      piVar3->g[4] = piVar3->g[4] + 4;
    }
    goto LAB_001d5dc0;
  }
switchD_001d5ed4_caseD_0:
  sysMemWriteW(piVar3->g[7] + 0x82c,piVar3->g + 4);
  sysMemReadW(&fStack_a4,piVar3->g[7] + 0x1a4);
  if (((uint)fStack_a4 & 0x100000) != 0) {
    sysMemReadW(&fStack_a4,piVar3->g[7] + 0x1a4);
    fStack_a4 = (float)((uint)fStack_a4 & 0xffefffff);
    sysMemWriteW(piVar3->g[7] + 0x1a4,&fStack_a4);
    sysMemReadS(&uStack_82,piVar3->g[7] + 0x870);
    fStack_a8 = (float)(uint)uStack_82;
    if (uStack_82 == 0) {
      uStack_a0 = 2;
    }
    else {
      uStack_a0 = 4;
    }
    if ((uStack_a0 & 2) == 0) {
      sysMemReadS(&uStack_84,piVar3->g[7] + 0x26);
      fStack_a4 = (float)(uint)uStack_84;
      sysMemReadS(&uStack_86,piVar3->g[7] + 0x870);
      fStack_a8 = (float)(uint)uStack_86;
      sysMemReadS(&uStack_88,piVar3->g[7] + 0x616);
      fStack_ac = (float)(uint)uStack_88;
      iStack_b0 = (int)fStack_ac - (int)fStack_a4;
      sysMemWriteS(piVar3->g[7] + 0x26,&fStack_ac);
      sysMemWriteS(piVar3->g[7] + 0x61a,&fStack_ac);
      uVar5 = piVar3->g[7];
      goto LAB_001d8198;
    }
    sysMemReadS(&uStack_8a,piVar3->g[7] + 0x26);
    fStack_a8 = (float)(uint)uStack_8a;
    fStack_a4 = (float)(uStack_8a ^ 0x8000);
    sysMemWriteS(piVar3->g[7] + 0x26,&fStack_a4);
    sysMemReadS(&uStack_8c,piVar3->g[7] + 0x61a);
    fStack_a8 = (float)(uint)uStack_8c;
    fStack_a4 = (float)(uStack_8c ^ 0x8000);
    sysMemWriteS(piVar3->g[7] + 0x61a,&fStack_a4);
  }
  uVar5 = piVar3->g[7];
LAB_001d8198:
  sysMemReadW(auStack_c0,uVar5 + 0x1a4);
  sysMemReadW(&fStack_a4,piVar3->g[7] + 0x804);
  if (((uint)fStack_a4 & 0x80) != 0) {
    auStack_c0[0] = auStack_c0[0] | 0x20;
  }
  if ((auStack_c0[0] & 0x80) == 0) {
    uVar5 = piVar3->g[7];
  }
  else {
    auStack_c0[0] = auStack_c0[0] & 0xffffff7f;
    fStack_a4 = 1.4592485e-11;
    FUN_0018df40();
    sysMemReadS(&sStack_8e,piVar3->g[7] + 0x26);
    fStack_a4 = (float)(int)sStack_8e;
    FUN_0018df40();
    sysMemReadW(&fStack_a4,piVar3->g[7] + 0x80);
    FUN_0018df40(fStack_a4);
    sysMemReadW(&fStack_a4,piVar3->g[7] + 0x88);
    FUN_0018df40(fStack_a4);
    fStack_c8 = (float)FUN_0018e100();
    fStack_c4 = (float)FUN_0018e100();
    sysMemReadW(&fStack_a8,piVar3->g[7] + 500);
    fStack_a4 = fStack_a8 - fStack_c8;
    sysMemWriteW(piVar3->g[7] + 0x18,&fStack_a4);
    sysMemReadW(&fStack_a8,piVar3->g[7] + 0x1fc);
    fStack_a4 = fStack_a8 - fStack_c4;
    sysMemWriteW(piVar3->g[7] + 0x20,&fStack_a4);
    uVar5 = piVar3->g[7];
  }
  sysMemWriteW(uVar5 + 0x1a4,auStack_c0);
  sysMemReadW(&fStack_d4,piVar3->g[7]);
  if (((uint)fStack_d4 & 0x1000) != 0) {
    fStack_d4 = (float)((uint)fStack_d4 & 0xffffefff);
    sysMemWriteW(piVar3->g[7],&fStack_d4);
    sysMemReadW(&fStack_a4,piVar3->g[7] + 0x1a4);
    fStack_a4 = (float)((uint)fStack_a4 | 1);
    sysMemWriteW(piVar3->g[7] + 0x1a4,&fStack_a4);
  }
LAB_001d72e8:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

