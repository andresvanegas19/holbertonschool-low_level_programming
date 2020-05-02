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
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			delete = *head;
			*head = (*head)->next;
			(*head)->prev = NULL;
			delete->next = NULL;
			free(delete);
		}
		else
		{
			*head = NULL;
			free(*head);
		}
		return (1);
	}
	for (; pHead && count <= index; count++, pHead = pHead->next)
	{
		if (count == index)
		{
			delete = pHead;
			if (pHead->next != NULL)
			{
				pHead->prev->next = pHead->next;
				pHead->next->prev = pHead->prev;
			}
			else
				pHead->prev->next = NULL;
			delete->prev = NULL, delete->next = NULL;
			free(delete);
			return (1);
		}
	}
	return (-1);
}
