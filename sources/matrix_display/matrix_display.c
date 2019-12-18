/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_display
*/

#include "matrix_system.h"

void matrix_display(matrix_t *matrix)
{
    if (!matrix || !matrix->matrix)
        return;
    for (size_t i = 0; i < matrix->row; i++) {
        for (size_t j = 0; j < matrix->col; j++)
            printf("%.1f\t", matrix->matrix[i][j]);
        printf("\n");
    }
}