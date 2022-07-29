#include "hash_tables.h"

/**
 * hash_table_get - reteives a value associated with key
 * @ht: hash table
 * @key: key to look for
 *
 * Return: value at key
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
hash_node_t *node;

if (ht == NULL || key == NULL || strlen(key) == 0)
return (NULL);

idx = key_index((unsigned char *)key, ht->size);

if (ht->array[idx] == NULL || ht->array[idx] == 0)
return (NULL);

if (strcmp(ht->array[idx]->key, key) == 0)
return (ht->array[idx]->value);
node = ht->array[idx];
while (node != NULL)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
