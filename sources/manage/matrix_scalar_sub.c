/*
** EPITECH PROJECT, 2019
** libneural
** File description:
** matrix_scalar_sub
*/

#include "matrix_system.h"

matrix_t *matrix_scalar_sub_value(double value, matrix_t *matrix)
{
    matrix_t *result = matrix_copy(matrix);
    
    for (size_t i = 0; i < matrix->row; i++)
        for (size_t j = 0; j < matrix->col; j++)
            result->matrix[i][j] -= value;
    return (result);
}

matrix_t *matrix_scalar_sub(matrix_t *m1, matrix_t *m2)
{
    matrix_t *result = NULL;
    
    if (m1->row != m2->row || m1->col != m2->col) {
        printf("matrix_scalar_sub(): Matrix's size is different.");
        return NULL;
    }
    result = matrix_copy(m1);
    for (size_t i = 0; i < m1->row; i++)
        for (size_t j = 0; j < m2->col; j++)
            result->matrix[i][j] -= m2->matrix[i][j];
    return (result);
}