#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: contents of linked list starting from the given node
 *
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
