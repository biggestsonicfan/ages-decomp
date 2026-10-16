/* COP 63 Fn_get_loc_pos: Fn_get_loc_pos @ 001904c0, 7 argument words, 12 reply bytes */

void Fn_get_loc_pos(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_8;
  float fStack_4;
  
  pfVar1 = pfRam0028a47c;
  fVar6 = *pfRam0028a47c;
  fVar7 = pfRam0028a47c[2];
  fVar4 = pfRam0028a47c[4];
  fVar5 = pfRam0028a47c[6];
  FUN_00195f00(&fStack_8,&fStack_4,*(undefined2 *)(pfRam0028a47c + 3));
  fVar2 = pfVar1[5];
  fVar3 = pfVar1[1];
  *pfRam0028a470 = ((fStack_4 * fVar4 + fStack_8 * fVar5) - fStack_8 * fVar7) - fStack_4 * fVar6;
  pfRam0028a470[1] = fVar2 - fVar3;
  pfRam0028a470[2] = ((fStack_4 * fVar5 + fStack_8 * fVar6) - fStack_8 * fVar4) - fStack_4 * fVar7;
  uRam0028a46c = 0xc;
  return;
}

