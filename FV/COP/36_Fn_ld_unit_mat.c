/* COP 36 Fn_ld_unit_mat: Fn_ld_unit_mat @ 0018ea00, 2 argument words, 0 reply bytes */

void Fn_ld_unit_mat(void)

{
  undefined1 (*pauVar1) [16];
  
  pauVar1 = (undefined1 (*) [16])
            (**(int **)(&gp0xffff8048 + (*puGpffff830c & 1) * 4) + (puGpffff830c[1] / 0xc) * 0x40);
  _lqc2(*pauVar1);
  _lqc2(pauVar1[1]);
  _lqc2(pauVar1[2]);
  _lqc2(pauVar1[3]);
  uGpffff82fc = 0;
  return;
}

