#include <math.h>

#include "tco_linalg.h"

int vec2_length(vec2_t const *const vec, float *const len)
{
    *len = sqrt(vec->x * vec->x + vec->y * vec->y);
    return 0;
}

int vec2_inv_length(vec2_t const *const vec, float *const inv_len)
{
    vec2_length(vec, inv_len);
    *inv_len = 1.0f / *inv_len;
    return 0;
}

int vec2_length_change(vec2_t *const vec, float const length_desired)
{
    float inv_len;
    vec2_inv_length(vec, &inv_len);
    vec->x = vec->x * length_desired * inv_len;
    vec->y = vec->y * length_desired * inv_len;
    return 0;
}
