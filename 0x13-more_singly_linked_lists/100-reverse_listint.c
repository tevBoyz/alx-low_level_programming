#include "lists.h"

/**
 * reverse_listint - reverse order of list
 * @head: head of list
 *
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *nxt, *curr;

if (head == NULL)
return (NULL);

curr = *head;
nxt = NULL;

while (curr->next != NULL)
{
nxt = curr->next;
curr->next = nxt->next;
nxt->next = *head;
*head = nxt;
}
return (*head);
}

