#include "lists.h"

/**
 * reverse_listint-  reverses a listint_t linked list.
 * @head: contents of linked list starting from the given node
 *
 * Return: a pointer to the first node of the reversed list
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverseNode = *head;

	if (*head && ((*head)->next))
	{
		*head = (*head)->next;
		reverse_listint(head);
		reverseNode->next->next = reverseNode;
		reverseNode->next = NULL;
	}

	return (reverseNode);
}

