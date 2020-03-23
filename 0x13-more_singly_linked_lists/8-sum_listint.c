#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * @head: pointer to the first node
 *
 * Return: the Nth node of the list, if the node doesn't exist, return NULL
 */

int sum_listint(listint_t *head)
{
	int sumAll = 0;
	listint_t *cpHead = head;

	while (cpHead)
	{
		sumAll += cpHead->n;
		cpHead = cpHead->next;
	}

	return (sumAll);
}
