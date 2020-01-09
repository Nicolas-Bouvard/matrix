/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_destroy_save
*/

#include "matrix_system.h"

void matrix_destroy_trash(void)
{
    trash_list_t *trash = matrix_get_trash();

    tl_destroy(trash, true);
}