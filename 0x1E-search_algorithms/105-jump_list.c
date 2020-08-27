#include "search_algos.h"
#include <math.h>

/**
 * jump_list -  searches for a value in a sorted list of
 * integers using the Jump search algorithm
 *
 * @list:  is a pointer to the head of the list to search in,
 * will be sorted in ascending order
 * @size: s the number of nodes in list
 * @value:  is the value to search for
 *
 * Return: A pointer to the first node where value is located,
 * if value is not present in head or if head is NULL, the function
 * must return NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
     listint_t *c_list = list;
     int i = 0, step = sqrt(size - 1), j = 0, validate = 0;

     (void)value;
     if (list == NULL)
          return (NULL);

     for (i = step; i < (int)size - 1; i += step)
     {
     };

     validate = step;
     while (c_list != NULL)
     {
          if (validate == j)
          {
               printf("Value checked at index [%d] = [%d]", j, c_list->n);
               validate += step;
          }
          c_list = c_list->next;
          j++;
     }

     return (c_list);
}
