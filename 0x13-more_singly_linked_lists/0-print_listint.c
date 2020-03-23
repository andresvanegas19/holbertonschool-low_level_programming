#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: contents of linked list starting from the given node
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
