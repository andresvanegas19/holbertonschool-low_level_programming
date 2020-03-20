#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: contents of linked list starting from the given node
 *
 */
void free_list(list_t *head)
{
	list_t *back;


	while (head)
	{
		back = head->next;
		free(head->str);
		free(head);
		head = back;
	}
}
