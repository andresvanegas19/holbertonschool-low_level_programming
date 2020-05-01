#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: print the whole linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *pDoublelist;
	int count = 0;

	if (h == NULL)
		return (0);

	pDoublelist = h;
	while(pDoublelist)
	{
		printf("%d\n", pDoublelist->n);
		pDoublelist = pDoublelist->next;
		count++;
	}
	return(count);
}
