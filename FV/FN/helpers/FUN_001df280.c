/* helper FUN_001df280 @ 001df280, called (depth 1) from coli_cont_cop */

/* WARNING: Removing unreachable block (ram,0x001df84c) */
/* WARNING: Removing unreachable block (ram,0x001df734) */
/* WARNING: Removing unreachable block (ram,0x001df354) */
/* WARNING: Removing unreachable block (ram,0x001df77c) */
/* WARNING: Removing unreachable block (ram,0x001df910) */

undefined8 FUN_001df280(int param_1)

{
  i960_regs *piVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sStack_e;
  ushort uStack_c;
  short sStack_a;
  ushort uStack_8;
  byte bStack_6;
  byte bStack_5;
  byte bStack_4;
  byte bStack_3;
  byte bStack_2;
  byte bStack_1;
  
  piVar1 = i960GetRegs();
  piVar1->g[7] = uRam016b75d4;
  piVar1->g[8] = uRam016b75d8;
  sysMemReadW((void *)(param_1 + 0x38),piVar1->g[7] + 0x1a4);
  if (((*(uint *)(param_1 + 0x38) & 0x20000000) == 0) &&
     (sysMemReadW((void *)(param_1 + 0x38),piVar1->g[8] + 0x1a4),
     (*(uint *)(param_1 + 0x38) & 0x20000000) == 0)) {
    if ((piVar1->g[6] & 1) == 0) {
      if ((piVar1->g[6] & 8) != 0) {
        FUN_001e0a80(0);
      }
      goto LAB_001df324;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    sysMemWriteW(piVar1->g[0xd] + 0xe0,(void *)(param_1 + 0x20));
    sysMemWriteW(piVar1->g[0xd] + 0xe4,(void *)(param_1 + 0x24));
    sysMemWriteW(piVar1->g[0xd] + 0xe8,(void *)(param_1 + 0x28));
    sysMemWriteW(piVar1->g[0xd] + 0xec,(void *)(param_1 + 0x30));
    sysMemWriteW(piVar1->g[0xd] + 0xf0,(void *)(param_1 + 0x34));
    sysMemWriteW(piVar1->g[0xd] + 0xf4,(void *)(param_1 + 0x38));
    sysMemReadW((void *)(param_1 + 0xc),piVar1->g[7] + 0x1a4);
    uVar4 = *(uint *)(param_1 + 0xc) << 1;
    uVar2 = *(uint *)(param_1 + 0xc) | uVar4;
    *(uint *)(param_1 + 0x10) = uVar4;
    *(uint *)(param_1 + 0xc) = uVar2;
    if ((uVar2 & 0x80000) != 0) {
      sysMemReadW((void *)(param_1 + 0xc),piVar1->g[8] + 0x1a4);
      uVar4 = *(uint *)(param_1 + 0xc) << 1;
      uVar2 = *(uint *)(param_1 + 0xc) | uVar4;
      *(uint *)(param_1 + 0x10) = uVar4;
      *(uint *)(param_1 + 0xc) = uVar2;
      if ((uVar2 & 0x80000) != 0) {
        sysMemReadW((void *)(param_1 + 0xc),piVar1->g[7] + 0x644);
        sysMemReadW((void *)(param_1 + 0x10),piVar1->g[8] + 0x644);
        *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0xc);
        sysMemWriteW(piVar1->g[7] + 0x644,(void *)(param_1 + 0x10));
        sysMemWriteW(piVar1->g[8] + 0x644,(void *)(param_1 + 0x10));
        sysMemReadW((void *)(param_1 + 0xc),piVar1->g[7] + 0x64c);
        sysMemReadW((void *)(param_1 + 0x10),piVar1->g[8] + 0x64c);
        *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0xc);
        sysMemWriteW(piVar1->g[7] + 0x64c,(void *)(param_1 + 0x10));
        sysMemWriteW(piVar1->g[8] + 0x64c,(void *)(param_1 + 0x10));
        uVar2 = piVar1->g[0xd];
        goto LAB_001df708;
      }
    }
  }
  else {
LAB_001df324:
    sysMemReadW((void *)(param_1 + 0xc),piVar1->g[0xd] + 0x164);
    if (*(int *)(param_1 + 0xc) == 0) {
      *(undefined4 *)(param_1 + 0x40) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 4;
    }
    if ((*(uint *)(param_1 + 0x40) & 4) == 0) {
      FUN_001e0a80(0);
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
      sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[0xd] + 0x88);
      if (*(uint *)(param_1 + 0x3c) < 6) {
        if (*(uint *)(param_1 + 0x3c) == 5) {
          *(undefined4 *)(param_1 + 0x40) = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x40) = 4;
      }
      if ((*(uint *)(param_1 + 0x40) & 5) == 0) {
        sysMemReadW((void *)(param_1 + 0x30),piVar1->g[7] + 0x678);
        fVar6 = (float)piVar1->g[5];
        *(undefined4 *)(param_1 + 0x38) = 0x3e19999a;
        fVar6 = fVar6 + *(float *)(param_1 + 0x30);
        *(float *)(param_1 + 0x3c) = fVar6;
        if (fVar6 <= *(float *)(param_1 + 0x38)) {
          if (*(float *)(param_1 + 0x38) == fVar6) {
            *(undefined4 *)(param_1 + 0x40) = 2;
          }
          else {
            *(undefined4 *)(param_1 + 0x40) = 1;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 4;
        }
        if ((*(uint *)(param_1 + 0x40) & 1) == 0) {
          *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
          piVar1->g[5] = (uint)(*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x30));
        }
        sysMemWriteW(piVar1->g[7] + 0x678,(void *)(param_1 + 0x3c));
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(uint *)(param_1 + 0x24) = piVar1->g[5];
      }
      else {
        if (*(uint *)(param_1 + 0x3c) < 5) {
          if (*(uint *)(param_1 + 0x3c) == 4) {
            *(undefined4 *)(param_1 + 0x40) = 2;
          }
          else {
            *(undefined4 *)(param_1 + 0x40) = 1;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 4;
        }
        if ((*(uint *)(param_1 + 0x40) & 5) == 0) {
          sysMemReadW((void *)(param_1 + 0x30),piVar1->g[8] + 0x678);
          fVar6 = (float)piVar1->g[5];
          *(undefined4 *)(param_1 + 0x38) = 0x3e19999a;
          fVar6 = fVar6 + *(float *)(param_1 + 0x30);
          *(float *)(param_1 + 0x3c) = fVar6;
          if (fVar6 <= *(float *)(param_1 + 0x38)) {
            if (*(float *)(param_1 + 0x38) == fVar6) {
              *(undefined4 *)(param_1 + 0x40) = 2;
            }
            else {
              *(undefined4 *)(param_1 + 0x40) = 1;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x40) = 4;
          }
          if ((*(uint *)(param_1 + 0x40) & 1) == 0) {
            *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
            piVar1->g[5] = (uint)(*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x30));
          }
          sysMemWriteW(piVar1->g[8] + 0x678,(void *)(param_1 + 0x3c));
          *(undefined4 *)(param_1 + 0x20) = 0;
          *(undefined4 *)(param_1 + 0x24) = 0;
          *(undefined4 *)(param_1 + 0x28) = 0;
          *(undefined4 *)(param_1 + 0x30) = 0;
          *(undefined4 *)(param_1 + 0x34) = 0;
          *(undefined4 *)(param_1 + 0x38) = 0;
          *(uint *)(param_1 + 0x34) = piVar1->g[5];
        }
        else {
          *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x10);
          *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x18);
          sysMemReadW((void *)(param_1 + 0x20),piVar1->g[0xd] + 0xd4);
          sysMemReadW((void *)(param_1 + 0x28),piVar1->g[0xd] + 0xdc);
          *(undefined4 *)(param_1 + 0x3c) = 0x3e99999a;
          sysMemReadW((void *)(param_1 + 0x1c),piVar1->g[7] + 0x804);
          sysMemReadW((void *)(param_1 + 0x2c),piVar1->g[7] + 0x1a4);
          uVar2 = *(uint *)(param_1 + 0x1c) & *(uint *)(param_1 + 0x2c);
          *(uint *)(param_1 + 0x34) = uVar2;
          if ((uVar2 & 0x100) == 0) {
            sysMemReadW((void *)(param_1 + 0xc),piVar1->g[8] + 0x804);
            sysMemReadW((void *)(param_1 + 0x30),piVar1->g[8] + 0x1a4);
            uVar2 = *(uint *)(param_1 + 0xc) & *(uint *)(param_1 + 0x30);
            *(uint *)(param_1 + 0x38) = uVar2;
            if ((uVar2 & 0x100) == 0) {
              piVar1->g[0] = 0x2100;
              *(uint *)(param_1 + 0x34) = piVar1->g[0] & *(uint *)(param_1 + 0x1c);
              uVar2 = piVar1->g[0] & *(uint *)(param_1 + 0xc);
              uVar4 = *(uint *)(param_1 + 0x34) | uVar2;
              *(uint *)(param_1 + 0x38) = uVar2;
              *(uint *)(param_1 + 0x34) = uVar4;
              if (piVar1->g[0] < uVar4) {
                *(undefined4 *)(param_1 + 0x40) = 4;
              }
              else if (piVar1->g[0] == uVar4) {
                *(undefined4 *)(param_1 + 0x40) = 2;
              }
              else {
                *(undefined4 *)(param_1 + 0x40) = 1;
              }
              if ((*(uint *)(param_1 + 0x40) & 5) == 0) {
                *(undefined4 *)(param_1 + 0x3c) = 0x3f333333;
              }
              else {
                uVar2 = *(uint *)(param_1 + 0x1c) >> 6 & *(uint *)(param_1 + 0x2c);
                *(uint *)(param_1 + 0x34) = uVar2;
                if (((uVar2 & 4) != 0) ||
                   (uVar2 = *(uint *)(param_1 + 0xc) >> 6 & *(uint *)(param_1 + 0x30),
                   *(uint *)(param_1 + 0x38) = uVar2, (uVar2 & 4) != 0)) {
                  *(undefined4 *)(param_1 + 0x3c) = 0x3f266666;
                }
              }
            }
          }
          sysMemWriteW(piVar1->g[7] + 0x67c,(void *)(param_1 + 0x3c));
          sysMemWriteW(piVar1->g[8] + 0x67c,(void *)(param_1 + 0x3c));
          fVar5 = *(float *)(param_1 + 0x28);
          fVar8 = *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x3c);
          fVar7 = fVar5 * *(float *)(param_1 + 0x3c);
          fVar6 = *(float *)(param_1 + 0x18) - fVar7;
          *(float *)(param_1 + 0x10) =
               fVar6 * fVar5 + (*(float *)(param_1 + 0x10) - fVar8) * *(float *)(param_1 + 0x20);
          *(float *)(param_1 + 0x24) = fVar8;
          *(float *)(param_1 + 0x2c) = fVar7;
          *(float *)(param_1 + 0x18) = fVar6 * fVar5;
          if ((*(uint *)(param_1 + 0x10) & 0x80000000) != 0) {
            *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) ^ 0x80000000;
            piVar1->g[4] = (uint)((float)piVar1->g[4] + *(float *)(param_1 + 0x10));
          }
          *(undefined4 *)(param_1 + 0x3c) = 0x3e99999a;
          if ((piVar1->g[4] & 0x80000000) == 0) {
            if ((float)piVar1->g[4] <= *(float *)(param_1 + 0x3c)) {
              if (*(float *)(param_1 + 0x3c) == (float)piVar1->g[4]) {
                *(undefined4 *)(param_1 + 0x40) = 2;
              }
              else {
                *(undefined4 *)(param_1 + 0x40) = 1;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x40) = 4;
            }
            if ((*(uint *)(param_1 + 0x40) & 3) == 0) {
              piVar1->g[4] = *(uint *)(param_1 + 0x3c);
            }
          }
          sysMemReadW((void *)(param_1 + 0x30),piVar1->g[0xd] + 0xd4);
          sysMemReadW((void *)(param_1 + 0x34),piVar1->g[0xd] + 0xd8);
          sysMemReadW((void *)(param_1 + 0x38),piVar1->g[0xd] + 0xdc);
          sysMemReadW((void *)(param_1 + 0xc),piVar1->g[0xd] + 0xcc);
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) ^ 0x80000000;
          fVar6 = *(float *)(param_1 + 0xc) * (float)piVar1->g[4];
          *(float *)(param_1 + 0x20) = fVar6 * *(float *)(param_1 + 0x30);
          *(float *)(param_1 + 0x24) = fVar6 * *(float *)(param_1 + 0x34);
          *(float *)(param_1 + 0xc) = fVar6;
          *(float *)(param_1 + 0x28) = fVar6 * *(float *)(param_1 + 0x38);
          sysMemReadW((void *)(param_1 + 0xc),piVar1->g[0xd] + 0xd0);
          fVar6 = *(float *)(param_1 + 0xc) * (float)piVar1->g[4];
          *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) * fVar6;
          *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) * fVar6;
          *(float *)(param_1 + 0xc) = fVar6;
          *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) * fVar6;
        }
      }
    }
    sysMemWriteW(piVar1->g[0xd] + 0xe0,(void *)(param_1 + 0x20));
    sysMemWriteW(piVar1->g[0xd] + 0xe4,(void *)(param_1 + 0x24));
    sysMemWriteW(piVar1->g[0xd] + 0xe8,(void *)(param_1 + 0x28));
    sysMemWriteW(piVar1->g[0xd] + 0xec,(void *)(param_1 + 0x30));
    sysMemWriteW(piVar1->g[0xd] + 0xf0,(void *)(param_1 + 0x34));
    sysMemWriteW(piVar1->g[0xd] + 0xf4,(void *)(param_1 + 0x38));
  }
  uVar2 = piVar1->g[0xd];
LAB_001df708:
  sysMemReadS(&uStack_8,uVar2 + 0x23c);
  *(uint *)(param_1 + 0xc) = (uint)uStack_8;
  if (uStack_8 == 0) {
    *(undefined4 *)(param_1 + 0x40) = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 4;
  }
  if ((*(uint *)(param_1 + 0x40) & 2) == 0) {
    sysMemReadS(&sStack_a,piVar1->g[7] + 0x26);
    uVar2 = (int)sStack_a ^ (int)sStack_a << 1;
    *(uint *)(param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 0x10) = (int)sStack_a << 1;
    if ((uVar2 & 0x4000) == 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  sysMemReadS(&uStack_c,piVar1->g[0xd] + 0x23e);
  *(uint *)(param_1 + 0xc) = (uint)uStack_c;
  if (uStack_c == 0) {
    *(undefined4 *)(param_1 + 0x40) = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 4;
  }
  if ((*(uint *)(param_1 + 0x40) & 2) == 0) {
    sysMemReadS(&sStack_e,piVar1->g[8] + 0x26);
    uVar2 = (int)sStack_e ^ (int)sStack_e << 1;
    *(uint *)(param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 0x10) = (int)sStack_e << 1;
    if ((uVar2 & 0x4000) == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  sysMemReadW((void *)(param_1 + 0x10),piVar1->g[7] + 0x680);
  sysMemReadW((void *)(param_1 + 0x2c),piVar1->g[8] + 0x680);
  if (*(float *)(param_1 + 0x2c) <= *(float *)(param_1 + 0x10)) {
    if (*(float *)(param_1 + 0x10) == *(float *)(param_1 + 0x2c)) {
      *(undefined4 *)(param_1 + 0x40) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 4;
  }
  if ((*(uint *)(param_1 + 0x40) & 3) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[7] + 0x644);
  if (*(int *)(param_1 + 0x3c) < 1) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      *(undefined4 *)(param_1 + 0x40) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 4;
  }
  if ((*(uint *)(param_1 + 0x40) & 2) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined4 *)(param_1 + 0x40) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 4;
    }
    if ((*(uint *)(param_1 + 0x40) & 5) == 0) {
      sysMemReadW((void *)(param_1 + 0x2c),piVar1->g[8] + 0x1a4);
      *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
      if ((*(uint *)(param_1 + 0x2c) & 0x100) == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 0x3f666666;
        sysMemReadB(&bStack_1,piVar1->g[8] + 4);
        *(uint *)(param_1 + 0x10) = (uint)bStack_1;
        sysMemReadW((void *)(param_1 + 0x10),piVar1->g[0xd] + 0x1e8 + *(int *)(param_1 + 0x10) * 4);
        sysMemReadW((void *)(param_1 + 0x2c),piVar1->g[0xd] + 0x1d8);
        if (*(float *)(param_1 + 0x10) <= *(float *)(param_1 + 0x2c)) {
          if (*(float *)(param_1 + 0x2c) == *(float *)(param_1 + 0x10)) {
            *(undefined4 *)(param_1 + 0x40) = 2;
          }
          else {
            *(undefined4 *)(param_1 + 0x40) = 1;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 4;
        }
        if ((*(uint *)(param_1 + 0x40) & 4) == 0) {
          *(undefined4 *)(param_1 + 0x3c) = 0;
        }
      }
      fVar6 = *(float *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      fVar6 = *(float *)(param_1 + 0x3c) * fVar6;
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
      *(float *)(param_1 + 0x3c) = fVar6;
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) - fVar6;
    }
  }
  sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[7] + 0x64c);
  if (*(int *)(param_1 + 0x3c) < 1) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      *(undefined4 *)(param_1 + 0x40) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 4;
  }
  if ((*(uint *)(param_1 + 0x40) & 2) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined4 *)(param_1 + 0x40) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 4;
    }
    if ((*(uint *)(param_1 + 0x40) & 5) == 0) {
      sysMemReadW((void *)(param_1 + 0x2c),piVar1->g[8] + 0x1a4);
      *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
      if ((*(uint *)(param_1 + 0x2c) & 0x100) == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 0x3f666666;
        sysMemReadB(&bStack_2,piVar1->g[8] + 4);
        *(uint *)(param_1 + 0x10) = (uint)bStack_2;
        sysMemReadW((void *)(param_1 + 0x10),piVar1->g[0xd] + 0x1e8 + *(int *)(param_1 + 0x10) * 4);
        sysMemReadW((void *)(param_1 + 0x2c),piVar1->g[0xd] + 0x1d8);
        if (*(float *)(param_1 + 0x10) <= *(float *)(param_1 + 0x2c)) {
          if (*(float *)(param_1 + 0x2c) == *(float *)(param_1 + 0x10)) {
            *(undefined4 *)(param_1 + 0x40) = 2;
          }
          else {
            *(undefined4 *)(param_1 + 0x40) = 1;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 4;
        }
        if ((*(uint *)(param_1 + 0x40) & 4) == 0) {
          *(undefined4 *)(param_1 + 0x3c) = 0;
        }
      }
      fVar6 = *(float *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      fVar6 = *(float *)(param_1 + 0x3c) * fVar6;
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
      *(float *)(param_1 + 0x3c) = fVar6;
      *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) - fVar6;
    }
  }
  sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[8] + 0x644);
  if (*(int *)(param_1 + 0x3c) < 1) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      *(undefined4 *)(param_1 + 0x40) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 4;
  }
  if ((*(uint *)(param_1 + 0x40) & 2) == 0) {
    if (*(uint *)(param_1 + 0x1c) < 2) {
      if (*(uint *)(param_1 + 0x1c) == 1) {
        *(undefined4 *)(param_1 + 0x40) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x40) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 4;
    }
    if ((*(uint *)(param_1 + 0x40) & 5) == 0) {
      sysMemReadW((void *)(param_1 + 0x2c),piVar1->g[7] + 0x1a4);
      *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
      if ((*(uint *)(param_1 + 0x2c) & 0x100) == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 0x3f666666;
        sysMemReadB(&bStack_3,piVar1->g[7] + 4);
        *(uint *)(param_1 + 0x10) = (uint)bStack_3;
        sysMemReadW((void *)(param_1 + 0x10),piVar1->g[0xd] + 0x1e8 + *(int *)(param_1 + 0x10) * 4);
        sysMemReadW((void *)(param_1 + 0x2c),piVar1->g[0xd] + 0x1d8);
        if (*(float *)(param_1 + 0x10) <= *(float *)(param_1 + 0x2c)) {
          if (*(float *)(param_1 + 0x2c) == *(float *)(param_1 + 0x10)) {
            *(undefined4 *)(param_1 + 0x40) = 2;
          }
          else {
            *(undefined4 *)(param_1 + 0x40) = 1;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 4;
        }
        if ((*(uint *)(param_1 + 0x40) & 4) == 0) {
          *(undefined4 *)(param_1 + 0x3c) = 0;
        }
      }
      fVar6 = *(float *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      fVar6 = *(float *)(param_1 + 0x3c) * fVar6;
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
      *(float *)(param_1 + 0x3c) = fVar6;
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) - fVar6;
    }
  }
  sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[8] + 0x64c);
  if (*(int *)(param_1 + 0x3c) < 1) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      *(undefined4 *)(param_1 + 0x40) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 4;
  }
  if ((*(uint *)(param_1 + 0x40) & 2) == 0) {
    if (*(uint *)(param_1 + 0x1c) < 2) {
      if (*(uint *)(param_1 + 0x1c) == 1) {
        *(undefined4 *)(param_1 + 0x40) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x40) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 4;
    }
    if ((*(uint *)(param_1 + 0x40) & 5) == 0) {
      sysMemReadW((void *)(param_1 + 0x2c),piVar1->g[7] + 0x1a4);
      *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
      if ((*(uint *)(param_1 + 0x2c) & 0x100) == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 0x3f666666;
        sysMemReadB(&bStack_4,piVar1->g[7] + 4);
        *(uint *)(param_1 + 0x10) = (uint)bStack_4;
        sysMemReadW((void *)(param_1 + 0x10),piVar1->g[0xd] + 0x1e8 + *(int *)(param_1 + 0x10) * 4);
        sysMemReadW((void *)(param_1 + 0x2c),piVar1->g[0xd] + 0x1d8);
        if (*(float *)(param_1 + 0x10) <= *(float *)(param_1 + 0x2c)) {
          if (*(float *)(param_1 + 0x2c) == *(float *)(param_1 + 0x10)) {
            *(undefined4 *)(param_1 + 0x40) = 2;
          }
          else {
            *(undefined4 *)(param_1 + 0x40) = 1;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 4;
        }
        if ((*(uint *)(param_1 + 0x40) & 4) == 0) {
          *(undefined4 *)(param_1 + 0x3c) = 0;
        }
      }
      fVar6 = *(float *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      fVar6 = *(float *)(param_1 + 0x3c) * fVar6;
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 8;
      *(float *)(param_1 + 0x3c) = fVar6;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - fVar6;
    }
  }
  sysMemWriteW(piVar1->g[0xd] + 0xe0,(void *)(param_1 + 0x20));
  sysMemWriteW(piVar1->g[0xd] + 0xe4,(void *)(param_1 + 0x24));
  sysMemWriteW(piVar1->g[0xd] + 0xe8,(void *)(param_1 + 0x28));
  sysMemWriteW(piVar1->g[0xd] + 0xec,(void *)(param_1 + 0x30));
  sysMemWriteW(piVar1->g[0xd] + 0xf0,(void *)(param_1 + 0x34));
  sysMemWriteW(piVar1->g[0xd] + 0xf4,(void *)(param_1 + 0x38));
  if ((*(uint *)(param_1 + 0xc) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x20) & 0x80000000) == 0) {
      sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[7] + 0x650);
      if (*(float *)(param_1 + 0x20) <= *(float *)(param_1 + 0x3c)) {
        if (*(float *)(param_1 + 0x3c) == *(float *)(param_1 + 0x20)) {
          *(undefined4 *)(param_1 + 0x40) = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x40) = 4;
      }
      if ((*(uint *)(param_1 + 0x40) & 3) == 0) {
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x3c);
      }
    }
    else {
      sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[7] + 0x654);
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) ^ 0x80000000;
      if (*(float *)(param_1 + 0x20) <= *(float *)(param_1 + 0x3c)) {
        if (*(float *)(param_1 + 0x3c) == *(float *)(param_1 + 0x20)) {
          *(undefined4 *)(param_1 + 0x40) = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x40) = 4;
      }
      if ((*(uint *)(param_1 + 0x40) & 6) == 0) {
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x3c);
      }
    }
  }
  if ((*(uint *)(param_1 + 0xc) & 2) == 0) {
    sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[7] + 0x658);
    if ((*(uint *)(param_1 + 0x28) & 0x80000000) == 0) {
      if (*(float *)(param_1 + 0x28) <= *(float *)(param_1 + 0x3c)) {
        if (*(float *)(param_1 + 0x3c) == *(float *)(param_1 + 0x28)) {
          *(undefined4 *)(param_1 + 0x40) = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x40) = 4;
      }
      if ((*(uint *)(param_1 + 0x40) & 3) == 0) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x3c);
      }
    }
    else {
      sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[7] + 0x65c);
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) ^ 0x80000000;
      if (*(float *)(param_1 + 0x28) <= *(float *)(param_1 + 0x3c)) {
        if (*(float *)(param_1 + 0x3c) == *(float *)(param_1 + 0x28)) {
          *(undefined4 *)(param_1 + 0x40) = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x40) = 4;
      }
      if ((*(uint *)(param_1 + 0x40) & 6) == 0) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x3c);
      }
    }
  }
  if ((*(uint *)(param_1 + 0xc) & 4) == 0) {
    if ((*(uint *)(param_1 + 0x30) & 0x80000000) == 0) {
      sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[8] + 0x650);
      if (*(float *)(param_1 + 0x30) <= *(float *)(param_1 + 0x3c)) {
        if (*(float *)(param_1 + 0x3c) == *(float *)(param_1 + 0x30)) {
          *(undefined4 *)(param_1 + 0x40) = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x40) = 4;
      }
      if ((*(uint *)(param_1 + 0x40) & 3) == 0) {
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x3c);
      }
    }
    else {
      sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[8] + 0x654);
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) ^ 0x80000000;
      if (*(float *)(param_1 + 0x30) <= *(float *)(param_1 + 0x3c)) {
        if (*(float *)(param_1 + 0x3c) == *(float *)(param_1 + 0x30)) {
          *(undefined4 *)(param_1 + 0x40) = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x40) = 4;
      }
      if ((*(uint *)(param_1 + 0x40) & 6) == 0) {
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x3c);
      }
    }
  }
  if ((*(uint *)(param_1 + 0xc) & 8) == 0) {
    sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[8] + 0x658);
    if ((*(uint *)(param_1 + 0x38) & 0x80000000) == 0) {
      if (*(float *)(param_1 + 0x38) <= *(float *)(param_1 + 0x3c)) {
        if (*(float *)(param_1 + 0x3c) == *(float *)(param_1 + 0x38)) {
          *(undefined4 *)(param_1 + 0x40) = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x40) = 4;
      }
      if ((*(uint *)(param_1 + 0x40) & 3) == 0) {
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x3c);
      }
    }
    else {
      sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[8] + 0x65c);
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) ^ 0x80000000;
      if (*(float *)(param_1 + 0x38) <= *(float *)(param_1 + 0x3c)) {
        if (*(float *)(param_1 + 0x3c) == *(float *)(param_1 + 0x38)) {
          *(undefined4 *)(param_1 + 0x40) = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x40) = 4;
      }
      if ((*(uint *)(param_1 + 0x40) & 6) == 0) {
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x3c);
      }
    }
  }
  sysMemReadW((void *)(param_1 + 0xc),piVar1->g[7] + 0x644);
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0xc);
  sysMemReadW((void *)(param_1 + 0xc),piVar1->g[7] + 0x64c);
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0xc);
  sysMemReadW((void *)(param_1 + 0xc),piVar1->g[8] + 0x644);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0xc);
  sysMemReadW((void *)(param_1 + 0xc),piVar1->g[8] + 0x64c);
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0xc);
  sysMemWriteW(piVar1->g[7] + 0xa68,(void *)(param_1 + 0x20));
  sysMemWriteW(piVar1->g[7] + 0xa6c,(void *)(param_1 + 0x28));
  sysMemWriteW(piVar1->g[8] + 0xa68,(void *)(param_1 + 0x30));
  sysMemWriteW(piVar1->g[8] + 0xa6c,(void *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x3c) = 0x1e803d3d;
  FUN_0018df40();
  FUN_0018df40(*(undefined4 *)(param_1 + 0x20));
  FUN_0018df40(*(undefined4 *)(param_1 + 0x24));
  FUN_0018df40(*(undefined4 *)(param_1 + 0x28));
  FUN_0018df40(*(undefined4 *)(param_1 + 0x30));
  FUN_0018df40(*(undefined4 *)(param_1 + 0x34));
  FUN_0018df40(*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x3c) = 0x39007272;
  FUN_0018df40();
  sysMemReadB(&bStack_5,piVar1->g[7] + 4);
  *(uint *)(param_1 + 0x3c) = (uint)bStack_5;
  FUN_0018df40();
  FUN_0018df40(*(undefined4 *)(param_1 + 0x20));
  FUN_0018df40(*(undefined4 *)(param_1 + 0x28));
  uVar3 = FUN_0018e100();
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  sysMemWriteB(piVar1->g[7] + 0xa29,(void *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0x3c) = 0x39007272;
  FUN_0018df40();
  sysMemReadB(&bStack_6,piVar1->g[8] + 4);
  *(uint *)(param_1 + 0x3c) = (uint)bStack_6;
  FUN_0018df40();
  FUN_0018df40(*(undefined4 *)(param_1 + 0x30));
  FUN_0018df40(*(undefined4 *)(param_1 + 0x38));
  uVar3 = FUN_0018e100();
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  sysMemWriteB(piVar1->g[8] + 0xa29,(void *)(param_1 + 0xc));
  sysMemReadW((void *)(param_1 + 0x10),piVar1->g[7] + 0x18);
  sysMemReadW((void *)(param_1 + 0x18),piVar1->g[7] + 0x20);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x28);
  sysMemWriteW(piVar1->g[7] + 0x18,(void *)(param_1 + 0x10));
  sysMemWriteW(piVar1->g[7] + 0x20,(void *)(param_1 + 0x18));
  sysMemReadW((void *)(param_1 + 0x10),piVar1->g[8] + 0x18);
  sysMemReadW((void *)(param_1 + 0x18),piVar1->g[8] + 0x20);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x38);
  sysMemWriteW(piVar1->g[8] + 0x18,(void *)(param_1 + 0x10));
  sysMemWriteW(piVar1->g[8] + 0x20,(void *)(param_1 + 0x18));
  sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[7] + 0x678);
  *(undefined4 *)(param_1 + 0x38) = 0x3cf5c28f;
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x38);
  if ((*(uint *)(param_1 + 0x3c) & 0x80000000) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  sysMemWriteW(piVar1->g[7] + 0x678,(void *)(param_1 + 0x3c));
  sysMemReadW((void *)(param_1 + 0x3c),piVar1->g[8] + 0x678);
  *(undefined4 *)(param_1 + 0x38) = 0x3cf5c28f;
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x38);
  if ((*(uint *)(param_1 + 0x3c) & 0x80000000) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  sysMemWriteW(piVar1->g[8] + 0x678,(void *)(param_1 + 0x3c));
  return 0;
}

