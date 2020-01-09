/*
** EPITECH PROJECT, 2020
** matrix
** File description:
** tl_insert
*/

#include "matrix_system.h"

void tl_insert(trash_list_t *list, void *element)
{
    tl_element_t *new = NULL;

    new = tl_new(element);
    new->next = list->first;
    if (list->first)
        list->first->prev = new;
    list->first = new;
    list->size += 1;
}

void tl_insert_at(trash_list_t *list, void *element, size_t index)
{
    tl_element_t *new = NULL;
    tl_element_t *temp = list->first;

    if (index > list->size)
        return;
    if (index == 0) {
        tl_insert(list, element);
        return;
    }
    new = tl_new(element);
    for (size_t i = 0; i < index - 1; i++, temp = temp->next);
    new->next = temp->next;
    temp->next = new;
    new->prev = temp;
    if (new->next)
        new->next->prev = new;
    list->size += 1;
}