/* COP 51 Fn_get_glo_ang: cprMotGetGloAng @ 0019b280, 0 argument words, 12 reply bytes */

void cprMotGetGloAng(void)

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
  uVar4 = cprSubAtan(uStack_18,uStack_20);
  *CprMain_RfoTop = uVar4 & 0xffff;
  uStack_1c = auVar3._4_4_;
  uVar4 = cprSubAsin(uStack_1c);
  CprMain_RfoTop[1] = uVar4 & 0xffff;
  uStack_3c = auVar1._4_4_;
  uStack_2c = auVar2._4_4_;
  uVar4 = cprSubAtan(uStack_2c,uStack_3c);
  CprMain_RfoTop[2] = uVar4 & 0xffff;
  return;
}

