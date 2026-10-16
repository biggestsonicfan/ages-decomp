/* helper cprSubLength3DR @ 0019d500, called (depth 1) from cprVecRegularVector */

float cprSubLength3DR(float param_1,float param_2,float param_3)

{
  return 1.0 / SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
}

