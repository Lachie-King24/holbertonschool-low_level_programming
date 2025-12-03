#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int count;
	hash_node_s *temp;
	hash_node_s *next;

	if (ht)
	{
		for (count = 0; count < ht->size; count++)
		{
			temp = ht->array[count];
			while (temp)
			{
				next = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = next;
			}
		}
		free(ht->array);
		free(ht);
	}
}
