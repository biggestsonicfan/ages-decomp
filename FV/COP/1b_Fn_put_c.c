/* COP 1b Fn_put_c: Fn_put_c @ 0018fd40, 1 argument words, 0 reply bytes */

void Fn_put_c(void)

{
  *puGpffff8330 = *puGpffff830c;
  uGpffff82fc = 0;
  return;
}

