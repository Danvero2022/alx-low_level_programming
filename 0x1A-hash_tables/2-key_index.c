#include "hash_tables.h"
/**
 * key_index - get index of key
 * @key: value
 * @size: size of array
 *
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0)
		return (0);
	hash = hash_djb2(key);

	return (hash % size);
}