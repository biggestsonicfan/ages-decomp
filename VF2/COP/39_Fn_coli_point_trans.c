/* COP 39 Fn_coli_point_trans: cprCliColiPointTrans @ 0019c200, 3 argument words, 0 reply bytes */

void cprCliColiPointTrans(void)

{
  ushort uVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  
  pauVar2 = CprMain_RfiPtr;
  uVar1 = *(ushort *)(CprMain_IRam + 0xf8);
  puVar3 = (undefined8 *)(CprMain_BufRam + (uint)uVar1 * 4);
  *(undefined4 *)(puVar3 + 0x30) = *(undefined4 *)puVar3;
  *(undefined4 *)((int)puVar3 + 0x184) = *(undefined4 *)((int)puVar3 + 4);
  *(undefined4 *)(puVar3 + 0x31) = *(undefined4 *)(puVar3 + 1);
  auVar4 = _lqc2(*pauVar2);
  _vmulabc(in_vf24,auVar4);
  _vmaddabc(in_vf25,auVar4);
  auVar4 = _vmaddbc(in_vf26,auVar4);
  auVar4 = _vadd(auVar4,in_vf27);
  auVar4 = _qmfc2(auVar4._0_4_);
  *puVar3 = auVar4._0_8_;
  auVar4 = _pcpyud(auVar4,auVar4);
  *(int *)(puVar3 + 1) = auVar4._0_4_;
  *(uint *)(CprMain_IRam + 0xf8) = uVar1 + 3;
  return;
}

