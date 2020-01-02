/*
** EPITECH PROJECT, 2019
** libneural
** File description:
** matrix_sigmoid
*/

#include "matrix_system.h"
#include <math.h>

double get_sigmoid(double value)
{
    return (1. / (1. + exp(- value)));
}

matrix_t *matrix_sigmoid(matrix_t *matrix)
{
    matrix_t *result = matrix_create(matrix->row, matrix->col);

    for (size_t i = 0; i < result->row; i++)
        for (size_t j = 0; j < result->col; j++)
            result->matrix[i][j] = get_sigmoid(result->matrix[i][j]);
    return (result);
}