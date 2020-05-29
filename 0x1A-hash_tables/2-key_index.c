#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: is a string, it will be the key
 * @size: is the size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored in the array
 * of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
		return (0);

	if (size <= 0)
		return (hash_djb2(key));

	return (hash_djb2(key) % size);
}
