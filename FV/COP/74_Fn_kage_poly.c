/* COP 74 Fn_kage_poly: Fn_kage_poly @ 001928c0, 7 argument words, 0 reply bytes */

void Fn_kage_poly(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = puGpffff830c;
  puVar2 = puGpffff82cc;
  FUN_0018f580();
  func_0x0018e900(*puVar3,puVar3[1]);
  uVar1 = puVar3[2];
  *puVar2 = puVar3[3];
  puVar2[1] = puVar3[4];
  puVar2[2] = puVar3[5];
  if ((uVar1 & 4) != 0) {
    func_0x00195200(puVar2);
  }
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0018e740();
    }
  }
  else {
    func_0x0018e6c0();
  }
  func_0x0018e540(puVar3[6]);
  uGpffff82fc = 0;
  return;
}

