#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: contents of linked list starting from the given node
 *
 */

void free_listint2(listint_t **head)
{
	while (*head)
	{
/* Put the pointer to acces to the node */
		free(*head);
/* Precedencia de operadores */
		*head = (*head)->next;
	}
}
