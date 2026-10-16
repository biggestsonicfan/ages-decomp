/* COP 67 Fn_st_glb_mat: cprMtxStGlbMat @ 00199380, 1 argument words, 0 reply bytes */

void cprMtxStGlbMat(void)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 in_vf24w;
  undefined4 in_vf25w;
  undefined4 in_vf26w;
  undefined4 in_vf27w;
  
  puVar1 = (undefined8 *)(CprMain_BufRam + (*CprMain_RfiPtr & 0xffff) * 4);
  auVar2 = _qmfc2(in_vf24w);
  auVar3 = _qmfc2(in_vf25w);
  auVar4 = _qmfc2(in_vf26w);
  auVar5 = _qmfc2(in_vf27w);
  *puVar1 = auVar2._0_8_;
  auVar2 = _pcpyud(auVar2,auVar2);
  *(int *)(puVar1 + 1) = auVar2._0_4_;
  *(long *)((int)puVar1 + 0xc) = auVar3._0_8_;
  auVar2 = _pcpyud(auVar3,auVar3);
  *(int *)((int)puVar1 + 0x14) = auVar2._0_4_;
  puVar1[3] = auVar4._0_8_;
  auVar2 = _pcpyud(auVar4,auVar4);
  *(int *)(puVar1 + 4) = auVar2._0_4_;
  *(long *)((int)puVar1 + 0x24) = auVar5._0_8_;
  auVar2 = _pcpyud(auVar5,auVar5);
  *(int *)((int)puVar1 + 0x2c) = auVar2._0_4_;
  return;
}

