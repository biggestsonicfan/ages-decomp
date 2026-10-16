/* COP 7e Fn_mul_matrix_inner3: Fn_mul_matrix_inner3 @ 0018f040, 2 argument words, 0 reply bytes */

void Fn_mul_matrix_inner3(void)

{
  int iVar1;
  
  if (puGpffff830c[1] == 0) {
    iVar1 = iGpffff82d4 + (*puGpffff830c / 9) * 0x40;
  }
  else {
    iVar1 = iGpffff82d8 + (*puGpffff830c / 9) * 0x40;
  }
  func_0x00195e40(iVar1);
  uGpffff82fc = 0;
  return;
}

