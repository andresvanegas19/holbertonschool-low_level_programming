#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

listint_t reverse_listint(listint_t **head)
{
	listint_t *pftNode;
	listint_t *beforeNode;

	pftNode = *head;
	beforeNode = pftNode->next;

	if (!(*head) || !beforeNode)
		return (**head);

	reverse_listint(&beforeNode);
	pftNode->next->next = pftNode;

	pftNode->next = NULL;
	*head = beforeNode;

	return (**head);
}
