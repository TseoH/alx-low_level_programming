#include "hash_tables.h"

/**
 * key_index - Get key-value
 * @key: key
 * @size: array size
 *
 * Return: unsigned long int
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
