/* COP 32 Fn_fcurve_spl: cprMotFcurveSpl @ 0019b640, 6 argument words, 4 reply bytes */

void cprMotFcurveSpl(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = CprMain_RfiPtr[4];
  fVar4 = 1.0 / (*CprMain_RfiPtr * 0.0333333);
  fVar3 = fVar4 * 0.0333333 * CprMain_RfiPtr[1];
  fVar1 = CprMain_RfiPtr[2] * fVar4 - CprMain_RfiPtr[3] * fVar4;
  *CprMain_RfoTop =
       (CprMain_RfiPtr[2] * fVar4 +
       fVar3 * (fVar2 + fVar3 * (((((fVar2 + CprMain_RfiPtr[5] + fVar1 + fVar1) * fVar3 -
                                   (fVar1 + fVar1)) - fVar1) - (fVar2 + CprMain_RfiPtr[5])) - fVar2)
               )) * *CprMain_RfiPtr * 0.0333333;
  return;
}

