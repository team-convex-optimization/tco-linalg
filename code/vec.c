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

int vec2_sub_vec2(vec2_t const *const a, vec2_t const *const b, vec2_t *const c)
{
    c->x = a->x - b->x;
    c->y = a->y - b->y;
    return 0;
}

int vec2_add_vec2(vec2_t const *const a, vec2_t const *const b, vec2_t *const c)
{
    c->x = a->x + b->x;
    c->y = a->y + b->y;
    return 0;
}
