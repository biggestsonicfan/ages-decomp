/* COP 1c Fn_get_c: Fn_get_c @ 0018fd00, 0 argument words, 4 reply bytes */

void Fn_get_c(void)

{
  *puGpffff8300 = *puGpffff8330;
  uGpffff82fc = 4;
  return;
}

