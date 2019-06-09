/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_multiplication
*/

#include "matric_system.h"

/*double matrix_get_one_mult(double *m1, double *m2, size_t row)
{
    double res = 0;

    for (size_t i = 0; i < row; i++) {
        printf("%f ", m1[i]);
        res += m1[i] * m2[i];
    }
    printf("\n");
    return (res);
}*/

double matrix_get_one_mult(matrix_t *m1, matrix_t *m2, size_t i, size_t j)
{
    double res = 0;

    for (size_t k = 0; k < m1->col; k++) {
        res += m1->matrix[i][k] * m2->matrix[k][j];
    }
    return (res);
}

matrix_t *matrix_mult(matrix_t *matrix1, matrix_t *matrix2)
{
    matrix_t *res = NULL;

    res = matrix_create(matrix1->row, matrix2->col);
    if (matrix1->col != matrix2->row) {
        printf("matrix_mult(): Error, Matrix 1 is %ld x %ld ",
        matrix1->row, matrix1->col);
        printf("and Matrix 2 is %ld x %ld\n",
        matrix2->row, matrix2->col);
        return (NULL);
    }
    for (size_t i = 0; i < res->row; i++) {
        for (size_t j = 0; j < res->col; j++)
            res->matrix[i][j] = matrix_get_one_mult(matrix1, matrix2, i, j);
    }
    return (res);
}