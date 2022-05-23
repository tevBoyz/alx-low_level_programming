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

listint_t *curr;

if (head == NULL)
return (0);

curr = head;

while (index != 0)
{
curr = curr->next;
index--;

if (curr == NULL)
return (0);
}

return (curr);
}
