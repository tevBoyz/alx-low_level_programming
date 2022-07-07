#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of a list to ne freed
 *
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *t;

while (head != NULL)
{
t = head;
head = head->next;
free(t);
}
}
