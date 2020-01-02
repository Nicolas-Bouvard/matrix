/*
** EPITECH PROJECT, 2019
** libneural
** File description:
** matrix_scalar_div
*/

#include "matrix_system.h"
#include <math.h>

double get_good_inf(double value)
{
    if (value >= 0)
        return (INFINITY);
    return (-INFINITY);
}

matrix_t *matrix_set_inf(matrix_t *matrix)
{
    matrix_t *result = matrix_create(matrix->row, matrix->col);

    for (size_t i = 0; i < matrix->row; i++)
        for (size_t j = 0; j < matrix->col; j++)
            result->matrix[i][j] = get_good_inf(result->matrix[i][j]);
    return (result);
}

matrix_t *matrix_scalar_div_value(matrix_t *matrix, double value)
{
    matrix_t *result = NULL;
    
    if (value == 0) {
        printf("matrix_scalar_div(): Trying to devide by 0");
        return (matrix_set_inf(matrix));
    }
    result = matrix_copy(matrix);
    for (size_t i = 0; i < matrix->row; i++)
        for (size_t j = 0; j < matrix->col; j++)
            result->matrix[i][j] /= value;
    return (result);
}

matrix_t *matrix_scalar_div(matrix_t *m1, matrix_t *m2)
{
    matrix_t *result = NULL;
    
    if (m1->row != m2->row || m1->col != m2->col) {
        printf("matrix_scalar_sub(): Matrix's size is different.");
        return NULL;
    }
    result = matrix_copy(m1);
    for (size_t i = 0; i < m1->row; i++) {
        for (size_t j = 0; j < m2->col; j++) {
            result->matrix[i][j] = m2->matrix[i][j] ? result->matrix[i][j]
            / m2->matrix[i][j] : get_good_inf(result->matrix[i][j]);
        }
    }
    return (result);
}