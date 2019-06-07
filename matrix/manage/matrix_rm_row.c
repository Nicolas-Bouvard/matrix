/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_rm_row
*/

#include "matric_system.h"

matrix_t *matrix_rm_row(matrix_t *matrix, size_t index)
{
    matrix_t *res = NULL;

    if (!matrix || index >= matrix->row)
        return (NULL);
    res = matrix_copy(matrix);
    free(res->matrix[index]);
    for (size_t i = index; i < matrix->row; i++)
        res->matrix[i] = res->matrix[i + 1];
    res->row--;
    return (res);
}