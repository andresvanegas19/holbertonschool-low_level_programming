#include "lists.h"

/**
 * get_nodeint_at_index - prints all the elements of a listint_t list
 * @head: pointer to the first node
 * @index: is the index of the node, starting at 0
 *
 * Return: the Nth node of the list, if the node doesn't exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *cpHead = head, *result;

	for (; cpHead; count++, cpHead = cpHead->next)
	{
		if (count == index)
		{
			result = malloc(sizeof(listint_t));
			result->n = cpHead->n;
			return (result);
		}
	}
	return (NULL);
}
