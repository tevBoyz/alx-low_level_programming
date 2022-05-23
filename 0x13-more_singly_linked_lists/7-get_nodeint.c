#include "lists.h"

/**
 * get_nodeint_at_index - returns node at given index
 * @head: head of list
 * @index: index of node to return
 *
 * Return: the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int iter = 0;
listint_t *curr;

if (head == NULL)
return (0);

curr = head;

while (curr && iter < index)
{
if (iter == index)
return (curr);

iter++;
curr = curr->next;
}

return (0);
}
