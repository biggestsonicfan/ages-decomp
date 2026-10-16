/* COP 55 Fn_get_sm_ang_r: cprMotGetSmAngR @ 0019b080, 9 argument words, 12 reply bytes */

void cprMotGetSmAngR(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined2 *puVar4;
  uint uVar5;
  undefined1 extraout_vf24 [16];
  undefined1 extraout_vf25 [16];
  undefined1 extraout_vf26 [16];
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puVar4 = CprMain_RfiPtr;
  cprSubBaseCurMatrix();
  cprSubRotateCurZ(*puVar4);
  cprSubRotateCurX(puVar4[2]);
  cprSubRotateCurY(puVar4[4]);
  cprSubRotateCurX(puVar4[6]);
  cprSubRotateCurY(puVar4[8]);
  cprSubRotateCurZ(puVar4[10]);
  cprSubRotateCurZ(puVar4[0xc]);
  cprSubRotateCurY(puVar4[0xe]);
  cprSubRotateCurX(puVar4[0x10]);
  auVar1 = _sqc2(extraout_vf24);
  auVar2 = _sqc2(extraout_vf25);
  auVar3 = _sqc2(extraout_vf26);
  uStack_20 = auVar3._0_4_;
  uStack_18 = auVar3._8_4_;
  uVar5 = cprSubAtan(uStack_18,uStack_20);
  *CprMain_RfoTop = uVar5 & 0xffff;
  uStack_1c = auVar3._4_4_;
  uVar5 = cprSubAsin(uStack_1c);
  CprMain_RfoTop[1] = uVar5 & 0xffff;
  uStack_3c = auVar1._4_4_;
  uStack_2c = auVar2._4_4_;
  uVar5 = cprSubAtan(uStack_2c,uStack_3c);
  CprMain_RfoTop[2] = uVar5 & 0xffff;
  return;
}

