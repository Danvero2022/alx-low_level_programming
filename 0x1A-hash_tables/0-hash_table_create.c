#include "hash_tables.h"
/**
 * hash_table_create-create hash table via the size
 * @size: length og hash table
 * Description:hash table
 * Return: Pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashT;

	if (size  == 0)
		return (NULL);
	hashT = malloc(sizeof(hash_table_t));
	if (!hashT)
		return (NULL);

	hashT->size = size;
	hashT->array = calloc((size_t)hashT->size, sizeof(hash_node_t *));
	if (!hashT->array)
		return (NULL);

	return (hashT);
}
