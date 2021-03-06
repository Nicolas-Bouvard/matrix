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
//Default: Set matrix as temporary
matrix_t *matrix_create(size_t row, size_t col);

//set matrix as temporary
//then call function matrix_flush to free all this temporary matrix.
void matrix_set_temporary(matrix_t *matrix, bool is_temporary);

//create a matrix with random values
matrix_t *matrix_create_rand_init(size_t row, size_t col, double init_epsilon);

//copy a matrix
matrix_t *matrix_copy(matrix_t *matrix);

//concat two matrix adding new cols
matrix_t *matrix_concat_cols(matrix_t *left, matrix_t *right);

//concat two matrix adding new rows
matrix_t *matrix_concat_rows(matrix_t *high, matrix_t *bottom);

//initialize all the elements of the matrix with the value
matrix_t *matrix_init_value(matrix_t *matrix, double value);

//init a row of a matrix with the value sent
matrix_t *matrix_init_row(matrix_t *matrix, size_t index, double value);

//get cols from a matrix
matrix_t *matrix_get_cols(matrix_t *matrix, size_t start, size_t end);

//get rows from a matrix
matrix_t *matrix_get_rows(matrix_t *matrix, size_t start, size_t end);

//insert a row to a matrix
matrix_t *matrix_insert_row_at(matrix_t *matrix, size_t index, double value);

//insert a col to a matrix
matrix_t *matrix_insert_col_at(matrix_t *matrix, size_t index, double value);

//create the iddentity matrix
matrix_t *matrix_iddentity(size_t size);

//transpose matrix
matrix_t *matrix_transpose(matrix_t *matrix);

//create a matrix which is flat (X rows and 1 col)
matrix_t *matrix_flatten(matrix_t *matrix);

//free all the temporary matrix
void matrix_flush(void);

//destroy and free the matrix
void matrix_destroy(matrix_t *matrix);

//Function that you have to call at the end of the program, it destroy the trash so you can't flush after that
void matrix_destroy_trash(void);

//Remove a row from the matrix
matrix_t *matrix_rm_row(matrix_t *matrix, size_t index);

//Remove a col from the matrix
matrix_t *matrix_rm_col(matrix_t *matrix, size_t index);

//addition between 2 matrix
matrix_t *matrix_add(matrix_t *matrix1, matrix_t *matrix2, bool free_matrix_1,
bool free_matrix_2);

//display the matrix
void matrix_display(matrix_t *matrix);

//
matrix_t *matrix_sigmoid(matrix_t *matrix);

//
double matrix_sum_vect(matrix_t *matrix);

//
matrix_t *matrix_mult_elem(matrix_t *m1, matrix_t *m2);

//scalar substraction between matrix and value
matrix_t *matrix_scalar_sub_value(double value, matrix_t *matrix);

//scalar substraction between 2 matrix
matrix_t *matrix_scalar_sub(matrix_t *m1, matrix_t *m2);

//
matrix_t *matrix_scalar_div(matrix_t *m1, matrix_t *m2);

//
matrix_t *matrix_scalar_div_value(matrix_t *matrix, double value);

//multiplication between 2 matrix
matrix_t *matrix_mult(matrix_t *matrix1, matrix_t *matrix2);

//
matrix_t *matrix_scalar_pow(matrix_t *matrix, double pow);

//multiplication between a matrix and a number
void matrix_scalar_mult(matrix_t *matrix, double nb);

//init a vector in the matrix with the value
void matrix_init_vector(matrix_t *matrix, size_t index, double value);

#endif /* !MATRIX_H_ */