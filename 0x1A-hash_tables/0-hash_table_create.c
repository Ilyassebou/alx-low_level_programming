#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The desired size of the hash table (number of nodes).
 *
 * Return: a pointer to the newly created hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		perror("Error: malloc failed");
		return (NULL);
	}

	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		perror("Error: calloc failed");
		free(ht);
		return (NULL);
	}

	return (ht);
}
