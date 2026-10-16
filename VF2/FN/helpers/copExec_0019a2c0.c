/* helper copExec @ 0019a2c0, called (depth 1) from sysCopPatchSetObj */

undefined4 copExec(uint param_1)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined4 in_zero_lo;
  undefined4 in_zero_hi;
  undefined4 in_zero_udw;
  undefined4 in_register_0000000c;
  ulong *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  plVar5 = g_ExecParamAdr;
  pcVar7 = *(code **)g_ExecParamAdr;
  lVar4 = *g_ExecParamAdr;
  if (*g_ExecParamAdr == 0) {
    puVar6 = (ulong *)(*(int *)((int)g_ExecParamAdr + 0x14) + (param_1 & 0xff) * 0x10);
    pcVar7 = *(code **)puVar6;
    uVar8 = *(undefined4 *)((int)puVar6 + 4);
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    uVar9 = *(undefined4 *)((int)puVar6 + 0xc);
    *(code **)g_ExecParamAdr = pcVar7;
    *(undefined4 *)((int)plVar5 + 4) = uVar8;
    *(int *)(plVar5 + 1) = (int)uVar3;
    *(undefined4 *)((int)plVar5 + 0xc) = uVar9;
    if (uVar2 >> 0x20 != 0) {
      *(int *)(plVar5 + 2) = (int)plVar5[3];
      return 0xffffffff;
    }
  }
  else {
    puVar1 = *(uint **)(g_ExecParamAdr + 2);
    *puVar1 = param_1;
    *(uint **)(plVar5 + 2) = puVar1 + 1;
    iVar10 = (int)((ulong)lVar4 >> 0x20) + -1;
    *(int *)((int)plVar5 + 4) = iVar10;
    if (iVar10 != 0) {
      return 0xffffffff;
    }
  }
  (*pcVar7)();
  lVar4 = plVar5[1];
  *(undefined4 *)plVar5 = in_zero_lo;
  *(undefined4 *)((int)plVar5 + 4) = in_zero_hi;
  *(undefined4 *)(plVar5 + 1) = in_zero_udw;
  *(undefined4 *)((int)plVar5 + 0xc) = in_register_0000000c;
  return (int)lVar4;
}

