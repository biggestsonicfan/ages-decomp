/* COP 31 Fn_fcurve_lin: cprMotFcurveLin @ 0019b700, 4 argument words, 4 reply bytes */

void cprMotFcurveLin(void)

{
  *CprMain_RfoTop =
       *CprMain_RfiPtr +
       (CprMain_RfiPtr[2] * (CprMain_RfiPtr[1] - *CprMain_RfiPtr)) / CprMain_RfiPtr[3];
  return;
}

