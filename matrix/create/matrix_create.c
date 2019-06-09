/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_create
*/

#include "matric_system.h"

void *matrix_memset(void *dst, int c, int n)
{
    char *dest = (char *)dst;

    if (n) {
        for (int i = 0; i < n; i++)
            *dest++ = c;
    }
    return (dst);
}

void *matrix_calloc(size_t nb_elem, size_t type_size)
{
    void *ptr = malloc(nb_elem * type_size);

    if (!ptr)
        return (NULL);
    matrix_memset(ptr, 0, type_size * nb_elem);
    return (ptr);
}

matrix_t *matrix_create(size_t row, size_t col)
{
    matrix_t *matrix = malloc(sizeof(matrix_t));

    if (!matrix)
        return (NULL);
    matrix->col = col;
    matrix->row = row;
    matrix->matrix = malloc(sizeof(double *) * (row + 1));
    matrix->matrix[row] = NULL;
    for (size_t i = 0; i < row; i++)
        matrix->matrix[i] = matrix_calloc(col + 1, sizeof(double));
    matrix_set_temporary(matrix, true);
    return (matrix);
}