/* COP 24 Fn_sinx: Fn_sinx @ 00196180, 2 argument words, 4 reply bytes */

void Fn_sinx(void)

{
  undefined2 *puVar1;
  float fVar2;
  
  puVar1 = puGpffff830c;
  fVar2 = (float)cprSinf(*puGpffff830c);
  *pfGpffff8300 = *(float *)(puVar1 + 2) * fVar2;
  uGpffff82fc = 4;
  return;
}

