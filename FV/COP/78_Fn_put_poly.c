/* COP 78 Fn_put_poly: Fn_put_poly @ 00193700, 8 argument words, 8 reply bytes */

void Fn_put_poly(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 in_vf24w;
  undefined4 in_vf25w;
  undefined4 in_vf26w;
  undefined4 in_vf27w;
  
  uVar1 = puGpffff830c[2];
  uVar2 = puGpffff830c[3];
  uVar3 = puGpffff830c[4];
  uVar4 = puGpffff830c[5];
  uVar9 = *puGpffff830c >> 2;
  *(undefined4 *)(iGpffff8314 + uVar9 * 4) = 0x5800b0b;
  uVar7 = iGpffff8314 + (uVar9 + 1) * 4;
  auVar8 = _qmfc2(in_vf24w);
  auVar10 = _qmfc2(in_vf25w);
  auVar11 = _qmfc2(in_vf26w);
  auVar12 = _qmfc2(in_vf27w);
  uVar5 = uVar7 + 7 & 7;
  puVar6 = (ulong *)((uVar7 + 7) - uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | auVar8._0_8_ >> (7 - uVar5) * 8;
  uVar5 = uVar7 & 7;
  *(ulong *)(uVar7 - uVar5) =
       auVar8._0_8_ << uVar5 * 8 |
       *(ulong *)(uVar7 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  auVar8 = _pcpyud(auVar8,auVar8);
  *(int *)(uVar7 + 8) = auVar8._0_4_;
  uVar5 = uVar7 + 0x13 & 7;
  puVar6 = (ulong *)((uVar7 + 0x13) - uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | auVar10._0_8_ >> (7 - uVar5) * 8;
  uVar5 = uVar7 + 0xc & 7;
  puVar6 = (ulong *)((uVar7 + 0xc) - uVar5);
  *puVar6 = auVar10._0_8_ << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  auVar8 = _pcpyud(auVar10,auVar10);
  *(int *)(uVar7 + 0x14) = auVar8._0_4_;
  uVar5 = uVar7 + 0x1f & 7;
  puVar6 = (ulong *)((uVar7 + 0x1f) - uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | auVar11._0_8_ >> (7 - uVar5) * 8;
  uVar5 = uVar7 + 0x18 & 7;
  puVar6 = (ulong *)((uVar7 + 0x18) - uVar5);
  *puVar6 = auVar11._0_8_ << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  auVar8 = _pcpyud(auVar11,auVar11);
  *(int *)(uVar7 + 0x20) = auVar8._0_4_;
  uVar5 = uVar7 + 0x2b & 7;
  puVar6 = (ulong *)((uVar7 + 0x2b) - uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | auVar12._0_8_ >> (7 - uVar5) * 8;
  uVar5 = uVar7 + 0x24 & 7;
  puVar6 = (ulong *)((uVar7 + 0x24) - uVar5);
  *puVar6 = auVar12._0_8_ << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  auVar8 = _pcpyud(auVar12,auVar12);
  *(int *)(uVar7 + 0x2c) = auVar8._0_4_;
  uVar5 = puGpffff830c[6];
  uVar7 = puGpffff830c[7];
  *(undefined4 *)(iGpffff8314 + (uVar9 + 0xd) * 4) = 0x800101;
  *(uint *)(iGpffff8314 + (uVar9 + 0xe) * 4) = uVar1;
  *(uint *)(iGpffff8314 + (uVar9 + 0xf) * 4) = uVar2;
  *puGpffff8300 = uVar5;
  puGpffff8300[1] = uVar7;
  *(uint *)(iGpffff8314 + (uVar9 + 0x10) * 4) = uVar3;
  *(uint *)(iGpffff8314 + (uVar9 + 0x11) * 4) = uVar4;
  uGpffff82fc = 8;
  return;
}

