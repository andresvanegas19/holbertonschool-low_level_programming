#include "hash_tables.h"

/**
 * hash_table_print -  print the key/value in the order that they appear
 * in the array of hash table
 * @ht: is the hash table.
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, total = 0;
	hash_node_t *pHt;

	if (ht == NULL)
		return;

	printf("{");
	if (ht->array == NULL)
	{
		printf("}\n");
		return;
	}

	for (; i < ht->size; i++)
		if (ht->array[i])
			total++;
	total--;
	for (i = 0; i < ht->size; i++)
	{
		pHt = ht->array[i];
		while (pHt)
		{
			printf("'%s': '%s'", pHt->key, pHt->value);
			if (total > 0)
				printf(", ");
			total--;
			pHt = pHt->next;
		}
	}
	printf("}\n");
}
