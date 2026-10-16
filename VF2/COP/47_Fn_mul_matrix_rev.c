/* COP 47 Fn_mul_matrix_rev: cprMtxMulMatrixRev @ 00199540, 12 argument words, 0 reply bytes */

void cprMtxMulMatrixRev(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = CprMain_RfiPtr;
  puVar1 = CprMain_MtxA0;
  *CprMain_MtxA0 = *CprMain_RfiPtr;
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
  return;
}

