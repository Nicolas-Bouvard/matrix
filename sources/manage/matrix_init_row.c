/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_init_row
*/

#include "matrix_system.h"

matrix_t *matrix_init_row(matrix_t *matrix, size_t index, double value)
{
    matrix_t *res = NULL;

    if (!matrix || index > matrix->row)
        return (matrix);
    res = matrix_copy(matrix);
    for (size_t i = 0; i < matrix->col; i++)
        res->matrix[index][i] = value;
    return (res);
}