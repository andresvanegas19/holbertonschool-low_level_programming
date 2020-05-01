#include "lists.h"

/**
 * free_dlistint -  free a dlistint_t list avoid leaks.
 * @head: point to the double linked list
 *
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *tail;

    for (tail = head; tail; tail = tail->next)
    {
        printf("%d", tail->n);
    }


}
