/* COP 57 Fn_get_y_axis: Fn_get_y_axis @ 0018ee40, 0 argument words, 12 reply bytes */

void Fn_get_y_axis(void)

{
  undefined1 auVar1 [16];
  undefined1 in_vf25 [16];
  
  auVar1 = _sqc2(in_vf25);
  *pauGpffff8300 = auVar1;
  uGpffff82fc = 0xc;
  return;
}

