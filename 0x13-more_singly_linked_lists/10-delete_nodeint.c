#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: pointer to point the first node
 * @index: is the index of the list where the new node should be delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *pHead = *head, *delete;

	if (index == 0 && pHead)
	{
		delete = pHead->next;
		pHead->next = NULL;
		*head = delete;
		free(pHead);
		return (1);
    }

	for (; pHead; pHead = pHead->next, count++)
		if (count == (index - 1))
		{
			delete = pHead->next;
			pHead->next = pHead->next->next;
			free(delete);
			return (1);
		}

		return (-1);
}