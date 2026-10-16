/* COP 5e Fn_mul3: Fn_mul3 @ 00196440, 4 argument words, 12 reply bytes */

void Fn_mul3(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *pfGpffff830c;
  fVar1 = pfGpffff830c[2];
  fVar2 = pfGpffff830c[3];
  *pfGpffff8300 = fVar3 * pfGpffff830c[1];
  pfGpffff8300[1] = fVar3 * fVar1;
  pfGpffff8300[2] = fVar3 * fVar2;
  uGpffff82fc = 0xc;
  return;
}

