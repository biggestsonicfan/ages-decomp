/* COP 25 Fn_cosx: Fn_cosx @ 00196100, 2 argument words, 4 reply bytes */

void Fn_cosx(void)

{
  undefined2 *puVar1;
  float fVar2;
  
  puVar1 = puRam0028a47c;
  fVar2 = (float)cprCosf(*puRam0028a47c);
  *pfRam0028a470 = *(float *)(puVar1 + 2) * fVar2;
  uRam0028a46c = 4;
  return;
}

