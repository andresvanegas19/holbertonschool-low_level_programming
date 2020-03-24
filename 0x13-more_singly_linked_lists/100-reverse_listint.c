#include "lists.h"

/**
 * reverse_listint-  returns the number of elements in a linked listint_t list.
 * @head: contents of linked list starting from the given node
 *
 * Return: a pointer to the first node of the reversed list
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
