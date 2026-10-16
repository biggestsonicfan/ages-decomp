/* helper sysVf2GetObjAddr @ 001c8300, called (depth 2) from sysCopPatchSetOsageAfter */

undefined4 sysVf2GetObjAddr(ulong param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  sysVf2GetWork();
  uVar4 = 0;
  if (param_1 < 0x1405) {
    iVar3 = sysVf2GetWork();
    cVar1 = *(char *)(iVar3 + 0x2b);
    if (cVar1 == '\x06') {
      bVar2 = true;
    }
    else if (cVar1 == '\a') {
      bVar2 = false;
    }
    else if ((cVar1 == '\x03') && (*(char *)(iVar3 + 0x31) == '\x05')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (((&DAT_01fc7ed4)[(int)param_2 * 0x10f] != 0) &&
         ((param_2 != 0 || (bVar2 = true, DAT_01fc874c != 0)))) {
        bVar2 = false;
      }
    }
    if (bVar2) {
      uVar4 = 0;
    }
    else {
      uVar4 = (&g_objTbl)[(int)param_2 * 0x1405 + (int)param_1];
    }
  }
  return uVar4;
}

