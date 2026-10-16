/* COP 12 Fn_get_3x3: cprMtxGet3x3 @ 00199a80, 0 argument words, 36 reply bytes */

void cprMtxGet3x3(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  auVar1 = _sqc2(in_vf24);
  auVar2 = _sqc2(in_vf25);
  auVar3 = _sqc2(in_vf26);
  uStack_40 = auVar1._0_4_;
  *CprMain_RfoTop = uStack_40;
  uStack_3c = auVar1._4_4_;
  CprMain_RfoTop[1] = uStack_3c;
  uStack_38 = auVar1._8_4_;
  CprMain_RfoTop[2] = uStack_38;
  uStack_30 = auVar2._0_4_;
  CprMain_RfoTop[3] = uStack_30;
  uStack_2c = auVar2._4_4_;
  CprMain_RfoTop[4] = uStack_2c;
  uStack_28 = auVar2._8_4_;
  CprMain_RfoTop[5] = uStack_28;
  uStack_20 = auVar3._0_4_;
  CprMain_RfoTop[6] = uStack_20;
  uStack_1c = auVar3._4_4_;
  CprMain_RfoTop[7] = uStack_1c;
  uStack_18 = auVar3._8_4_;
  CprMain_RfoTop[8] = uStack_18;
  return;
}

