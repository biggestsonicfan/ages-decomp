/* COP 7d Fn_store_inner_3x3: Fn_store_inner_3x3 @ 0018ec80, 2 argument words, 0 reply bytes */

void Fn_store_inner_3x3(void)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  
  pauVar2 = (undefined1 (*) [16])(iGpffff82d8 + (*puGpffff830c / 9) * 0x40);
  auVar1 = _sqc2(in_vf24);
  *pauVar2 = auVar1;
  auVar1 = _sqc2(in_vf25);
  pauVar2[1] = auVar1;
  auVar1 = _sqc2(in_vf26);
  pauVar2[2] = auVar1;
  uGpffff82fc = 0;
  return;
}

