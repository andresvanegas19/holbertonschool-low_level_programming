#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is the hash table.
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated.
 * value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
*/
void hash_table_print(const hash_table_t *ht)
{
	int i = 0, total = 0, value = 0;

	if (ht == NULL)
		return;

	printf("{");
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
