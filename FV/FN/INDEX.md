# Fighting Vipers (SLPM-62606): native C translations of i960 functions

| EXT | native | name | i960 sites | arcade name | lines | file |
|---|---|---|---|---|---:|---|
| 0d | 001cc280 | set_obj | 005a48 | set_obj | 32 | ext0d_set_obj_001cc280.c |
| 0e | 001cbd00 | set_obj_tpd | 005b68 | set_obj_tpd | 39 | ext0e_set_obj_tpd_001cbd00.c |
| 0f | 001cbb80 | set_obj_thd | 005be4 | set_obj_thd | 42 | ext0f_set_obj_thd_001cbb80.c |
| 10 | 001cbe40 | set_obj_fifo | 005d38 | set_obj_fifo | 140 | ext10_set_obj_fifo_001cbe40.c |
| 12 | 001cc380 | rob_grass_disp_p768 | 07789c | rob_grass_disp+768 | 79 | ext12_rob_grass_disp_p768_001cc380.c |
| 57 | 001d8500 | calc_unit_mat | 017160 | calc_unit_mat | 1209 | ext57_calc_unit_mat_001d8500.c |
| 58 | 001e1040 | rob_ball_data_make | 024ca4 | rob_ball_data_make | 50 | ext58_rob_ball_data_make_001e1040.c |
| 59 | 001d5700 | play_motion | 01c0fc | play_motion | 1416 | ext59_play_motion_001d5700.c |
| 5a | 001e0ec0 | kabe_parts_damage | 0273f4 | kabe_parts_damage | 42 | ext5a_kabe_parts_damage_001e0ec0.c |
| 5b | 001f34c0 | efc_face_change_cont | 02ddb0 | efc_face_change_cont | 23 | ext5b_efc_face_change_cont_001f34c0.c |
| 5c | 001e4780 | calc_rob_angle | 02aa84 | calc_rob_angle | 64 | ext5c_calc_rob_angle_001e4780.c |
| 5d | 001e2a00 | calc_rob_angle_int | 029d08 | calc_rob_angle_int | 270 | ext5d_calc_rob_angle_int_001e2a00.c |
| 5e | 001e1e80 | calc_rob_angle_cont | 02aaa8 | calc_rob_angle_cont | 342 | ext5e_calc_rob_angle_cont_001e1e80.c |
| 5f | 001d4d00 | set_motion | 01b5b0 | set_motion | 256 | ext5f_set_motion_001d4d00.c |
| 60 | 001d28c0 | set_mot_dat | 01b880 | set_mot_dat | 961 | ext60_set_mot_dat_001d28c0.c |
| 61 | 001ec080 | send_init_ram_coli_data | 001b0c | send_init_ram_coli_data | 38 | ext61_send_init_ram_coli_data_001ec080.c |
| 62 | 001ec000 | send_ram_coli_data | 001b20 | send_ram_coli_data | 16 | ext62_send_ram_coli_data_001ec000.c |
| 63 | 001ebb40 | send_coli_ball_R | 001b90 | send_coli_ball_R | 134 | ext63_send_coli_ball_R_001ebb40.c |
| 64 | 001cba00 | rand | 006dc8 | rand | 34 | ext64_rand_001cba00.c |
| 65 | 001ce900 | rob_disp | 019f10 | rob_disp | 1148 | ext65_rob_disp_001ce900.c |
| 66 | 001cb940 | set_mmode | 0058f0 | set_mmode | 19 | ext66_set_mmode_001cb940.c |
| 67 | 001f3c80 | rob_kage_disp_inside | 0602f0 | rob_kage_disp_inside | 156 | ext67_rob_kage_disp_inside_001f3c80.c |
| 68 | 001f8280 | clip_point_check_yoko | 0236bc | clip_point_check_yoko | 108 | ext68_clip_point_check_yoko_001f8280.c |
| 69 | 001f7f80 | area_clip | 023868 | area_clip | 66 | ext69_area_clip_001f7f80.c |
| 6a | 001f7640 | cage_clip_m | 022398 | cage_clip_m | 259 | ext6a_cage_clip_m_001f7640.c |
| 6b | 001dbbc0 | coli_cont_cop | 027e18 | coli_cont_cop | 188 | ext6b_coli_cont_cop_001dbbc0.c |
| 6c | 001fa800 | osage_dsp | 062854 | osage_dsp | 512 | ext6c_osage_dsp_001fa800.c |
| 6d | 001cc540 | rob_kabe_kage_disp | 076944 | rob_kabe_kage_disp | 95 | ext6d_rob_kabe_kage_disp_001cc540.c |
| 6e | 001f7200 | clip_point_check | 023784 | clip_point_check | 132 | ext6e_clip_point_check_001f7200.c |
| 6f | 001ed0c0 | tex_move_poly | 0331b4 | tex_move_poly | 113 | ext6f_tex_move_poly_001ed0c0.c |
| 70 | 001fe500 | trailer_easy_dsp2 | 06dafc | trailer_easy_dsp2 | 457 | ext70_trailer_easy_dsp2_001fe500.c |
| 79 | 001f8d40 | cage_break_st04 | 079ff0 | cage_break_st04 | 145 | ext79_cage_break_st04_001f8d40.c |
| 7a | 001f9940 | cage_break_calc | 07b27c | cage_break_calc | 302 | ext7a_cage_break_calc_001f9940.c |
| 7c | 001f9240 | line_disp | 07ab24 | line_disp | 142 | ext7c_line_disp_001f9240.c |
| 7d | 001f8600 | cage_break_st01 | 079a10 | cage_break_st01 | 220 | ext7d_cage_break_st01_001f8600.c |
| 7e | 001f5580 | rob_kage_disp_test | 060640 | rob_kage_disp_test | 244 | ext7e_rob_kage_disp_test_001f5580.c |
| 82 | 001e1580 | set_kamae_ram | 029eec | set_kamae_ram | 43 | ext82_set_kamae_ram_001e1580.c |
| 85 | 001ea600 | send_tex_col_go | 000818 | send_tex_col_go | 170 | ext85_send_tex_col_go_001ea600.c |
| 86 | 001eb740 | send_tex_col_skin | 0008f4 | send_tex_col_skin | 101 | ext86_send_tex_col_skin_001eb740.c |
| 87 | 001eb440 | chg_pol_color_send | 004060 | chg_pol_color_send | 95 | ext87_chg_pol_color_send_001eb440.c |
| 88 | 001eb280 | ScrollCG_Initialize | 001638 | ScrollCG_Initialize | 57 | ext88_ScrollCG_Initialize_001eb280.c |
| 89 | 001eaa80 | change_color_table | 000d3c | change_color_table | 238 | ext89_change_color_table_001eaa80.c |
| 8a | 001cb7c0 | clr_pattern_s | 0066dc | clr_pattern_s | 52 | ext8a_clr_pattern_s_001cb7c0.c |
| 8b | 001cb4c0 | dsp_char_2x3 | 006b34 | dsp_char_2x3 | 93 | ext8b_dsp_char_2x3_001cb4c0.c |
| 8c | 001cb1c0 | dsp_num_2x3 | 006bd8 | dsp_num_2x3 | 90 | ext8c_dsp_num_2x3_001cb1c0.c |
| 8e | 001f5f40 | tou_disp | 023acc | tou_disp | 525 | ext8e_tou_disp_001f5f40.c |

## Helpers (`helpers/`)

Functions the above call, followed up to three calls deep. Runtime calls
(`i960*`, `sysMem*`, libc, CRI and Sony libraries) are left out.

| native | name | bytes | first caller | depth |
|---|---|---:|---|---:|
| 0018ddc0 | FUN_0018ddc0 | 124 | set_obj | 1 |
| 0018df40 | FUN_0018df40 | 76 | set_obj | 1 |
| 0018e100 | FUN_0018e100 | 104 | set_obj | 1 |
| 001c6300 | FUN_001c6300 | 156 | set_obj | 1 |
| 0018f8c0 | FUN_0018f8c0 | 172 | set_obj | 2 |
| 00180b80 | FUN_00180b80 | 40 | set_obj | 2 |
| 00188ec0 | FUN_00188ec0 | 56 | set_obj_tpd | 1 |
| 001bcb00 | FUN_001bcb00 | 64 | set_obj_tpd | 1 |
| 001c63c0 | FUN_001c63c0 | 496 | set_obj_tpd | 1 |
| 0018dfc0 | FUN_0018dfc0 | 132 | set_obj_fifo | 1 |
| 0018acc0 | sysReadWorkRam1 | 16 | rob_grass_disp_p768 | 1 |
| 001bbb80 | FUN_001bbb80 | 60 | rob_grass_disp_p768 | 1 |
| 0018de40 | FUN_0018de40 | 124 | calc_unit_mat | 1 |
| 0018e080 | FUN_0018e080 | 124 | calc_unit_mat | 1 |
| 0018e9c0 | FUN_0018e9c0 | 52 | calc_unit_mat | 1 |
| 0018ea80 | FUN_0018ea80 | 52 | calc_unit_mat | 1 |
| 0018f480 | FUN_0018f480 | 72 | calc_unit_mat | 1 |
| 0018f580 | FUN_0018f580 | 80 | calc_unit_mat | 1 |
| 001951c0 | cprSubScaleCurMat | 20 | calc_unit_mat | 1 |
| 001daf80 | set_coli_ball_data | 616 | calc_unit_mat | 1 |
| 001dae00 | fix_hara | 364 | play_motion | 1 |
| 001db200 | set_option | 748 | play_motion | 1 |
| 001db500 | check_front_back | 268 | play_motion | 1 |
| 001e4940 | smooth_int | 6160 | play_motion | 1 |
| 001f35c0 | sound_chainlink_hit | 376 | play_motion | 1 |
| 001f3740 | sound_request_u | 452 | play_motion | 1 |
| 001f3940 | check_same_sound | 428 | play_motion | 1 |
| 001f3b00 | stage_contact_sound | 336 | play_motion | 1 |
| 001db640 | copy_option_data | 1200 | play_motion | 2 |
| 0018ac80 | FUN_0018ac80 | 40 | play_motion | 2 |
| 001e8980 | get_start_value | 1048 | play_motion | 2 |
| 0019a680 | FUN_0019a680 | 524 | play_motion | 2 |
| 001e8dc0 | set_mirror | 1968 | play_motion | 3 |
| 00196d00 | FUN_00196d00 | 8 | play_motion | 3 |
| 00198280 | FUN_00198280 | 392 | play_motion | 3 |
| 00198480 | sound_bgm_off | 44 | play_motion | 3 |
| 001984c0 | FUN_001984c0 | 444 | play_motion | 3 |
| 00199640 | FUN_00199640 | 48 | play_motion | 3 |
| 00199980 | FUN_00199980 | 72 | play_motion | 3 |
| 00199a00 | FUN_00199a00 | 72 | play_motion | 3 |
| 0019a580 | FUN_0019a580 | 236 | play_motion | 3 |
| 001e1240 | calc_up_down_damage | 816 | kabe_parts_damage | 1 |
| 001e61c0 | get_frame_dat | 5180 | calc_rob_angle | 1 |
| 001e7640 | rear_smooth_int | 3696 | calc_rob_angle | 2 |
| 001e9580 | get_fcurve_value_f | 4132 | calc_rob_angle | 2 |
| 001e8500 | get_end_value | 1064 | calc_rob_angle | 3 |
| 0018dec0 | FUN_0018dec0 | 124 | calc_rob_angle_cont | 1 |
| 001e3340 | adj_taikaku | 1232 | calc_rob_angle_cont | 1 |
| 001e3840 | calc_unit_1 | 3856 | calc_rob_angle_cont | 1 |
| 001ec180 | send_ball_to_unit2 | 492 | send_init_ram_coli_data | 1 |
| 001ec380 | send_ball_to_unit | 476 | send_init_ram_coli_data | 1 |
| 001ec580 | set_coli_ball_init | 448 | send_init_ram_coli_data | 1 |
| 001ec780 | rob1_coli_ball_table_all_init | 208 | send_init_ram_coli_data | 1 |
| 001ec880 | rob0_coli_ball_table_all_init | 208 | send_init_ram_coli_data | 1 |
| 001ec980 | coli_ucb_num_init | 268 | send_init_ram_coli_data | 2 |
| 001ecac0 | coli_bu_co_init | 272 | send_init_ram_coli_data | 2 |
| 001ecc00 | coli_bu_rd_init | 272 | send_init_ram_coli_data | 2 |
| 001ecd40 | ucb_unit_init | 280 | send_init_ram_coli_data | 2 |
| 001ece80 | ucb_adr_init | 232 | send_init_ram_coli_data | 2 |
| 001ecf80 | cb_data_init | 320 | send_init_ram_coli_data | 2 |
| 001cad40 | FUN_001cad40 | 184 | rob_disp | 1 |
| 001d1000 | option_control | 564 | rob_disp | 1 |
| 001d1240 | pky_kami_disp | 4140 | rob_disp | 1 |
| 001d2280 | set_te_ptn | 468 | rob_disp | 1 |
| 001d2480 | set_ashi_ptn | 1032 | rob_disp | 1 |
| 001ee200 | kosi_mino_disp | 7484 | rob_disp | 1 |
| 001eff40 | kata_pat_disp | 5480 | rob_disp | 1 |
| 001f14c0 | koshi_unit_change | 4212 | rob_disp | 1 |
| 001f29c0 | mune_unit_change | 2788 | rob_disp | 1 |
| 001f2540 | kuc_sukebo_check | 520 | rob_disp | 2 |
| 001f2780 | kuc_motion | 504 | rob_disp | 2 |
| 001f4180 | rob_kage_set_flag_inout | 684 | rob_kage_disp_inside | 1 |
| 001f4600 | calc_ext_light_vec | 584 | rob_kage_disp_inside | 1 |
| 001f4880 | calc_near_light | 564 | rob_kage_disp_inside | 1 |
| 001f4ac0 | parts_kage_disp | 1412 | rob_kage_disp_inside | 1 |
| 001f5080 | parts_kage_set_flag | 1188 | rob_kage_disp_inside | 1 |
| 001f4440 | rob_kage_set_flag_sub | 420 | rob_kage_disp_inside | 2 |
| 001f7e80 | boss_cage | 248 | cage_clip_m | 1 |
| 001dc200 | decide_coli_kind | 2116 | coli_cont_cop | 1 |
| 001dca80 | coli_ram_init | 376 | coli_cont_cop | 1 |
| 001dcc00 | calc_attack_flag | 656 | coli_cont_cop | 1 |
| 001dcec0 | area_coli | 8680 | coli_cont_cop | 1 |
| 001df280 | coli_recalc_pos | 6088 | coli_cont_cop | 1 |
| 001e0a80 | decide_dir | 1088 | coli_cont_cop | 1 |
| 001df100 | total_skill_adder_g8 | 332 | coli_cont_cop | 2 |
| 001fa4c0 | finish_wall_calc_pos | 472 | coli_cont_cop | 2 |
| 001fa6c0 | finish_coli_pos_get | 268 | coli_cont_cop | 2 |
| 001fbac0 | calc_kaze | 1780 | osage_dsp | 1 |
| 001fc1c0 | set_situation_flags | 432 | osage_dsp | 1 |
| 001fc380 | os_set_osage | 1008 | osage_dsp | 1 |
| 001fc780 | os_set_tsukene | 996 | osage_dsp | 1 |
| 001fcb80 | os_set_etc | 252 | osage_dsp | 1 |
| 001fcc80 | os_set_coli | 2468 | osage_dsp | 1 |
| 001fd640 | os_set_matrix | 2668 | osage_dsp | 1 |
| 001fe0c0 | osage_copro | 432 | osage_dsp | 1 |
| 00195e80 | FUN_00195e80 | 20 | osage_dsp | 2 |
| 00195ec0 | FUN_00195ec0 | 20 | osage_dsp | 2 |
| 001dbb00 | FUN_001dbb00 | 8 | osage_dsp | 2 |
| 001fe280 | os_set_osage_after | 592 | osage_dsp | 2 |
| 001cc840 | rob_kage_disp_ground | 1760 | rob_kabe_kage_disp | 1 |
| 001ccf40 | rob_kabe_set_matrix | 3688 | rob_kabe_kage_disp | 1 |
| 001cddc0 | rob_kage_disp_kabe | 2800 | rob_kabe_kage_disp | 1 |
| 001ed4c0 | set_tpd_data | 1152 | tex_move_poly | 1 |
| 001ed940 | send_tpd | 964 | tex_move_poly | 1 |
| 001edd40 | tpd_clip_stage | 1204 | tex_move_poly | 1 |
| 00115280 | fmodf | 20 | tex_move_poly | 2 |
| 001c62c0 | FUN_001c62c0 | 12 | trailer_easy_dsp2 | 1 |
| 001e1700 | get_kamae_value | 1800 | set_kamae_ram | 1 |
| 00184a40 | FUN_00184a40 | 200 | ScrollCG_Initialize | 1 |
| 001b8fc0 | FUN_001b8fc0 | 120 | ScrollCG_Initialize | 1 |
| 001c4300 | FUN_001c4300 | 116 | ScrollCG_Initialize | 2 |
| 001f5d80 | FUN_001f5d80 | 412 | tou_disp | 1 |
