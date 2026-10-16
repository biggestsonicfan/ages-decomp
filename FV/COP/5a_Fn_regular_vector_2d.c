/* COP 5a Fn_regular_vector_2d: Fn_regular_vector_2d @ 00196640, 2 argument words, 8 reply bytes */

void Fn_regular_vector_2d(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *pfRam0028a47c;
  fVar3 = pfRam0028a47c[1];
  fVar1 = (float)FUN_00195540(fVar2,fVar3);
  *pfRam0028a470 = fVar1 * fVar2;
  pfRam0028a470[1] = fVar1 * fVar3;
  uRam0028a46c = 8;
  return;
}

