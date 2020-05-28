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
	unsigned long int indx = 0;

	if (key == NULL || value == NULL)
		return (0);

	indx = key_index(key, ht->size);





}