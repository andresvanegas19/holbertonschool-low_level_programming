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
	unsigned int count = 0;

	if (*h == NULL)
		return (NULL);

	if (idx == 0)
	{
		add_dnodeint(&(*h), n);
		return (*h);
	}

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	while(pHead && count <= idx)
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
				printf("%d actual \n%d next \n %d prev\n", pHead->n, pHead->next->n, pHead->prev->n);
				printf("found the node\n");
				return (newNode);
			}
		}
		count++;
		pHead = pHead->next;
	}
	return(NULL);
}
