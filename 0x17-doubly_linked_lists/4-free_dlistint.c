#include "lists.h"

/**
 * free_dlistint -  free a dlistint_t list avoid leaks.
 * @head: point to the double linked list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *pHead = head;

	while (head)
	{
		pHead = head->next;
		free(head);
		head = pHead;
	}
}
