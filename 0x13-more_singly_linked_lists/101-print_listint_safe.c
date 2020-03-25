#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @head: contents of linked list starting from the given node
 *
 * Return: the number of nodes, If the function fails, exit the program with status 98
 */

listint_t *find_remove_loop(const listint_t *head)
{
	listint_t *pointSlow = (listint_t *)head, *base;
	listint_t *pointFast = (listint_t *)head;

	while (pointSlow && pointFast && pointFast->next)
	{
		pointSlow = pointSlow->next;
		pointFast = pointFast->next->next;
		if (pointSlow == pointFast)
		{
			base = pointFast;
			pointSlow = (listint_t *)head;
			while (pointSlow)
			{
				while (pointFast->next != base && pointFast->next != pointSlow)
					pointFast = pointFast->next;

				if (pointFast->next == pointSlow)
					break;
			}
			pointFast->next = NULL;
		}
	}
	return (pointSlow);
}

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (head == NULL)
		return (count);

	find_remove_loop(head);

	print_listint_safe(head->next);
	printf("[%p] %d", (void *)head, head->n);
	return (count++);
}
