/* COP 51 Fn_get_glo_ang: Fn_get_glo_ang @ 00190a00, 0 argument words, 12 reply bytes */

void Fn_get_glo_ang(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  auVar1 = _sqc2(in_vf24);
  auVar2 = _sqc2(in_vf25);
  auVar3 = _sqc2(in_vf26);
  uStack_20 = auVar3._0_4_;
  uStack_18 = auVar3._8_4_;
  uVar4 = FUN_00195c40(uStack_18,uStack_20);
  uStack_1c = auVar3._4_4_;
  *puGpffff8300 = uVar4 & 0xffff;
  uVar4 = FUN_001956c0(uStack_1c);
  uStack_2c = auVar2._4_4_;
  uStack_3c = auVar1._4_4_;
  puGpffff8300[1] = uVar4 & 0xffff;
  uVar4 = FUN_00195c40(uStack_2c,uStack_3c);
  puGpffff8300[2] = uVar4 & 0xffff;
  uGpffff82fc = 0xc;
  return;
}

