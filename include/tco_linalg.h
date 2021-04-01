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

#endif /* _TCO_LINALG_H_ */
