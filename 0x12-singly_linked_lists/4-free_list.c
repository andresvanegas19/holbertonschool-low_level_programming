#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: contents of linked list starting from the given node
 *
 */
void free_list(list_t *head)
{
	list_t *copy;

	if (!head)
		return (NULL);

	while (head)
	{
		copy = head->next;
		free(head);
		free(head->str);
		head = copy;
	}
}
