/* helper cprSubAtan @ 0019d700, called (depth 1) from cprTriAtan */

uint cprSubAtan(float param_1,float param_2)

{
  uint uVar1;
  undefined *puVar2;
  float fVar3;
  
  if (param_2 <= param_1) {
    if (-param_2 <= param_1) {
      puVar2 = (undefined *)0x0;
      if (param_1 != 0.0) {
        param_2 = param_2 / param_1;
        fVar3 = param_2 * param_2;
        puVar2 = (undefined *)
                 ((param_2 *
                  (fVar3 * (fVar3 * (fVar3 * 0.17441538 + 5.731022) + 22.939714) + 20.51093)) /
                 (fVar3 * (fVar3 * (fVar3 + 11.554501) + 29.776684) + 20.51093));
      }
    }
    else if (param_2 == 0.0) {
      puVar2 = &UNK_bfc90fdb;
    }
    else {
      param_1 = param_1 / param_2;
      fVar3 = param_1 * param_1;
      puVar2 = (undefined *)
               (-1.5707964 -
               (param_1 * (fVar3 * (fVar3 * (fVar3 * 0.17441538 + 5.731022) + 22.939714) + 20.51093)
               ) / (fVar3 * (fVar3 * (fVar3 + 11.554501) + 29.776684) + 20.51093));
    }
  }
  else if (-param_2 <= param_1) {
    if (param_2 == 0.0) {
      puVar2 = (undefined *)0x3fc90fdb;
    }
    else {
      param_1 = param_1 / param_2;
      fVar3 = param_1 * param_1;
      puVar2 = (undefined *)
               (1.5707964 -
               (param_1 * (fVar3 * (fVar3 * (fVar3 * 0.17441538 + 5.731022) + 22.939714) + 20.51093)
               ) / (fVar3 * (fVar3 * (fVar3 + 11.554501) + 29.776684) + 20.51093));
    }
  }
  else if (param_1 == 0.0) {
    puVar2 = (undefined *)0x40490fdb;
  }
  else if (0.0 < param_2) {
    param_2 = param_2 / param_1;
    fVar3 = param_2 * param_2;
    puVar2 = (undefined *)
             ((param_2 * (fVar3 * (fVar3 * (fVar3 * 0.17441538 + 5.731022) + 22.939714) + 20.51093))
              / (fVar3 * (fVar3 * (fVar3 + 11.554501) + 29.776684) + 20.51093) + 3.1415927);
  }
  else {
    param_2 = param_2 / param_1;
    fVar3 = param_2 * param_2;
    puVar2 = (undefined *)
             ((param_2 * (fVar3 * (fVar3 * (fVar3 * 0.17441538 + 5.731022) + 22.939714) + 20.51093))
              / (fVar3 * (fVar3 * (fVar3 + 11.554501) + 29.776684) + 20.51093) + -3.1415927);
  }
  for (; (float)puVar2 < 0.0; puVar2 = (undefined *)((float)puVar2 + 6.2831855)) {
  }
  for (; 6.2831855 <= (float)puVar2; puVar2 = (undefined *)((float)puVar2 - 6.2831855)) {
  }
  fVar3 = (float)puVar2 * 10430.378;
  if (fVar3 < 2.1474836e+09) {
    uVar1 = (uint)fVar3;
  }
  else {
    uVar1 = (int)(fVar3 - 2.1474836e+09) | 0x80000000;
  }
  return uVar1;
}

