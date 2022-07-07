
#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at an index
 * @head: head of list to search from
 * @index: index of node
 *
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *temp;

if (head == NULL)
return (NULL);

temp = head;

while (i < index)
{
temp = temp->next;
i++;
if (temp == NULL)
return (NULL);
}

return (temp);
}
