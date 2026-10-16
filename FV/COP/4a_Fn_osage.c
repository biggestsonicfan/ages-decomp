/* COP 4a Fn_osage: Fn_osage @ 00194fc0, 1 argument words, 0 reply bytes */

void Fn_osage(void)

{
  uint uVar1;
  
  *(undefined4 *)(iGpffff832c + 0xd00) = *puGpffff830c;
  iGpffff8334 = 1;
  iGpffff82fc = 0;
  do {
    uVar1 = *(uint *)(iGpffff8314 + *(int *)(iGpffff832c + 0xd00) * 4);
    iGpffff8338 = *(int *)(iGpffff832c + 0xd00) + 1;
    uGpffff8324 = (undefined2)uVar1;
    uVar1 = uVar1 & 0xffff;
    *(uint *)(iGpffff8300 + iGpffff82fc * 4) = uVar1;
    iGpffff82fc = iGpffff82fc + 1;
    (*(code *)(&PTR_LAB_00227f10)[uVar1])();
  } while (iGpffff8334 != 0);
  iGpffff82fc = iGpffff82fc << 2;
  return;
}

