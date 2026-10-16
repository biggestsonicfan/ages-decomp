/* COP 44 Fn_load_matrix_inner: Fn_load_matrix_inner @ 0018e600, 1 argument words, 0 reply bytes */

void Fn_load_matrix_inner(void)

{
  undefined1 (*pauVar1) [16];
  
  pauVar1 = (undefined1 (*) [16])(iGpffff82dc + *piGpffff830c * 0x40);
  _lqc2(*pauVar1);
  _lqc2(pauVar1[1]);
  _lqc2(pauVar1[2]);
  _lqc2(pauVar1[3]);
  uGpffff82fc = 0;
  return;
}

