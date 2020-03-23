#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: contents of linked list starting from the given node
 *  @n: is the data to fill the new node
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *cpHead = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

/* This conditional is for  it doesn't exist a list, put the list first*/
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (cpHead->next)
		cpHead = cpHead->next;

	cpHead->next = newNode;

	return (newNode);
}
