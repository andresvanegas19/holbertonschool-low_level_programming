#include "hash_tables.h"

/**
 * hash_table_print -  print the key/value in the order that they appear
 * in the array of hash table
 * @ht: is the hash table.
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	int i = 0, total = 0, size = (int) ht->size;

	if (ht == NULL)
		return;

	printf("{");
	if (ht->array == NULL)
	  {
	    printf("}\n");
	    return;
	  }

	for (; i < size; i++)
		if (ht->array[i] == NULL)
			total++;

	total = ht->size - total

	for (i = 0; i <= size; i++)
	{
		if (ht->array[i] == NULL)
			;
		else
		{
			value++;
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (value < total)
				printf(", ");
		}
	}
	printf("}\n");
}
