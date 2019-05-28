/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_scalar_muliplication
*/

#include "matric_system.h"

void matrix_scalar_mult(matrix_t *matrix, double nb)
{
    if (!matrix)
        return;
    for (size_t i = 0; i < matrix->row; i++)
        for (size_t j = 0; j < matrix->col; j++)
            matrix->matrix[i][j] *= nb;
}

void matrix_scalar_div(matrix_t *matrix, double nb)
{
    matrix_scalar_mult(matrix, 1 / nb);
}