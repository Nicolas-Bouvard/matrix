/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_get_cols
*/

#include "matric_system.h"

//A optimiser (pas fous fous comme méthode)
matrix_t *matrix_get_cols(matrix_t *matrix, size_t start, size_t end)
{
    matrix_t *res = NULL;

    if (!matrix || start > end || end >= matrix->col)
        return (NULL);
    //new
    res = matrix_create(matrix->row, end - start + 1);
    for (size_t i = 0; i < res->row; i++)
        for (size_t j = 0; j < res->col; j++)
            res->matrix[i][j] = matrix->matrix[i][j + start];
    return (res);
    /*res = matrix_copy(matrix);
    for (size_t i = 0; i < start; i++) {
        matrix_rm_col(matrix, 0);
        end--;
    }
    while (end + 1 < res->col)
        matrix_rm_col(matrix, end + 1);
    return (res);*/
}