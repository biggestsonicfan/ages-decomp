/* COP 35 Fn_st_unit_mat: Fn_st_unit_mat @ 0018eac0, 2 argument words, 0 reply bytes */

void Fn_st_unit_mat(void)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  
  pauVar2 = (undefined1 (*) [16])
            (**(int **)(&gp0xffff8048 + (*puGpffff830c & 1) * 4) + (puGpffff830c[1] / 0xc) * 0x40);
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

