#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *tailHead = *head, *newNode;

    newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL)
        return (NULL);
    newNode->next = NULL, newNode->prev = NULL;
    newNode->n = n;

    if (*head == NULL)
    {
        *head = newNode;
        return (*head);
    }

    for (; tailHead; tailHead = tailHead->next)
    {
        if (tailHead->next == NULL)
        {
            newNode->prev = tailHead;
            tailHead->next = newNode;
            return  (newNode);
        }
    }


    return (NULL);
}
