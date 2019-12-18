/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_concat_cols
*/

#include "matrix_system.h"

matrix_t *matrix_concat_cols(matrix_t *left, matrix_t *right)
{
    matrix_t *res = NULL;

    if (!left || !right)
        return ((left) ? left : right);
    if (left->row != right->row) {
        printf("matrix_concat_cols(): Error, Trying to concat matrix of size");
        printf("%ld x %ld and %ld x %ld", left->row, left->col, right->row,
        right->col);
        return (NULL);
    }
    res = matrix_create(left->row, left->col + right->col);
    for (size_t i = 0; i < left->row; i++)
        for (size_t j = 0; j < left->col; j++)
            res->matrix[i][j] = left->matrix[i][j];
    for (size_t i = 0; i < right->row; i++)
        for (size_t j = 0; j < right->col; j++)
            res->matrix[i][j + left->col] = right->matrix[i][j];
    return (res);
}