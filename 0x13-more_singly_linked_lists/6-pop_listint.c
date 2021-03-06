#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: contents of linked list starting from the given node
 *
 * Return: the head node’s data (n).
 *
 */

int pop_listint(listint_t **head)
{
	int number = 0;
	listint_t *cpdelete = *head;

	if (*head == NULL)
		return (number);

	number = (*head)->n;
	*head = (*head)->next;
	cpdelete->next = NULL;
	free(cpdelete);

	return (number);
}
