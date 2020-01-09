/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** save
*/

#include "matrix_system.h"

static trash_list_t *matrix_create_trash(void)
{
    trash_list_t *trash = tl_create((void *)matrix_free);

    return (trash);
}

trash_list_t *matrix_get_trash(void)
{
    static trash_list_t *trash = NULL;

    if (!trash)
        trash = matrix_create_trash();
    return (trash);
}