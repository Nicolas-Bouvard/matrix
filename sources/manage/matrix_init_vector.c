/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_init_vector
*/

#include "matrix_system.h"

void matrix_init_vector(matrix_t *matrix, size_t index, double value)
{
    if (index >= matrix->col)
        return;
    for (size_t i = 0; i < matrix->row; i++)
        matrix->matrix[i][index] = value;
}