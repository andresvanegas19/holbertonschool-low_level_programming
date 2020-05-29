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
		for (; ht->array[i] != NULL;)
		{
			pHt = ht->array[i]->next;
			free(ht->array[i]->value);
			free(ht->array[i]->key);
			free(ht->array[i]);
			ht->array[i] = pHt;
		}
	}
	free(ht->array);
	free(ht);
}
