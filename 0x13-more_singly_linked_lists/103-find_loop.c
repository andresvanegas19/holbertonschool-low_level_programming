#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: contents of linked list starting from the given node
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pointSlow = list, *pointFast = list;

	while (pointSlow && pointFast && pointFast->next)
	{
		pointSlow = pointSlow->next;
		pointFast = pointFast->next->next;
		if (pointSlow == pointFast)
		{
			removeLoop(pointFast, list);
			return 1;
        }
    }
    return (NULL);
}
