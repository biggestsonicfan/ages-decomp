/* helper sound_request_u @ 001f3740, called (depth 1) from play_motion */

/* WARNING: Removing unreachable block (ram,0x001f37ec) */

undefined8 sound_request_u(long param_1)

{
  uint uVar1;
  bool bVar2;
  i960_regs *piVar3;
  int iStack_10;
  byte bStack_1;
  
  piVar3 = i960GetRegs();
  if (piVar3->g[0] < 0xa00002) {
    if (piVar3->g[0] == 0xa00001) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    if ((uRam016b6dfc & 0xc) == 0) {
      uVar1 = piVar3->g[0];
    }
    else {
      sysMemReadB(&bStack_1,iRam016b6f3c + 0x3351);
      if ((bStack_1 & 1) != 0) goto LAB_001f3868;
      uVar1 = piVar3->g[0];
    }
    if ((uVar1 & 0xff0000) < 0x9e0001) {
      if ((uVar1 & 0xff0000) == 0x9e0000) {
        iStack_10 = 0;
      }
      else {
        iStack_10 = 1;
      }
    }
    else {
      iStack_10 = 4;
    }
    if (iStack_10 == 0) {
      piVar3->g[0] = piVar3->g[0] - 0x20000;
    }
  }
  FUN_0019a680(piVar3->g[0]);
LAB_001f3868:
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

