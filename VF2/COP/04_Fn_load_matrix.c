/* COP 04 Fn_load_matrix: cprMtxLoadMatrix @ 00199f40, 12 argument words, 0 reply bytes */

void cprMtxLoadMatrix(void)

{
  undefined1 (*pauVar1) [16];
  undefined4 *puVar2;
  
  puVar2 = CprMain_RfiPtr;
  pauVar1 = CprMain_MtxA0;
  *(undefined4 *)*CprMain_MtxA0 = *CprMain_RfiPtr;
  *(undefined4 *)(*pauVar1 + 4) = puVar2[1];
  *(undefined4 *)(*pauVar1 + 8) = puVar2[2];
  *(undefined4 *)pauVar1[1] = puVar2[3];
  *(undefined4 *)(pauVar1[1] + 4) = puVar2[4];
  *(undefined4 *)(pauVar1[1] + 8) = puVar2[5];
  *(undefined4 *)pauVar1[2] = puVar2[6];
  *(undefined4 *)(pauVar1[2] + 4) = puVar2[7];
  *(undefined4 *)(pauVar1[2] + 8) = puVar2[8];
  *(undefined4 *)pauVar1[3] = puVar2[9];
  *(undefined4 *)(pauVar1[3] + 4) = puVar2[10];
  *(undefined4 *)(pauVar1[3] + 8) = puVar2[0xb];
  _lqc2(*pauVar1);
  _lqc2(pauVar1[1]);
  _lqc2(pauVar1[2]);
  _lqc2(pauVar1[3]);
  return;
}

