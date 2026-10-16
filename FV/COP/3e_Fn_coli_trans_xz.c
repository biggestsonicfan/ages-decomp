/* COP 3e Fn_coli_trans_xz: Fn_coli_trans_xz @ 00191100, 5 argument words, 0 reply bytes */

void Fn_coli_trans_xz(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  fVar3 = pfRam0028a47c[1];
  fVar2 = *pfRam0028a47c;
  fStack_10 = pfRam0028a47c[2];
  fStack_c = pfRam0028a47c[3];
  fStack_8 = pfRam0028a47c[4];
  fVar1 = (float)FUN_00195dc0(fVar2 * fVar2 + fVar3 * fVar3);
  FUN_00191040(fVar2 / fVar1,fVar3 / fVar1,&fStack_10,16000);
  FUN_00191040();
  FUN_00191040();
  FUN_00191040();
  uRam0028a46c = 0;
  return;
}

