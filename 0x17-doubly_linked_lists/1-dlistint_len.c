#include "lists.h"

/**
 * dlistint_len - counts the number of nodes
 * @h: head of list
 *
 * Return: count of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *temp;

if (h == NULL)
return (0);

temp = h;

while (temp != NULL)
{
temp = temp->next;
count++;
}
return (count);
}
