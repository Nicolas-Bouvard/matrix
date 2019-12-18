/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_get_cols
*/

#include "matrix_system.h"

matrix_t *matrix_get_cols(matrix_t *matrix, size_t start, size_t end)
{
    matrix_t *res = NULL;

    if (!matrix || start > end || end >= matrix->col)
        return (NULL);
    res = matrix_create(matrix->row, end - start + 1);
    for (size_t i = 0; i < res->row; i++)
        for (size_t j = 0; j < res->col; j++)
            res->matrix[i][j] = matrix->matrix[i][j + start];
    return (res);
}