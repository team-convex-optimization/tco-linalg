#ifndef _TCO_LINALG_H_
#define _TCO_LINALG_H_

#include <stdint.h>

typedef struct point2
{
    uint16_t x;
    uint16_t y;
} point2_t;

typedef struct vec2
{
    int16_t x;
    int16_t y;
} vec2_t;

typedef struct line2
{
    point2_t orig;
    vec2_t dir;
} line2_t;

typedef struct segment2
{
    point2_t start;
    point2_t end;
} segment2_t;

typedef struct matf
{
    float *data; /* In row-major order */
    uint16_t rows;
    uint16_t cols;
} matf_t;

/**
 * @brief Applies the naive schoolbook algorithm which runs with time complexity of O(n^3).
 * @param a Matrix A.
 * @param b Matrix B.
 * @param c Matrix AB. This gets overwritten by this function.
 * @return 0 on succes and -1 on failure.
 */
int matf_mul_matf(matf_t const *const a, matf_t const *const b, matf_t *const c);

#endif /* _TCO_LINALG_H_ */
