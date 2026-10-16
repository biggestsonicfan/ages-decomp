/* COP 48 Fn_read_ram: Fn_read_ram @ 0018e440, 1 argument words, 4 reply bytes */

void Fn_read_ram(void)

{
  *puGpffff8300 = *(undefined4 *)(*piGpffff830c * 4 + iGpffff832c + -0xc0000);
  uGpffff82fc = 4;
  return;
}

