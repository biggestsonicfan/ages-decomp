/* COP 7c Fn_load_inner_3x3: Fn_load_inner_3x3 @ 0018ed40, 2 argument words, 0 reply bytes */

void Fn_load_inner_3x3(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  pauVar1 = (undefined1 (*) [16])(iGpffff82d8 + (*puGpffff830c / 9) * 0x40);
  auVar2 = _lqc2(*pauVar1);
  auVar3 = _lqc2(pauVar1[1]);
  auVar4 = _lqc2(pauVar1[2]);
  _vmove(auVar2);
  _vmove(auVar3);
  _vmove(auVar4);
  uGpffff82fc = 0;
  return;
}

