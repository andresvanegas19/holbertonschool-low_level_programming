#include "lists.h"
#include<string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: contents of linked list starting from the given node
 * @str: is the string to will be save in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	while (str[count])
		count++;

	newNode->len = count;

	newNode->next = (*head);

	(*head) = newNode;

	return (newNode);
}
