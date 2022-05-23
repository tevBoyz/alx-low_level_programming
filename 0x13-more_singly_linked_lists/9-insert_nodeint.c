#include "lists.h"

/**
 * insert_nodeint_at_index - adds a node at a given index
 * @head: head of list
 *
 *
 * @idx: index to insert at
 * @n: new data
 *
 * Return: added node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *curr;
listint_t *newnode;

newnode = (listint_t *) malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);

if (head == NULL)
return (NULL);

newnode->n = n;
newnode->next = NULL;


if (idx == 0)
{
newnode->next = *head;
(*head) = newnode;
return (newnode);
}

curr = *head;

while (idx != 1)
{
curr = curr->next;
idx--;
if (curr == NULL)
{
free(newnode);
return (NULL);
}
}

newnode->next = curr->next;
curr->next = newnode;

return (newnode);
}

