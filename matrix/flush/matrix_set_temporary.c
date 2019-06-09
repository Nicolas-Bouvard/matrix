/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix_set_temporary
*/

#include "matric_system.h"

void matrix_set_temporary(matrix_t *matrix, bool is_temporary)
{
    linked_list_t *trash = NULL;

    if (!matrix)
        return;
    trash = matrix_get_trash();
    if (is_temporary)
        ll_append(trash, matrix);
    else
        ll_pop_element(trash, matrix, false);
}