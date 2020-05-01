#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: is the double linked list
 * @n: is the content of the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newNode = *head;

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

    (*head)->next->prev = newNode;
    newNode->next = *head;
    return(newNode);

}
