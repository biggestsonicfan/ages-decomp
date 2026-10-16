/* EXT 5b: efc_face_change_cont @ 001f34c0; patched over i960 02ddb0 (arcade efc_face_change_cont) */

undefined8 efc_face_change_cont(long param_1)

{
  i960_regs *piVar1;
  uint uStack_40;
  int aiStack_14 [4];
  short sStack_4;
  ushort uStack_2;
  
  piVar1 = i960GetRegs();
  sysMemReadS(&uStack_2,piVar1->g[7] + 0x1f48);
  uStack_40 = (uint)((uStack_2 & 4) != 0);
  sysMemReadS(&sStack_4,piVar1->g[0] + uStack_40 * 2);
  aiStack_14[0] = (int)sStack_4;
  sysMemWriteW(piVar1->g[7] + 0x48,aiStack_14);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

