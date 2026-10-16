# Virtua Fighter 2 (SLPM-62547): the Model 2 coprocessor (COP) commands

| op | firmware name | native | native name | args | reply bytes | lines | file |
|---|---|---|---|---:|---:|---:|---|
| 00 | Fn_initialize | 0019a080 | cprMtxInitialize | 0 | 0 | 9 | 00_Fn_initialize.c |
| 01 | Fn_push_matrix | 0019a040 | cprMtxPushMatrix | 0 | 0 | 25 | 01_Fn_push_matrix.c |
| 02 | Fn_pop_matrix | 0019a000 | cprMtxPopMatrix | 0 | 0 | 16 | 02_Fn_pop_matrix.c |
| 03 | Fn_base_matrix | 00199fc0 | cprMtxBaseMatrix | 0 | 0 | 15 | 03_Fn_base_matrix.c |
| 04 | Fn_load_matrix | 00199f40 | cprMtxLoadMatrix | 12 | 0 | 29 | 04_Fn_load_matrix.c |
| 05 | Fn_get_matrix | 00199f00 | cprMtxGetMatrix | 0 | 48 | 25 | 05_Fn_get_matrix.c |
| 06 | Fn_trans | 00199ec0 | cprMtxTrans | 3 | 0 | 20 | 06_Fn_trans.c |
| 07 | Fn_scale | 00199e80 | cprMtxScale | 3 | 0 | 17 | 07_Fn_scale.c |
| 08 | Fn_x_rot | 00199e40 | cprMtxXrot | 1 | 0 | 9 | 08_Fn_x_rot.c |
| 09 | Fn_y_rot | 00199e00 | cprMtxYrot | 1 | 0 | 9 | 09_Fn_y_rot.c |
| 0a | Fn_z_rot | 00199dc0 | cprMtxZrot | 1 | 0 | 9 | 0a_Fn_z_rot.c |
| 0b | Fn_mul_matrix | 00199d00 | cprMtxMulMatrix | 12 | 0 | 26 | 0b_Fn_mul_matrix.c |
| 0c | Fn_inv_matrix | 00199cc0 | cprMtxInvMatrix | 0 | 0 | 69 | 0c_Fn_inv_matrix.c |
| 0d | Fn_base_point | 00199c80 | cprMtxBasePoint | 0 | 0 | 11 | 0d_Fn_base_point.c |
| 0e | Fn_load_point | 00199c40 | cprMtxLoadPoint | 3 | 0 | 9 | 0e_Fn_load_point.c |
| 0f | Fn_get_point | 00199c00 | cprMtxGetPoint | 0 | 12 | 13 | 0f_Fn_get_point.c |
| 10 | Fn_base_3x3 | 00199bc0 | cprMtxBase3x3 | 0 | 0 | 14 | 10_Fn_base_3x3.c |
| 11 | Fn_load_3x3 | 00199b40 | cprMtxLoad3x3 | 9 | 0 | 24 | 11_Fn_load_3x3.c |
| 12 | Fn_get_3x3 | 00199a80 | cprMtxGet3x3 | 0 | 36 | 45 | 12_Fn_get_3x3.c |
| 13 | Fn_add | 0019a900 | cprMathAdd | 2 | 4 | 9 | 13_Fn_add.c |
| 14 | Fn_sub | 0019a8c0 | cprMathSub | 2 | 4 | 9 | 14_Fn_sub.c |
| 15 | Fn_mul | 0019a880 | cprMathMul | 2 | 4 | 9 | 15_Fn_mul.c |
| 16 | Fn_div | 0019a840 | cprMathDiv | 2 | 4 | 9 | 16_Fn_div.c |
| 17 | Fn_cvtws | 0019a800 | cprMathCvtws | 1 | 4 | 9 | 17_Fn_cvtws.c |
| 18 | Fn_cvtsw | 0019a7c0 | cprMathCvtsw | 1 | 4 | 9 | 18_Fn_cvtsw.c |
| 19 | Fn_sqr_r | 0019a780 | cprMathSqrR | 1 | 4 | 12 | 19_Fn_sqr_r.c |
| 1a | Fn_sqr | 0019a740 | cprMathSqr | 1 | 4 | 12 | 1a_Fn_sqr.c |
| 1b | Fn_put_c | 0019a700 | cprMathPutC | 1 | 0 | 9 | 1b_Fn_put_c.c |
| 1c | Fn_get_c | 0019a6c0 | cprMathGetC | 0 | 4 | 9 | 1c_Fn_get_c.c |
| 1d | Fn_add_c | 0019a680 | cprMathAddC | 1 | 0 | 9 | 1d_Fn_add_c.c |
| 1e | Fn_sub_c | 0019a640 | cprMathSubC | 1 | 0 | 9 | 1e_Fn_sub_c.c |
| 1f | Fn_mul_c | 0019a600 | cprMathMulC | 1 | 0 | 9 | 1f_Fn_mul_c.c |
| 20 | Fn_div_c | 0019a5c0 | cprMathDivC | 1 | 0 | 9 | 20_Fn_div_c.c |
| 21 | Fn_sin | 0019e000 | cprTriSin | 1 | 4 | 12 | 21_Fn_sin.c |
| 22 | Fn_cos | 0019dfc0 | cprTriCos | 1 | 4 | 12 | 22_Fn_cos.c |
| 23 | Fn_tan | 0019df00 | cprTriTan | 1 | 4 | 21 | 23_Fn_tan.c |
| 24 | Fn_sinx | 0019dec0 | cprTriSinx | 2 | 4 | 14 | 24_Fn_sinx.c |
| 25 | Fn_cosx | 0019de80 | cprTriCosx | 2 | 4 | 14 | 25_Fn_cosx.c |
| 26 | Fn_asin | 0019de40 | cprTriAsin | 1 | 4 | 12 | 26_Fn_asin.c |
| 27 | Fn_atan | 0019de00 | cprTriAtan | 2 | 4 | 12 | 27_Fn_atan.c |
| 28 | Fn_tri_shin | 0019dd40 | cprTriTriShin | 3 | 12 | 15 | 28_Fn_tri_shin.c |
| 29 | Fn_point_trans | 0019e740 | cprVecPointTrans | 3 | 12 | 9 | 29_Fn_point_trans.c |
| 2a | Fn_get_inner | 0019e6c0 | cprVecGetInner | 6 | 4 | 11 | 2a_Fn_get_inner.c |
| 2b | Fn_get_2d_r | 0019e600 | cprVecGet2dR | 4 | 4 | 14 | 2b_Fn_get_2d_r.c |
| 2c | Fn_get_3d_r | 0019e580 | cprVecGet3dR | 6 | 4 | 13 | 2c_Fn_get_3d_r.c |
| 2d | Fn_get_2d_len | 0019e540 | cprVecGet2dLen | 2 | 4 | 12 | 2d_Fn_get_2d_len.c |
| 2e | Fn_get_3d_len | 0019e500 | cprVecGet3dLen | 3 | 4 | 12 | 2e_Fn_get_3d_len.c |
| 2f | Fn_get_2d_dir | 0019e4c0 | cprVecGet2dDir | 4 | 4 | 12 | 2f_Fn_get_2d_dir.c |
| 30 | Fn_regular_vector | 0019e400 | cprVecRegularVector | 3 | 12 | 20 | 30_Fn_regular_vector.c |
| 31 | Fn_fcurve_lin | 0019b700 | cprMotFcurveLin | 4 | 4 | 11 | 31_Fn_fcurve_lin.c |
| 32 | Fn_fcurve_spl | 0019b640 | cprMotFcurveSpl | 6 | 4 | 22 | 32_Fn_fcurve_spl.c |
| 33 | Fn_coli_dist | 0019c540 | cprCliColiDist | 12 | 4 | 24 | 33_Fn_coli_dist.c |
| 34 | Fn_mov_matrix | 00199a00 | cprMtxMovMatrix | 1 | 4 | 36 | 34_Fn_mov_matrix.c |
| 35 | Fn_st_unit_mat | 00199980 | cprMtxStUnitMat | 2 | 0 | 29 | 35_Fn_st_unit_mat.c |
| 36 | Fn_ld_unit_mat | 00199900 | cprMtxLdUnitMat | 2 | 0 | 20 | 36_Fn_ld_unit_mat.c |
| 37 | Fn_mul_unit_mat | 00199880 | cprMtxMulUnitMat | 2 | 0 | 15 | 37_Fn_mul_unit_mat.c |
| 38 | Fn_coli_set_ball_adrs | 0019c280 | cprCliColiSetBallAdrs | 1 | 0 | 14 | 38_Fn_coli_set_ball_adrs.c |
| 39 | Fn_coli_point_trans | 0019c200 | cprCliColiPointTrans | 3 | 0 | 33 | 39_Fn_coli_point_trans.c |
| 3a | Fn_area_table_gen | 0019bdc0 | cprCliAreaTableGen | 0 | 0 | 200 | 3a_Fn_area_table_gen.c |
| 3b | Fn_calc_coli_flag | 0019b9c0 | cprCliCalcColiFlag | 5 | 16 | 223 | 3b_Fn_calc_coli_flag.c |
| 3c | Fn_coli_sink | 0019b980 | cprCliColiSink | 0 | 0 | 8 | 3c_Fn_coli_sink.c |
| 3d | Fn_coli_trans_mat | 00199780 | cprMtxColiTransMat | 6 | 0 | 50 | 3d_Fn_coli_trans_mat.c |
| 3e | Fn_coli_trans_xz | 0019b880 | cprCliColiTransXZ | 5 | 0 | 41 | 3e_Fn_coli_trans_xz.c |
| 3f | Fn_zyx_rot | 00199d80 | cprMtxZYXrot | 3 | 0 | 14 | 3f_Fn_zyx_rot.c |
| 40 | Fn_calc_unit | 00199740 | cprMtxCalcUnit | 0 | 0 | 8 | 40_Fn_calc_unit.c |
| 41 | Fn_kage_leave_x_axis | 00199700 | cprMtxKageLeaveXAxis | 0 | 0 | 22 | 41_Fn_kage_leave_x_axis.c |
| 42 | Fn_kage_leave_z_axis | 001996c0 | cprMtxKageLeaveZAxis | 0 | 0 | 22 | 42_Fn_kage_leave_z_axis.c |
| 43 | Fn_get_matrix_inner | 00199680 | cprMtxGetMatrixInner | 1 | 0 | 24 | 43_Fn_get_matrix_inner.c |
| 44 | Fn_load_matrix_inner | 00199640 | cprMtxLoadMatrixInner | 1 | 0 | 15 | 44_Fn_load_matrix_inner.c |
| 45 | Fn_mul_matrix_inner | 00199600 | cprMtxMulMatrixInner | 1 | 0 | 9 | 45_Fn_mul_matrix_inner.c |
| 46 | Fn_mul_matrix_inner_rev | 001995c0 | cprMtxMulMatrixInnerRev | 1 | 0 | 9 | 46_Fn_mul_matrix_inner_rev.c |
| 47 | Fn_mul_matrix_rev | 00199540 | cprMtxMulMatrixRev | 12 | 0 | 26 | 47_Fn_mul_matrix_rev.c |
| 48 | Fn_read_ram | 00199500 | cprMtxReadRam | 1 | 4 | 9 | 48_Fn_read_ram.c |
| 49 | Fn_write_ram | 001994c0 | cprMtxWriteRam | 2 | 0 | 8 | 49_Fn_write_ram.c |
| 4a | Fn_osage | 0019cf40 | cprOsgOsage | 1 | 0 | 20 | 4a_Fn_osage.c |
| 4b | Fn_ken2 | 0019c7c0 | cprOsgKen2 | 0 | 0 | 8 | 4b_Fn_ken2.c |
| 4c | Fn_ken3 | 0019c780 | cprOsgKen3 | 0 | 0 | 8 | 4c_Fn_ken3.c |
| 4d | Fn_ken4 | 0019c740 | cprOsgKen4 | 0 | 0 | 8 | 4d_Fn_ken4.c |
| 4e | Fn_ken5 | 0019c700 | cprOsgKen5 | 0 | 0 | 8 | 4e_Fn_ken5.c |
| 4f | Fn_base_zy | 0019b400 | cprMotBaseZY | 2 | 0 | 29 | 4f_Fn_base_zy.c |
| 50 | Fn_base_yz | 0019b300 | cprMotBaseYZ | 2 | 0 | 29 | 50_Fn_base_yz.c |
| 51 | Fn_get_glo_ang | 0019b280 | cprMotGetGloAng | 0 | 12 | 35 | 51_Fn_get_glo_ang.c |
| 52 | Fn_base_zyx_ang | 0019b240 | cprMotBaseZYXAng | 3 | 0 | 9 | 52_Fn_base_zyx_ang.c |
| 53 | Fn_base_zyx | 0019b200 | cprMotBaseZYX | 3 | 0 | 14 | 53_Fn_base_zyx.c |
| 54 | Fn_get_sm_ang_f | 0019b140 | cprMotGetSmAngF | 9 | 12 | 47 | 54_Fn_get_sm_ang_f.c |
| 55 | Fn_get_sm_ang_r | 0019b080 | cprMotGetSmAngR | 9 | 12 | 47 | 55_Fn_get_sm_ang_r.c |
| 56 | Fn_get_x_axis | 00199480 | cprMtxGetXaxis | 0 | 12 | 13 | 56_Fn_get_x_axis.c |
| 57 | Fn_get_y_axis | 00199440 | cprMtxGetYaxis | 0 | 12 | 13 | 57_Fn_get_y_axis.c |
| 58 | Fn_get_z_axis | 00199400 | cprMtxGetZaxis | 0 | 12 | 13 | 58_Fn_get_z_axis.c |
| 59 | Fn_get_inner_2d | 0019e680 | cprVecGetInner2d | 4 | 4 | 9 | 59_Fn_get_inner_2d.c |
| 5a | Fn_regular_vector_2d | 0019e380 | cprVecRegularVector2d | 2 | 8 | 17 | 5a_Fn_regular_vector_2d.c |
| 5b | Fn_rot_2d | 0019e300 | cprVecRot2d | 3 | 8 | 18 | 5b_Fn_rot_2d.c |
| 5c | Fn_add3 | 0019e1c0 | cprVecAdd3 | 6 | 12 | 20 | 5c_Fn_add3.c |
| 5d | Fn_sub3 | 0019e140 | cprVecSub3 | 6 | 12 | 20 | 5d_Fn_sub3.c |
| 5e | Fn_mul3 | 0019e0c0 | cprVecMul3 | 4 | 12 | 18 | 5e_Fn_mul3.c |
| 5f | Fn_div3 | 0019e040 | cprVecDiv3 | 4 | 12 | 18 | 5f_Fn_div3.c |
| 60 | Fn_calc_unit_2 | 0019b040 | cprMotCalcUnit2 | 15 | 16 | 8 | 60_Fn_calc_unit_2.c |
| 61 | Fn_calc_unit_1 | 0019b000 | cprMotCalcUnit1 | 14 | 8 | 8 | 61_Fn_calc_unit_1.c |
| 62 | Fn_calc_unit_hara | 0019af80 | cprMotCalcUnitHara | 9 | 0 | 18 | 62_Fn_calc_unit_hara.c |
| 63 | Fn_get_loc_pos | 0019ae80 | cprMotGetLocPos | 7 | 12 | 29 | 63_Fn_get_loc_pos.c |
| 64 | Fn_2d_coli_put | 0019c6c0 | cprOsg2dColiPut | 2 | 0 | 13 | 64_Fn_2d_coli_put.c |
| 65 | Fn_2d_coli_coli | 0019c600 | cprOsg2dColiColi | 3 | 0 | 29 | 65_Fn_2d_coli_coli.c |
| 66 | Fn_2d_coli_get | 0019c5c0 | cprOsg2dColiGet | 0 | 8 | 10 | 66_Fn_2d_coli_get.c |
| 67 | Fn_st_glb_mat | 00199380 | cprMtxStGlbMat | 1 | 0 | 35 | 67_Fn_st_glb_mat.c |
| 68 | Fn_ld_glb_mat | 00199300 | cprMtxLdGlbMat | 1 | 0 | 40 | 68_Fn_ld_glb_mat.c |
| 69 | Fn_mul_mot_yrot | 0019ad80 | cprMotMulMotYRot | 2 | 0 | 64 | 69_Fn_mul_mot_yrot.c |
| 6a | Fn_glo_to_loc | 0019e240 | cprVecGloToLoc | 3 | 12 | 52 | 6a_Fn_glo_to_loc.c |
| 6b | Fn_calc_unit_2_fast | 0019a980 | cprMotCalcUnit2Fast | 17 | 4 | 228 | 6b_Fn_calc_unit_2_fast.c |
| 6c | Fn_x_rot_e | 001992c0 | cprMtxXrote | 0 | 0 | 13 | 6c_Fn_x_rot_e.c |
| 6d | Fn_y_rot_e | 00199280 | cprMtxYrote | 0 | 0 | 13 | 6d_Fn_y_rot_e.c |
| 6e | Fn_z_rot_e | 00199240 | cprMtxZrote | 0 | 0 | 13 | 6e_Fn_z_rot_e.c |
| 6f | Fn_trans_e | 00199180 | cprMtxTranse | 0 | 0 | 19 | 6f_Fn_trans_e.c |

## Helpers (`helpers/`)

Functions the above call, followed up to three calls deep. Runtime calls
(`i960*`, `sysMem*`, libc, CRI and Sony libraries) are left out.

| native | name | bytes | first caller | depth |
|---|---|---:|---|---:|
| 0019a100 | rfoMatrix44 | 280 | cprMtxGetMatrix | 1 |
| 0019d300 | cprSubRotateCurX | 92 | cprMtxXrot | 1 |
| 0019d280 | cprSubRotateCurY | 92 | cprMtxYrot | 1 |
| 0019d200 | cprSubRotateCurZ | 92 | cprMtxZrot | 1 |
| 0019d440 | cprSubMultiCurMatrix44 | 84 | cprMtxMulMatrix | 1 |
| 0019dc40 | cprSubSqrtR | 32 | cprMathSqrR | 1 |
| 0019dc00 | cprSubSqrt | 28 | cprMathSqr | 1 |
| 0019dd00 | cprSinf | 28 | cprTriSin | 1 |
| 0019dcc0 | cprCosf | 36 | cprTriCos | 1 |
| 00115040 | tanf | 120 | cprTriTan | 1 |
| 0019d5c0 | cprSubAsin | 316 | cprTriAsin | 1 |
| 001150c0 | asinf | 20 | cprTriAsin | 2 |
| 0019d700 | cprSubAtan | 1204 | cprTriAtan | 1 |
| 0019d1c0 | cprSubTransCur | 28 | cprVecPointTrans | 1 |
| 0019d580 | cprSubLength3D | 36 | cprVecGet3dR | 1 |
| 0019d540 | cprSubLength2D | 28 | cprVecGet2dLen | 1 |
| 0019d500 | cprSubLength3DR | 44 | cprVecRegularVector | 1 |
| 0019c2c0 | CalcDist2Frame | 588 | cprCliColiDist | 1 |
| 0019b740 | BallTrans | 284 | cprCliColiTransXZ | 1 |
| 0019d3c0 | cprSubMultiCurMatrix44Rev | 72 | cprMtxMulMatrixInnerRev | 1 |
| 0019dc80 | cprSinCosf | 56 | cprMotBaseZY | 1 |
| 0019b500 | RotBaseZYX | 320 | cprMotBaseZYXAng | 1 |
| 0019d380 | cprSubBaseCurMatrix | 20 | cprMotGetSmAngF | 1 |
| 0019d4c0 | cprSubLength2DR | 36 | cprVecRegularVector2d | 1 |
| 0019d180 | cprSubTransCurMat | 24 | cprMotCalcUnit2Fast | 1 |
