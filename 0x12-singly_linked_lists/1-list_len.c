#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: contents xof linked list starting from the given node
 *
 * Return:  the number of elements in a linked
 */

size_t list_len(const list_t *h)
{
	int size = 0;

	while (h)
	{
		if (h->str != NULL)
			size++;
		h = h->next;
	}

	return (size);
}
