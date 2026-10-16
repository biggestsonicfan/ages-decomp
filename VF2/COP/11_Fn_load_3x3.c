/* COP 11 Fn_load_3x3: cprMtxLoad3x3 @ 00199b40, 9 argument words, 0 reply bytes */

void cprMtxLoad3x3(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  auVar1._12_4_ = uStack_34;
  auVar1._0_12_ = *CprMain_RfiPtr;
  _lqc2(auVar1);
  auVar2._12_4_ = uStack_24;
  auVar2._0_12_ = CprMain_RfiPtr[1];
  _lqc2(auVar2);
  auVar3._12_4_ = uStack_14;
  auVar3._0_12_ = CprMain_RfiPtr[2];
  _lqc2(auVar3);
  return;
}

