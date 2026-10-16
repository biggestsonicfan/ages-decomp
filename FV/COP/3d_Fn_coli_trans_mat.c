/* COP 3d Fn_coli_trans_mat: Fn_coli_trans_mat @ 0018e800, 6 argument words, 0 reply bytes */

void Fn_coli_trans_mat(void)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0xc;
  iVar5 = 0;
  do {
    iVar4 = iVar6 * 4;
    iVar5 = iVar5 + 1;
    iVar3 = (iVar6 + 1) * 4;
    iVar2 = (iVar6 + 2) * 4;
    iVar6 = iVar6 + 0x10;
    pfVar1 = (float *)(iGpffff82f4 + iVar4);
    *pfVar1 = *pfVar1 + *pfGpffff830c;
    pfVar1 = (float *)(iGpffff82f0 + iVar4);
    *pfVar1 = *pfVar1 + pfGpffff830c[3];
    pfVar1 = (float *)(iGpffff82f4 + iVar3);
    *pfVar1 = *pfVar1 + pfGpffff830c[1];
    pfVar1 = (float *)(iGpffff82f0 + iVar3);
    *pfVar1 = *pfVar1 + pfGpffff830c[4];
    pfVar1 = (float *)(iGpffff82f4 + iVar2);
    *pfVar1 = *pfVar1 + pfGpffff830c[2];
    pfVar1 = (float *)(iGpffff82f0 + iVar2);
    *pfVar1 = *pfVar1 + pfGpffff830c[5];
  } while (iVar5 < 0x10);
  uGpffff82fc = 0;
  return;
}

