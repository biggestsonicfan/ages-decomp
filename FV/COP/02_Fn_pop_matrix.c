/* COP 02 Fn_pop_matrix: Fn_pop_matrix @ 0018f500, 0 argument words, 0 reply bytes */

void Fn_pop_matrix(void)

{
  undefined1 (*pauVar1) [16];
  
  if ((uGpffff82c0 != 0) && (uGpffff82c0 = uGpffff82c0 - 1, uGpffff82c0 < 8)) {
    iGpffff82bc = iGpffff82bc + -0x40;
    pauVar1 = (undefined1 (*) [16])(iGpffff82f8 + iGpffff82bc);
    _lqc2(*pauVar1);
    _lqc2(pauVar1[1]);
    _lqc2(pauVar1[2]);
    _lqc2(pauVar1[3]);
  }
  uGpffff82fc = 0;
  return;
}

