/* helper FUN_0019a680 @ 0019a680, called (depth 2) from play_motion */

/* WARNING: Removing unreachable block (ram,0x0019a854) */

void FUN_0019a680(ulong param_1)

{
  char cVar1;
  short sVar2;
  
  if (iRam0028a51c != 0) {
    if (param_1 == 0xae1166) {
      FUN_00196d00(0);
      FUN_00199980(0x74);
    }
    else if (param_1 == 0xae1160) {
      FUN_00196d00(0);
      FUN_00199980(0x6e);
    }
    else if (param_1 == 0xae115d) {
      FUN_00196d00(0);
      FUN_00199980(0x6b);
    }
    else if (param_1 == 0xae115b) {
      FUN_00196d00(0);
      FUN_00199980(0x69);
    }
    else if (param_1 == 0xa00003) {
      FUN_00198280();
    }
    else if (param_1 == 0xa00002) {
      sound_bgm_off();
    }
    else if (param_1 == 0xa00001) {
      FUN_001984c0();
    }
    else if ((param_1 != 0xa00000) && (param_1 != 0)) {
      if ((param_1 & 0xffffffffffffff00) == 0xa00300) {
        adxt_stop_fadeout((float)((uint)param_1 & 0xff) / 60.0,0);
      }
      else {
        if (param_1 == 0xae113c) {
          FUN_00196d00(0);
          FUN_00199980(0x4a);
        }
        sVar2 = FUN_0019a580(param_1);
        if (-1 < sVar2) {
          cVar1 = FUN_00199640(*(undefined1 *)(sVar2 * 0x10 + 0x2404f4));
          if (-1 < cVar1) {
            FUN_00196d00();
          }
          FUN_00199a00(sVar2);
        }
      }
    }
  }
  return;
}

