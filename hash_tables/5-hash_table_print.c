#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int first;

	first = 1;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", temp-key, temp->value);
			first = 0;
			temp = temp->next;
		}
	}
	printf("}\n");
}
