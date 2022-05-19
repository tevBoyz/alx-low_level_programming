#include "lists.h"

/**
 * list_len - returns length of a linked list
 * @h: head of the linked list
 *
 * Return: length of linked list
 */

size_t list_len(cont list_t *h)
{
size_t nodes = 0;
const list_t *current = h;

while (current != null)
{
current = current->next;
nodes++;
}
return (nodes);
}

