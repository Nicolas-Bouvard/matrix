/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix
*/

#ifndef MATRIX_H_
#define MATRIX_H_

#include <unistd.h>
#include <stdbool.h>

typedef struct matrix_s
{
    size_t col;
    size_t row;
    double **matrix;
}matrix_t;

//create a matrix of size col and row
matrix_t *matrix_create(size_t row, size_t col);

//copy a matrix
matrix_t *matrix_copy(matrix_t *matrix);

//insert a row to a matrix
matrix_t *matrix_insert_row(matrix_t *matrix, size_t index, double value);

//create the iddentity matrix
matrix_t *matrix_iddentity(size_t size);

//transpose matrix
matrix_t *matrix_transpose(matrix_t *matrix);

//destroy and free the matrix
void matrix_destroy(matrix_t *matrix);

//addition between 2 matrix
matrix_t *matrix_add(matrix_t *matrix1, matrix_t *matrix2, bool free_matrix_1,
bool free_matrix_2);

//display the matrix
void matrix_display(matrix_t *matrix);

//multiplication between 2 matrices
matrix_t *matrix_mult(matrix_t *matrix1, matrix_t *matrix2);

//
matrix_t *matrix_scalar_pow(matrix_t *matrix, double pow);

//multiplication between a matrix and a number
void matrix_scalar_mult(matrix_t *matrix, double nb);

//division between a matrix and a number
void matrix_scalar_div(matrix_t *matrix, double nb);

//init a vector in the matrix with the value
void matrix_init_vector(matrix_t *matrix, size_t index, double value);

#endif /* !MATRIX_H_ */