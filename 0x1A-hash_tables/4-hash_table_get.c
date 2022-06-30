#include "hash_tables.h"

/**
 * hash_table_get - get value that used key
 *
 * @ht: hhash table
 * @key: key of hash
 * Return: value associated with the eleme or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (!ht)
		return (NULL);

	if (!key || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
