/* COP 68 Fn_ld_glb_mat: Fn_ld_glb_mat @ 0018e300, 1 argument words, 0 reply bytes */

void Fn_ld_glb_mat(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 in_a3_udw;
  
  puVar3 = (uint *)(iGpffff8314 + *piGpffff830c * 4);
  auVar4 = _pextlw((ulong)puVar3[1],(ulong)*puVar3);
  auVar5._4_4_ = 0;
  auVar5._0_4_ = puVar3[2];
  auVar5._8_8_ = in_a3_udw;
  auVar5 = _pcpyld(auVar5,auVar4);
  _qmtc2(auVar5._0_4_);
  auVar5 = _pextlw((ulong)puVar3[4],(ulong)puVar3[3]);
  auVar4._4_4_ = 0;
  auVar4._0_4_ = puVar3[5];
  auVar4._8_8_ = in_a3_udw;
  auVar5 = _pcpyld(auVar4,auVar5);
  _qmtc2(auVar5._0_4_);
  auVar5 = _pextlw((ulong)puVar3[7],(ulong)puVar3[6]);
  auVar1._4_4_ = 0;
  auVar1._0_4_ = puVar3[8];
  auVar1._8_8_ = in_a3_udw;
  auVar5 = _pcpyld(auVar1,auVar5);
  _qmtc2(auVar5._0_4_);
  auVar5 = _pextlw((ulong)puVar3[10],(ulong)puVar3[9]);
  auVar2._4_4_ = 0;
  auVar2._0_4_ = puVar3[0xb];
  auVar2._8_8_ = in_a3_udw;
  auVar5 = _pcpyld(auVar2,auVar5);
  _qmtc2(auVar5._0_4_);
  uGpffff82fc = 0;
  return;
}

