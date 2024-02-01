#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a specified key in a hash table.
 *
 * @ht: A pointer to the hash table.
 * @key: The key for which the associated value is sought.
 *
 * Return: If the key is not found, returns NULL.
 *         Otherwise, returns the value associated with the key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	node = ht->array[i];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
