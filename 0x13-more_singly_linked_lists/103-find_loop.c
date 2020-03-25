#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: contents of linked list starting from the given node
 *
 * Return: The address of where the loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pointSlow = head, *pointFast = head;

	while (pointSlow && pointFast && pointFast->next)
	{
		pointSlow = pointSlow->next;
		pointFast = pointFast->next->next;
		if (pointSlow == pointFast)
		{
		/* start search the loop at the begging?a*/
			pointSlow = head;
			while (pointSlow != pointFast)
			{
				pointSlow  = pointSlow->next;
				pointFast = pointFast->next;
			}
		return (pointSlow);
		}
	}
	return (NULL);
}
