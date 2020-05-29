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
	hash_table_t *pHt;

	for (i = 0; i <= (int) ht->size; i++)
	{
	/* it will not pass from here if it is null*/
		for (; ht->array[indx] != NULL;)
		{
			pHt = ht->array[indx]->next;
			free(ht->array[indx]->value);
			free(ht->array[indx]->key);
			free(ht->array[indx]);
			ht->array[indx] = pHt;
		}
	}
	free(ht->array);
	free(ht);
}
