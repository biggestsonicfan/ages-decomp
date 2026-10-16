/* helper FUN_00195800 @ 00195800, called (depth 2) from Fn_atan */

undefined * FUN_00195800(float param_1,float param_2)

{
  undefined *puVar1;
  float fVar2;
  
  if (param_2 <= param_1) {
    if (-param_2 <= param_1) {
      puVar1 = (undefined *)0x0;
      if (param_1 != 0.0) {
        param_2 = param_2 / param_1;
        fVar2 = param_2 * param_2;
        puVar1 = (undefined *)
                 ((param_2 *
                  (fVar2 * (fVar2 * (fVar2 * 0.17441538 + 5.731022) + 22.939714) + 20.51093)) /
                 (fVar2 * (fVar2 * (fVar2 + 11.554501) + 29.776684) + 20.51093));
      }
    }
    else if (param_2 == 0.0) {
      puVar1 = &UNK_bfc90fdb;
    }
    else {
      param_1 = param_1 / param_2;
      fVar2 = param_1 * param_1;
      puVar1 = (undefined *)
               (-1.5707964 -
               (param_1 * (fVar2 * (fVar2 * (fVar2 * 0.17441538 + 5.731022) + 22.939714) + 20.51093)
               ) / (fVar2 * (fVar2 * (fVar2 + 11.554501) + 29.776684) + 20.51093));
    }
  }
  else if (-param_2 <= param_1) {
    if (param_2 == 0.0) {
      puVar1 = (undefined *)0x3fc90fdb;
    }
    else {
      param_1 = param_1 / param_2;
      fVar2 = param_1 * param_1;
      puVar1 = (undefined *)
               (1.5707964 -
               (param_1 * (fVar2 * (fVar2 * (fVar2 * 0.17441538 + 5.731022) + 22.939714) + 20.51093)
               ) / (fVar2 * (fVar2 * (fVar2 + 11.554501) + 29.776684) + 20.51093));
    }
  }
  else if (param_1 == 0.0) {
    puVar1 = (undefined *)0x40490fdb;
  }
  else if (0.0 < param_2) {
    param_2 = param_2 / param_1;
    fVar2 = param_2 * param_2;
    puVar1 = (undefined *)
             ((param_2 * (fVar2 * (fVar2 * (fVar2 * 0.17441538 + 5.731022) + 22.939714) + 20.51093))
              / (fVar2 * (fVar2 * (fVar2 + 11.554501) + 29.776684) + 20.51093) + 3.1415927);
  }
  else {
    param_2 = param_2 / param_1;
    fVar2 = param_2 * param_2;
    puVar1 = (undefined *)
             ((param_2 * (fVar2 * (fVar2 * (fVar2 * 0.17441538 + 5.731022) + 22.939714) + 20.51093))
              / (fVar2 * (fVar2 * (fVar2 + 11.554501) + 29.776684) + 20.51093) + -3.1415927);
  }
  return puVar1;
}

