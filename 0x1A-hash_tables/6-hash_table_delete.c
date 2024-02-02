#include "hash_tables.h"

/**
 * hash_table_delete - Frees the memory occupied by the hash table.
 * @ht: A pointer to the hash table to be deallocated.
 *
 * Returns: No return value.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *next_node;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next_node = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
