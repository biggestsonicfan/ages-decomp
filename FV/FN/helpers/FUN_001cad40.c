/* helper FUN_001cad40 @ 001cad40, called (depth 1) from rob_disp */

bool FUN_001cad40(void)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar2 = sysGetWorkRamAddr();
  if ((*(char *)(iVar2 + 0x2b) == '\x03') && (*(char *)(iVar2 + 0x31) == '\x05')) {
    if (iRam01f834dc == 0) {
      if (puRam01f834d4 == (uint *)0x0) {
        bVar1 = false;
      }
      else {
        iVar4 = 0;
        puVar3 = puRam01f834d4;
        do {
          if ((*(uint *)(iVar2 + 0x24) <= *puVar3) && (puVar3[1] <= *(uint *)(iVar2 + 0x24))) {
            return true;
          }
          iVar4 = iVar4 + 1;
          puVar3 = puVar3 + 2;
        } while (iVar4 < 8);
        bVar1 = false;
      }
    }
    else {
      bVar1 = *(uint *)(iVar2 + 0x24) < 0x28;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

