#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to point the first node
 * @idx: is the index of the list where the new node should be added.
 * @n: is the number to fill the node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *pHead = *head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	if (idx == 0 || pHead == NULL)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);

		newNode->n = n;
		newNode->next = pHead->next;
		pHead->next = newNode;
		return (newNode);
	}
	for (; pHead; pHead = pHead->next, count++)
		if (count == (idx - 1))
		{
			newNode = malloc(sizeof(listint_t));
			if (newNode == NULL)
				return (NULL);

			newNode->n = n;
			newNode->next = pHead->next;
			pHead->next = newNode;
			pHead = NULL;
			return (newNode);
		}
	return (NULL);
}
