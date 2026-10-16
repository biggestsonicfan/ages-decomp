/* helper rfoMatrix44 @ 0019a100, called (depth 1) from cprMtxGetMatrix */

void rfoMatrix44(undefined4 *param_1)

{
  *CprMain_RfoTop = *param_1;
  CprMain_RfoTop[1] = param_1[1];
  CprMain_RfoTop[2] = param_1[2];
  CprMain_RfoTop[3] = param_1[4];
  CprMain_RfoTop[4] = param_1[5];
  CprMain_RfoTop[5] = param_1[6];
  CprMain_RfoTop[6] = param_1[8];
  CprMain_RfoTop[7] = param_1[9];
  CprMain_RfoTop[8] = param_1[10];
  CprMain_RfoTop[9] = param_1[0xc];
  CprMain_RfoTop[10] = param_1[0xd];
  CprMain_RfoTop[0xb] = param_1[0xe];
  return;
}

