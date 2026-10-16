/* COP 5c Fn_add3: Fn_add3 @ 00196540, 6 argument words, 12 reply bytes */

void Fn_add3(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = pfGpffff830c[2];
  fVar4 = pfGpffff830c[3];
  fVar1 = pfGpffff830c[4];
  fVar2 = pfGpffff830c[5];
  *pfGpffff8300 = *pfGpffff830c + pfGpffff830c[1];
  pfGpffff8300[1] = fVar3 + fVar4;
  pfGpffff8300[2] = fVar1 + fVar2;
  uGpffff82fc = 0xc;
  return;
}

