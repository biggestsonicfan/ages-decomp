/* COP 34 Fn_mov_matrix: Fn_mov_matrix @ 0018eb40, 1 argument words, 4 reply bytes */

void Fn_mov_matrix(void)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 in_vf24w;
  undefined4 in_vf25w;
  undefined4 in_vf26w;
  undefined4 in_vf27w;
  
  uVar3 = iGpffff8314 + (*puGpffff830c >> 2 & 0xffff) * 4;
  auVar4 = _qmfc2(in_vf24w);
  auVar5 = _qmfc2(in_vf25w);
  auVar6 = _qmfc2(in_vf26w);
  auVar7 = _qmfc2(in_vf27w);
  uVar1 = uVar3 + 7 & 7;
  puVar2 = (ulong *)((uVar3 + 7) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | auVar4._0_8_ >> (7 - uVar1) * 8;
  uVar1 = uVar3 & 7;
  *(ulong *)(uVar3 - uVar1) =
       auVar4._0_8_ << uVar1 * 8 |
       *(ulong *)(uVar3 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
  auVar4 = _pcpyud(auVar4,auVar4);
  *(int *)(uVar3 + 8) = auVar4._0_4_;
  uVar1 = uVar3 + 0x13 & 7;
  puVar2 = (ulong *)((uVar3 + 0x13) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | auVar5._0_8_ >> (7 - uVar1) * 8;
  uVar1 = uVar3 + 0xc & 7;
  puVar2 = (ulong *)((uVar3 + 0xc) - uVar1);
  *puVar2 = auVar5._0_8_ << uVar1 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
  auVar4 = _pcpyud(auVar5,auVar5);
  *(int *)(uVar3 + 0x14) = auVar4._0_4_;
  uVar1 = uVar3 + 0x1f & 7;
  puVar2 = (ulong *)((uVar3 + 0x1f) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | auVar6._0_8_ >> (7 - uVar1) * 8;
  uVar1 = uVar3 + 0x18 & 7;
  puVar2 = (ulong *)((uVar3 + 0x18) - uVar1);
  *puVar2 = auVar6._0_8_ << uVar1 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
  auVar4 = _pcpyud(auVar6,auVar6);
  *(int *)(uVar3 + 0x20) = auVar4._0_4_;
  uVar1 = uVar3 + 0x2b & 7;
  puVar2 = (ulong *)((uVar3 + 0x2b) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | auVar7._0_8_ >> (7 - uVar1) * 8;
  uVar1 = uVar3 + 0x24 & 7;
  puVar2 = (ulong *)((uVar3 + 0x24) - uVar1);
  *puVar2 = auVar7._0_8_ << uVar1 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
  auVar4 = _pcpyud(auVar7,auVar7);
  *(int *)(uVar3 + 0x2c) = auVar4._0_4_;
  *puGpffff8300 = 0;
  uGpffff82fc = 4;
  return;
}

