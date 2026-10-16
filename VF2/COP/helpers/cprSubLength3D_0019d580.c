/* helper cprSubLength3D @ 0019d580, called (depth 1) from cprVecGet3dR */

float cprSubLength3D(float param_1,float param_2,float param_3)

{
  return SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
}

