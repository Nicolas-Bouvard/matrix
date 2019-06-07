/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_rm_col
*/

#include "matric_system.h"

matrix_t *matrix_rm_col(matrix_t *matrix, size_t index)
{
    matrix_t *res = NULL;
    size_t i = 0;
    size_t j = 0;

    if (!matrix || index >= matrix->col)
        return (NULL);
    res = matrix_copy(matrix);
    for (; i < matrix->row; i++)
        for (j = index; j < matrix->col; j++)
            res->matrix[i][j] = res->matrix[i][j + 1];
    res->col--;
    return (res);
}