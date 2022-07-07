#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given index
 * @h: head of the list
 * @idx: index
 * @n: new data
 *
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newnode, *temp;
unsigned int index = 0;

if (idx == 0)
{
newnode = add_dnodeint(h, n);
return (newnode);
}

newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
return (NULL);

newnode->n = n;
temp = *h;

while (index < idx)
{
temp = temp->next;
index++;
if (temp == NULL)
{
free(newnode);
return (NULL);
}
}
newnode->prev = temp->prev;
newnode->next = temp;
temp->prev->next = newnode;
temp->prev = newnode;
return (newnode);
}
