# Fighting Vipers (SLPM-62606): the Model 2 coprocessor (COP) commands

| op | firmware name | native | native name | args | reply bytes | lines | file |
|---|---|---|---|---:|---:|---:|---|
| 00 | Fn_initialize | 0018f680 | FUN_0018f680 | 0 | 0 | 11 | 00_Fn_initialize.c |
| 01 | Fn_push_matrix | 0018f600 | FUN_0018f600 | 0 | 0 | 29 | 01_Fn_push_matrix.c |
| 02 | Fn_pop_matrix | 0018f500 | FUN_0018f500 | 0 | 0 | 19 | 02_Fn_pop_matrix.c |
| 03 | Fn_base_matrix | 0018f440 | FUN_0018f440 | 0 | 0 | 10 | 03_Fn_base_matrix.c |
| 04 | Fn_load_matrix | 0018f380 | FUN_0018f380 | 12 | 0 | 25 | 04_Fn_load_matrix.c |
| 05 | Fn_get_matrix | 0018f340 | FUN_0018f340 | 0 | 48 | 24 | 05_Fn_get_matrix.c |
| 06 | Fn_trans | 0018f300 | FUN_0018f300 | 3 | 0 | 10 | 06_Fn_trans.c |
| 07 | Fn_scale | 0018f2c0 | FUN_0018f2c0 | 3 | 0 | 10 | 07_Fn_scale.c |
| 08 | Fn_x_rot | 0018f280 | FUN_0018f280 | 1 | 0 | 10 | 08_Fn_x_rot.c |
| 09 | Fn_y_rot | 0018f240 | FUN_0018f240 | 1 | 0 | 10 | 09_Fn_y_rot.c |
| 0a | Fn_z_rot | 0018f200 | FUN_0018f200 | 1 | 0 | 10 | 0a_Fn_z_rot.c |
| 0b | Fn_mul_matrix | 0018f0c0 | FUN_0018f0c0 | 12 | 0 | 22 | 0b_Fn_mul_matrix.c |
| 0c | Fn_inv_matrix | 0018ef80 | FUN_0018ef80 | 0 | 0 | 10 | 0c_Fn_inv_matrix.c |
| 0d | Fn_base_point | 0018ef40 | FUN_0018ef40 | 0 | 0 | 12 | 0d_Fn_base_point.c |
| 0e | Fn_load_point | 0018ef00 | FUN_0018ef00 | 3 | 0 | 10 | 0e_Fn_load_point.c |
| 0f | Fn_get_point | 0018eec0 | FUN_0018eec0 | 0 | 12 | 14 | 0f_Fn_get_point.c |
| 10 | Fn_base_3x3 | 0018edc0 | FUN_0018edc0 | 0 | 0 | 22 | 10_Fn_base_3x3.c |
| 11 | Fn_load_3x3 | 0018ecc0 | FUN_0018ecc0 | 9 | 0 | 28 | 11_Fn_load_3x3.c |
| 12 | Fn_get_3x3 | 0018ebc0 | FUN_0018ebc0 | 0 | 36 | 46 | 12_Fn_get_3x3.c |
| 13 | Fn_add | 0018ff40 | FUN_0018ff40 | 2 | 4 | 10 | 13_Fn_add.c |
| 14 | Fn_sub | 0018ff00 | FUN_0018ff00 | 2 | 4 | 10 | 14_Fn_sub.c |
| 15 | Fn_mul | 0018fec0 | FUN_0018fec0 | 2 | 4 | 10 | 15_Fn_mul.c |
| 16 | Fn_div | 0018fe80 | FUN_0018fe80 | 2 | 4 | 10 | 16_Fn_div.c |
| 17 | Fn_cvtws | 0018fe40 | FUN_0018fe40 | 1 | 4 | 10 | 17_Fn_cvtws.c |
| 18 | Fn_cvtsw | 0018fe00 | FUN_0018fe00 | 1 | 4 | 10 | 18_Fn_cvtsw.c |
| 19 | Fn_sqr_r | 0018fdc0 | FUN_0018fdc0 | 1 | 4 | 13 | 19_Fn_sqr_r.c |
| 1a | Fn_sqr | 0018fd80 | FUN_0018fd80 | 1 | 4 | 13 | 1a_Fn_sqr.c |
| 1b | Fn_put_c | 0018fd40 | FUN_0018fd40 | 1 | 0 | 10 | 1b_Fn_put_c.c |
| 1c | Fn_get_c | 0018fd00 | FUN_0018fd00 | 0 | 4 | 10 | 1c_Fn_get_c.c |
| 1d | Fn_add_c | 0018fcc0 | FUN_0018fcc0 | 1 | 0 | 10 | 1d_Fn_add_c.c |
| 1e | Fn_sub_c | 0018fc80 | FUN_0018fc80 | 1 | 0 | 10 | 1e_Fn_sub_c.c |
| 1f | Fn_mul_c | 0018fc40 | FUN_0018fc40 | 1 | 0 | 10 | 1f_Fn_mul_c.c |
| 20 | Fn_div_c | 0018fc00 | FUN_0018fc00 | 1 | 0 | 10 | 20_Fn_div_c.c |
| 21 | Fn_sin | 00196300 | FUN_00196300 | 1 | 4 | 13 | 21_Fn_sin.c |
| 22 | Fn_cos | 001962c0 | FUN_001962c0 | 1 | 4 | 13 | 22_Fn_cos.c |
| 23 | Fn_tan | 00196200 | FUN_00196200 | 1 | 4 | 22 | 23_Fn_tan.c |
| 24 | Fn_sinx | 00196180 | FUN_00196180 | 2 | 4 | 15 | 24_Fn_sinx.c |
| 25 | Fn_cosx | 00196100 | FUN_00196100 | 2 | 4 | 15 | 25_Fn_cosx.c |
| 26 | Fn_asin | 001960c0 | FUN_001960c0 | 1 | 4 | 13 | 26_Fn_asin.c |
| 27 | Fn_atan | 00196080 | FUN_00196080 | 2 | 4 | 13 | 27_Fn_atan.c |
| 28 | Fn_tri_shin | 00195fc0 | FUN_00195fc0 | 3 | 12 | 16 | 28_Fn_tri_shin.c |
| 29 | Fn_point_trans | 00196a40 | FUN_00196a40 | 3 | 12 | 10 | 29_Fn_point_trans.c |
| 2a | Fn_get_inner | 001969c0 | FUN_001969c0 | 6 | 4 | 12 | 2a_Fn_get_inner.c |
| 2b | Fn_get_2d_r | 00196900 | FUN_00196900 | 4 | 4 | 14 | 2b_Fn_get_2d_r.c |
| 2c | Fn_get_3d_r | 00196880 | FUN_00196880 | 6 | 4 | 14 | 2c_Fn_get_3d_r.c |
| 2d | Fn_get_2d_len | 00196840 | FUN_00196840 | 2 | 4 | 13 | 2d_Fn_get_2d_len.c |
| 2e | Fn_get_3d_len | 00196800 | FUN_00196800 | 3 | 4 | 13 | 2e_Fn_get_3d_len.c |
| 2f | Fn_get_2d_dir | 00196780 | FUN_00196780 | 4 | 4 | 13 | 2f_Fn_get_2d_dir.c |
| 30 | Fn_regular_vector | 001966c0 | FUN_001966c0 | 3 | 12 | 21 | 30_Fn_regular_vector.c |
| 31 | Fn_fcurve_lin | 00190ec0 | FUN_00190ec0 | 4 | 4 | 11 | 31_Fn_fcurve_lin.c |
| 32 | Fn_fcurve_spl | 00190e00 | FUN_00190e00 | 6 | 4 | 22 | 32_Fn_fcurve_spl.c |
| 33 | Fn_coli_dist | 00191000 | FUN_00191000 | 0 | 0 | 8 | 33_Fn_coli_dist.c |
| 34 | Fn_mov_matrix | 0018eb40 | FUN_0018eb40 | 1 | 4 | 60 | 34_Fn_mov_matrix.c |
| 35 | Fn_st_unit_mat | 0018eac0 | FUN_0018eac0 | 2 | 0 | 26 | 35_Fn_st_unit_mat.c |
| 36 | Fn_ld_unit_mat | 0018ea00 | FUN_0018ea00 | 2 | 0 | 17 | 36_Fn_ld_unit_mat.c |
| 37 | Fn_mul_unit_mat | 0018e940 | FUN_0018e940 | 2 | 0 | 11 | 37_Fn_mul_unit_mat.c |
| 38 | Fn_coli_set_ball_adrs | 00192580 | FUN_00192580 | 1 | 0 | 15 | 38_Fn_coli_set_ball_adrs.c |
| 39 | Fn_coli_point_trans | 00192500 | FUN_00192500 | 4 | 0 | 38 | 39_Fn_coli_point_trans.c |
| 3a | Fn_area_table_gen | 00191c80 | FUN_00191c80 | 4 | 0 | 207 | 3a_Fn_area_table_gen.c |
| 3b | Fn_calc_coli_flag | 001916c0 | FUN_001916c0 | 7 | 16 | 157 | 3b_Fn_calc_coli_flag.c |
| 3c | Fn_coli_sink | 00190fc0 | FUN_00190fc0 | 0 | 0 | 8 | 3c_Fn_coli_sink.c |
| 3d | Fn_coli_trans_mat | 0018e800 | FUN_0018e800 | 6 | 0 | 37 | 3d_Fn_coli_trans_mat.c |
| 3e | Fn_coli_trans_xz | 00191100 | FUN_00191100 | 5 | 0 | 26 | 3e_Fn_coli_trans_xz.c |
| 3f | Fn_zyx_rot | 0018f180 | FUN_0018f180 | 3 | 4 | 16 | 3f_Fn_zyx_rot.c |
| 40 | Fn_calc_unit | 0018e7c0 | FUN_0018e7c0 | 0 | 0 | 8 | 40_Fn_calc_unit.c |
| 41 | Fn_kage_leave_x_axis | 0018e780 | FUN_0018e780 | 0 | 0 | 23 | 41_Fn_kage_leave_x_axis.c |
| 42 | Fn_kage_leave_z_axis | 0018e700 | FUN_0018e700 | 0 | 0 | 23 | 42_Fn_kage_leave_z_axis.c |
| 43 | Fn_get_matrix_inner | 0018e680 | FUN_0018e680 | 1 | 0 | 25 | 43_Fn_get_matrix_inner.c |
| 44 | Fn_load_matrix_inner | 0018e600 | FUN_0018e600 | 1 | 0 | 16 | 44_Fn_load_matrix_inner.c |
| 45 | Fn_mul_matrix_inner | 0018e5c0 | FUN_0018e5c0 | 1 | 0 | 10 | 45_Fn_mul_matrix_inner.c |
| 46 | Fn_mul_matrix_inner_rev | 0018e580 | FUN_0018e580 | 1 | 0 | 10 | 46_Fn_mul_matrix_inner_rev.c |
| 47 | Fn_mul_matrix_rev | 0018e480 | FUN_0018e480 | 12 | 0 | 27 | 47_Fn_mul_matrix_rev.c |
| 48 | Fn_read_ram | 0018e440 | FUN_0018e440 | 1 | 4 | 10 | 48_Fn_read_ram.c |
| 49 | Fn_write_ram | 0018e400 | FUN_0018e400 | 2 | 0 | 10 | 49_Fn_write_ram.c |
| 4a | Fn_osage | 00194fc0 | FUN_00194fc0 | 1 | 0 | 23 | 4a_Fn_osage.c |
| 4b | Fn_ken2 | 00193c00 | FUN_00193c00 | 0 | 0 | 9 | 4b_Fn_ken2.c |
| 4c | Fn_ken3 | 00193bc0 | FUN_00193bc0 | 0 | 0 | 9 | 4c_Fn_ken3.c |
| 4d | Fn_ken4 | 00193b80 | FUN_00193b80 | 0 | 0 | 9 | 4d_Fn_ken4.c |
| 4e | Fn_ken5 | 00193b40 | FUN_00193b40 | 0 | 0 | 9 | 4e_Fn_ken5.c |
| 4f | Fn_base_zy | 00190c80 | FUN_00190c80 | 0 | 0 | 8 | 4f_Fn_base_zy.c |
| 50 | Fn_base_yz | 00190c40 | FUN_00190c40 | 0 | 0 | 8 | 50_Fn_base_yz.c |
| 51 | Fn_get_glo_ang | 00190a00 | FUN_00190a00 | 0 | 12 | 36 | 51_Fn_get_glo_ang.c |
| 52 | Fn_base_zyx_ang | 00190c00 | FUN_00190c00 | 0 | 0 | 8 | 52_Fn_base_zyx_ang.c |
| 53 | Fn_base_zyx | 00190bc0 | FUN_00190bc0 | 0 | 0 | 8 | 53_Fn_base_zyx.c |
| 54 | Fn_get_sm_ang_f | 00190ac0 | FUN_00190ac0 | 9 | 12 | 22 | 54_Fn_get_sm_ang_f.c |
| 55 | Fn_get_sm_ang_r | 00190980 | FUN_00190980 | 9 | 12 | 22 | 55_Fn_get_sm_ang_r.c |
| 56 | Fn_get_x_axis | 0018ee80 | FUN_0018ee80 | 0 | 12 | 14 | 56_Fn_get_x_axis.c |
| 57 | Fn_get_y_axis | 0018ee40 | FUN_0018ee40 | 0 | 12 | 14 | 57_Fn_get_y_axis.c |
| 58 | Fn_get_z_axis | 0018ee00 | FUN_0018ee00 | 0 | 12 | 14 | 58_Fn_get_z_axis.c |
| 59 | Fn_get_inner_2d | 00196980 | FUN_00196980 | 4 | 4 | 10 | 59_Fn_get_inner_2d.c |
| 5a | Fn_regular_vector_2d | 00196640 | FUN_00196640 | 2 | 8 | 18 | 5a_Fn_regular_vector_2d.c |
| 5b | Fn_rot_2d | 001965c0 | FUN_001965c0 | 3 | 8 | 19 | 5b_Fn_rot_2d.c |
| 5c | Fn_add3 | 00196540 | FUN_00196540 | 6 | 12 | 21 | 5c_Fn_add3.c |
| 5d | Fn_sub3 | 001964c0 | FUN_001964c0 | 6 | 12 | 21 | 5d_Fn_sub3.c |
| 5e | Fn_mul3 | 00196440 | FUN_00196440 | 4 | 12 | 19 | 5e_Fn_mul3.c |
| 5f | Fn_div3 | 00196400 | FUN_00196400 | 0 | 0 | 8 | 5f_Fn_div3.c |
| 60 | Fn_calc_unit_2 | 00190b80 | FUN_00190b80 | 0 | 0 | 8 | 60_Fn_calc_unit_2.c |
| 61 | Fn_calc_unit_1 | 00190b40 | FUN_00190b40 | 0 | 0 | 8 | 61_Fn_calc_unit_1.c |
| 62 | Fn_calc_unit_hara | 001905c0 | FUN_001905c0 | 9 | 0 | 22 | 62_Fn_calc_unit_hara.c |
| 63 | Fn_get_loc_pos | 001904c0 | FUN_001904c0 | 7 | 12 | 30 | 63_Fn_get_loc_pos.c |
| 64 | Fn_2d_coli_put | 00193b00 | FUN_00193b00 | 0 | 0 | 8 | 64_Fn_2d_coli_put.c |
| 65 | Fn_2d_coli_coli | 00193ac0 | FUN_00193ac0 | 0 | 0 | 8 | 65_Fn_2d_coli_coli.c |
| 66 | Fn_2d_coli_get | 00193a80 | FUN_00193a80 | 0 | 0 | 8 | 66_Fn_2d_coli_get.c |
| 67 | Fn_st_glb_mat | 0018e380 | FUN_0018e380 | 1 | 0 | 59 | 67_Fn_st_glb_mat.c |
| 68 | Fn_ld_glb_mat | 0018e300 | FUN_0018e300 | 1 | 0 | 41 | 68_Fn_ld_glb_mat.c |
| 69 | Fn_mul_mot_yrot | 001903c0 | FUN_001903c0 | 2 | 0 | 65 | 69_Fn_mul_mot_yrot.c |
| 6a | Fn_glo_to_loc | 00196340 | FUN_00196340 | 3 | 12 | 53 | 6a_Fn_glo_to_loc.c |
| 6b | Fn_calc_unit_2_fast | 0018ffc0 | FUN_0018ffc0 | 17 | 4 | 314 | 6b_Fn_calc_unit_2_fast.c |
| 6c | Fn_x_rot_e | 0018e2c0 | FUN_0018e2c0 | 0 | 0 | 8 | 6c_Fn_x_rot_e.c |
| 6d | Fn_y_rot_e | 0018e280 | FUN_0018e280 | 0 | 0 | 8 | 6d_Fn_y_rot_e.c |
| 6e | Fn_z_rot_e | 0018e240 | FUN_0018e240 | 0 | 0 | 8 | 6e_Fn_z_rot_e.c |
| 6f | Fn_trans_e | 0018e200 | FUN_0018e200 | 0 | 0 | 8 | 6f_Fn_trans_e.c |
| 70 | Fn_area_coli | 00192bc0 | FUN_00192bc0 | 5 | 88 | 289 | 70_Fn_area_coli.c |
| 71 | Fn_ball_to_unit | 00190f40 | FUN_00190f40 | 0 | 0 | 8 | 71_Fn_ball_to_unit.c |
| 72 | Fn_outside_ball | 001925c0 | FUN_001925c0 | 3 | 4 | 38 | 72_Fn_outside_ball.c |
| 73 | Fn_kage_mat | 001926c0 | FUN_001926c0 | 2 | 0 | 65 | 73_Fn_kage_mat.c |
| 74 | Fn_kage_poly | 001928c0 | FUN_001928c0 | 7 | 0 | 33 | 74_Fn_kage_poly.c |
| 75 | Fn_kage_flag | 00192980 | FUN_00192980 | 6 | 8 | 76 | 75_Fn_kage_flag.c |
| 76 | Fn_get_glo_ang_zyx | 00190a80 | FUN_00190a80 | 0 | 0 | 8 | 76_Fn_get_glo_ang_zyx.c |
| 77 | Fn_parts_oidasi | 00193600 | FUN_00193600 | 4 | 36 | 29 | 77_Fn_parts_oidasi.c |
| 78 | Fn_put_poly | 00193700 | FUN_00193700 | 8 | 8 | 79 | 78_Fn_put_poly.c |
| 79 | Fn_ziku_rot | 00193840 | FUN_00193840 | 5 | 0 | 37 | 79_Fn_ziku_rot.c |
| 7a | Fn_mul_matrix3 | 0018efc0 | FUN_0018efc0 | 9 | 0 | 29 | 7a_Fn_mul_matrix3.c |
| 7b | Fn_scrn_clip | 00190f80 | FUN_00190f80 | 0 | 0 | 8 | 7b_Fn_scrn_clip.c |
| 7c | Fn_load_inner_3x3 | 0018ed40 | FUN_0018ed40 | 2 | 0 | 21 | 7c_Fn_load_inner_3x3.c |
| 7d | Fn_store_inner_3x3 | 0018ec80 | FUN_0018ec80 | 2 | 0 | 22 | 7d_Fn_store_inner_3x3.c |
| 7e | Fn_mul_matrix_inner3 | 0018f040 | FUN_0018f040 | 2 | 0 | 18 | 7e_Fn_mul_matrix_inner3.c |

## Helpers (`helpers/`)

Functions the above call, followed up to three calls deep. Runtime calls
(`i960*`, `sysMem*`, libc, CRI and Sony libraries) are left out.

| native | name | bytes | first caller | depth |
|---|---|---:|---|---:|
| 001951c0 | cprSubScaleCurMat | 20 | Fn_scale | 1 |
| 00195e00 | cprSubSqrtR | 32 | Fn_sqr_r | 1 |
| 00195dc0 | FUN_00195dc0 | 52 | Fn_sqr | 1 |
| 00195f80 | cprSinf | 28 | Fn_sin | 1 |
| 00195f40 | cprCosf | 36 | Fn_cos | 1 |
| 00115140 | tanf | 120 | Fn_tan | 1 |
| 001956c0 | FUN_001956c0 | 312 | Fn_asin | 1 |
| 001151c0 | asinf | 20 | Fn_asin | 2 |
| 00195c40 | FUN_00195c40 | 248 | Fn_atan | 1 |
| 00195800 | FUN_00195800 | 1048 | Fn_atan | 2 |
| 00195600 | FUN_00195600 | 48 | Fn_get_3d_r | 1 |
| 001955c0 | FUN_001955c0 | 44 | Fn_get_2d_len | 1 |
| 00195580 | FUN_00195580 | 40 | Fn_regular_vector | 1 |
| 00191040 | FUN_00191040 | 184 | Fn_coli_trans_xz | 1 |
| 00195440 | cprSubMultiCurMatrix44Rev | 72 | Fn_mul_matrix_inner_rev | 1 |
| 00195540 | FUN_00195540 | 36 | Fn_regular_vector_2d | 1 |
| 00195f00 | FUN_00195f00 | 56 | Fn_rot_2d | 1 |
| 0018f480 | FUN_0018f480 | 72 | Fn_kage_mat | 1 |
| 0018f580 | FUN_0018f580 | 80 | Fn_kage_mat | 1 |
| 00193400 | FUN_00193400 | 496 | Fn_parts_oidasi | 1 |
