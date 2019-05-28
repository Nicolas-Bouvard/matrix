/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_addition
*/

#include "matric_system.h"

void end_add(matrix_t *matrix1, matrix_t *matrix2, bool free_matrix_1,
bool free_matrix_2)
{
    if (free_matrix_1)
        matrix_destroy(matrix1);
    if (free_matrix_2)
        matrix_destroy(matrix2);
}

matrix_t *matrix_add(matrix_t *matrix1, matrix_t *matrix2, bool free_matrix_1,
bool free_matrix_2)
{
    matrix_t *res = NULL;

    if (matrix1->col != matrix2->col || matrix1->row != matrix2->row) {
        end_add(matrix1, matrix2, free_matrix_1, free_matrix_2);
        return (NULL);
    }
    res = matrix_create(matrix1->row, matrix1->col);
    for (size_t i = 0; i < matrix1->row; i++)
        for (size_t j = 0; j < matrix1->col; j++)
            res->matrix[i][j] = matrix1->matrix[i][j] + matrix2->matrix[i][j];
    end_add(matrix1, matrix2, free_matrix_1, free_matrix_2);
    return (res);
}