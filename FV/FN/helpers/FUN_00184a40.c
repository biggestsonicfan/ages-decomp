/* helper FUN_00184a40 @ 00184a40, called (depth 1) from ScrollCG_Initialize */

void FUN_00184a40(int param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = param_1 + 0xfef80000;
    uVar1 = *param_2;
    param_1 = param_1 + 2;
    param_2 = param_2 + 1;
    uVar3 = (uVar1 & 0xf0f) << 4;
    *(ushort *)
     (((uVar2 & 0x1ff) >> 2) * 0x40 +
      (uVar2 & 3) + (uVar2 >> 0xc & 0xf) * 4 + ((uVar2 >> 9 & 7) + (uVar2 >> 0x10) * 8) * 0x2000 +
     0x12059d0) = uVar1 >> 0xc | (ushort)(uVar3 >> 8) |
                  (ushort)(((uVar1 >> 4 & 0xf0f | uVar3) & 0xff) << 8);
  }
  uRam011fb194 = 1;
  return;
}

