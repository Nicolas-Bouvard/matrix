/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** save
*/

#include "matric_system.h"

static linked_list_t *matrix_create_trash(void)
{
    linked_list_t *trash = ll_create((void *)matrix_free);

    return (trash);
}

linked_list_t *matrix_get_trash(void)
{
    static linked_list_t *trash = NULL;

    if (!trash)
        trash = matrix_create_trash();
    return (trash);
}