#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @idx:  the list where the new node should be added.
 * @h: is the pointer to a double linked list
 * @n: is
 *
 * Return: he address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *pHead = *h, *newNode;
	unsigned int count = 1;
	/* start in one 'couse it need to be one prev node*/

	if (idx == 0 || *h == NULL)
	{
		add_dnodeint(&(*h), n);
		return (*h);
	}

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	while (pHead && count <= idx)
	{
		if (count == idx)
		{
			if (pHead->next == NULL)
			{
				newNode = add_dnodeint_end(&(*h), 4);
				return (newNode);
			}
			else
			{
				newNode->prev = pHead;
				newNode->next = pHead->next;
				pHead->next = newNode;
				pHead->next->prev = newNode;
				return (newNode);
			}
		}
		count++;
		pHead = pHead->next;
	}
	return (NULL);
}
