#include "lists.h"

/**
 * add_nodeint_end - add node at the end of list
 * @head: head of list
 * @n: data to be added
 *
 * Return: added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *curr = *head;
listint_t *newnode;

newnode = (listint_t *) malloc(sizeof(listint_t));

if (newnode == NULL)
{
free(newnode);
return (NULL);
}

while (curr && curr->next != NULL)
{
curr = curr->next;
}

newnode->n = n;
newnode->next = NULL;

if (curr)
curr->next = newnode;
else
*head = newnode;

return (newnode);
}

