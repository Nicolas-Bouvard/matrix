/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_flatten
*/

#include "matric_system.h"

matrix_t *matrix_flatten(matrix_t *matrix)
{
    matrix_t *res = NULL;
    size_t k = 0;

    if (!matrix)
        return (NULL);
    res = matrix_create(matrix->row * matrix->col, 1);
    for (size_t i = 0; i < matrix->row; i++)
        for (size_t j = 0; j < matrix->col; j++)
            res->matrix[k++][0] = matrix->matrix[i][j];
    return (res);
}