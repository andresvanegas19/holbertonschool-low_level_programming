#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 *
 * Return: Always 0.
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
