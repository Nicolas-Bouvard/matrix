/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_destroy_save
*/

#include "matric_system.h"

void matrix_destroy_trash(void)
{
    linked_list_t *trash = matrix_get_trash();

    ll_destroy(trash, true);
}