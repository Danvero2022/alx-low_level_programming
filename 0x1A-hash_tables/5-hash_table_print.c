#include "hash_tables.h"
/**
 * hash_table_print - adds a new node at the beginning of a linked list
 * @ht: double pointer to the hash_node_t list
 * Return: the address of the new element, or NULL if it fails
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
			sep = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
