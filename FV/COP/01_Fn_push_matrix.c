/* COP 01 Fn_push_matrix: Fn_push_matrix @ 0018f600, 0 argument words, 0 reply bytes */

void Fn_push_matrix(void)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  
  if (uGpffff82c0 < 7) {
    pauVar2 = (undefined1 (*) [16])(iGpffff82f8 + iGpffff82bc);
    auVar1 = _sqc2(in_vf24);
    *pauVar2 = auVar1;
    auVar1 = _sqc2(in_vf25);
    pauVar2[1] = auVar1;
    auVar1 = _sqc2(in_vf26);
    pauVar2[2] = auVar1;
    auVar1 = _sqc2(in_vf27);
    pauVar2[3] = auVar1;
    iGpffff82bc = iGpffff82bc + 0x40;
    uGpffff82c0 = uGpffff82c0 + 1;
  }
  uGpffff82fc = 0;
  return;
}

