/*
** EPITECH PROJECT, 2019
** libneural
** File description:
** matrix_sum_vec
*/

#include "matrix_system.h"

double matrix_sum_vect(matrix_t *matrix)
{
    double result = 0;

    if (matrix->col != 1 && matrix->row != 1)
        return (0);
    for (size_t i = 0; i < matrix->row; i++)
        for (size_t j = 0; j < matrix->col; j++)
            result += matrix->matrix[i][j];
    return (result);
}