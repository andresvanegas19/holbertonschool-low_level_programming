#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: is the size of the hash table.
 *
 * Return: the has table if not return NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t = NULL;
	unsigned long int i = 0;

	if (size <= 0)
		return (NULL);

	hash_t =  malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t) * size);
	if (hash_t == NULL)
		return (NULL);

	while (i <= size)
	{
		hash_t->array[i] = NULL;
		i++;
	}

	return (hash_t);
}
