/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_copy
*/

#include "matrix_system.h"

matrix_t *matrix_copy(matrix_t *matrix)
{
    matrix_t *res = NULL;

    if (!matrix)
        return (NULL);
    res = matrix_create(matrix->row, matrix->col);
    res->col = matrix->col;
    res->row = matrix->row;
    for (size_t i = 0; i < matrix->row; i++)
        for (size_t j = 0; j < matrix->col; j++)
            res->matrix[i][j] = matrix->matrix[i][j];
    return (matrix);
}