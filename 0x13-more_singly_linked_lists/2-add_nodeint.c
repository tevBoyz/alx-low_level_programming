#include "lists.h"

/**
 * add_nodeint - add a new node at the begining
 * @head: head of node
 * @n: int to be added as a node
 *
 * Return: node created
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;

newnode = (listint_t *) malloc(sizeof(listint_t));

if (newnode == NULL)
{
free(newnode);
return (NULL);
}

newnode->n = n;
newnode->next = *head;
*head = newnode;

return (newnode);
}

