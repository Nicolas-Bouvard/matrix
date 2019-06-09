/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_destroy
*/

#include "matric_system.h"

void matrix_free(matrix_t *matrix)
{
    for (size_t i = 0; i < matrix->row; i++)
        free(matrix->matrix[i]);
    free(matrix->matrix);
    free(matrix);
}

void matrix_destroy(matrix_t *matrix)
{
    linked_list_t *trash = NULL;

    if (!matrix || !matrix->matrix)
        return;
    trash = matrix_get_trash();
    ll_pop_element(trash, matrix, false);
    matrix_free(matrix);
}