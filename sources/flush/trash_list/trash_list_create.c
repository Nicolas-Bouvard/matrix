/*
** EPITECH PROJECT, 2020
** matrix
** File description:
** trash_list_create
*/

#include "matrix_system.h"

// NULL for matrix_destroy
trash_list_t *tl_create(void (*destructor)(void *))
{
    trash_list_t *result = malloc(sizeof(trash_list_t));

    result->size = 0;
    result->first = NULL;
    result->destructor = destructor ? destructor : (void *)matrix_destroy;
    return (result);
}