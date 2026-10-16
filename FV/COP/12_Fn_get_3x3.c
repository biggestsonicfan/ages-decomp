/* COP 12 Fn_get_3x3: Fn_get_3x3 @ 0018ebc0, 0 argument words, 36 reply bytes */

void Fn_get_3x3(void)

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
  uStack_3c = auVar1._4_4_;
  uStack_38 = auVar1._8_4_;
  uStack_30 = auVar2._0_4_;
  uStack_2c = auVar2._4_4_;
  uStack_28 = auVar2._8_4_;
  *puGpffff8300 = uStack_40;
  uStack_20 = auVar3._0_4_;
  uStack_1c = auVar3._4_4_;
  uStack_18 = auVar3._8_4_;
  puGpffff8300[1] = uStack_3c;
  puGpffff8300[2] = uStack_38;
  puGpffff8300[3] = uStack_30;
  puGpffff8300[4] = uStack_2c;
  puGpffff8300[5] = uStack_28;
  puGpffff8300[6] = uStack_20;
  puGpffff8300[7] = uStack_1c;
  puGpffff8300[8] = uStack_18;
  uGpffff82fc = 0x24;
  return;
}

