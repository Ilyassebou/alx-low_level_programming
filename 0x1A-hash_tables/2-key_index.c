#include "hash_tables.h"

/**
 * key_index - Computes the index for storing a key/value pair
 *       in an array representing a hash table.
 *
 * @key: The key for which the index is calculated.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 * Description: This function uses the djb2 algorithm to determine
 * the appropriate index for storing a key in the hash table array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
