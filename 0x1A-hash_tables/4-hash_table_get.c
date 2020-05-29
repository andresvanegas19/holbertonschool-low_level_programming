#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: is the hash table.
 * @key: is the key. key can not be an empty string
 *
 * Return: the value associated with the element, or NULL
 * if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idnx = 0;


	if (ht == NULL || key == NULL)
		return (NULL);

	idnx = key_index((const unsigned char *)key, ht->size);
	if (idnx > ht->size)
		return (NULL);

	if (ht->array[idnx] == NULL)
		return (NULL);

	if ((ht->array[idnx] != NULL) && (ht->array[idnx]->next != NULL))
	{

		while (ht->array[idnx] != NULL)
		{
			if (strcmp(ht->array[idnx]->key, key) == 0)
			{

				return (ht->array[idnx]->value);
			}
			if (ht->array[idnx]->next == NULL)
				return (NULL);

			ht->array[idnx] = ht->array[idnx]->next;
		}
	}

	if (strcmp(ht->array[idnx]->key, key) == 0)
		return (ht->array[idnx]->value);
	return (NULL);
}
