#include "tco_linalg.h"

/**
 * @brief Applies the naive schoolbook algorithm which runs with time complexity of O(n^3).
 * @param a Matrix A.
 * @param b Matrix B.
 * @param c Matrix AB. This gets overwritten by this function.
 * @return 0 on succes and -1 on failure.
 */
int matf_mul_matf(matf_t *const a, matf_t *const b, matf_t *const c)
{
    if (a->cols != b->rows)
    {
        return -1; /* Not a valid operation. */
    }

    c->rows = a->rows;
    c->cols = b->cols;

    for (uint16_t a_row_idx = 0; a_row_idx < a->cols; a_row_idx++)
    {
        for (uint16_t b_col_idx = 0; b_col_idx < b->cols; b_col_idx++)
        {
            for (uint16_t a_col_idx = 0; a_col_idx < a->cols; a_col_idx++)
            {
                c->data[(a_row_idx * c->cols) + b_col_idx] += b->data[(a_col_idx * b->cols) + b_col_idx] * a->data[(a_row_idx * a->cols) + a_col_idx];
            }
        }
    }
    return 0;
}
