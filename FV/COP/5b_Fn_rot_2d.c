/* COP 5b Fn_rot_2d: Fn_rot_2d @ 001965c0, 3 argument words, 8 reply bytes */

void Fn_rot_2d(void)

{
  float fVar1;
  float fVar2;
  float fStack_8;
  float fStack_4;
  
  fVar1 = *(float *)(puGpffff830c + 2);
  fVar2 = *(float *)(puGpffff830c + 4);
  FUN_00195f00(&fStack_4,&fStack_8,*puGpffff830c);
  *pfGpffff8300 = fStack_8 * fVar1 - fStack_4 * fVar2;
  pfGpffff8300[1] = fStack_4 * fVar1 + fStack_8 * fVar2;
  uGpffff82fc = 8;
  return;
}

