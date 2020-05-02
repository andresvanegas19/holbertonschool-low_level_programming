#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @index: is the index of the node, starting from 0
 * @head: is a pointer to the double linked list
 *
 * Return: ion that returns the, if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *pHead;
    unsigned int i;

    if (head == NULL || index == 0)
        return (head);

    for (pHead = head, i = 0; pHead && i <= index; i++, pHead = pHead->next)
        if (index == i)
            return(pHead);

    return(NULL);
}
