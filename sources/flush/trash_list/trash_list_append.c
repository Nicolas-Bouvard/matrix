/*
** EPITECH PROJECT, 2020
** matrix
** File description:
** trash_list_append
*/

#include "matrix_system.h"

tl_element_t *tl_new(void *element)
{
    tl_element_t *res = malloc(sizeof(tl_element_t));

    res->next = NULL;
    res->prev = NULL;
    res->elem = element;
    return (res);
}

void tl_append(trash_list_t *list, void *element)
{
    tl_insert_at(list, element, list->size);
}