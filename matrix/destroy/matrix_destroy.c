/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_destroy
*/

#include "matric_system.h"

void matrix_destroy(matrix_t *matrix)
{
    if (!matrix || !matrix->matrix)
        return;
    for (size_t i = 0; i < matrix->row; i++)
        free(matrix->matrix[i]);
    free(matrix->matrix);
    free(matrix);
}