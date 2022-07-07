#include "lists.h"

/**
 * add_dnodeint - add node at the beginning of a list
 * @head: head of node
 * @n: new data
 *
 * Return: address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode;

newnode = malloc(sizeof(dlistint_t));

if (newnode == NULL)
return (NULL);

newnode->n = n;
newnode->prev = NULL;
newnode->next = NULL;

if (*head == NULL)
{
*head = newnode;
}
else
{
newnode->next = *head;
(*head)->prev = newnode;
*head = newnode;
}
return (newnode);
free(newnode);
}
