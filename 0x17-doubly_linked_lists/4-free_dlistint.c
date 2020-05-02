#include "lists.h"

/**
 * free_dlistint -  free a dlistint_t list avoid leaks.
 * @head: point to the double linked list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tail, *supp;

	for (tail = head; tail; tail = tail->next)
	{
		if (tail->next == NULL)
		{
			while (tail->prev)
			{
				supp = tail;
				tail = tail->prev;
				free(supp);
			}
			free(tail);
			break;
		}
	}
}
