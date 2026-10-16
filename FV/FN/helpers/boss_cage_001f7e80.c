/* helper boss_cage @ 001f7e80, called (depth 1) from cage_clip_m */

/* WARNING: Removing unreachable block (ram,0x001f7ed4) */

undefined8 boss_cage(long param_1)

{
  i960_regs *piVar1;
  byte bStack_2;
  char cStack_1;
  
  piVar1 = i960GetRegs();
  sysMemReadB(&cStack_1,piVar1->g[0xd] + 0x313);
  if (cStack_1 == '\0') {
    sysMemReadB(&bStack_2,piVar1->g[0xd] + 0x310);
    piVar1->g[2] = (uint)bStack_2 * 0x10 + 0x22908 + piVar1->g[1] * 4;
  }
  else {
    piVar1->g[2] = 0x22948;
  }
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

