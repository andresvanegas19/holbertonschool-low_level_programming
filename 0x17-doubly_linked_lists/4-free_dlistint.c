#include "lists.h"

/**
 * free_dlistint -  free a dlistint_t list avoid leaks.
 * @head: point to the double linked list
 *
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *tail, *h = head;

    for (tail = head; tail; tail = tail->next)
        ;

    tail->prev = h;
    printf("---------");
    while(h)
    {
        printf("%d\n%d\n",h->n,tail->n);
        h = h->prev;
        tail = tail->prev;
    }


}
