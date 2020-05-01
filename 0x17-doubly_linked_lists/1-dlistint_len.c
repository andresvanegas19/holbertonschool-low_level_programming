#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: is the point to the double linked list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
    const dlistint_t *pHDouble;
    int i;

    if (h == NULL)
        return (0);

    for (pHDouble = h, i = 0; pHDouble; pHDouble = pHDouble->next, i++)
        ;

    return (i);
}
