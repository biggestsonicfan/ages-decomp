/* helper FUN_00198280 @ 00198280, called (depth 3) from play_motion */

void FUN_00198280(void)

{
  long lVar1;
  
  lVar1 = sndIsNowLoadPs2();
  if (lVar1 == 0) {
    lVar1 = sndIsNowLoadOrCancelPs2();
    if (lVar1 == 0) {
      do {
      } while ((uRam0028a4c8 & 1) == 0);
      DIntr();
      uRam0028a4c8 = uRam0028a4c8 & 0x7fff0000;
      EIntr();
      uRam017ced0c = 0x3000000;
      sceSifSendCmd(0,0x17ced00,0x10,0,0,0);
    }
    lVar1 = sndIsNowLoadOrCancelPs2();
    if (lVar1 == 0) {
      do {
      } while ((uRam0028a4c8 & 1) == 0);
      DIntr();
      uRam0028a4c8 = uRam0028a4c8 & 0x7fff0000;
      EIntr();
      uRam017ced0c = 0x3000001;
      sceSifSendCmd(0,0x17ced00,0x10,0,0,0);
    }
    lVar1 = sndIsNowLoadOrCancelPs2();
    if (lVar1 == 0) {
      do {
      } while ((uRam0028a4c8 & 1) == 0);
      DIntr();
      uRam0028a4c8 = uRam0028a4c8 & 0x7fff0000;
      EIntr();
      uRam017ced0c = 0x3000002;
      sceSifSendCmd(0,0x17ced00,0x10,0,0,0);
    }
  }
  return;
}

