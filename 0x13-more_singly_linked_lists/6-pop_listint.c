#include "lists.h"

/**
 * pop_listint - returns the head datat and deletes it
 * @head: head of list
 *
 * Return: head data
 */

int pop_listint(listint_t **head)
{
listint_t *curr;
int x;

if (head == NULL)
return (0);

curr = *head;

if (curr == NULL)
return (0);

x = curr->n;

*head = curr->next;
free(curr);

return (x);
}

