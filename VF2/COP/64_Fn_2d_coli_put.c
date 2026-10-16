/* COP 64 Fn_2d_coli_put: cprOsg2dColiPut @ 0019c6c0, 2 argument words, 0 reply bytes */

void cprOsg2dColiPut(void)

{
  undefined4 *puVar1;
  
  puVar1 = CprMain_RfiPtr;
  *(undefined4 *)(CprMain_IRam + 0x30) = *CprMain_RfiPtr;
  *(undefined4 *)(CprMain_IRam + 0x34) = puVar1[1];
  return;
}

