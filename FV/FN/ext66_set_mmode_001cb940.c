/* EXT 66: set_mmode @ 001cb940; patched over i960 0058f0 (arcade set_mmode) */

undefined8 set_mmode(long param_1)

{
  i960_regs *piVar1;
  
  piVar1 = i960GetRegs();
  uRam016c5dcc = piVar1->g[0xe];
  piVar1->g[0xe] = 0x707;
  sysMemWriteW(piVar1->g[10] + 0x70,piVar1->g + 0xe);
  piVar1->g[0xe] = uRam016c5dcc;
  sysMemWriteW(piVar1->g[10] + piVar1->g[0xc],piVar1->g);
  if (param_1 != 0) {
    i960ReturnProc();
  }
  return 0;
}

