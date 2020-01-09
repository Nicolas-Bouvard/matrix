/*
** EPITECH PROJECT, 2020
** matrix
** File description:
** treash_list_pop
*/

#include "matrix_system.h"

void tl_pop_at(trash_list_t *list, size_t index, bool free_elem)
{
    tl_element_t *temp = list->first;

    if (index >= list->size)
        return;
    for (size_t i = 0; i < index; i++, temp = temp->next);
    tl_free_elem(list, temp, free_elem);
    if (temp->prev)
        temp->prev->next = temp->next;
    if (temp->next)
        temp->next->prev = temp->prev;
    if (list->first == temp)
        list->first = temp->next;
    free(temp);
    list->size -= 1;
}

void tl_pop(trash_list_t *list, bool free_elem)
{
    tl_pop_at(list, list->size - 1, free_elem);
}

size_t tl_pop_element(trash_list_t *list, void *element, bool free_elem)
{
    tl_element_t *temp = list->first;
    size_t i = 0;

    while (temp) {
        if (temp->elem == element) {
            tl_pop_at(list, i, free_elem);
            return (i);
        }
        i++;
        temp = temp->next;
    }
    return (-1);
}