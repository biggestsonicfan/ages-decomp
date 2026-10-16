/* COP 62 Fn_calc_unit_hara: Fn_calc_unit_hara @ 001905c0, 9 argument words, 0 reply bytes */

void Fn_calc_unit_hara(void)

{
  undefined1 (*pauVar1) [16];
  
  pauVar1 = pauGpffff830c;
  if (uGpffff82c0 < 7) {
    uGpffff82c0 = uGpffff82c0 + 1;
    iGpffff82bc = iGpffff82bc + 0x40;
  }
  _lqc2(*pauGpffff830c);
  func_0x00190cc0(*(undefined2 *)(*pauGpffff830c + 0xc),*(undefined2 *)pauGpffff830c[1],
                  *(undefined2 *)(pauGpffff830c[1] + 4));
  func_0x00195300(*(undefined2 *)(pauVar1[1] + 8));
  func_0x00195380(*(undefined2 *)(pauVar1[1] + 0xc));
  func_0x00195280(*(undefined2 *)pauVar1[2]);
  uGpffff82fc = 0;
  return;
}

