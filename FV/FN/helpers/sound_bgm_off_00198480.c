/* helper sound_bgm_off @ 00198480, called (depth 3) from play_motion */

void sound_bgm_off(void)

{
  adxt_stop(0);
  adxt_pause(0,0);
  uRam0028a4b4 = 0;
  return;
}

