#include "lists.h"

/**
 * add_dnodeint_end - adds new node at end of a list
 * @head: head of the list
 * @n: new data
 *
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newnode, *temp;

newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
return (NULL);

newnode->n = n;
newnode->prev = NULL;
newnode->next = NULL;

if (*head == NULL)
*head = newnode;
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;

newnode->prev = temp;
temp->next = newnode;
}
return (newnode);
}
