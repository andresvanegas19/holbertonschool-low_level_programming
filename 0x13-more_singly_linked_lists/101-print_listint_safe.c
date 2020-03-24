#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @head: contents of linked list starting from the given node
 *
 * Return: the number of nodes, If the function fails, exit the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	if (head == NULL)
		return (count++);

	print_listint_safe(head->next);
	printf("[%p] %d", (void *)head, head->n);
	return (count++);
}
