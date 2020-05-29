#include "hash_tables.h"

hash_node_t *create_new_hash(char *key, char *value);
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
	hash_node_t *new_element;

	if (key == NULL || value == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
/*
	if (ht->array[indx] != NULL)
		if (strcmp(ht->array[indx]->key, key) == 0)
		{
			ht->array[indx]->value = (char *) value;
			return (1);
		}
*/
	new_element = create_new_hash((char *) key, (char *) value);

	if (ht->array[indx] == NULL)
	{
		ht->array[indx] = new_element;
		return (1);
	}

/*	if (ht->array[indx] != NULL)*/
	while (ht->array[indx] != NULL)
	{
		if (strcmp(ht->array[indx]->key, key) == 0)
		{
			free(new_element->value), free(new_element->key);
			free(new_element);
			ht->array[indx]->value = (char *) value;
			return (1);
		}
		if (ht->array[indx]->next == NULL)
		{
			ht->array[indx]->next = new_element;
			return (1);
		}
		ht->array[indx] = ht->array[indx]->next;
	}

	ht->array[indx] = new_element;

	return (1);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is the hash table.
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated.
 * value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
*/
hash_node_t *create_new_hash(char *key, char *value)
{
	hash_node_t *new_element;

	new_element = malloc(sizeof(hash_node_t));
	new_element->key = strdup(key);
	new_element->value = strdup(value);
	new_element->next = NULL;

	return (new_element);
}
