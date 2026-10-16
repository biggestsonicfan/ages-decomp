/* helper FUN_0018f480 @ 0018f480, called (depth 1) from calc_unit_mat */

void FUN_0018f480(void)

{
  undefined1 (*pauVar1) [16];
  
  if ((uRam0028a430 != 0) && (uRam0028a430 = uRam0028a430 - 1, uRam0028a430 < 8)) {
    iRam0028a42c = iRam0028a42c + -0x40;
    pauVar1 = (undefined1 (*) [16])(iRam0028a468 + iRam0028a42c);
    _lqc2(*pauVar1);
    _lqc2(pauVar1[1]);
    _lqc2(pauVar1[2]);
    _lqc2(pauVar1[3]);
  }
  return;
}

