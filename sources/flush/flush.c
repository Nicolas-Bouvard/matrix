/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** flush
*/

#include "matrix_system.h"

void matrix_flush(void)
{
    linked_list_t *trash = matrix_get_trash();

    while (trash->first)
        ll_pop_at(trash, 0, true);
}