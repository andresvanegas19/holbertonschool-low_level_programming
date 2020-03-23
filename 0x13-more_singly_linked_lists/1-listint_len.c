#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: contents of linked list starting from the given node
 *
 * Return: number of elements in a linked.
 */
 size_t listint_len(const listint_t *h)
 {
    int count = 0;

    while (h)
    {
        count++;
        h = h->next;
    }

    return (count);
 }