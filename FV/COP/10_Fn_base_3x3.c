/* COP 10 Fn_base_3x3: Fn_base_3x3 @ 0018edc0, 0 argument words, 0 reply bytes */

void Fn_base_3x3(void)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  
  auVar3 = _vmr32(in_vf0);
  auVar2 = _vmr32(in_vf26);
  auVar1 = _vmr32(in_vf25);
  _vmove(auVar3);
  _vmove(auVar2);
  _vmove(auVar1);
  uGpffff82fc = 0;
  return;
}

