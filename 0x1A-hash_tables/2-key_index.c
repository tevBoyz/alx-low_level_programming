#include "hash_tables.h"

/**
 * key_index - Generates the index for a key in the  hash table.
 * @key: The key in the hash table
 * @size: the size of the hash table
 *
 * Return: The index that corresponds to the given key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
