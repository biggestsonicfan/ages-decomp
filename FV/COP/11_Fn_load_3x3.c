/* COP 11 Fn_load_3x3: Fn_load_3x3 @ 0018ecc0, 9 argument words, 0 reply bytes */

void Fn_load_3x3(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  auVar1._12_4_ = uStack_34;
  auVar1._0_12_ = *pauGpffff830c;
  auVar1 = _lqc2(auVar1);
  auVar2._12_4_ = uStack_24;
  auVar2._0_12_ = pauGpffff830c[1];
  auVar2 = _lqc2(auVar2);
  auVar3._12_4_ = uStack_14;
  auVar3._0_12_ = pauGpffff830c[2];
  auVar3 = _lqc2(auVar3);
  _vmove(auVar1);
  _vmove(auVar2);
  _vmove(auVar3);
  uGpffff82fc = 0;
  return;
}

