/* helper FUN_00188ec0 @ 00188ec0, called (depth 1) from set_obj_tpd */

void FUN_00188ec0(undefined4 param_1)

{
  if (uRam012e7a84 < 0x20000) {
    *(undefined4 *)(uRam012e7a84 + 0x1372c40) = param_1;
    uRam012e7a84 = uRam012e7a84 + 4;
  }
  return;
}

