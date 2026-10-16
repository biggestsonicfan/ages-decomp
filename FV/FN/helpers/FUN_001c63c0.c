/* helper FUN_001c63c0 @ 001c63c0, called (depth 1) from set_obj_tpd */

void FUN_001c63c0(short param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    param_3[3] = 0;
  }
  else {
    iVar2 = 0;
    if (0 < iRam01f824e4) {
      iVar1 = 0x1f82210;
      do {
        if (param_1 == *(short *)(iVar1 + 0x468)) {
          iVar2 = iVar2 * 0xc;
          *param_3 = *(undefined4 *)(iVar2 + 0x1f824f4);
          param_3[1] = *(undefined4 *)(iVar2 + 0x1f824f0);
          param_3[2] = *(undefined4 *)(iVar2 + 0x1f824ec);
          param_3[3] = uRam0028a5d8 | 10;
          goto LAB_001c645c;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 2;
      } while (iVar2 < iRam01f824e4);
    }
    param_3[3] = 0;
LAB_001c645c:
    if (param_3[3] == 0) {
      iVar2 = 0;
      if (0 < iRam01f82954) {
        iVar1 = 0x1f82210;
        do {
          if (param_1 == *(short *)(iVar1 + 0x8d8)) {
            iVar2 = iVar2 * 0xc;
            *param_3 = *(undefined4 *)(iVar2 + 0x1f82964);
            param_3[1] = *(undefined4 *)(iVar2 + 0x1f82960);
            param_3[2] = *(undefined4 *)(iVar2 + 0x1f8295c);
            param_3[3] = uRam0028a5d8 | 10;
            goto LAB_001c64fc;
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 2;
        } while (iVar2 < iRam01f82954);
      }
      param_3[3] = 0;
    }
LAB_001c64fc:
    if (param_3[3] == 0) {
      iVar2 = 0;
      if (0 < iRam01f82dc4) {
        iVar1 = 0x1f82210;
        do {
          if (param_1 == *(short *)(iVar1 + 0xd48)) {
            iVar2 = iVar2 * 0xc;
            *param_3 = *(undefined4 *)(iVar2 + 0x1f82dd4);
            param_3[1] = *(undefined4 *)(iVar2 + 0x1f82dd0);
            param_3[2] = *(undefined4 *)(iVar2 + 0x1f82dcc);
            param_3[3] = uRam0028a5d8 | 10;
            return;
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 2;
        } while (iVar2 < iRam01f82dc4);
      }
      param_3[3] = 0;
    }
  }
  return;
}

