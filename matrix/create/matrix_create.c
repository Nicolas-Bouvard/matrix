/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_create
*/

#include "matric_system.h"

void *my_memset(void *dst, int c, int n)
{
    char *dest = (char *)dst;

    if (n) {
        for (int i = 0; i < n; i++)
            *dest++ = c;
    }
    return (dst);
}

void *my_calloc(int nb_elem, int type_size)
{
    void *ptr = malloc(nb_elem * type_size);

    if (!ptr)
        return (NULL);
    my_memset(ptr, 0, type_size);
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
        matrix->matrix[i] = my_calloc(col + 1, sizeof(double));
    return (matrix);
}