/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_init_value
*/

#include "matric_system.h"

matrix_t *matrix_init_value(matrix_t *matrix, double value)
{
    matrix_t *res = NULL;

    if (!matrix)
        return (NULL);
    if (!(res = matrix_create(matrix->row, matrix->col)))
        return (NULL);
    for (size_t i = 0; i < res->row; i++)
        for (size_t j = 0; j < res->col; j++)
            res->matrix[i][j] = value;
    return (res);
}