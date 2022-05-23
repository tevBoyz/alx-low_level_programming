#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: node head
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
const listint_t *curr = h;

while (curr != NULL)
{
nodes++;
curr = curr->next;
}

return (nodes);
}

