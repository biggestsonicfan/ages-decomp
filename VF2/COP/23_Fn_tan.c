/* COP 23 Fn_tan: cprTriTan @ 0019df00, 1 argument words, 4 reply bytes */

/* WARNING: Removing unreachable block (ram,0x0019df58) */

void cprTriTan(void)

{
  ushort uVar1;
  float fVar2;
  
  uVar1 = *CprMain_RfiPtr;
  if ((uVar1 == 0x4000) || (uVar1 == 0xc000)) {
    *CprMain_RfoTop = 0.0;
  }
  else {
    fVar2 = tanf(((float)uVar1 * 6.2831855) / 65536.0);
    *CprMain_RfoTop = fVar2;
  }
  return;
}

