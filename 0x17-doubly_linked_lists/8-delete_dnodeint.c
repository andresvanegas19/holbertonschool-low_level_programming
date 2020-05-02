#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * linked list.
 *
 * @index: is the index of the node that should be deleted. Index starts at 0
 *
 * Returns: 1 if it succeeded, -1 if it failed
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *pHead = *head, *delete;
	unsigned int count = 1;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			delete = *head;
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		free(*head);
		return (1);
	}

}
