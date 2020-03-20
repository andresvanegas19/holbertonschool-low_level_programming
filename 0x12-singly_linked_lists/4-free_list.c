#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head:
 *
 */
void free_list(list_t *head)
{
	list_t *copy;

	while (head)
	{
		copy = head->next;
		free(head);
		free(head->str);
		head = copy;
	}
}
