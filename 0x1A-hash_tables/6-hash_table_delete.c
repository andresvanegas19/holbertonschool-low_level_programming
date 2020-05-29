#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: is the size of the hash table.
 *
 * Return: the has table if not return NULL
*/
void hash_table_delete(hash_table_t *ht)
{
	int i = 0;

	for (i = 0; i <= (int) ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next == NULL)
				printf("perro\n");
			else
			{
				printf("A");

			}


		}
	}

}
