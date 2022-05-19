#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints data if sll
 * @h: linked list head
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
size_t nodes = 0;
const list_t *current = h;
char *string;

while (current != NULL)
{
if (current->str != NULL)
string = current->str;
else
string = "(nil)";

printf("[%d] %s\n", current->len, string);
current = current->next;
nodes++;
}

return (nodes);
}

