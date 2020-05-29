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
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx = 0, i = 0;
	hash_node_t *new_element = NULL;
	hash_table_t *pHash = NULL;

	if (key == NULL || value == NULL)
		return (0);
	/* indx is where the value it will appear*/
	indx = key_index((const unsigned char *)key, ht->size);
	if (indx > ht->size)
		return (0);

	new_element = malloc(sizeof(hash_node_t));
	new_element->key = (char *) key;
	new_element->value = (char *) value;
	new_element->next = NULL;

	if (ht->array[indx] != NULL)
	{
		pHash = ht;
		while (ht->array[indx] != NULL)
		{
			if (ht->array[indx]->next == NULL)
			{
				ht->array[indx]->next = new_element;
				ht = pHash;
				return (1);
			}
			ht->array[indx] = ht->array[indx]->next;
		}
	}
	ht->array[indx] = new_element;

	return (1);
}
