/* helper FUN_0018f580 @ 0018f580, called (depth 1) from Fn_kage_mat */

void FUN_0018f580(void)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  
  if (uRam0028a430 < 7) {
    pauVar2 = (undefined1 (*) [16])(iRam0028a468 + iRam0028a42c);
    auVar1 = _sqc2(in_vf24);
    uRam0028a430 = uRam0028a430 + 1;
    *pauVar2 = auVar1;
    auVar1 = _sqc2(in_vf25);
    pauVar2[1] = auVar1;
    auVar1 = _sqc2(in_vf26);
    pauVar2[2] = auVar1;
    auVar1 = _sqc2(in_vf27);
    pauVar2[3] = auVar1;
    iRam0028a42c = iRam0028a42c + 0x40;
  }
  return;
}

