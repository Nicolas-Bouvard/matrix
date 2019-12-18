/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_rand_init
*/

#include "matrix_system.h"
#include "time.h"

void matrix_rand_init(matrix_t *matrix, double init_epsilon)
{
    srand(time(NULL));
    for (size_t i = 0; i < matrix->row; i++)
        for (size_t j = 0; j < matrix->col; j++)
            matrix->matrix[i][j] = (rand() % 10000 / 10000.0) * 2 *
            init_epsilon - init_epsilon;
}

matrix_t *matrix_create_rand_init(size_t row, size_t col, double init_epsilon)
{
    matrix_t *res = matrix_create(row, col);

    matrix_rand_init(res, init_epsilon);
    return (res);
}