/* COP 32 Fn_fcurve_spl: Fn_fcurve_spl @ 00190e00, 6 argument words, 4 reply bytes */

void Fn_fcurve_spl(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = pfGpffff830c[4];
  fVar4 = 1.0 / (*pfGpffff830c * 0.0333333);
  fVar3 = fVar4 * 0.0333333 * pfGpffff830c[1];
  fVar2 = (pfGpffff830c[2] * fVar4 + 0.0) - pfGpffff830c[3] * fVar4;
  *pfGpffff8300 =
       (fVar3 * (fVar3 * (((((fVar1 + pfGpffff830c[5] + fVar2 + fVar2) * fVar3 - (fVar2 + fVar2)) -
                           fVar2) - (fVar1 + pfGpffff830c[5])) - fVar1) + fVar1 + 0.0) +
       pfGpffff830c[2] * fVar4 + 0.0) * *pfGpffff830c * 0.0333333;
  uGpffff82fc = 4;
  return;
}

