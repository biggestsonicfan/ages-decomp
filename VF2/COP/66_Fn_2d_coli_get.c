/* COP 66 Fn_2d_coli_get: cprOsg2dColiGet @ 0019c5c0, 0 argument words, 8 reply bytes */

void cprOsg2dColiGet(void)

{
  *CprMain_RfoTop = *(undefined4 *)(CprMain_IRam + 0x30);
  CprMain_RfoTop[1] = *(undefined4 *)(CprMain_IRam + 0x34);
  return;
}

