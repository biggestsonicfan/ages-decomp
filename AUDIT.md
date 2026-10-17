# Lizard audit

`lizard 1.24.1`, run as `lizard -w -C 15 -L 80 VF2 FV` (and `--csv` for the tables below). A function is flagged when its cyclomatic complexity (CCN) is over 15 or it is longer than 80 lines.

This is Ghidra output, not hand-written code: the complexity is the shape of the original game code plus what the decompiler adds, so it is a map of where reading is hard, not a to-do list.

## Summary

| folder | functions | lines of code | avg CCN | max CCN | flagged |
|---|---:|---:|---:|---:|---:|
| `VF2/FN` | 12 | 2826 | 28.1 | 114 | 6 |
| `VF2/FN/helpers` | 21 | 1887 | 11.7 | 75 | 8 |
| `VF2/COP` | 112 | 2116 | 1.3 | 20 | 3 |
| `VF2/COP/helpers` | 25 | 507 | 1.8 | 12 | 0 |
| `FV/FN` | 46 | 10637 | 23.0 | 201 | 30 |
| `FV/FN/helpers` | 112 | 13882 | 15.6 | 130 | 36 |
| `FV/COP` | 127 | 2694 | 1.8 | 40 | 4 |
| `FV/COP/helpers` | 20 | 338 | 2.4 | 9 | 0 |
| total | 475 | 34887 | 8.1 | 201 | 87 |

## Most complex (top 15 by CCN)

| function | file | CCN | lines | tokens |
|---|---|---:|---:|---:|
| `play_motion` | `FV/FN/ext59_play_motion_001d5700.c` | 201 | 1394 | 9983 |
| `rob_disp` | `FV/FN/ext65_rob_disp_001ce900.c` | 157 | 1132 | 7679 |
| `area_coli` | `FV/FN/helpers/area_coli_001dcec0.c` | 130 | 929 | 6587 |
| `sysCopPatchSmoothInt` | `VF2/FN/ext51_sysCopPatchSmoothInt_0018c040.c` | 114 | 707 | 6022 |
| `coli_recalc_pos` | `FV/FN/helpers/coli_recalc_pos_001df280.c` | 114 | 780 | 9453 |
| `smooth_int` | `FV/FN/helpers/smooth_int_001e4940.c` | 103 | 738 | 4172 |
| `sysCopPatchGetFrameDat` | `VF2/FN/ext50_sysCopPatchGetFrameDat_00190bc0.c` | 98 | 637 | 6287 |
| `koshi_unit_change` | `FV/FN/helpers/koshi_unit_change_001f14c0.c` | 94 | 538 | 2928 |
| `get_frame_dat` | `FV/FN/helpers/get_frame_dat_001e61c0.c` | 91 | 600 | 3921 |
| `kosi_mino_disp` | `FV/FN/helpers/kosi_mino_disp_001ee200.c` | 86 | 927 | 5643 |
| `calc_unit_1` | `FV/FN/helpers/calc_unit_1_001e3840.c` | 78 | 552 | 2688 |
| `rearSmoothInt` | `VF2/FN/helpers/rearSmoothInt_0018f640.c` | 75 | 509 | 4146 |
| `set_mot_dat` | `FV/FN/ext60_set_mot_dat_001d28c0.c` | 69 | 955 | 7881 |
| `pky_kami_disp` | `FV/FN/helpers/pky_kami_disp_001d1240.c` | 68 | 528 | 3172 |
| `osage_dsp` | `FV/FN/ext6c_osage_dsp_001fa800.c` | 63 | 502 | 3817 |

## Longest (top 15 by length)

| function | file | CCN | lines | tokens |
|---|---|---:|---:|---:|
| `play_motion` | `FV/FN/ext59_play_motion_001d5700.c` | 201 | 1394 | 9983 |
| `calc_unit_mat` | `FV/FN/ext57_calc_unit_mat_001d8500.c` | 45 | 1204 | 9723 |
| `rob_disp` | `FV/FN/ext65_rob_disp_001ce900.c` | 157 | 1132 | 7679 |
| `set_mot_dat` | `FV/FN/ext60_set_mot_dat_001d28c0.c` | 69 | 955 | 7881 |
| `area_coli` | `FV/FN/helpers/area_coli_001dcec0.c` | 130 | 929 | 6587 |
| `kosi_mino_disp` | `FV/FN/helpers/kosi_mino_disp_001ee200.c` | 86 | 927 | 5643 |
| `sysCopPatchCalcUnitMat` | `VF2/FN/ext4f_sysCopPatchCalcUnitMat_00192780.c` | 55 | 907 | 8823 |
| `coli_recalc_pos` | `FV/FN/helpers/coli_recalc_pos_001df280.c` | 114 | 780 | 9453 |
| `smooth_int` | `FV/FN/helpers/smooth_int_001e4940.c` | 103 | 738 | 4172 |
| `sysCopPatchSmoothInt` | `VF2/FN/ext51_sysCopPatchSmoothInt_0018c040.c` | 114 | 707 | 6022 |
| `kata_pat_disp` | `FV/FN/helpers/kata_pat_disp_001eff40.c` | 61 | 671 | 4540 |
| `sysCopPatchGetFrameDat` | `VF2/FN/ext50_sysCopPatchGetFrameDat_00190bc0.c` | 98 | 637 | 6287 |
| `get_frame_dat` | `FV/FN/helpers/get_frame_dat_001e61c0.c` | 91 | 600 | 3921 |
| `calc_unit_1` | `FV/FN/helpers/calc_unit_1_001e3840.c` | 78 | 552 | 2688 |
| `koshi_unit_change` | `FV/FN/helpers/koshi_unit_change_001f14c0.c` | 94 | 538 | 2928 |

## Every flagged function

| function | file | CCN | lines |
|---|---|---:|---:|
| `Fn_area_table_gen` | `FV/COP/3a_Fn_area_table_gen.c` | 23 | 204 |
| `Fn_calc_coli_flag` | `FV/COP/3b_Fn_calc_coli_flag.c` | 11 | 154 |
| `Fn_calc_unit_2_fast` | `FV/COP/6b_Fn_calc_unit_2_fast.c` | 5 | 311 |
| `Fn_area_coli` | `FV/COP/70_Fn_area_coli.c` | 40 | 286 |
| `set_obj_fifo` | `FV/FN/ext10_set_obj_fifo_001cbe40.c` | 21 | 137 |
| `calc_unit_mat` | `FV/FN/ext57_calc_unit_mat_001d8500.c` | 45 | 1204 |
| `play_motion` | `FV/FN/ext59_play_motion_001d5700.c` | 201 | 1394 |
| `calc_rob_angle_int` | `FV/FN/ext5d_calc_rob_angle_int_001e2a00.c` | 33 | 264 |
| `calc_rob_angle_cont` | `FV/FN/ext5e_calc_rob_angle_cont_001e1e80.c` | 8 | 339 |
| `set_motion` | `FV/FN/ext5f_set_motion_001d4d00.c` | 27 | 249 |
| `set_mot_dat` | `FV/FN/ext60_set_mot_dat_001d28c0.c` | 69 | 955 |
| `send_coli_ball_R` | `FV/FN/ext63_send_coli_ball_R_001ebb40.c` | 8 | 131 |
| `rob_disp` | `FV/FN/ext65_rob_disp_001ce900.c` | 157 | 1132 |
| `rob_kage_disp_inside` | `FV/FN/ext67_rob_kage_disp_inside_001f3c80.c` | 20 | 146 |
| `clip_point_check_yoko` | `FV/FN/ext68_clip_point_check_yoko_001f8280.c` | 14 | 105 |
| `cage_clip_m` | `FV/FN/ext6a_cage_clip_m_001f7640.c` | 30 | 254 |
| `coli_cont_cop` | `FV/FN/ext6b_coli_cont_cop_001dbbc0.c` | 18 | 185 |
| `osage_dsp` | `FV/FN/ext6c_osage_dsp_001fa800.c` | 63 | 502 |
| `rob_kabe_kage_disp` | `FV/FN/ext6d_rob_kabe_kage_disp_001cc540.c` | 16 | 90 |
| `clip_point_check` | `FV/FN/ext6e_clip_point_check_001f7200.c` | 19 | 129 |
| `tex_move_poly` | `FV/FN/ext6f_tex_move_poly_001ed0c0.c` | 13 | 106 |
| `trailer_easy_dsp2` | `FV/FN/ext70_trailer_easy_dsp2_001fe500.c` | 6 | 454 |
| `cage_break_st04` | `FV/FN/ext79_cage_break_st04_001f8d40.c` | 7 | 140 |
| `cage_break_calc` | `FV/FN/ext7a_cage_break_calc_001f9940.c` | 24 | 299 |
| `line_disp` | `FV/FN/ext7c_line_disp_001f9240.c` | 10 | 139 |
| `cage_break_st01` | `FV/FN/ext7d_cage_break_st01_001f8600.c` | 10 | 217 |
| `rob_kage_disp_test` | `FV/FN/ext7e_rob_kage_disp_test_001f5580.c` | 23 | 236 |
| `send_tex_col_go` | `FV/FN/ext85_send_tex_col_go_001ea600.c` | 16 | 167 |
| `send_tex_col_skin` | `FV/FN/ext86_send_tex_col_skin_001eb740.c` | 13 | 96 |
| `chg_pol_color_send` | `FV/FN/ext87_chg_pol_color_send_001eb440.c` | 10 | 90 |
| `change_color_table` | `FV/FN/ext89_change_color_table_001eaa80.c` | 22 | 235 |
| `dsp_char_2x3` | `FV/FN/ext8b_dsp_char_2x3_001cb4c0.c` | 9 | 88 |
| `dsp_num_2x3` | `FV/FN/ext8c_dsp_num_2x3_001cb1c0.c` | 9 | 85 |
| `tou_disp` | `FV/FN/ext8e_tou_disp_001f5f40.c` | 60 | 517 |
| `adj_taikaku` | `FV/FN/helpers/adj_taikaku_001e3340.c` | 23 | 166 |
| `area_coli` | `FV/FN/helpers/area_coli_001dcec0.c` | 130 | 929 |
| `calc_attack_flag` | `FV/FN/helpers/calc_attack_flag_001dcc00.c` | 13 | 85 |
| `calc_kaze` | `FV/FN/helpers/calc_kaze_001fbac0.c` | 29 | 220 |
| `calc_unit_1` | `FV/FN/helpers/calc_unit_1_001e3840.c` | 78 | 552 |
| `calc_up_down_damage` | `FV/FN/helpers/calc_up_down_damage_001e1240.c` | 16 | 95 |
| `coli_recalc_pos` | `FV/FN/helpers/coli_recalc_pos_001df280.c` | 114 | 780 |
| `copy_option_data` | `FV/FN/helpers/copy_option_data_001db640.c` | 7 | 114 |
| `decide_coli_kind` | `FV/FN/helpers/decide_coli_kind_001dc200.c` | 41 | 224 |
| `decide_dir` | `FV/FN/helpers/decide_dir_001e0a80.c` | 19 | 131 |
| `get_end_value` | `FV/FN/helpers/get_end_value_001e8500.c` | 19 | 140 |
| `get_fcurve_value_f` | `FV/FN/helpers/get_fcurve_value_f_001e9580.c` | 38 | 390 |
| `get_frame_dat` | `FV/FN/helpers/get_frame_dat_001e61c0.c` | 91 | 600 |
| `get_kamae_value` | `FV/FN/helpers/get_kamae_value_001e1700.c` | 34 | 239 |
| `get_start_value` | `FV/FN/helpers/get_start_value_001e8980.c` | 19 | 140 |
| `kata_pat_disp` | `FV/FN/helpers/kata_pat_disp_001eff40.c` | 61 | 671 |
| `koshi_unit_change` | `FV/FN/helpers/koshi_unit_change_001f14c0.c` | 94 | 538 |
| `kosi_mino_disp` | `FV/FN/helpers/kosi_mino_disp_001ee200.c` | 86 | 927 |
| `mune_unit_change` | `FV/FN/helpers/mune_unit_change_001f29c0.c` | 49 | 316 |
| `os_set_coli` | `FV/FN/helpers/os_set_coli_001fcc80.c` | 3 | 242 |
| `os_set_matrix` | `FV/FN/helpers/os_set_matrix_001fd640.c` | 8 | 264 |
| `os_set_osage` | `FV/FN/helpers/os_set_osage_001fc380.c` | 7 | 119 |
| `os_set_tsukene` | `FV/FN/helpers/os_set_tsukene_001fc780.c` | 5 | 127 |
| `parts_kage_disp` | `FV/FN/helpers/parts_kage_disp_001f4ac0.c` | 11 | 158 |
| `parts_kage_set_flag` | `FV/FN/helpers/parts_kage_set_flag_001f5080.c` | 21 | 141 |
| `pky_kami_disp` | `FV/FN/helpers/pky_kami_disp_001d1240.c` | 68 | 528 |
| `rear_smooth_int` | `FV/FN/helpers/rear_smooth_int_001e7640.c` | 52 | 460 |
| `rob_kabe_set_matrix` | `FV/FN/helpers/rob_kabe_set_matrix_001ccf40.c` | 39 | 425 |
| `rob_kage_disp_ground` | `FV/FN/helpers/rob_kage_disp_ground_001cc840.c` | 15 | 176 |
| `rob_kage_disp_kabe` | `FV/FN/helpers/rob_kage_disp_kabe_001cddc0.c` | 48 | 343 |
| `send_tpd` | `FV/FN/helpers/send_tpd_001ed940.c` | 10 | 103 |
| `set_ashi_ptn` | `FV/FN/helpers/set_ashi_ptn_001d2480.c` | 17 | 139 |
| `set_mirror` | `FV/FN/helpers/set_mirror_001e8dc0.c` | 2 | 138 |
| `set_tpd_data` | `FV/FN/helpers/set_tpd_data_001ed4c0.c` | 3 | 113 |
| `smooth_int` | `FV/FN/helpers/smooth_int_001e4940.c` | 103 | 738 |
| `tpd_clip_stage` | `FV/FN/helpers/tpd_clip_stage_001edd40.c` | 26 | 171 |
| `cprCliAreaTableGen` | `VF2/COP/3a_Fn_area_table_gen.c` | 6 | 195 |
| `cprCliCalcColiFlag` | `VF2/COP/3b_Fn_calc_coli_flag.c` | 20 | 220 |
| `cprMotCalcUnit2Fast` | `VF2/COP/6b_Fn_calc_unit_2_fast.c` | 5 | 223 |
| `sysCopPatchSetOsageAfter` | `VF2/FN/ext4b_sysCopPatchSetOsageAfter_00197180.c` | 12 | 90 |
| `sysCopPatchColiContFast` | `VF2/FN/ext4e_sysCopPatchColiContFast_00196ac0.c` | 12 | 142 |
| `sysCopPatchCalcUnitMat` | `VF2/FN/ext4f_sysCopPatchCalcUnitMat_00192780.c` | 55 | 907 |
| `sysCopPatchGetFrameDat` | `VF2/FN/ext50_sysCopPatchGetFrameDat_00190bc0.c` | 98 | 637 |
| `sysCopPatchSmoothInt` | `VF2/FN/ext51_sysCopPatchSmoothInt_0018c040.c` | 114 | 707 |
| `sysCopPatchHappaDisp` | `VF2/FN/ext53_sysCopPatchHappaDisp_001866c0.c` | 18 | 128 |
| `areaColi` | `VF2/FN/helpers/areaColi_00194f00.c` | 23 | 215 |
| `coliRecalcPos` | `VF2/FN/helpers/coliRecalcPos_00195cc0.c` | 17 | 170 |
| `decideColiKind` | `VF2/FN/helpers/decideColiKind_001965c0.c` | 24 | 107 |
| `getEndValue` | `VF2/FN/helpers/getEndValue_0018efc0.c` | 9 | 85 |
| `getFcurveValueF` | `VF2/FN/helpers/getFcurveValueF_0018e640.c` | 30 | 208 |
| `getStartValue` | `VF2/FN/helpers/getStartValue_0018f300.c` | 9 | 85 |
| `rearSmoothInt` | `VF2/FN/helpers/rearSmoothInt_0018f640.c` | 75 | 509 |
| `setMirror` | `VF2/FN/helpers/setMirror_0018de80.c` | 1 | 130 |
