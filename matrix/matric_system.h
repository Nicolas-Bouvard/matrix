/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matric_system
*/

#ifndef MATRIC_SYSTEM_H_
#define MATRIC_SYSTEM_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct matrix_s
{
    size_t col;
    size_t row;
    double **matrix;
}matrix_t;

matrix_t *matrix_create(size_t row, size_t col);

matrix_t *matrix_copy(matrix_t *matrix);

matrix_t *matrix_transpose(matrix_t *matrix);

void matrix_destroy(matrix_t *matrix);

matrix_t *matrix_add(matrix_t *matrix1, matrix_t *matrix2, bool free_matrix_1,
bool free_matrix_2);

void matrix_display(matrix_t *matrix);

void matrix_init_vector(matrix_t *matrix, size_t index, double value);

#endif /* !MATRIC_SYSTEM_H_ */