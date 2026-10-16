/* COP 3f Fn_zyx_rot: Fn_zyx_rot @ 0018f180, 3 argument words, 4 reply bytes */

void Fn_zyx_rot(void)

{
  undefined2 *puVar1;
  
  puVar1 = puGpffff830c;
  func_0x00195280(*puGpffff830c);
  func_0x00195300(puVar1[2]);
  func_0x00195380(puVar1[4]);
  *puGpffff8300 = 0;
  uGpffff82fc = 4;
  return;
}

