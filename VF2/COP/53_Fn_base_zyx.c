/* COP 53 Fn_base_zyx: cprMotBaseZYX @ 0019b200, 3 argument words, 0 reply bytes */

void cprMotBaseZYX(void)

{
  int iVar1;
  
  iVar1 = RotBaseZYX(0,0,0);
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  return;
}

