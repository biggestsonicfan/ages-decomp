/* COP 4a Fn_osage: cprOsgOsage @ 0019cf40, 1 argument words, 0 reply bytes */

void cprOsgOsage(void)

{
  uint uVar1;
  
  *(undefined4 *)(CprMain_IRam + 0x100) = *CprMain_RfiPtr;
  g_OsageLoopFlag = 1;
  CprMain_OutBytes = 0;
  do {
    CprMain_x1 = (short)*(uint *)(CprMain_IRam + 0x100) + 1;
    uVar1 = *(uint *)(CprMain_ERam + (*(uint *)(CprMain_IRam + 0x100) & 0xffff) * 4);
    CprMain_x0 = (undefined2)uVar1;
    (**(code **)(g_OsageJumpTbl + (uVar1 & 0xffff) * 4))();
  } while (g_OsageLoopFlag != 0);
  CprMain_OutBytes = CprMain_OutBytes << 2;
  return;
}

