/* COP 47 Fn_mul_matrix_rev: Fn_mul_matrix_rev @ 0018e480, 12 argument words, 0 reply bytes */

void Fn_mul_matrix_rev(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = puRam0028a47c;
  puVar1 = puRam0028a454;
  *puRam0028a454 = *puRam0028a47c;
  puVar1[1] = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[5] = puVar2[4];
  puVar1[6] = puVar2[5];
  puVar1[8] = puVar2[6];
  puVar1[9] = puVar2[7];
  puVar1[10] = puVar2[8];
  puVar1[0xc] = puVar2[9];
  puVar1[0xd] = puVar2[10];
  puVar1[0xe] = puVar2[0xb];
  cprSubMultiCurMatrix44Rev();
  uRam0028a46c = 0;
  return;
}

