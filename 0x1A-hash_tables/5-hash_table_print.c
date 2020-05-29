#include "hash_tables.h"

/**
 * hash_table_print -  print the key/value in the order that they appear
 * in the array of hash table
 * @ht: is the hash table.
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	int i = 0, total = 0, value = 0;

	if (ht == NULL)
		return;

	printf("{");
	if (ht->array == NULL)
	{
		printf("}\n");
		return;
	}

	for (; i <= (int) ht->size; i++)
		if (ht->array[i] != NULL)
			total++;

	for (i = 0; i <= (int) ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			value++;
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (value < total)
				printf(", ");
		}
	}
	printf("}\n");
}
