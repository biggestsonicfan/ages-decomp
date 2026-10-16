/* helper FUN_0019a580 @ 0019a580, called (depth 3) from play_motion */

long FUN_0019a580(ulong param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = -1;
  if ((param_1 < 0xae1000) || (0xae100e < param_1)) {
    if ((param_1 < 0xae1100) || (0xae1171 < param_1)) {
      if ((param_1 < 0xae1200) || (0xae127c < param_1)) {
        lVar3 = lVar2;
        if ((0xae12ff < param_1) && (param_1 < 0xae1342)) {
          lVar3 = 3;
        }
      }
      else {
        lVar3 = 2;
      }
    }
    else {
      lVar3 = 1;
    }
  }
  else {
    lVar3 = 0;
  }
  if (-1 < lVar3) {
    iVar1 = (int)lVar3 * 8;
    lVar2 = (long)(short)((short)*(undefined4 *)(&DAT_00228284 + iVar1) +
                         ((short)param_1 - (short)*(undefined4 *)(&DAT_00228280 + iVar1)));
  }
  return lVar2;
}

