#include "lists.h"

/**
 * print_listint - print all content all data
 * @h: head of node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
const listint_t *curr = h;

while (curr != NULL)
{
printf("%i\n", curr->n);
curr = curr->next;
nodes++;
}

return (nodes);
}

