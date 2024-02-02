#include "hash_tables.h"

/**
 * hash_table_print - Displays the contents of a hash table.
 *
 * @ht: A pointer to the hash table to be displayed.
 *
 * Description: Key/value pairs are printed in the order
 * they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char c = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (c == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			c = 1;
		}
	}
	printf("}\n");
}
