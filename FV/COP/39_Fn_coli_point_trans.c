/* COP 39 Fn_coli_point_trans: Fn_coli_point_trans @ 00192500, 4 argument words, 0 reply bytes */

void Fn_coli_point_trans(void)

{
  uint uVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined1 in_vf24 [16];
  undefined1 in_vf25 [16];
  undefined1 in_vf26 [16];
  undefined1 in_vf27 [16];
  
  puVar3 = (undefined4 *)
           (iGpffff8314 + (*(int *)(iGpffff832c + 0xcf8) + *(int *)(*pauGpffff830c + 0xc)) * 4);
  puVar3[0x60] = *puVar3;
  puVar3[0x61] = puVar3[1];
  puVar3[0x62] = puVar3[2];
  auVar4 = _lqc2(*pauGpffff830c);
  _vmulabc(in_vf24,auVar4);
  _vmaddabc(in_vf25,auVar4);
  auVar4 = _vmaddbc(in_vf26,auVar4);
  auVar4 = _vadd(auVar4,in_vf27);
  auVar4 = _qmfc2(auVar4._0_4_);
  uVar1 = (int)puVar3 + 7U & 7;
  puVar2 = (ulong *)(((int)puVar3 + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | auVar4._0_8_ >> (7 - uVar1) * 8;
  uVar1 = (uint)puVar3 & 7;
  *(ulong *)((int)puVar3 - uVar1) =
       auVar4._0_8_ << uVar1 * 8 |
       *(ulong *)((int)puVar3 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
  auVar4 = _pcpyud(auVar4,auVar4);
  puVar3[2] = auVar4._0_4_;
  uGpffff82fc = 0;
  return;
}

