/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_concat_rows
*/

#include "matrix_system.h"

matrix_t *matrix_concat_rows(matrix_t *high, matrix_t *bottom)
{
    matrix_t *res = NULL;

    if (!high || !bottom)
        return ((high) ? high : bottom);
    if (high->col != bottom->col) {
        printf("matrix_concat_rows(): Error, Trying to concat matrix of size");
        printf("%ld x %ld and %ld x %ld", high->row, high->col, bottom->row,
        bottom->col);
        return (NULL);
    }
    res = matrix_create(high->row + bottom->row, high->col);
    for (size_t i = 0; i < high->row; i++)
        for (size_t j = 0; j < high->col; j++)
            res->matrix[i][j] = high->matrix[i][j];
    for (size_t i = 0; i < bottom->row; i++)
        for (size_t j = 0; j < bottom->col; j++)
            res->matrix[i + high->row][j] = bottom->matrix[i][j];
    return (res);
}