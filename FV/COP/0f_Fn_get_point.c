/* COP 0f Fn_get_point: Fn_get_point @ 0018eec0, 0 argument words, 12 reply bytes */

void Fn_get_point(void)

{
  undefined1 auVar1 [16];
  undefined1 in_vf27 [16];
  
  auVar1 = _sqc2(in_vf27);
  *pauGpffff8300 = auVar1;
  uGpffff82fc = 0xc;
  return;
}

