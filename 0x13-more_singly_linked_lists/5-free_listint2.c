#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: contents of linked list starting from the given node
 *
 */

void free_listint2(listint_t **head)
{
	if (*head && head != NULL)
	{
		free_listint2(&((*head)->next));
		free(*head);
		*head = NULL;
	}
}
