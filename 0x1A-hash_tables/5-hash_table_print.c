#include "hash_tables.h"

/**
 * hash_table_print -  print the key/value in the order that they appear
 * in the array of hash table
 * @ht: is the hash table.
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	int i = 0, found_space = 0, size = (int) ht->size;
	hash_node_t *pHt;

	if (ht == NULL)
		return;

	printf("{");
	if (ht->array == NULL)
	{
		printf("}\n");
	    return;
	}

	for (i = 0; i <= size; i++)
	{
		if (ht->array[i])
		{
			pHt = ht->array[i];
			while (pHt)
			{
				if (found_space == 1)
					printf(", ");
				printf("'%s': '%s'", pHt->key, pHt->value);
				found_space = 1;
				pHt = pHt->next;
			}
		}
	}
	printf("}\n");
}
