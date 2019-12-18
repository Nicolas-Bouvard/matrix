/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_scalar_muliplication
*/

#include "matrix_system.h"

matrix_t *matrix_scalar_mult(matrix_t *matrix, double nb)
{
    matrix_t *res = NULL;

    if (!matrix)
        return (NULL);
    res = matrix_copy(matrix);
    for (size_t i = 0; i < res->row; i++)
        for (size_t j = 0; j < res->col; j++)
            res->matrix[i][j] *= nb;
    return (res);
}

double matrix_system_pow(double nb, double pow)
{
    double res = nb;

    for (size_t i = 1; i < pow; i++)
        res *= nb;
    return (res);
}

matrix_t *matrix_scalar_pow(matrix_t *matrix, double pow)
{
    matrix_t *res = NULL;

    if (!matrix)
        return (NULL);
    res = matrix_copy(matrix);
    for (size_t i = 0; i < res->row; i++)
        for (size_t j = 0; j < res->col; j++)
            res->matrix[i][j] = matrix_system_pow(res->matrix[i][j], pow);
    return (res);
}

matrix_t *matrix_scalar_div(matrix_t *matrix, double nb)
{
    return (matrix_scalar_mult(matrix, 1 / nb));
}