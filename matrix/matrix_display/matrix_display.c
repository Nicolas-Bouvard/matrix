/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_display
*/

#include "matric_system.h"

void matrix_display(matrix_t *matrix)
{
    if (!matrix)
        return;
    for (size_t i = 0; i < matrix->row; i++) {
        for (size_t j = 0; j < matrix->col; j++)
            printf("%f\t", matrix->matrix[i][j]);
        printf("\n");
    }
}