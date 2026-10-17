/* helper check_same_sound @ 001f3940, called (depth 1) from play_motion */

undefined8 check_same_sound(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  i960_regs *piVar4;
  uint uStack_44;
  int iStack_10;
  
  piVar4 = i960GetRegs();
  if (bRam016bae3a < 5) {
    if (bRam016bae3a == 4) {
      iStack_10 = 2;
    }
    else {
      iStack_10 = 0;
    }
  }
  else {
    iStack_10 = 4;
  }
  if (iStack_10 == 0) {
    uVar1 = piVar4->g[0];
    uStack_44 = bRam016bae3a + 1;
    do {
      uVar2 = *(uint *)(uStack_44 * 4 + 0x16bae44);
      if (uVar1 < uVar2) {
        bVar3 = false;
      }
      else if (uVar1 == uVar2) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) goto LAB_001f39a4;
      if (uStack_44 < 2) {
        if (uStack_44 == 1) {
          bVar3 = false;
        }
        else {
          bVar3 = false;
        }
      }
      else {
        bVar3 = true;
      }
      uStack_44 = uStack_44 - 1;
    } while (bVar3);
    *(uint *)((uint)bRam016bae3a * 4 + 0x16bae48) = uVar1;
    bRam016bae3a = bRam016bae3a + 1;
  }
LAB_001f39a4:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

