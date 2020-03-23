#include "lists.h"
/**
 * main - check the code for Holberton School students.
 * @h: contents of linked list starting from the given node
 * @n: is the data to fill the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
     listint_t *newNode = malloc(sizeof(listint_t));
     if (newNode == NULL)
          return (NULL);

     newNode->n = n;
     newNode->next = *head;
     *head = newNode;

     return (newNode);
}