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

matrix_t *matrix_insert_row(matrix_t *matrix, size_t index, double value);

matrix_t *matrix_copy(matrix_t *matrix);

void *matrix_memset(void *dst, int c, int n);
void *matrix_calloc(size_t nb_elem, size_t type_size);
matrix_t *matrix_create(size_t row, size_t col);

matrix_t *matrix_iddentity(size_t size);

void matrix_destroy(matrix_t *matrix);

void end_add(matrix_t *matrix1, matrix_t *matrix2, bool free_matrix_1,
bool free_matrix_2);
matrix_t *matrix_add(matrix_t *matrix1, matrix_t *matrix2, bool free_matrix_1,
bool free_matrix_2);

void matrix_init_vector(matrix_t *matrix, size_t index, double value);

double matrix_get_one_mult(matrix_t *m1, matrix_t *m2, size_t i, size_t j);
matrix_t *matrix_mult(matrix_t *matrix1, matrix_t *matrix2);

matrix_t *matrix_scalar_mult(matrix_t *matrix, double nb);
double matrix_system_pow(double nb, double pow);
matrix_t *matrix_scalar_pow(matrix_t *matrix, double pow);
matrix_t *matrix_scalar_div(matrix_t *matrix, double nb);

matrix_t *matrix_transpose(matrix_t *matrix);

void matrix_display(matrix_t *matrix);

#endif /* !MATRIC_SYSTEM_H_ */