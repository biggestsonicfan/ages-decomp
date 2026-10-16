/* COP 50 Fn_base_yz: cprMotBaseYZ @ 0019b300, 2 argument words, 0 reply bytes */

void cprMotBaseYZ(void)

{
  float *pfVar1;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  pfVar1 = (float *)(CprMain_MtxStack + CprMtx_MatrixSp * 4);
  cprSinCosf(&fStack_8,&fStack_4,0);
  cprSinCosf(&fStack_10,&fStack_c,0);
  *pfVar1 = fStack_4 * fStack_c;
  pfVar1[1] = -fStack_10;
  pfVar1[2] = fStack_8 * fStack_c;
  pfVar1[4] = fStack_4 * fStack_10;
  pfVar1[5] = fStack_c;
  pfVar1[6] = fStack_8 * fStack_10;
  pfVar1[8] = -fStack_8;
  pfVar1[9] = 0.0;
  pfVar1[10] = fStack_4;
  pfVar1[0xc] = 0.0;
  pfVar1[0xd] = 0.0;
  pfVar1[0xe] = 0.0;
  return;
}

