#include "lists.h"

/**
 * sum_dlistint - the sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to the double linked list
 *
 * Return: sum of all the data, if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *pHead = head;
	int total = 0;

	if (head == NULL)
		return (0);

	while (pHead)
	{
		total += pHead->n;
		pHead = pHead->next;
	}

	return (total);
}
