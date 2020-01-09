/*
** EPITECH PROJECT, 2020
** matrix
** File description:
** tl_destroy
*/

#include "matrix_system.h"

void tl_free_elem(trash_list_t *list, tl_element_t *elem, bool free_elem)
{
    if (!free_elem)
        return;
    if (list->destructor)
        list->destructor(elem->elem);
    else
        free(elem->elem);
    elem->elem = NULL;
}

void tl_destroy(trash_list_t *list, bool free_elem)
{
    while (list->size)
        tl_pop(list, free_elem);
    free(list);
}