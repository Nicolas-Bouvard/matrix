/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_append_row
*/

#include "matric_system.h"

matrix_t *matrix_insert_row(matrix_t *matrix, size_t index, double value)
{
    matrix_t *res = NULL;
    size_t i = 0;

    if (!matrix || index > matrix->row)
        return (NULL);
    res = matrix_create(matrix->row + 1, matrix->col);
    for (i = 0; i < index; i++)
        for (size_t j = 0; j < matrix->col; j++)
            res->matrix[i][j] = matrix->matrix[i][j];
    for (size_t j = 0; j < matrix->col; j++)
        res->matrix[i][j] = value;
    for (i = i + 1; i < res->row; i++)
        for (size_t j = 0; j < matrix->col; j++)
            res->matrix[i][j] = matrix->matrix[i - 1][j];
    return (res);
}