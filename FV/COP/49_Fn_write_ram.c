/* COP 49 Fn_write_ram: Fn_write_ram @ 0018e400, 2 argument words, 0 reply bytes */

void Fn_write_ram(void)

{
  *(int *)(*piGpffff830c * 4 + iGpffff832c + -0xc0000) = piGpffff830c[1];
  uGpffff82fc = 0;
  return;
}

