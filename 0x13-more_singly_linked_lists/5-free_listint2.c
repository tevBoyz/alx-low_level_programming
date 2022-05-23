#include "lists.h"

/**
 * free_listint2 - frees a listint_t but the head will point to
 * NULL at the end
 * @head: head of the node list
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
listint_t *curr;

if (head == NULL)
return;

while (*head != NULL)
{
curr = *head;
*head = (*head)->next;
free(curr);
}
}

