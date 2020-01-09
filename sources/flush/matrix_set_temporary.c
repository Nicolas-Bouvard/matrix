/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_set_temporary
*/

#include "matrix_system.h"

void matrix_set_temporary(matrix_t *matrix, bool is_temporary)
{
    trash_list_t *trash = NULL;

    if (!matrix)
        return;
    trash = matrix_get_trash();
    if (is_temporary)
        tl_append(trash, matrix);
    else
        tl_pop_element(trash, matrix, false);
}