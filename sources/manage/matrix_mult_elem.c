/*
** EPITECH PROJECT, 2019
** libneural
** File description:
** matrix_mult_elem
*/

#include "matrix_system.h"

matrix_t *matrix_mult_elem(matrix_t *m1, matrix_t *m2)
{
    matrix_t *result = NULL;

    if (m1->col != m2->col || m1->row != m2->row) {
        printf("matrix_mult_elem(): matrix's size is different.");
        return (NULL);
    }
    result = matrix_copy(m1);
    for (size_t i = 0; i < m1->row; i++)
        for (size_t j = 0; j < m1->col; j++)
            result->matrix[i][j] *= m2->matrix[i][j];
    return (result);
}