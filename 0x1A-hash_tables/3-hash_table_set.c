#include "hash_tables.h"

/**
 * create_node - Creates a new hash node with the given key and value.
 * @key: The key to add.
 * @value: The value associated with the key.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
static hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}

/**
 * update_value - Updates the value of an existing hash node.
 * @node: The hash node to update.
 * @value: The new value to set.
 *
 * Return: 1 on success, 0 on failure.
 */
static int update_value(hash_node_t *node, const char *value)
{
	char *new_value;

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	free(node->value);
	node->value = new_value;
	return (1);
}

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (update_value(current, value));

		current = current->next;
	}

	new_node = create_node(key, value);

	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
