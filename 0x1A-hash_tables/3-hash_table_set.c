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
	hash_node_t *new_element, *aux;


	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);

	aux = ht->array[indx];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->key);
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}
	new_element = create_new_hash((char *) key, (char *) value);
	new_element->next = ht->array[indx];
	ht->array[indx] = new_element;

	return (1);
}
/**
 * create_new_hash - create_new_hash
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated.
 * value can be an empty string
 *
 * Return: the new hash if not return NULL
*/
hash_node_t *create_new_hash(char *key, char *value)
{
	hash_node_t *new_element;

	new_element = malloc(sizeof(hash_node_t));
	if (!new_element)
		return (NULL);
	new_element->key = strdup(key);
	if (!new_element->key)
		return (NULL);
	new_element->value = strdup(value);
	if (!new_element->value)
		return (NULL);
	new_element->next = NULL;

	return (new_element);
}
