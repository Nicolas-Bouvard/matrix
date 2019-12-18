/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_transpose
*/

#include "matrix_system.h"

matrix_t *matrix_transpose(matrix_t *matrix)
{
    matrix_t *res = matrix_create(matrix->col, matrix->row);

    for (size_t i = 0; i < matrix->row; i++)
        for (size_t j = 0; j < matrix->col; j++)
            res->matrix[j][i] = matrix->matrix[i][j];
    return (res);
}