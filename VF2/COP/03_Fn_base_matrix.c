/* COP 03 Fn_base_matrix: cprMtxBaseMatrix @ 00199fc0, 0 argument words, 0 reply bytes */

void cprMtxBaseMatrix(void)

{
  undefined1 in_vf0 [16];
  undefined1 auVar1 [16];
  
  _vmove(in_vf0);
  auVar1 = _vmr32(in_vf0);
  auVar1 = _vmr32(auVar1);
  _vmr32(auVar1);
  return;
}

