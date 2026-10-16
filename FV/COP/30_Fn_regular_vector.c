/* COP 30 Fn_regular_vector: Fn_regular_vector @ 001966c0, 3 argument words, 12 reply bytes */

void Fn_regular_vector(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *pfGpffff830c;
  fVar2 = pfGpffff830c[1];
  fVar3 = pfGpffff830c[2];
  fVar1 = (float)FUN_00195580(fVar4,fVar2,fVar3);
  *pfGpffff8300 = fVar1 * fVar4;
  pfGpffff8300[1] = fVar1 * fVar2;
  pfGpffff8300[2] = fVar1 * fVar3;
  uGpffff82fc = 0xc;
  return;
}

