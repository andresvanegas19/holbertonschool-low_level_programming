#include "lists.h"
#include<string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: contents of linked list starting from the given node
 * @str: is the char it will be save into the linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *newNode, *end = *head;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	while (str[count])
		count++;
	newNode->str = strdup(str);
	newNode->len = count;
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
		return (NULL);
	}
	while (end->next != NULL)
		end = end->next;

	end->next = newNode;

	return (newNode);
}
