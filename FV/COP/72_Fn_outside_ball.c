/* COP 72 Fn_outside_ball: Fn_outside_ball @ 001925c0, 3 argument words, 4 reply bytes */

void Fn_outside_ball(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*piRam0028a47c == 0) {
    iVar4 = 16000;
  }
  else {
    iVar4 = 0x7e80;
  }
  iVar5 = 0;
  iVar3 = 0;
  do {
    iVar2 = iVar4 * 4;
    iVar1 = iVar4 + 2;
    iVar4 = iVar4 + 3;
    if ((*(float *)(iRam0028a49c + 0x2008) <
         (float)((ulong)((long)(int)((float)piRam0028a47c[1] + *(float *)(iRam0028a484 + iVar2)) <<
                        0x21) >> 0x21)) ||
       (*(float *)(iRam0028a49c + 0x2008) <=
        (float)((ulong)((long)(int)((float)piRam0028a47c[2] + *(float *)(iRam0028a484 + iVar1 * 4))
                       << 0x21) >> 0x21))) {
      iVar5 = iVar5 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  *piRam0028a470 = iVar5;
  uRam0028a46c = 4;
  return;
}

