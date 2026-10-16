/* COP 05 Fn_get_matrix: Fn_get_matrix @ 0018f340, 0 argument words, 48 reply bytes */

void Fn_get_matrix(void)

{
  undefined1 auVar1 [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  
  auVar1 = _sqc2(in_vf24);
  *pauGpffff82e4 = auVar1;
  auVar1 = _sqc2(in_vf25);
  pauGpffff82e4[1] = auVar1;
  auVar1 = _sqc2(in_vf26);
  pauGpffff82e4[2] = auVar1;
  auVar1 = _sqc2(in_vf27);
  pauGpffff82e4[3] = auVar1;
  func_0x0018f700();
  uGpffff82fc = 0x30;
  return;
}

