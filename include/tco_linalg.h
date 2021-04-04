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
 * @return 0 on success and -1 on failure.
 */
int matf_mul_matf(matf_t const *const a, matf_t const *const b, matf_t *const c);

/**
 * @brief Get length of a vector.
 * @param vec The vector to get length of.
 * @param mag Where the length will be written.
 * @return 0 on success and -1 on failure.
 */
int vec2_length(vec2_t const *const vec, float *const len);

/**
 * @brief Get inverse length of a vector.
 * @param vec The vector to get inverse of length of.
 * @param mag Where the inverse length will be written.
 * @return 0 on success and -1 on failure.
 */
int vec2_inv_length(vec2_t const *const vec, float *const inv_len);

/**
 * @brief Subtract vector @p b from vector @p a to get vector @p c .
 * @param a First operand.
 * @param b Second operand.
 * @param c Outcome of a - b.
 * @return 0 on success and -1 on failure.
 */
int vec2_sub_vec2(vec2_t const *const a, vec2_t const *const b, vec2_t *const c);

/**
 * @brief Add vector @p a to @p b to get vector @p c .
 * @param a First operand.
 * @param b Second operand.
 * @param c Outcome of a + b.
 * @return 0 on success and -1 on failure.
 */
int vec2_add_vec2(vec2_t const *const a, vec2_t const *const b, vec2_t *const c);

#endif /* _TCO_LINALG_H_ */
