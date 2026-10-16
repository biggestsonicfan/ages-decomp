/* COP 43 Fn_get_matrix_inner: Fn_get_matrix_inner @ 0018e680, 1 argument words, 0 reply bytes */

void Fn_get_matrix_inner(void)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  
  pauVar2 = (undefined1 (*) [16])(iGpffff82dc + *piGpffff830c * 0x40);
  auVar1 = _sqc2(in_vf24);
  *pauVar2 = auVar1;
  auVar1 = _sqc2(in_vf25);
  pauVar2[1] = auVar1;
  auVar1 = _sqc2(in_vf26);
  pauVar2[2] = auVar1;
  auVar1 = _sqc2(in_vf27);
  pauVar2[3] = auVar1;
  uGpffff82fc = 0;
  return;
}

