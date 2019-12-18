/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_append_col
*/

#include "matrix_system.h"

matrix_t *matrix_insert_col_at(matrix_t *matrix, size_t index, double value)
{
    matrix_t *res = NULL;
    size_t j = 0;

    if (!matrix || index > matrix->col)
        return (NULL);
    res = matrix_create(matrix->row, matrix->col + 1);
    for (; j < index; j++)
        for (size_t i = 0; i < matrix->row; i++)
            res->matrix[i][j] = matrix->matrix[i][j];
    for (size_t i = 0; i < matrix->row; i++)
        res->matrix[i][j] = value;
    for (j++; j < res->col; j++)
        for (size_t i = 0; i < matrix->row; i++)
            res->matrix[i][j] = matrix->matrix[i][j - 1];
    return (res);
}