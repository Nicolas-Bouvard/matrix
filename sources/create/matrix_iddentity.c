/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_iddentity
*/

#include "matrix_system.h"

matrix_t *matrix_iddentity(size_t size)
{
    matrix_t *res = NULL;

    if (!size)
        return (NULL);
    res = matrix_create(size, size);
    for (size_t i = 0; i < size; i++)
        res->matrix[i][i] = 1;
    return (res);
}