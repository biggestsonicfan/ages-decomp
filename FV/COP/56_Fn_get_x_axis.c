/* COP 56 Fn_get_x_axis: Fn_get_x_axis @ 0018ee80, 0 argument words, 12 reply bytes */

void Fn_get_x_axis(void)

{
  undefined1 auVar1 [16];
  undefined1 in_vf24 [16];
  
  auVar1 = _sqc2(in_vf24);
  *pauGpffff8300 = auVar1;
  uGpffff82fc = 0xc;
  return;
}

